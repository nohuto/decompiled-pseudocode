/*
 * XREFs of Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_13d25de601502b3f3668de287f572ce2___ @ 0x180075A10
 * Callers:
 *     ?ReadHidReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@PEAE@Z @ 0x180074C30 (-ReadHidReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@PEAE@Z.c)
 * Callees:
 *     _lambda_cd0cf05eb48187a67a9205d44c09d298_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK_____ptr64_void_(__cdecl_)(_RTL_SRWLOCK_____ptr64)_&ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_2___RTL_SRWLOCK_____ptr64_0_std::nullptr_t_______ @ 0x180075B70 (_lambda_cd0cf05eb48187a67a9205d44c09d298_--operator()_wil--unique_any_t_wil--details--unique_sto.c)
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800771F0 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_13d25de601502b3f3668de287f572ce2___(
        __int64 a1,
        __int64 a2)
{
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v2; // rbx
  const char *v3; // r9
  _QWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v4[0] = a2;
    v4[1] = a1;
    v2 = Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance();
    if ( *((_BYTE *)v2 + 120) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v2);
      lambda_cd0cf05eb48187a67a9205d44c09d298_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK_____ptr64_void____cdecl____RTL_SRWLOCK_____ptr64___ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_2___RTL_SRWLOCK_____ptr64_0_std::nullptr_t_______(
        v4,
        v2);
      if ( v2 )
        ReleaseSRWLockExclusive((PSRWLOCK)v2);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x155,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\HolographicDeviceSnapshot.h",
      v3);
  }
}
