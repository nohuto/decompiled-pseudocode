/*
 * XREFs of ??4?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z @ 0x180092E08
 * Callers:
 *     ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x1800A6BBC (-AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ @ 0x180092DD8 (-InternalRelease@-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

KeyframeValue **__fastcall Microsoft::WRL::ComPtr<KeyframeValue>::operator=(KeyframeValue **a1, KeyframeValue *a2)
{
  KeyframeValue *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (**(void (__fastcall ***)(KeyframeValue *))a2)(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(&v5);
  }
  return a1;
}
