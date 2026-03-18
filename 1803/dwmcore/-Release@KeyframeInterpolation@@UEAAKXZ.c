/*
 * XREFs of ?Release@KeyframeInterpolation@@UEAAKXZ @ 0x1800409A0
 * Callers:
 *     ?InternalRelease@?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ @ 0x180040920 (-InternalRelease@-$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ??_EStepInterpolation@@UEAAPEAXI@Z @ 0x1800407B0 (--_EStepInterpolation@@UEAAPEAXI@Z.c)
 *     ??_ELinearInterpolation@@UEAAPEAXI@Z @ 0x1800408B0 (--_ELinearInterpolation@@UEAAPEAXI@Z.c)
 *     ??_EXamlPowerInterpolation@@UEAAPEAXI@Z @ 0x1800AF8D0 (--_EXamlPowerInterpolation@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyframeInterpolation::Release(KeyframeInterpolation *this)
{
  unsigned __int32 v1; // ebx
  StepInterpolation *(__fastcall *v2)(StepInterpolation *, char); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    v2 = *(StepInterpolation *(__fastcall **)(StepInterpolation *, char))(*(_QWORD *)this + 16LL);
    if ( (char *)v2 == (char *)XamlPowerInterpolation::`vector deleting destructor' )
    {
      XamlPowerInterpolation::`vector deleting destructor'(this, 1u);
    }
    else if ( v2 == LinearInterpolation::`vector deleting destructor' )
    {
      LinearInterpolation::`vector deleting destructor'(this, 1);
    }
    else if ( v2 == StepInterpolation::`vector deleting destructor' )
    {
      StepInterpolation::`vector deleting destructor'(this, 1);
    }
    else
    {
      v2(this, 1);
    }
  }
  return v1;
}
