/*
 * XREFs of ??4?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeInterpolation@@@Z @ 0x18006A4BC
 * Callers:
 *     ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x1800A6BBC (-AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ @ 0x18006A48C (-InternalRelease@-$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

KeyframeInterpolation **__fastcall Microsoft::WRL::ComPtr<KeyframeInterpolation>::operator=(
        KeyframeInterpolation **a1,
        KeyframeInterpolation *a2)
{
  KeyframeInterpolation *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (**(void (__fastcall ***)(KeyframeInterpolation *))a2)(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v5);
  }
  return a1;
}
