/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle @ 0x1C01ABE50
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C002CACC (McTemplateK0ppp.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00E5B10 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F8E90 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  HANDLE v5; // r14
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  PERESOURCE *Global; // rax
  PVOID v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r14d
  __int64 v23; // r9
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v24; // rdx
  struct DXGPROCESS *Current; // r15
  D3DKMT_HANDLE v26; // ecx
  __int64 v27; // rdx
  int v28; // r9d
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-68h] BYREF
  int v34; // [rsp+68h] [rbp-60h] BYREF
  __int64 v35; // [rsp+70h] [rbp-58h]
  HANDLE Handle[2]; // [rsp+78h] [rbp-50h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v37; // [rsp+D8h] [rbp+10h] BYREF
  struct DXGADAPTERSYNCOBJECT *v38; // [rsp+E0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+20h] BYREF

  v35 = 0LL;
  v34 = 2086;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2086);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2086);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v4;
  v5 = Handle[0];
  v6 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v10 = v6;
  if ( v6 == -1073741788 )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v5;
    *(_QWORD *)(v11 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v12, &EventProfilerExit, v13, v34);
    return 3221225508LL;
  }
  if ( v6 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v15 + 24) = v5;
    *(_QWORD *)(v15 + 32) = v10;
    WdLogEvent5_WdWarning(v15);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v34);
    return (unsigned int)v10;
  }
  v37.hSyncObject = 0;
  v38 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)Handle, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)Handle);
  v19 = Object;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)Object + 168LL) - 5) <= 1 )
  {
    v22 = -1073741811;
LABEL_36:
    if ( LOBYTE(Handle[1]) )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
    goto LABEL_38;
  }
  v22 = DXGSYNCOBJECT::Open(
          *(DXGSYNCOBJECT **)Object,
          0LL,
          0LL,
          0LL,
          &v37.hSyncObject,
          0LL,
          0LL,
          0,
          &v38,
          0,
          (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  if ( v22 < 0 )
    goto LABEL_36;
  if ( bTracingEnabled )
  {
    v23 = v38 ? *((_QWORD *)v38 + 4) : 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppp(v20, &EventOpenSyncObject, v21, v23, v37.hSyncObject, 0LL);
  }
  if ( LOBYTE(Handle[1]) )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
  v24 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v24 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
  v24->hSyncObject = v37.hSyncObject;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, (__int64)v24);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
  v26 = (v37.hSyncObject >> 6) & 0xFFFFFF;
  if ( v26 < *((_DWORD *)Current + 62) )
  {
    v27 = *((_QWORD *)Current + 29);
    v28 = *(_DWORD *)(v27 + 16LL * v26 + 8);
    if ( ((v37.hSyncObject >> 25) & 0x60) == (v28 & 0x60) && (v28 & 0x1F) != 0 )
    {
      v29 = 2 * (((unsigned __int64)v37.hSyncObject >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v27 + 16 * (((unsigned __int64)v37.hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion((v37.hSyncObject >> 25) & 0x60);
        *(_QWORD *)(v30 + 24) = 215LL;
        WdLogEvent5_WdAssertion(v30);
        v27 = *((_QWORD *)Current + 29);
      }
      *(_DWORD *)(v27 + 8 * v29 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 27) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
LABEL_38:
  ObfDereferenceObject(v19);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v34);
  return (unsigned int)v22;
}
