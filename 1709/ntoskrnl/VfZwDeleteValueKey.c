/*
 * XREFs of VfZwDeleteValueKey @ 0x1407C6E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x1407CA1CC (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x1407CA2AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDeleteValueKey(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString(a2, retaddr);
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR))pXdvZwDeleteValueKey)(a1, a2);
}
