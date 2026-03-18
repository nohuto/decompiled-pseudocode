/*
 * XREFs of ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180119664
 * Callers:
 *     ?CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z @ 0x1801207A0 (-CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180014A50 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x180120720 (--_GCKernelTransport@@QEAAPEAXI@Z.c)
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x180120760 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@AEAAXJ@Z @ 0x180120B74 (-OnConnectionLostNotification@CConnection@@AEAAXJ@Z.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x180123E10 (-Create@CKernelTransport@@SAJPEAPEAV1@@Z.c)
 *     ??_GCProcessAttributionManager@@AEAAPEAXI@Z @ 0x180124050 (--_GCProcessAttributionManager@@AEAAPEAXI@Z.c)
 *     _anonymous_namespace_::State::State @ 0x180124788 (_anonymous_namespace_--State--State.c)
 *     _anonymous_namespace_::State::_State @ 0x18012492C (_anonymous_namespace_--State--_State.c)
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x180125400 (--0CEnergyReporter@@AEAA@XZ.c)
 *     ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x18012563C (-Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 *     ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@PEAPEAVICompositorScheduler@@@Z @ 0x180126458 (-Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRender.c)
 */

__int64 __fastcall CConnection::RunCompositionThread(CConnection *this)
{
  void *v2; // rcx
  CProcessAttributionManager *v3; // rax
  LPVOID v4; // rax
  void *v5; // rax
  struct IDWMCoRenderEngine *v6; // rcx
  signed int v7; // eax
  unsigned int v8; // edi
  CPartitionVerticalBlankScheduler *v9; // rcx
  __int64 (*v10)(void); // rax
  signed int v11; // eax
  int v12; // edx
  unsigned int v13; // edx
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  CKernelTransport *v15; // rcx
  CoRenderHost *v16; // rsi
  unsigned int v17; // edx
  void *v18; // rcx
  void **v19; // rbx
  void (__fastcall ***v20)(_QWORD, __int64); // rcx
  void *v21; // rbx
  __int64 result; // rax
  unsigned int v23; // [rsp+20h] [rbp-28h]
  const void *retaddr; // [rsp+48h] [rbp+0h]
  CoRenderHost *v25; // [rsp+50h] [rbp+8h] BYREF

  v2 = (void *)*((_QWORD *)this + 22);
  v25 = 0LL;
  SetThreadDescription(v2, L"DWM Compositor Thread");
  v3 = (CProcessAttributionManager *)WPF::ProcessHeapImpl::AllocClear(0x30uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *(_QWORD *)v3 = 0LL;
  *((_QWORD *)v3 + 1) = 0LL;
  *((_QWORD *)v3 + 2) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  qword_180272960 = v3;
  v4 = operator new(0x58uLL);
  if ( v4 )
    qword_180272758 = (void *)anonymous_namespace_::State::State(v4);
  else
    qword_180272758 = 0LL;
  v5 = HeapAlloc(WPF::g_processHeap, 0, 0x78uLL);
  if ( v5 )
    qword_180272980 = CEnergyReporter::CEnergyReporter(v5);
  else
    qword_180272980 = 0LL;
  v6 = (struct IDWMCoRenderEngine *)*((_QWORD *)this + 20);
  if ( v6 )
  {
    v7 = CoRenderHost::Create(v6, &v25);
    v8 = v7;
    if ( v7 < 0 )
    {
      v23 = 680;
LABEL_26:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, v23);
      goto LABEL_27;
    }
  }
  v7 = CKernelTransport::Create((struct CKernelTransport **)this + 12);
  v8 = v7;
  if ( v7 < 0 )
  {
    v23 = 684;
    goto LABEL_26;
  }
  v7 = CPartitionVerticalBlankScheduler::Create(
         *((struct CKernelTransport **)this + 12),
         this,
         v25,
         (struct ICompositorScheduler **)this + 13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v23 = 690;
    goto LABEL_26;
  }
  SetEvent(*((HANDLE *)this + 23));
  *((_BYTE *)this + 168) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, "O");
  do
  {
    v9 = (CPartitionVerticalBlankScheduler *)*((_QWORD *)this + 13);
    v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 136LL);
    if ( (char *)v10 == (char *)CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame )
      v11 = CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame(v9);
    else
      v11 = v10();
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x2BFu);
      goto LABEL_27;
    }
  }
  while ( *((_BYTE *)this + 168) );
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
LABEL_27:
  CConnection::OnConnectionLostNotification(this, v12);
  v14 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 13);
  if ( v14 )
  {
    (**v14)(v14, 1LL);
    *((_QWORD *)this + 13) = 0LL;
  }
  v15 = (CKernelTransport *)*((_QWORD *)this + 12);
  if ( v15 )
  {
    CKernelTransport::`scalar deleting destructor'(v15, v13);
    *((_QWORD *)this + 12) = 0LL;
  }
  v16 = v25;
  if ( v25 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v25 + 3) + 32LL))(*((_QWORD *)v25 + 3));
    CoRenderHost::`scalar deleting destructor'(v16, v17);
  }
  v18 = (void *)*((_QWORD *)this + 20);
  if ( v18 )
  {
    WPF::ProcessHeapImpl::Free(v18);
    *((_QWORD *)this + 20) = 0LL;
  }
  v19 = (void **)qword_180272980;
  if ( qword_180272980 )
  {
    v20 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)qword_180272980 + 6);
    if ( v20 )
      (**v20)(v20, 1LL);
    DynArrayImpl<1>::~DynArrayImpl<1>(v19 + 11);
    DynArrayImpl<1>::~DynArrayImpl<1>(v19 + 2);
    WPF::ProcessHeapImpl::Free(v19);
  }
  qword_180272980 = 0LL;
  if ( qword_180272960 )
    CProcessAttributionManager::`scalar deleting destructor'(qword_180272960, v13);
  v21 = qword_180272758;
  qword_180272960 = 0LL;
  if ( qword_180272758 )
  {
    anonymous_namespace_::State::_State(qword_180272758);
    WPF::ProcessHeapImpl::Free(v21);
  }
  result = v8;
  qword_180272758 = 0LL;
  return result;
}
