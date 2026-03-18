/*
 * XREFs of ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800653A8
 * Callers:
 *     ?CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z @ 0x1800CC280 (-CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180068E00 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x180069120 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHos.c)
 *     ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x1800C4968 (-Create@CKernelTransport@@SAJPEAPEAV1@@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x1801388D0 (--_GCKernelTransport@@QEAAPEAXI@Z.c)
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x180138910 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@AEAAXJ@Z @ 0x180138AA4 (-OnConnectionLostNotification@CConnection@@AEAAXJ@Z.c)
 *     ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x18013B12C (-Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x18013BAA0 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 *     ?Create@CIndependentRefreshRateScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@PEAPEAVICompositorScheduler@@@Z @ 0x18013CBC4 (-Create@CIndependentRefreshRateScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRender.c)
 */

__int64 __fastcall CConnection::RunCompositionThread(CConnection *this)
{
  CoRenderHost *v1; // rsi
  struct IDWMCoRenderEngine *v3; // rcx
  struct CKernelTransport **v4; // r14
  int v5; // eax
  unsigned int v6; // edi
  struct CKernelTransport *v7; // rdi
  CPartitionVerticalBlankScheduler *v8; // rax
  CPartitionVerticalBlankScheduler *v9; // rax
  CPartitionVerticalBlankScheduler *v10; // rdi
  int v11; // eax
  int v12; // ebp
  __int64 v13; // rcx
  CPartitionVerticalBlankScheduler *v14; // rcx
  __int64 (*v15)(void); // rax
  int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // edx
  void (__fastcall ***v21)(_QWORD, __int64); // rcx
  CKernelTransport *v22; // rcx
  unsigned int v23; // edx
  void *v24; // rcx
  unsigned int v26; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  CoRenderHost *v28; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = (struct IDWMCoRenderEngine *)*((_QWORD *)this + 20);
  v28 = 0LL;
  if ( v3 )
  {
    v19 = CoRenderHost::Create(v3, &v28);
    v6 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x2BEu);
LABEL_20:
      v1 = v28;
      goto LABEL_32;
    }
    v1 = v28;
  }
  v4 = (struct CKernelTransport **)((char *)this + 96);
  v5 = CKernelTransport::Create((struct CKernelTransport **)this + 12);
  v6 = v5;
  if ( v5 < 0 )
  {
    v26 = 706;
LABEL_31:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v26);
    goto LABEL_32;
  }
  if ( CCommonRegistryData::m_fIndependentRefreshRateScheduler )
  {
    v5 = CIndependentRefreshRateScheduler::Create(*v4, this, v1, (struct ICompositorScheduler **)this + 13);
    v6 = v5;
    if ( v5 >= 0 )
    {
LABEL_9:
      SetEvent(*((HANDLE *)this + 23));
      *((_BYTE *)this + 168) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v13, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
      do
      {
        v14 = (CPartitionVerticalBlankScheduler *)*((_QWORD *)this + 13);
        v15 = *(__int64 (**)(void))(*(_QWORD *)v14 + 144LL);
        if ( (char *)v15 == (char *)CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame )
          v16 = CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame(v14);
        else
          v16 = v15();
        v6 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2DFu);
          goto LABEL_20;
        }
      }
      while ( *((_BYTE *)this + 168) );
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v18, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
      goto LABEL_20;
    }
    v26 = 721;
    goto LABEL_31;
  }
  v7 = *v4;
  v8 = (CPartitionVerticalBlankScheduler *)WPF::ProcessHeapImpl::AllocClear(0x75E8uLL);
  if ( !v8 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v9 = CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(v8, v7, this, v1);
  v10 = v9;
  if ( v9 )
  {
    v11 = CPartitionVerticalBlankScheduler::Initialize(v9);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x22u);
      CPartitionVerticalBlankScheduler::`scalar deleting destructor'(v10, 1u);
    }
    else
    {
      *((_QWORD *)this + 13) = v10;
    }
    v6 = v12;
    if ( v12 >= 0 )
      goto LABEL_9;
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21u);
    v6 = -2147024882;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x2CAu);
LABEL_32:
  CConnection::OnConnectionLostNotification(this, v17);
  v21 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 13);
  if ( v21 )
  {
    (**v21)(v21, 1LL);
    *((_QWORD *)this + 13) = 0LL;
  }
  v22 = (CKernelTransport *)*((_QWORD *)this + 12);
  if ( v22 )
  {
    CKernelTransport::`scalar deleting destructor'(v22, v20);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 3) + 32LL))(*((_QWORD *)v1 + 3));
    CoRenderHost::`scalar deleting destructor'(v1, v23);
  }
  v24 = (void *)*((_QWORD *)this + 20);
  if ( v24 )
  {
    WPF::ProcessHeapImpl::Free(v24);
    *((_QWORD *)this + 20) = 0LL;
  }
  return v6;
}
