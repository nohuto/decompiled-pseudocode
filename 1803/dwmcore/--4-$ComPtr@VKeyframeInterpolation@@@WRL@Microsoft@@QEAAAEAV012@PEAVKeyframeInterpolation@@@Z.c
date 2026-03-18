/*
 * XREFs of ??4?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeInterpolation@@@Z @ 0x180040950
 * Callers:
 *     ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x18003EFB0 (-AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ @ 0x180040920 (-InternalRelease@-$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

KeyframeInterpolation **__fastcall Microsoft::WRL::ComPtr<KeyframeInterpolation>::operator=(
        KeyframeInterpolation **a1,
        KeyframeInterpolation *a2)
{
  KeyframeInterpolation *v2; // rax
  KeyframeInterpolation *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (**(void (__fastcall ***)(KeyframeInterpolation *))a2)(a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = a2;
    Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v6);
  }
  return a1;
}
