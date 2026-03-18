/*
 * XREFs of ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x180166EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D8E4 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18009A95C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x180166940 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 */

__int64 __fastcall CInteraction::Push2DVisualTransformToRenderThread(CInteraction *this)
{
  struct IMessageCallSendHost *v2; // rbx
  int ManipulationManager; // eax
  unsigned int v4; // edi
  struct CManipulationManager *v5; // rbx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  struct _D3DMATRIX v10; // [rsp+80h] [rbp-9h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+F0h] [rbp+67h] BYREF
  struct CManipulationManager *v12; // [rsp+F8h] [rbp+6Fh] BYREF
  CInteraction *v13; // [rsp+100h] [rbp+77h]
  __int64 v14; // [rsp+108h] [rbp+7Fh] BYREF

  v12 = 0LL;
  v2 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v12);
  ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 3), &v12);
  v4 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ManipulationManager, 0x2BCu);
    goto LABEL_11;
  }
  v5 = v12;
  v6 = CManipulationManager::GetManipulationThreadMessageCallSendHost(v12, &v11);
  v4 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2BEu);
    goto LABEL_9;
  }
  v7 = *((unsigned int *)v5 + 88);
  v4 = (_DWORD)v7 == 0 ? 0x80004005 : 0;
  if ( !(_DWORD)v7 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2C1u);
LABEL_9:
    v2 = v11;
    goto LABEL_11;
  }
  (**(void (__fastcall ***)(CInteraction *))this)(this);
  CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)((char *)this + 876), &v10);
  v14 = v7;
  v2 = v11;
  v13 = this;
  v8 = CoreUICallSend(v11, &v14, 1LL, 5LL, 3, &unk_1801D540E);
  v4 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2CAu);
  else
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 560LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 560LL));
LABEL_11:
  if ( v2 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v2 + 16LL))(v2);
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v12);
  return v4;
}
