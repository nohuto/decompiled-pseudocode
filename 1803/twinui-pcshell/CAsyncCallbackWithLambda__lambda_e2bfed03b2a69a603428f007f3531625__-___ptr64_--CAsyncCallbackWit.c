/*
 * XREFs of CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&___ptr64_::CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&___ptr64_ @ 0x18012C998
 * Callers:
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18012FC14 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCImmersiveApp@@@WRL@Microsoft@@IEBAXXZ @ 0x180090E78 (-InternalAddRef@-$ComPtr@VCImmersiveApp@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180092760 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 */

_QWORD *__fastcall CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625______ptr64_::CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625______ptr64_(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)a1);
  a1[6] = *a2;
  Microsoft::WRL::ComPtr<CImmersiveApp>::InternalAddRef(a1 + 6);
  a1[7] = a2[1];
  *a1 = off_180326910;
  a1[1] = off_18032F710;
  return a1;
}
