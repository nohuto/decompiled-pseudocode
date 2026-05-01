/*
 * XREFs of ?__abi_Windows_Foundation_Collections_IVectorChangedEventArgs____abi_get_Index@?QIVectorChangedEventArgs@Collections@Foundation@Windows@@VectorChangedEventArgs@Details@2Platform@@UE$AAAJPEAI@Z @ 0x1802141F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections_IVectorChangedEventArgs____abi_get_Index__QIVectorChangedEventArgs_Collections_Foundation_Windows__VectorChangedEventArgs_Details_2Platform__UE_AAAJPEAI_Z(
        __int64 a1,
        _DWORD *a2)
{
  *a2 = 0;
  try
  {
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
