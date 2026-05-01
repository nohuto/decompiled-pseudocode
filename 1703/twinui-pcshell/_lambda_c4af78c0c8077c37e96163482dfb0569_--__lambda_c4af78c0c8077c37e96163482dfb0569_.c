/*
 * XREFs of _lambda_c4af78c0c8077c37e96163482dfb0569_::__lambda_c4af78c0c8077c37e96163482dfb0569_ @ 0x180066F74
 * Callers:
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_c4af78c0c8077c37e96163482dfb0569____::_1_::dtor$0 @ 0x18019AA99 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_c4af78c0c8077c37e96163482dfb0569____--_1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall lambda_c4af78c0c8077c37e96163482dfb0569_::__lambda_c4af78c0c8077c37e96163482dfb0569_(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 16;
  *(_QWORD *)(a1 + 16) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((_QWORD *)(a1 + 16));
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v1);
}
