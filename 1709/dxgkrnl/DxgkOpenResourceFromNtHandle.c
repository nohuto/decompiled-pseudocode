/*
 * XREFs of DxgkOpenResourceFromNtHandle @ 0x1C00F0AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C007ABD4 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C008AB70 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F0FE4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C01BF588 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  HANDLE v5; // r14
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  BOOL v17; // edi
  DXGSYNCOBJECT **v18; // r15
  DXGKEYEDMUTEX *v19; // rcx
  int v20; // r14d
  struct DXGGLOBAL *Global; // rax
  _DWORD *v22; // rdx
  _DWORD *v23; // rdx
  __int64 v24; // rdx
  struct DXGPROCESS *Current; // r13
  unsigned int v26; // ecx
  __int64 v27; // r8
  int v28; // edx
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  struct DXGPROCESS *v33; // r12
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rax
  unsigned int v40; // edi
  PERESOURCE *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  _BYTE v44[8]; // [rsp+60h] [rbp-C8h] BYREF
  char v45; // [rsp+68h] [rbp-C0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+70h] [rbp-B8h] BYREF
  HANDLE Handle[2]; // [rsp+80h] [rbp-A8h]
  __int128 v48; // [rsp+90h] [rbp-98h]
  __int128 v49; // [rsp+A0h] [rbp-88h]
  __int128 v50; // [rsp+B0h] [rbp-78h]
  __int128 v51; // [rsp+C0h] [rbp-68h]
  void *v52[2]; // [rsp+D0h] [rbp-58h]
  unsigned int v53[18]; // [rsp+E0h] [rbp-48h]
  unsigned int v54; // [rsp+138h] [rbp+10h] BYREF
  unsigned int v55; // [rsp+140h] [rbp+18h] BYREF
  PVOID Object; // [rsp+148h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2076);
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)Handle = *(_OWORD *)v4;
  v48 = *(_OWORD *)(v4 + 16);
  v49 = *(_OWORD *)(v4 + 32);
  v50 = *(_OWORD *)(v4 + 48);
  v51 = *(_OWORD *)(v4 + 64);
  *(_OWORD *)v52 = *(_OWORD *)(v4 + 80);
  *(_QWORD *)v53 = *(_QWORD *)(v4 + 96);
  v5 = Handle[1];
  v6 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, &HandleInformation);
  v10 = v6;
  if ( v6 == -1073741788 )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v5;
    *(_QWORD *)(v11 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v11);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v12, 2076);
    return 3221225508LL;
  }
  if ( v6 < 0 )
  {
    v14 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v14 + 24) = v5;
    *(_QWORD *)(v14 + 32) = v10;
    WdLogEvent5_WdWarning(v14);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, 2076);
    return (unsigned int)v10;
  }
  v17 = (HandleInformation.GrantedAccess & 1) == 0;
  v54 = 0;
  v55 = 0;
  v18 = (DXGSYNCOBJECT **)Object;
  v19 = (DXGKEYEDMUTEX *)*((_QWORD *)Object + 3);
  if ( !v19 || (v20 = DXGKEYEDMUTEX::Open(v19, &v54, (char *)v52[1], v53[0], 1), v20 >= 0) )
  {
    if ( v18[4] )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)v19);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v44, Global);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v44);
      v20 = DXGSYNCOBJECT::Open(
              v18[4],
              0LL,
              0LL,
              0LL,
              &v55,
              0LL,
              0LL,
              0,
              0LL,
              0,
              (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
      if ( v20 < 0 )
      {
        if ( v45 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v44);
        goto LABEL_43;
      }
      if ( v45 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v44);
    }
    v22 = (_DWORD *)(a1 + 84);
    if ( a1 + 84 >= MmUserProbeAddress )
      v22 = (_DWORD *)MmUserProbeAddress;
    *v22 = v54;
    v23 = (_DWORD *)(a1 + 100);
    if ( a1 + 100 >= MmUserProbeAddress )
      v23 = (_DWORD *)MmUserProbeAddress;
    *v23 = v55;
    v20 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(a1, v23, v18, v17);
    if ( v20 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent((__int64)v19, v24);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 200));
      v26 = (v55 >> 6) & 0xFFFFFF;
      if ( v26 < *((_DWORD *)Current + 60) )
      {
        v27 = *((_QWORD *)Current + 28);
        v28 = *(_DWORD *)(v27 + 16LL * v26 + 8);
        if ( ((v55 >> 25) & 0x60) == (v28 & 0x60) && (v28 & 0x1F) != 0 )
        {
          v29 = 2 * (((unsigned __int64)v55 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v27 + 16 * (((unsigned __int64)v55 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v30 = WdLogNewEntry5_WdAssertion((v55 >> 25) & 0x60);
            *(_QWORD *)(v30 + 24) = 191LL;
            WdLogEvent5_WdAssertion(v30);
          }
          *(_DWORD *)(*((_QWORD *)Current + 28) + 8 * v29 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 26) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 200, 0LL);
      KeLeaveCriticalRegion();
      v32 = v54;
      if ( v54 )
      {
        v33 = DXGPROCESS::GetCurrent((__int64)v19, v31);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v33 + 200));
        v34 = ((unsigned int)v32 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v34 < *((_DWORD *)v33 + 60) )
        {
          v35 = *((_QWORD *)v33 + 28);
          v36 = *(_DWORD *)(v35 + 16 * v34 + 8);
          v37 = ((unsigned int)v32 >> 25) & 0x60;
          if ( (((unsigned int)v32 >> 25) & 0x60) == (v36 & 0x60) && (v36 & 0x1F) != 0 )
          {
            v38 = 2 * ((v32 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v35 + 8 * v38 + 8) & 0x2000) == 0 )
            {
              v39 = WdLogNewEntry5_WdAssertion(v37);
              *(_QWORD *)(v39 + 24) = 191LL;
              WdLogEvent5_WdAssertion(v39);
            }
            *(_DWORD *)(*((_QWORD *)v33 + 28) + 8 * v38 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)v33 + 26) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v33 + 200, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
LABEL_43:
  if ( v20 < 0 )
  {
    if ( v54 )
      DXGKEYEDMUTEX::DestroyLocal(v54);
    v40 = v55;
    if ( v55 )
    {
      v41 = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v19);
      DXGGLOBAL::DestroySyncObject(v41, v18[4], v40);
    }
  }
  ObfDereferenceObject(v18);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v42, &EventProfilerExit, v43, 2076);
  return (unsigned int)v20;
}
