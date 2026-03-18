/*
 * XREFs of VslAllocateSecureHibernateResources @ 0x1406B32F4
 * Callers:
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 */

__int64 __fastcall VslAllocateSecureHibernateResources(PVOID MemoryMap)
{
  NTSTATUS v2; // ebx
  _BYTE v4[16]; // [rsp+30h] [rbp-88h] BYREF
  ULONG_PTR Length; // [rsp+40h] [rbp-78h]
  PVOID Address; // [rsp+48h] [rbp-70h]

  v2 = VslpEnterIumSecureMode(2u, 34LL, 0, (__int64)v4);
  if ( v2 >= 0 )
    PoSetHiberRange(MemoryMap, 0xC000u, Address, Length, 0x526C7356u);
  return (unsigned int)v2;
}
