/*
 * XREFs of _lambda_3dca9bc61b2dec62e80cc000dd474755_::__lambda_3dca9bc61b2dec62e80cc000dd474755_ @ 0x180069484
 * Callers:
 *     _CFrameApplicationPresentation::SetSystemVisual_::_1_::dtor$4 @ 0x1801E9280 (_CFrameApplicationPresentation--SetSystemVisual_--_1_--dtor$4.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180049860 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall lambda_3dca9bc61b2dec62e80cc000dd474755_::__lambda_3dca9bc61b2dec62e80cc000dd474755_(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 16;
  *(_QWORD *)(a1 + 16) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((_QWORD *)(a1 + 16));
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v1);
}
