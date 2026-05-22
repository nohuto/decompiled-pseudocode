/*
 * XREFs of ?RemoveSpatialInteractionDevice@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180078030
 * Callers:
 *     ??_GSpatialInteractionDevice@@UEAAPEAXI@Z @ 0x1800748E0 (--_GSpatialInteractionDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800771F0 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     _lambda_db39044b7ead6141e706115c994a467b_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK_____ptr64_void_(__cdecl_)(_RTL_SRWLOCK_____ptr64)_&ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_2___RTL_SRWLOCK_____ptr64_0_std::nullptr_t_______ @ 0x180077E34 (_lambda_db39044b7ead6141e706115c994a467b_--operator()_wil--unique_any_t_wil--details--unique_sto.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::RemoveSpatialInteractionDevice(_QWORD *a1)
{
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v1; // rbx
  const char *v2; // r9
  __int64 *v3; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v5; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    v5 = a1;
    v1 = Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance();
    if ( *((_BYTE *)v1 + 120) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v1);
      lambda_db39044b7ead6141e706115c994a467b_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK_____ptr64_void____cdecl____RTL_SRWLOCK_____ptr64___ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_2___RTL_SRWLOCK_____ptr64_0_std::nullptr_t_______(
        &v5,
        (__int64)v1,
        v3);
      if ( v1 )
        ReleaseSRWLockExclusive((PSRWLOCK)v1);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x11D,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\HolographicDeviceSnapshot.h",
      v2);
  }
}
