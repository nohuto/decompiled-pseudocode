/*
 * XREFs of DxgkOpenResourceFromNtHandle @ 0x1C0100890
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006FB8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0088420 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00D8CA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0100160 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C01A5A94 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandle(unsigned int *a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  HANDLE v5; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // edi
  DXGSYNCOBJECT **v19; // r15
  DXGKEYEDMUTEX *v20; // rcx
  int v21; // esi
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rdx
  _DWORD *v26; // rdx
  struct DXGPROCESS *Current; // r13
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  unsigned __int64 v33; // rdi
  struct DXGPROCESS *v34; // r12
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned int v41; // edi
  PERESOURCE *v42; // rax
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r8
  _BYTE v46[8]; // [rsp+60h] [rbp-C8h] BYREF
  char v47; // [rsp+68h] [rbp-C0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+70h] [rbp-B8h] BYREF
  HANDLE Handle[2]; // [rsp+80h] [rbp-A8h]
  __int128 v50; // [rsp+90h] [rbp-98h]
  __int128 v51; // [rsp+A0h] [rbp-88h]
  __int128 v52; // [rsp+B0h] [rbp-78h]
  __int128 v53; // [rsp+C0h] [rbp-68h]
  void *v54[2]; // [rsp+D0h] [rbp-58h]
  unsigned int v55[18]; // [rsp+E0h] [rbp-48h]
  unsigned int v56; // [rsp+138h] [rbp+10h] BYREF
  unsigned int v57; // [rsp+140h] [rbp+18h] BYREF
  PVOID Object; // [rsp+148h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2076);
  v4 = (ULONG64)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)Handle = *(_OWORD *)v4;
  v50 = *(_OWORD *)(v4 + 16);
  v51 = *(_OWORD *)(v4 + 32);
  v52 = *(_OWORD *)(v4 + 48);
  v53 = *(_OWORD *)(v4 + 64);
  *(_OWORD *)v54 = *(_OWORD *)(v4 + 80);
  *(_QWORD *)v55 = *(_QWORD *)(v4 + 96);
  v5 = Handle[1];
  v6 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, &HandleInformation);
  v11 = v6;
  if ( v6 == -1073741788 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = v5;
    *(_QWORD *)(v12 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v12);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v13, 2076);
    return 3221225508LL;
  }
  if ( v6 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v15 + 24) = v5;
    *(_QWORD *)(v15 + 32) = v11;
    WdLogEvent5_WdWarning(v15);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v16, &EventProfilerExit, v17, 2076);
    return (unsigned int)v11;
  }
  v18 = (HandleInformation.GrantedAccess & 1) == 0;
  v56 = 0;
  v57 = 0;
  v19 = (DXGSYNCOBJECT **)Object;
  v20 = (DXGKEYEDMUTEX *)*((_QWORD *)Object + 3);
  if ( !v20 || (v21 = DXGKEYEDMUTEX::Open(v20, &v56, (char *)v54[1], v55[0]), v21 >= 0) )
  {
    if ( v19[4] )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)v20, v7, v9, v10);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v46, Global, v23, v24);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v46);
      v21 = DXGSYNCOBJECT::Open(
              v19[4],
              0LL,
              0LL,
              0LL,
              &v57,
              0LL,
              0LL,
              0,
              0LL,
              0,
              (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
      if ( v21 < 0 )
      {
        if ( v47 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
        goto LABEL_43;
      }
      if ( v47 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
    }
    v25 = a1 + 21;
    if ( (unsigned __int64)(a1 + 21) >= MmUserProbeAddress )
      v25 = (_DWORD *)MmUserProbeAddress;
    *v25 = v56;
    v26 = a1 + 25;
    if ( (unsigned __int64)(a1 + 25) >= MmUserProbeAddress )
      v26 = (_DWORD *)MmUserProbeAddress;
    *v26 = v57;
    v21 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
            a1,
            (__int64)v26,
            (struct _EX_RUNDOWN_REF *)v19,
            v18);
    if ( v21 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent((__int64)v20);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 168));
      v28 = (v57 >> 6) & 0xFFFFFF;
      if ( v28 < *((_DWORD *)Current + 52) )
      {
        v29 = *((_QWORD *)Current + 24);
        v30 = *(unsigned int *)(v29 + 16LL * v28 + 8);
        if ( ((v57 >> 26) & 0x30) == (v30 & 0x30) && (v30 & 0xF) != 0 )
        {
          v31 = 2 * (((unsigned __int64)v57 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v29 + 16 * (((unsigned __int64)v57 >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
          {
            v32 = WdLogNewEntry5_WdAssertion((v57 >> 26) & 0x30, v30, v29, 0xFFFFFFLL);
            *(_QWORD *)(v32 + 24) = 190LL;
            WdLogEvent5_WdAssertion(v32);
          }
          *(_DWORD *)(*((_QWORD *)Current + 24) + 8 * v31 + 8) &= ~0x1000u;
        }
      }
      *((_QWORD *)Current + 22) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
      KeLeaveCriticalRegion();
      v33 = v56;
      if ( v56 )
      {
        v34 = DXGPROCESS::GetCurrent((__int64)v20);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v34 + 168));
        v35 = ((unsigned int)v33 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v35 < *((_DWORD *)v34 + 52) )
        {
          v36 = *((_QWORD *)v34 + 24);
          v37 = *(unsigned int *)(v36 + 16 * v35 + 8);
          v38 = ((unsigned int)v33 >> 26) & 0x30;
          if ( (((unsigned int)v33 >> 26) & 0x30) == (v37 & 0x30) && (v37 & 0xF) != 0 )
          {
            v39 = 2 * ((v33 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v36 + 8 * v39 + 8) & 0x1000) == 0 )
            {
              v40 = WdLogNewEntry5_WdAssertion(v38, v37, v36, 0xFFFFFFLL);
              *(_QWORD *)(v40 + 24) = 190LL;
              WdLogEvent5_WdAssertion(v40);
            }
            *(_DWORD *)(*((_QWORD *)v34 + 24) + 8 * v39 + 8) &= ~0x1000u;
          }
        }
        *((_QWORD *)v34 + 22) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v34 + 168, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
LABEL_43:
  if ( v21 < 0 )
  {
    if ( v56 )
      DXGKEYEDMUTEX::DestroyLocal(v56);
    v41 = v57;
    if ( v57 )
    {
      v42 = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v20, v7, v9, v10);
      DXGGLOBAL::DestroySyncObject(v42, v19[4], v41, v43);
    }
  }
  ObfDereferenceObject(v19);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v44, &EventProfilerExit, v45, 2076);
  return (unsigned int)v21;
}
