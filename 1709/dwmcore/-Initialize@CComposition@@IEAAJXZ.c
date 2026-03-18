/*
 * XREFs of ?Initialize@CComposition@@IEAAJXZ @ 0x180128180
 * Callers:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x18012FB90 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnect.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??_GCSuperWetInkRenderer@@QEAAPEAXI@Z @ 0x180127910 (--_GCSuperWetInkRenderer@@QEAAPEAXI@Z.c)
 *     ?_Tidy@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@IEAAXXZ @ 0x180129094 (-_Tidy@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkManager@@@std@@@.c)
 *     ?Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180130200 (-Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CWindowManager@@SAJPEAPEAV1@@Z @ 0x180130578 (-Create@CWindowManager@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180130918 (-Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x180131560 (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180131900 (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180131ED0 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x180155E60 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x18018EEE8 (-InitializeObjectCaches@CThreadContext@@SAJXZ.c)
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180194C10 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180195D60 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CMILFactory@@SAJPEAPEAV1@@Z @ 0x1801CE980 (-Create@CMILFactory@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CComposition::Initialize(struct CMonitorTreeAssociation **this)
{
  signed int v2; // eax
  unsigned int v3; // ebx
  signed int v4; // eax
  signed int v5; // eax
  signed int v6; // eax
  signed int v7; // eax
  signed int v8; // eax
  signed int v9; // eax
  signed int v10; // eax
  signed int v11; // eax
  struct IMessageSession *v12; // rsi
  signed int v13; // eax
  signed int v14; // eax
  CSuperWetInkRenderer **v15; // rax
  CSuperWetInkRenderer **v16; // rsi
  CSuperWetInkRenderer **v17; // r14
  void *v18; // rdx
  CMILCOMBase *v19; // rcx
  CMILCOMBase *v21; // [rsp+50h] [rbp+8h] BYREF
  void *v22; // [rsp+58h] [rbp+10h] BYREF
  void *v23; // [rsp+60h] [rbp+18h] BYREF

  v21 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v2 = CMonitorTreeAssociation::Create((struct CComposition *)this, this + 3);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0xB0u);
  }
  else
  {
    v4 = CThreadContext::InitializeObjectCaches();
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xB5u);
      return v3;
    }
    v5 = CWindowManager::Create(this + 11);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xBAu);
      return v3;
    }
    v6 = CMILFactory::Create(&v21);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xBFu);
    }
    else
    {
      v7 = CRenderTargetManager::Create((struct CComposition *)this, this + 9);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xC4u);
      }
      else
      {
        v8 = CSurfaceManager::Create((struct CComposition *)this, this + 10, &v23, &v22);
        v3 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xCCu);
        }
        else
        {
          (*(void (__fastcall **)(struct CMonitorTreeAssociation *, void *, void *))(*(_QWORD *)this[66] + 88LL))(
            this[66],
            v23,
            v22);
          v9 = CExpressionManager::Create(this + 27);
          v3 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xD3u);
          }
          else
          {
            v10 = CInputManager::Create((struct CComposition *)this, this + 12);
            v3 = v10;
            if ( v10 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xD8u);
            }
            else
            {
              v11 = CManipulationManager::Create((struct CComposition *)this, this + 13);
              v3 = v11;
              if ( v11 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xDDu);
              }
              else
              {
                v12 = (struct IMessageSession *)(*(__int64 (__fastcall **)(struct CMonitorTreeAssociation *))(*(_QWORD *)this[66] + 96LL))(this[66]);
                v13 = CMessageConversationHost::Create(v12, this + 161);
                v3 = v13;
                if ( v13 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xE4u);
                }
                else
                {
                  v14 = CEffectCompilationService::Create(v12, this + 14);
                  v3 = v14;
                  if ( v14 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0xE9u);
                  }
                  else
                  {
                    v15 = (CSuperWetInkRenderer **)operator new(0x20uLL);
                    v16 = v15;
                    if ( v15 )
                    {
                      memset_0(v15, 0, 0x20uLL);
                      *v16 = 0LL;
                      v16[1] = 0LL;
                      v16[2] = 0LL;
                      v16[3] = 0LL;
                    }
                    else
                    {
                      v16 = 0LL;
                    }
                    v17 = (CSuperWetInkRenderer **)this[15];
                    if ( v16 != v17 )
                    {
                      if ( v17 )
                      {
                        std::vector<CWetInkManager::SuperWetPass>::_Tidy(v17 + 1);
                        if ( *v17 )
                          CSuperWetInkRenderer::`scalar deleting destructor'(*v17, v18);
                        WPF::ProcessHeapImpl::Free(v17);
                      }
                      this[15] = (struct CMonitorTreeAssociation *)v16;
                    }
                    v19 = v21;
                    this[2] = v21;
                    if ( v19 )
                      CMILCOMBase::InternalAddRef(v19);
                    *((_OWORD *)this + 75) = _xmm;
                    *((_OWORD *)this + 76) = _xmm;
                    *((_OWORD *)this + 77) = _xmm;
                    *((_OWORD *)this + 78) = _xmm;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v21 )
    CMILCOMBase::InternalRelease(v21);
  return v3;
}
