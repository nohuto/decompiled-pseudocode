/*
 * XREFs of ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18005E608
 * Callers:
 *     ?CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z @ 0x1800CA230 (-CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x18005DF64 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x18005E254 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHos.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x1800C171C (--0CEnergyReporter@@AEAA@XZ.c)
 *     ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x1800C21F4 (-Create@CKernelTransport@@SAJPEAPEAV1@@Z.c)
 *     _anonymous_namespace_::State::State @ 0x1800C7B2C (_anonymous_namespace_--State--State.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x1800C99E8 (--0CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x1801436A4 (--_GCKernelTransport@@QEAAPEAXI@Z.c)
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x1801436E4 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@AEAAXJ@Z @ 0x180143878 (-OnConnectionLostNotification@CConnection@@AEAAXJ@Z.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     ??1CProcessAttributionManager@@AEAA@XZ @ 0x180145D24 (--1CProcessAttributionManager@@AEAA@XZ.c)
 *     _anonymous_namespace_::State::_State @ 0x180147334 (_anonymous_namespace_--State--_State.c)
 *     ??1CProcessAttributionReporter@@AEAA@XZ @ 0x180148090 (--1CProcessAttributionReporter@@AEAA@XZ.c)
 *     ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x18014843C (-Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x180148CF0 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CConnection::RunCompositionThread(CConnection *this)
{
  CProcessAttributionManager *v2; // rax
  LPVOID v3; // rax
  void *v4; // rax
  void *v5; // rax
  CEnergyReporter *v6; // rax
  CProcessAttributionReporter *v7; // rax
  CProcessAttributionReporter *v8; // rax
  struct IDWMCoRenderEngine *v9; // rcx
  int v10; // eax
  int v11; // ebx
  struct CKernelTransport *v12; // rbx
  CPartitionVerticalBlankScheduler *v13; // rax
  CPartitionVerticalBlankScheduler *v14; // rax
  CPartitionVerticalBlankScheduler *v15; // rsi
  int v16; // eax
  CPartitionVerticalBlankScheduler *v17; // rcx
  __int64 (*v18)(void); // rax
  int v19; // eax
  int v20; // edx
  int v21; // r9d
  unsigned int v22; // edx
  void (__fastcall ***v23)(_QWORD, __int64); // rcx
  CKernelTransport *v24; // rcx
  CoRenderHost *v25; // rsi
  unsigned int v26; // edx
  void *v27; // rcx
  CProcessAttributionReporter *v28; // rdi
  CEnergyReporter *v29; // rdi
  void (__fastcall ***v30)(_QWORD, __int64); // rcx
  CProcessAttributionManager *v31; // rdi
  void *v32; // rdi
  __int64 result; // rax
  unsigned int v34; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]
  CoRenderHost *v36; // [rsp+48h] [rbp+10h] BYREF

  v36 = 0LL;
  v2 = (CProcessAttributionManager *)WPF::ProcessHeapImpl::AllocClear(0x30uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  qword_1802D60A0 = v2;
  v3 = operator new(0x58uLL);
  if ( v3 )
    v4 = (void *)anonymous_namespace_::State::State(v3);
  else
    v4 = 0LL;
  qword_1802D6148 = v4;
  v5 = HeapAlloc(WPF::g_processHeap, 0, 0x78uLL);
  if ( v5 )
    v6 = CEnergyReporter::CEnergyReporter(v5);
  else
    v6 = 0LL;
  qword_1802D6150 = v6;
  v7 = (CProcessAttributionReporter *)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
  if ( v7 )
    v8 = CProcessAttributionReporter::CProcessAttributionReporter(v7);
  else
    v8 = 0LL;
  qword_1802D6158 = v8;
  if ( !v8 )
    RaiseFailFastException(0LL, 0LL, 0);
  v9 = (struct IDWMCoRenderEngine *)*((_QWORD *)this + 20);
  if ( v9 )
  {
    v10 = CoRenderHost::Create(v9, &v36);
    v11 = v10;
    if ( v10 < 0 )
    {
      v34 = 687;
LABEL_40:
      v21 = v10;
LABEL_41:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, v34);
      goto LABEL_42;
    }
  }
  v10 = CKernelTransport::Create((struct CKernelTransport **)this + 12);
  v11 = v10;
  if ( v10 < 0 )
  {
    v34 = 691;
    goto LABEL_40;
  }
  v12 = (struct CKernelTransport *)*((_QWORD *)this + 12);
  v13 = (CPartitionVerticalBlankScheduler *)WPF::ProcessHeapImpl::AllocClear(0x89F8uLL);
  if ( !v13 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v14 = CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(v13, v12, this, v36);
  v15 = v14;
  if ( !v14 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x23u);
    goto LABEL_33;
  }
  v16 = CPartitionVerticalBlankScheduler::Initialize(v14);
  v11 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x24u);
    CPartitionVerticalBlankScheduler::`scalar deleting destructor'(v15, 1u);
  }
  else
  {
    *((_QWORD *)this + 13) = v15;
  }
  if ( v11 < 0 )
  {
LABEL_33:
    v34 = 697;
LABEL_34:
    v21 = v11;
    goto LABEL_41;
  }
  SetEvent(*((HANDLE *)this + 23));
  *((_BYTE *)this + 168) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
  do
  {
    v17 = (CPartitionVerticalBlankScheduler *)*((_QWORD *)this + 13);
    v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 136LL);
    if ( (char *)v18 == (char *)CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame )
      v19 = CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame(v17);
    else
      v19 = v18();
    v11 = v19;
    if ( v19 < 0 )
    {
      v34 = 710;
      goto LABEL_34;
    }
  }
  while ( *((_BYTE *)this + 168) );
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
LABEL_42:
  CConnection::OnConnectionLostNotification(this, v20);
  v23 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 13);
  if ( v23 )
  {
    (**v23)(v23, 1LL);
    *((_QWORD *)this + 13) = 0LL;
  }
  v24 = (CKernelTransport *)*((_QWORD *)this + 12);
  if ( v24 )
  {
    CKernelTransport::`scalar deleting destructor'(v24, v22);
    *((_QWORD *)this + 12) = 0LL;
  }
  v25 = v36;
  if ( v36 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v36 + 3) + 32LL))(*((_QWORD *)v36 + 3));
    CoRenderHost::`scalar deleting destructor'(v25, v26);
  }
  v27 = (void *)*((_QWORD *)this + 20);
  if ( v27 )
  {
    operator delete(v27, 8uLL);
    *((_QWORD *)this + 20) = 0LL;
  }
  v28 = qword_1802D6158;
  if ( qword_1802D6158 )
  {
    CProcessAttributionReporter::~CProcessAttributionReporter(qword_1802D6158);
    operator delete(v28, 0x80uLL);
  }
  v29 = qword_1802D6150;
  qword_1802D6158 = 0LL;
  if ( qword_1802D6150 )
  {
    v30 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)qword_1802D6150 + 6);
    if ( v30 )
      (**v30)(v30, 1LL);
    DynArrayImpl<0>::~DynArrayImpl<0>((char *)v29 + 88);
    DynArrayImpl<0>::~DynArrayImpl<0>((char *)v29 + 16);
    operator delete(v29, 0x78uLL);
  }
  v31 = qword_1802D60A0;
  qword_1802D6150 = 0LL;
  if ( qword_1802D60A0 )
  {
    CProcessAttributionManager::~CProcessAttributionManager(qword_1802D60A0);
    operator delete(v31);
  }
  v32 = qword_1802D6148;
  qword_1802D60A0 = 0LL;
  if ( qword_1802D6148 )
  {
    anonymous_namespace_::State::_State(qword_1802D6148);
    operator delete(v32, 0x58uLL);
  }
  result = (unsigned int)v11;
  qword_1802D6148 = 0LL;
  return result;
}
