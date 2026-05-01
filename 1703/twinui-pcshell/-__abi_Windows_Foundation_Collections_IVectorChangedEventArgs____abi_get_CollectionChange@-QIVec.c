/*
 * XREFs of ?__abi_Windows_Foundation_Collections_IVectorChangedEventArgs____abi_get_CollectionChange@?QIVectorChangedEventArgs@Collections@Foundation@Windows@@VectorChangedEventArgs@Details@2Platform@@UE$AAAJPEAW4CollectionChange@234@@Z @ 0x180139E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections_IVectorChangedEventArgs____abi_get_CollectionChange__QIVectorChangedEventArgs_Collections_Foundation_Windows__VectorChangedEventArgs_Details_2Platform__UE_AAAJPEAW4CollectionChange_234__Z(
        __int64 a1,
        _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  *a2 = 0;
  try
  {
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v2;
}
