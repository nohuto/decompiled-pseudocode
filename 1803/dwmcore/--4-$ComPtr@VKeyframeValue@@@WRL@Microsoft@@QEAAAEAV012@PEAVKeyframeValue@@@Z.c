/*
 * XREFs of ??4?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z @ 0x180040A7C
 * Callers:
 *     ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x18003EFB0 (-AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ @ 0x180040A4C (-InternalRelease@-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

KeyframeValue **__fastcall Microsoft::WRL::ComPtr<KeyframeValue>::operator=(KeyframeValue **a1, KeyframeValue *a2)
{
  KeyframeValue *v2; // rax
  KeyframeValue *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (**(void (__fastcall ***)(KeyframeValue *))a2)(a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = a2;
    Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(&v6);
  }
  return a1;
}
