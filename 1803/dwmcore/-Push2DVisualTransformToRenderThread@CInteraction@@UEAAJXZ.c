/*
 * XREFs of ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801924E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800A3E2C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x180191CAC (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 */

__int64 __fastcall CInteraction::Push2DVisualTransformToRenderThread(CInteraction *this)
{
  int ManipulationManager; // eax
  unsigned int v3; // edi
  CManipulationManager *v4; // rbx
  __int64 v5; // rbx
  unsigned int v7; // [rsp+20h] [rbp-69h]
  struct _D3DMATRIX v8; // [rsp+80h] [rbp-9h] BYREF
  struct IMessageCallSendHost *v9; // [rsp+F0h] [rbp+67h] BYREF
  CManipulationManager *v10; // [rsp+F8h] [rbp+6Fh] BYREF
  CInteraction *v11; // [rsp+100h] [rbp+77h]
  __int64 v12; // [rsp+108h] [rbp+7Fh] BYREF

  v10 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v10);
  ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 3), &v10);
  v3 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v7 = 722;
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  v4 = v10;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v10, &v9);
  v3 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v7 = 724;
    goto LABEL_10;
  }
  v5 = *((_QWORD *)v4 + 44);
  v3 = v5 == 0 ? 0x80004005 : 0;
  if ( !v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x2D7u);
    goto LABEL_11;
  }
  (**(void (__fastcall ***)(CInteraction *))this)(this);
  CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)((char *)this + 1252), &v8);
  v11 = this;
  v12 = v5;
  ManipulationManager = CoreUICallSend(v9, &v12, 1LL, 9LL, 3, &unk_180239CC3);
  v3 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v7 = 736;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ManipulationManager, v7);
    goto LABEL_11;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 552LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)this + 3) + 552LL),
    0LL,
    0x4000LL);
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v10);
  return v3;
}
