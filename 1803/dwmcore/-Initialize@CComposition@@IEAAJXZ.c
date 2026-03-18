/*
 * XREFs of ?Initialize@CComposition@@IEAAJXZ @ 0x180033E24
 * Callers:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800C9BDC (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnect.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Create@CWindowManager@@SAJPEAPEAV1@@Z @ 0x1800BFE64 (-Create@CWindowManager@@SAJPEAPEAV1@@Z.c)
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800C494C (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800C50EC (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C6C24 (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C84AC (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CMILFactory@@SAJPEAPEAV1@@Z @ 0x1800C95B8 (-Create@CMILFactory@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800C96FC (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x1800C994C (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800C9B1C (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C9CD0 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C9D48 (-Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C9E14 (-Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1800C9FF0 (-InitializeObjectCaches@CThreadContext@@SAJXZ.c)
 *     ??4?$com_ptr_t@VDwm3DRECompositorThunk@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVDwm3DRECompositorThunk@@@Z @ 0x1800CA144 (--4-$com_ptr_t@VDwm3DRECompositorThunk@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVDwm3DRE.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??_GCWetInkManager@@QEAAPEAXI@Z @ 0x180149CFC (--_GCWetInkManager@@QEAAPEAXI@Z.c)
 *     ??1CSpatialVisualContentManager@@QEAA@XZ @ 0x1801AD564 (--1CSpatialVisualContentManager@@QEAA@XZ.c)
 */

__int64 __fastcall CComposition::Initialize(CComposition *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  struct IMessageSession *v6; // rbp
  CMILCOMBase *v7; // rcx
  _QWORD *v8; // rax
  unsigned int v9; // edx
  CWetInkManager *v10; // rcx
  _DWORD *v11; // rax
  _DWORD *v12; // r14
  _QWORD *v13; // rax
  CSpatialVisualContentManager *v14; // rbx
  CMILCOMBase *v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-38h]
  CMILCOMBase *v18; // [rsp+60h] [rbp+8h] BYREF
  void *v19; // [rsp+68h] [rbp+10h] BYREF
  void *v20; // [rsp+70h] [rbp+18h] BYREF

  v18 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v2 = CMonitorTreeAssociation::Create(this, (struct CMonitorTreeAssociation **)this + 3);
  v3 = v2;
  if ( v2 < 0 )
  {
    v17 = 197;
  }
  else
  {
    v4 = CThreadContext::InitializeObjectCaches();
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xCAu);
      return v3;
    }
    v5 = CWindowManager::Create((struct CWindowManager **)this + 11);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xCFu);
      return v3;
    }
    v2 = CMILFactory::Create(&v18);
    v3 = v2;
    if ( v2 < 0 )
    {
      v17 = 212;
    }
    else
    {
      v2 = CRenderTargetManager::Create(this, (struct CRenderTargetManager **)this + 9);
      v3 = v2;
      if ( v2 < 0 )
      {
        v17 = 217;
      }
      else
      {
        v2 = CSurfaceManager::Create(this, (struct CSurfaceManager **)this + 10, &v20, &v19);
        v3 = v2;
        if ( v2 < 0 )
        {
          v17 = 225;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, void *, void *))(**((_QWORD **)this + 69) + 88LL))(
            *((_QWORD *)this + 69),
            v20,
            v19);
          v2 = CExpressionManager::Create((struct CExpressionManager **)this + 30);
          v3 = v2;
          if ( v2 < 0 )
          {
            v17 = 232;
          }
          else
          {
            v2 = CInputManager::Create(this, (struct CInputManager **)this + 12);
            v3 = v2;
            if ( v2 < 0 )
            {
              v17 = 237;
            }
            else
            {
              v2 = CManipulationManager::Create(this, (struct CManipulationManager **)this + 13);
              v3 = v2;
              if ( v2 < 0 )
              {
                v17 = 242;
              }
              else
              {
                v2 = CHolographicManager::Create(this, (struct CHolographicManager **)this + 16);
                v3 = v2;
                if ( v2 < 0 )
                {
                  v17 = 247;
                }
                else
                {
                  v6 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 69) + 96LL))(*((_QWORD *)this + 69));
                  v2 = CMessageConversationHost::Create(v6, (struct CMessageConversationHost **)this + 164);
                  v3 = v2;
                  if ( v2 < 0 )
                  {
                    v17 = 254;
                  }
                  else
                  {
                    v7 = (CMILCOMBase *)*((_QWORD *)this + 165);
                    if ( v7 )
                    {
                      *((_QWORD *)this + 165) = 0LL;
                      CMILCOMBase::InternalRelease(v7);
                    }
                    v2 = DataProviderManager::Create(v6, (struct DataProviderManager **)this + 165);
                    v3 = v2;
                    if ( v2 < 0 )
                    {
                      v17 = 258;
                    }
                    else
                    {
                      v2 = CEffectCompilationService::Create(v6, (struct CEffectCompilationService **)this + 14);
                      v3 = v2;
                      if ( v2 >= 0 )
                      {
                        v8 = operator new(0x20uLL);
                        if ( v8 )
                        {
                          *v8 = this;
                          v8[1] = 0LL;
                          v8[2] = 0LL;
                          v8[3] = 0LL;
                        }
                        else
                        {
                          v8 = 0LL;
                        }
                        v10 = (CWetInkManager *)*((_QWORD *)this + 15);
                        *((_QWORD *)this + 15) = v8;
                        if ( v10 )
                          CWetInkManager::`scalar deleting destructor'(v10, v9);
                        v11 = operator new(0x28uLL);
                        v12 = v11;
                        if ( v11 )
                        {
                          memset_0(v11, 0, 0x28uLL);
                          v12[4] = 0;
                          *(_QWORD *)v12 = &Dwm3DRECompositorThunk::`vftable'{for `IDwm3DRECompositor'};
                          *((_QWORD *)v12 + 1) = &Dwm3DRECompositorThunk::`vftable'{for `CMILCOMBase'};
                          *((_QWORD *)v12 + 3) = 0LL;
                          *((_QWORD *)v12 + 4) = 0LL;
                        }
                        else
                        {
                          v12 = 0LL;
                        }
                        wil::com_ptr_t<Dwm3DRECompositorThunk,wil::err_returncode_policy>::operator=(
                          (char *)this + 144,
                          v12);
                        if ( *((_QWORD *)this + 18) )
                        {
                          v13 = operator new(0x18uLL);
                          if ( v13 )
                          {
                            *v13 = 0LL;
                            v13[1] = 0LL;
                            v13[2] = 0LL;
                          }
                          else
                          {
                            v13 = 0LL;
                          }
                          v14 = (CSpatialVisualContentManager *)*((_QWORD *)this + 19);
                          *((_QWORD *)this + 19) = v13;
                          if ( v14 )
                          {
                            CSpatialVisualContentManager::~CSpatialVisualContentManager(v14);
                            operator delete(v14, 0x18uLL);
                          }
                          v15 = v18;
                          *((_QWORD *)this + 2) = v18;
                          if ( v15 )
                            CMILCOMBase::InternalAddRef(v15);
                          *(_OWORD *)((char *)this + 1224) = _xmm;
                          *(_OWORD *)((char *)this + 1240) = _xmm;
                          *(_OWORD *)((char *)this + 1256) = _xmm;
                          *(_OWORD *)((char *)this + 1272) = _xmm;
                        }
                        else
                        {
                          v3 = -2147024882;
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x112u);
                        }
                        goto LABEL_30;
                      }
                      v17 = 263;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v17);
LABEL_30:
  if ( v18 )
    CMILCOMBase::InternalRelease(v18);
  return v3;
}
