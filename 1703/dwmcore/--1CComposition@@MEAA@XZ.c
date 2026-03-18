/*
 * XREFs of ??1CComposition@@MEAA@XZ @ 0x18013EE78
 * Callers:
 *     ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x18013BA10 (--_ECCrossThreadComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x1800B01A4 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800B32D4 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800CF27C (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x180130E3C (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18013FA90 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x18014448C (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??_GCCounterManager@@QEAAPEAXI@Z @ 0x1801444F8 (--_GCCounterManager@@QEAAPEAXI@Z.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x18018608C (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 *     ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x180195868 (-HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z.c)
 */

void __fastcall CComposition::~CComposition(CComposition *this)
{
  __int64 v1; // rbx
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rsi
  CD3DDeviceManager *v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rsi
  CWeakReferenceBase **v10; // rcx
  __int64 i; // rbx
  unsigned int v12; // edx
  CMILRefCountBase *v13; // rcx
  CMILCOMBase *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  CMILRefCountBase *v17; // rcx
  CMILCOMBase *v18; // rcx
  CMILRefCountBase *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  PVOID v22; // rax
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  for ( *(_QWORD *)this = &CComposition::`vftable'; (unsigned int)v1 < *((_DWORD *)this + 112); v1 = (unsigned int)(v1 + 1) )
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)this + 53) + 8 * v1));
  *((_DWORD *)this + 112) = 0;
  v3 = *((_DWORD *)this + 92);
  if ( v3 )
  {
    v4 = 0LL;
    v5 = v3;
    do
    {
      RestartKey = *(PVOID *)(v4 + *((_QWORD *)this + 43));
      ReleaseInterface<CConnection>((CMILRefCountBase **)&RestartKey);
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 92) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 344);
  CComposition::ReleaseNotificationChannels(this);
  CD3DDeviceManager::HandleDeleteAssociatedDevices(v6, (const struct _GUID *)((char *)this + 324));
  *((_DWORD *)this + 168) = 0;
  v7 = *((_DWORD *)this + 238);
  if ( v7 )
  {
    v8 = 0LL;
    v9 = v7;
    do
    {
      v10 = *(CWeakReferenceBase ***)(v8 + *((_QWORD *)this + 116));
      if ( v10 )
        CCursorVisual::`scalar deleting destructor'(v10);
      v8 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)this + 238) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 928, 8u);
  *((_DWORD *)this + 246) = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 186); i = (unsigned int)(i + 1) )
    CMILCOMBase::InternalRelease(*(CMILCOMBase **)(*((_QWORD *)this + 90) + 8 * i));
  *((_DWORD *)this + 186) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 720, 8u);
  CComposition::UnmapDeferredSharedSectionViews(this);
  v13 = (CMILRefCountBase *)*((_QWORD *)this + 6);
  if ( v13 )
    CMILRefCountBase::Release(v13);
  v14 = (CMILCOMBase *)*((_QWORD *)this + 2);
  if ( v14 )
    CMILCOMBase::InternalRelease(v14);
  v15 = *((_QWORD *)this + 4);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = *((_QWORD *)this + 5);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = (CMILRefCountBase *)*((_QWORD *)this + 30);
  if ( v17 )
    CMILRefCountBase::Release(v17);
  v18 = (CMILCOMBase *)*((_QWORD *)this + 7);
  if ( v18 )
    CMILCOMBase::InternalRelease(v18);
  v19 = (CMILRefCountBase *)*((_QWORD *)this + 9);
  if ( v19 )
    CMILRefCountBase::Release(v19);
  v20 = *((_QWORD *)this + 8);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = *((_QWORD *)this + 3);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  if ( CCounterManager::s_pGlobalPerFrameCounterManager )
    CCounterManager::`scalar deleting destructor'(CCounterManager::s_pGlobalPerFrameCounterManager, v12);
  CCounterManager::s_pGlobalPerFrameCounterManager = 0LL;
  CThreadContext::DestroyObjectCaches();
  WPF::ProcessHeapImpl::Free(*((void **)this + 156));
  while ( 1 )
  {
    RestartKey = 0LL;
    v22 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)this + 16, &RestartKey);
    if ( !v22 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)this + 16, v22);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 140);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 136);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 132);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 128);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 124);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 120);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 116);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 96);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 90);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 85);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 81);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 75);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 61);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 57);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 53);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 43);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 36);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 31);
  CMmcssTask::UnloadRuntime((CComposition *)((char *)this + 160));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 15);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
