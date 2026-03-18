/*
 * XREFs of DxgkOpenResourceFromNtHandle @ 0x1C00D44B0
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01805E0 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0097A7C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00D4A50 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F8E90 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C01C0674 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  char v4; // r13
  ULONG64 v5; // rax
  HANDLE v6; // r15
  NTSTATUS v7; // eax
  _DWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  BOOL v17; // r12d
  DXGSYNCOBJECT **v18; // r15
  DXGKEYEDMUTEX *v19; // rcx
  PERESOURCE *Global; // rax
  _DWORD *v21; // rdx
  struct DXGPROCESS *Current; // r13
  unsigned int v23; // ecx
  __int64 v24; // rdx
  int v25; // r8d
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  struct DXGPROCESS *v29; // r12
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rax
  unsigned int v36; // edi
  DXGGLOBAL *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-C0h]
  _BYTE v42[8]; // [rsp+70h] [rbp-B8h] BYREF
  char v43; // [rsp+78h] [rbp-B0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-A8h] BYREF
  HANDLE Handle[2]; // [rsp+90h] [rbp-98h]
  __int128 v46; // [rsp+A0h] [rbp-88h]
  __int128 v47; // [rsp+B0h] [rbp-78h]
  __int128 v48; // [rsp+C0h] [rbp-68h]
  __int128 v49; // [rsp+D0h] [rbp-58h]
  void *v50[2]; // [rsp+E0h] [rbp-48h]
  unsigned int v51[14]; // [rsp+F0h] [rbp-38h]
  unsigned int v52; // [rsp+138h] [rbp+10h] BYREF
  unsigned int v53; // [rsp+140h] [rbp+18h] BYREF
  PVOID Object; // [rsp+148h] [rbp+20h] BYREF

  v41 = 0LL;
  v40 = 2076;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2076);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 2076);
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    v4 = 1;
    v5 = a1;
    if ( a1 >= MmUserProbeAddress )
      v5 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v5;
    v46 = *(_OWORD *)(v5 + 16);
    v47 = *(_OWORD *)(v5 + 32);
    v48 = *(_OWORD *)(v5 + 48);
    v49 = *(_OWORD *)(v5 + 64);
    *(_OWORD *)v50 = *(_OWORD *)(v5 + 80);
    *(_QWORD *)v51 = *(_QWORD *)(v5 + 96);
  }
  else
  {
    v4 = 0;
    *(_OWORD *)Handle = *(_OWORD *)a1;
    *(_OWORD *)v50 = *(_OWORD *)(a1 + 80);
    *(_QWORD *)v51 = *(_QWORD *)(a1 + 96);
  }
  v6 = Handle[1];
  v7 = ObReferenceObjectByHandle(
         Handle[1],
         0x20000u,
         g_pDxgkSharedAllocationObjectType,
         v4 != 0,
         &Object,
         &HandleInformation);
  v11 = v7;
  if ( v7 == -1073741788 )
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v6;
    *(_QWORD *)(v12 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, v40);
    return 3221225508LL;
  }
  if ( v7 >= 0 )
  {
    v17 = (HandleInformation.GrantedAccess & 1) == 0;
    v52 = 0;
    v53 = 0;
    v18 = (DXGSYNCOBJECT **)Object;
    v19 = (DXGKEYEDMUTEX *)*((_QWORD *)Object + 3);
    if ( !v19 || (LODWORD(v11) = DXGKEYEDMUTEX::Open(v19, &v52, (char *)v50[1], v51[0], 1), (int)v11 >= 0) )
    {
      if ( v18[4] )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v19);
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v42, Global);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v42);
        LODWORD(v11) = DXGSYNCOBJECT::Open(
                         v18[4],
                         0LL,
                         0LL,
                         0LL,
                         &v53,
                         0LL,
                         0LL,
                         0,
                         0LL,
                         0,
                         (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
        if ( (int)v11 < 0 )
        {
          if ( v43 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v42);
          goto LABEL_46;
        }
        if ( v43 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v42);
      }
      if ( v4 )
      {
        v21 = (_DWORD *)(a1 + 84);
        if ( a1 + 84 >= MmUserProbeAddress )
          v21 = (_DWORD *)MmUserProbeAddress;
        *v21 = v52;
        v8 = (_DWORD *)(a1 + 100);
        if ( a1 + 100 >= MmUserProbeAddress )
          v8 = (_DWORD *)MmUserProbeAddress;
        *v8 = v53;
      }
      else
      {
        *(_DWORD *)(a1 + 84) = v52;
        *(_DWORD *)(a1 + 100) = v53;
      }
      LODWORD(v11) = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(a1, v8, v18, v17);
      if ( (int)v11 >= 0 )
      {
        Current = DXGPROCESS::GetCurrent();
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
        v23 = (v53 >> 6) & 0xFFFFFF;
        if ( v23 < *((_DWORD *)Current + 62) )
        {
          v24 = *((_QWORD *)Current + 29);
          v25 = *(_DWORD *)(v24 + 16LL * v23 + 8);
          if ( ((v53 >> 25) & 0x60) == (v25 & 0x60) && (v25 & 0x1F) != 0 )
          {
            v26 = 2 * (((unsigned __int64)v53 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v24 + 16 * (((unsigned __int64)v53 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
            {
              v27 = WdLogNewEntry5_WdAssertion((v53 >> 25) & 0x60);
              *(_QWORD *)(v27 + 24) = 215LL;
              WdLogEvent5_WdAssertion(v27);
              v24 = *((_QWORD *)Current + 29);
            }
            *(_DWORD *)(v24 + 8 * v26 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 27) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
        KeLeaveCriticalRegion();
        v28 = v52;
        if ( v52 )
        {
          v29 = DXGPROCESS::GetCurrent();
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v29 + 208));
          v30 = ((unsigned int)v28 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v30 < *((_DWORD *)v29 + 62) )
          {
            v31 = *((_QWORD *)v29 + 29);
            v32 = *(_DWORD *)(v31 + 16 * v30 + 8);
            v33 = ((unsigned int)v28 >> 25) & 0x60;
            if ( (((unsigned int)v28 >> 25) & 0x60) == (v32 & 0x60) && (v32 & 0x1F) != 0 )
            {
              v34 = 2 * ((v28 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v31 + 8 * v34 + 8) & 0x2000) == 0 )
              {
                v35 = WdLogNewEntry5_WdAssertion(v33);
                *(_QWORD *)(v35 + 24) = 215LL;
                WdLogEvent5_WdAssertion(v35);
                v31 = *((_QWORD *)v29 + 29);
              }
              *(_DWORD *)(v31 + 8 * v34 + 8) &= ~0x2000u;
            }
          }
          *((_QWORD *)v29 + 27) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v29 + 208, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
LABEL_46:
    if ( (int)v11 < 0 )
    {
      if ( v52 )
        DXGKEYEDMUTEX::DestroyLocal(v52);
      v36 = v53;
      if ( v53 )
      {
        v37 = DXGGLOBAL::GetGlobal((__int64)v19);
        DXGGLOBAL::DestroySyncObject(v37, v18[4], v36);
      }
    }
    ObfDereferenceObject(v18);
    goto LABEL_52;
  }
  v16 = WdLogNewEntry5_WdWarning(v9, v8, v10);
  *(_QWORD *)(v16 + 24) = v6;
  *(_QWORD *)(v16 + 32) = v11;
  WdLogEvent5_WdWarning(v16);
LABEL_52:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v38, &EventProfilerExit, v39, v40);
  return (unsigned int)v11;
}
