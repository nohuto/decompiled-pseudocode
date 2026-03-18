/*
 * XREFs of ??1CComposition@@MEAA@XZ @ 0x1801274D8
 * Callers:
 *     ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x180126250 (--_ECCrossThreadComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180009F80 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x18007E70C (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C0C38 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18011B56C (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x18011B990 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18011DD58 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18011E430 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801278B0 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180128ED8 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@IEAAXXZ @ 0x180129094 (-_Tidy@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkManager@@@std@@@.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180130154 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x18018EE28 (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 */

void __fastcall CComposition::~CComposition(CComposition *this)
{
  __int64 v1; // rbx
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rsi
  CD3DDeviceManager *v6; // rcx
  int v7; // ebx
  CD3DDeviceLevel1 *v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rsi
  CCursorVisual *v13; // rcx
  __int64 i; // rbx
  CMILRefCountBase *v15; // rcx
  CMILCOMBase *v16; // rcx
  __int64 v17; // rcx
  CMILRefCountBase *v18; // rcx
  CMILCOMBase *v19; // rcx
  CMILRefCountBase *v20; // rcx
  PVOID v21; // rax
  __int64 **v22; // rsi
  void *v23; // rdx
  __int64 *v24; // rbx
  wil::details *v25; // rcx
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  for ( *(_QWORD *)this = &CComposition::`vftable'; (unsigned int)v1 < *((_DWORD *)this + 100); v1 = (unsigned int)(v1 + 1) )
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)this + 47) + 8 * v1));
  *((_DWORD *)this + 100) = 0;
  v3 = *((_DWORD *)this + 82);
  if ( v3 )
  {
    v4 = 0LL;
    v5 = v3;
    do
    {
      RestartKey = *(PVOID *)(v4 + *((_QWORD *)this + 38));
      ReleaseInterface<CConnection>((CMILRefCountBase **)&RestartKey);
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 82) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 304, 8u);
  CComposition::ReleaseNotificationChannels(this);
  RestartKey = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  v7 = qword_18026EFB0;
  BYTE4(qword_18026EFB0) = 1;
  while ( v7 )
  {
    v8 = *(CD3DDeviceLevel1 **)(qword_18026EF60 + 24LL * (unsigned int)--v7);
    *((_DWORD *)v8 + 222) = -2003304307;
    CD3DDeviceLevel1::ProcessDeviceLost(v8);
  }
  CD3DDeviceManager::DeleteUnusableDevices(v6);
  BYTE4(qword_18026EFB0) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>((struct _RTL_CRITICAL_SECTION **)&RestartKey);
  *((_DWORD *)this + 160) = 0;
  v10 = *((_DWORD *)this + 230);
  if ( v10 )
  {
    v11 = 0LL;
    v12 = v10;
    do
    {
      v13 = *(CCursorVisual **)(v11 + *((_QWORD *)this + 112));
      if ( v13 )
        CCursorVisual::`scalar deleting destructor'(v13, v9);
      v11 += 8LL;
      --v12;
    }
    while ( v12 );
  }
  *((_DWORD *)this + 230) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 896, 8u);
  *((_DWORD *)this + 238) = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 178); i = (unsigned int)(i + 1) )
    CMILCOMBase::InternalRelease(*(CMILCOMBase **)(*((_QWORD *)this + 86) + 8 * i));
  *((_DWORD *)this + 178) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 688, 8u);
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
  ReleaseInterfaceNoNULL<CPolygon>(*((_QWORD *)this + 10));
  v18 = (CMILRefCountBase *)*((_QWORD *)this + 27);
  if ( v18 )
    CMILRefCountBase::Release(v18);
  v19 = (CMILCOMBase *)*((_QWORD *)this + 12);
  if ( v19 )
    CMILCOMBase::InternalRelease(v19);
  v20 = (CMILRefCountBase *)*((_QWORD *)this + 14);
  if ( v20 )
    CMILRefCountBase::Release(v20);
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 13));
  ReleaseInterfaceNoNULL<CPolygon>(*((_QWORD *)this + 3));
  CThreadContext::DestroyObjectCaches();
  WPF::ProcessHeapImpl::Free(*((void **)this + 148));
  while ( 1 )
  {
    RestartKey = 0LL;
    v21 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 1088), &RestartKey);
    if ( !v21 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 1088), v21);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 132);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 128);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 124);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 120);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 116);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 112);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 92);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 86);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 81);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 77);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 71);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 55);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 51);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 47);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 38);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 33);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 28);
  CMmcssTask::UnloadRuntime((CComposition *)((char *)this + 136));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v22 = (__int64 **)*((_QWORD *)this + 15);
  if ( v22 )
  {
    std::vector<CWetInkManager::SuperWetPass>::_Tidy(v22 + 1);
    v24 = *v22;
    if ( *v22 )
    {
      v25 = (wil::details *)v24[5];
      if ( v25 )
        wil::details::CloseHandle(v25, v23);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v24 + 4);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v24 + 3);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v24 + 2);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v24 + 1);
      Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(v24);
      WPF::ProcessHeapImpl::Free(v24);
    }
    WPF::ProcessHeapImpl::Free(v22);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 4);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
