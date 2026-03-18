/*
 * XREFs of ??1CComposition@@MEAA@XZ @ 0x1801497E4
 * Callers:
 *     ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x180148C00 (--_ECCrossThreadComposition@@UEAAPEAXI@Z.c)
 *     ??_ECComposition@@MEAAPEAXI@Z @ 0x180149C40 (--_ECComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x18001F744 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180076548 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18008906C (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800CCF78 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800CD160 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800D9F60 (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x18013E4E0 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ??_GCWetInkManager@@QEAAPEAXI@Z @ 0x180149CFC (--_GCWetInkManager@@QEAAPEAXI@Z.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18014AA6C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180151DC0 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??1CSpatialVisualContentManager@@QEAA@XZ @ 0x1801AD564 (--1CSpatialVisualContentManager@@QEAA@XZ.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x1801C6A3C (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 */

void __fastcall CComposition::~CComposition(CComposition *this)
{
  unsigned int i; // ebx
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rsi
  CSpatialVisualContentManager *v6; // rbx
  __int64 v7; // rcx
  int v8; // ebx
  CD3DDeviceLevel1 *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rsi
  CWeakReferenceBase **v13; // rcx
  unsigned int j; // ebx
  CMILRefCountBase *v15; // rcx
  CMILCOMBase *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  CMILRefCountBase *v19; // rcx
  CMILCOMBase *v20; // rcx
  CMILRefCountBase *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  CMILCOMBase *v24; // rcx
  PVOID v25; // rax
  unsigned int v26; // edx
  void *v27; // rbx
  __int64 v28; // rcx
  CWetInkManager *v29; // rcx
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CComposition::`vftable';
  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)this + 50) + 8LL * i));
  *((_DWORD *)this + 106) = 0;
  v3 = *((_DWORD *)this + 88);
  if ( v3 )
  {
    v4 = 0LL;
    v5 = v3;
    do
    {
      RestartKey = *(PVOID *)(v4 + *((_QWORD *)this + 41));
      ReleaseInterface<CConnection>((CMILRefCountBase **)&RestartKey);
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 88) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 328, 8u);
  CComposition::ReleaseNotificationChannels(this);
  v6 = (CSpatialVisualContentManager *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = 0LL;
  if ( v6 )
  {
    CSpatialVisualContentManager::~CSpatialVisualContentManager(v6);
    operator delete(v6);
  }
  v7 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = 0LL;
  if ( v7 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v7 + 8));
  RestartKey = &stru_1802D6738;
  EnterCriticalSection(&stru_1802D6738);
  v8 = qword_1802D67F0;
  BYTE4(qword_1802D67F0) = 1;
  while ( v8 )
  {
    v9 = *(CD3DDeviceLevel1 **)(qword_1802D67A0 + 24LL * (unsigned int)--v8);
    *((_DWORD *)v9 + 222) = -2003304307;
    CD3DDeviceLevel1::ProcessDeviceLost(v9);
  }
  CD3DDeviceManager::DeleteUnusableDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
  BYTE4(qword_1802D67F0) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>((struct _RTL_CRITICAL_SECTION **)&RestartKey);
  *((_DWORD *)this + 166) = 0;
  v10 = *((_DWORD *)this + 236);
  if ( v10 )
  {
    v11 = 0LL;
    v12 = v10;
    do
    {
      v13 = *(CWeakReferenceBase ***)(v11 + *((_QWORD *)this + 115));
      if ( v13 )
        CCursorVisualReference::`scalar deleting destructor'(v13);
      v11 += 8LL;
      --v12;
    }
    while ( v12 );
  }
  *((_DWORD *)this + 236) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 920, 8u);
  *((_DWORD *)this + 244) = 0;
  for ( j = 0; j < *((_DWORD *)this + 184); ++j )
    CMILCOMBase::InternalRelease(*(CMILCOMBase **)(*((_QWORD *)this + 89) + 8LL * j));
  *((_DWORD *)this + 184) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 712, 8u);
  CComposition::UnmapDeferredSharedSectionViews(this);
  v15 = (CMILRefCountBase *)*((_QWORD *)this + 11);
  if ( v15 )
    CMILRefCountBase::Release(v15);
  v16 = (CMILCOMBase *)*((_QWORD *)this + 2);
  if ( v16 )
    CMILCOMBase::InternalRelease(v16);
  v17 = *((_QWORD *)this + 9);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  v18 = *((_QWORD *)this + 10);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v19 = (CMILRefCountBase *)*((_QWORD *)this + 30);
  if ( v19 )
    CMILRefCountBase::Release(v19);
  v20 = (CMILCOMBase *)*((_QWORD *)this + 12);
  if ( v20 )
    CMILCOMBase::InternalRelease(v20);
  v21 = (CMILRefCountBase *)*((_QWORD *)this + 14);
  if ( v21 )
    CMILRefCountBase::Release(v21);
  v22 = *((_QWORD *)this + 13);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = *((_QWORD *)this + 3);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  CThreadContext::DestroyObjectCaches();
  v24 = (CMILCOMBase *)*((_QWORD *)this + 165);
  if ( v24 )
  {
    *((_QWORD *)this + 165) = 0LL;
    CMILCOMBase::InternalRelease(v24);
  }
  operator delete(*((void **)this + 151));
  while ( 1 )
  {
    RestartKey = 0LL;
    v25 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 1112), &RestartKey);
    if ( !v25 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 1112), v25);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1080);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1048);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1016);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 984);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 952);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 920);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 760);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 712);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 672);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 640);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 592);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 464);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 54);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 50);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 41);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 288);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 248);
  CMmcssTask::UnloadRuntime((CComposition *)((char *)this + 160));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  v27 = (void *)*((_QWORD *)this + 19);
  if ( v27 )
  {
    CSpatialVisualContentManager::~CSpatialVisualContentManager(*((CSpatialVisualContentManager **)this + 19));
    operator delete(v27);
  }
  v28 = *((_QWORD *)this + 18);
  if ( v28 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v28 + 8));
  v29 = (CWetInkManager *)*((_QWORD *)this + 15);
  if ( v29 )
    CWetInkManager::`scalar deleting destructor'(v29, v26);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 32);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
