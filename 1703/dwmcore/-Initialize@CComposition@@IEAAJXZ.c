/*
 * XREFs of ?Initialize@CComposition@@IEAAJXZ @ 0x180064C48
 * Callers:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800CB878 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnect.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CWindowManager@@SAJPEAPEAV1@@Z @ 0x1800C162C (-Create@CWindowManager@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800C7B6C (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?EnsurePerFrameInstance@CCounterManager@@SAJXZ @ 0x1800C8BFC (-EnsurePerFrameInstance@CCounterManager@@SAJXZ.c)
 *     ?Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C90B4 (-Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CA7F4 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CMILFactory@@SAJPEAPEAV1@@Z @ 0x1800CAF78 (-Create@CMILFactory@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x1800CB5BC (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CBA50 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CBC04 (-Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800CBDC4 (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800CBEF0 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1800CC0E0 (-InitializeObjectCaches@CThreadContext@@SAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Initialize(struct CMonitorTreeAssociation **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  struct IMessageSession *v13; // rsi
  int v14; // eax
  int v15; // eax
  CBitmapOfDeviceBitmaps *v16; // rcx
  CBitmapOfDeviceBitmaps *v18; // [rsp+58h] [rbp+10h] BYREF
  void *v19; // [rsp+60h] [rbp+18h] BYREF
  void *v20; // [rsp+68h] [rbp+20h] BYREF

  v18 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v2 = CCounterManager::EnsurePerFrameInstance();
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xB7u);
  }
  else
  {
    v4 = CMonitorTreeAssociation::Create((struct CComposition *)this, this + 3);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB9u);
      return v3;
    }
    v5 = CThreadContext::InitializeObjectCaches();
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xBEu);
      return v3;
    }
    v6 = CWindowManager::Create(this + 6);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC3u);
      return v3;
    }
    v7 = CMILFactory::Create(&v18);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC8u);
    }
    else
    {
      v8 = CRenderTargetManager::Create((struct CComposition *)this, this + 4);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xCDu);
      }
      else
      {
        v9 = CSurfaceManager::Create((struct CComposition *)this, this + 5, &v20, &v19);
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xD5u);
        }
        else
        {
          (*(void (__fastcall **)(struct CMonitorTreeAssociation *, void *, void *))(*(_QWORD *)this[70] + 88LL))(
            this[70],
            v20,
            v19);
          v10 = CExpressionManager::Create(this + 30);
          v3 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xDCu);
          }
          else
          {
            v11 = CInputManager::Create((struct CComposition *)this, this + 7);
            v3 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xE1u);
            }
            else
            {
              v12 = CManipulationManager::Create((struct CComposition *)this, this + 8);
              v3 = v12;
              if ( v12 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xE6u);
              }
              else
              {
                v13 = (struct IMessageSession *)(*(__int64 (__fastcall **)(struct CMonitorTreeAssociation *))(*(_QWORD *)this[70] + 96LL))(this[70]);
                v14 = CMessageConversationHost::Create(v13, this + 169);
                v3 = v14;
                if ( v14 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xEDu);
                }
                else
                {
                  v15 = CEffectCompilationService::Create(v13, this + 9);
                  v3 = v15;
                  if ( v15 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xF2u);
                  }
                  else
                  {
                    v16 = v18;
                    this[2] = v18;
                    if ( v16 )
                      CBitmapOfDeviceBitmaps::AddRef(v16);
                    *((_OWORD *)this + 79) = _xmm;
                    *((_OWORD *)this + 80) = _xmm;
                    *((_OWORD *)this + 81) = _xmm;
                    *((_OWORD *)this + 82) = _xmm;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v18 )
    CMILCOMBase::InternalRelease(v18);
  return v3;
}
