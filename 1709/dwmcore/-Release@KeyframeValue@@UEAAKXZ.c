/*
 * XREFs of ?Release@KeyframeValue@@UEAAKXZ @ 0x180092E60
 * Callers:
 *     ?InternalRelease@?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ @ 0x180092DD8 (-InternalRelease@-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ??_EXamlSineInterpolation@@UEAAPEAXI@Z @ 0x180066BE0 (--_EXamlSineInterpolation@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyframeValue::Release(KeyframeValue *this)
{
  unsigned __int32 v1; // ebx
  XamlSineInterpolation *(__fastcall *v2)(XamlSineInterpolation *, char); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    v2 = *(XamlSineInterpolation *(__fastcall **)(XamlSineInterpolation *, char))(*(_QWORD *)this + 16LL);
    if ( v2 == XamlSineInterpolation::`vector deleting destructor' )
      XamlSineInterpolation::`vector deleting destructor'(this, 1);
    else
      v2(this, 1);
  }
  return v1;
}
