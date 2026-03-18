/*
 * XREFs of PiIommuUnblockDevice @ 0x14073BFA4
 * Callers:
 *     PiDmaGuardProcessPreStart @ 0x14014714C (PiDmaGuardProcessPreStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PiIommuUnblockDevice(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    return 0LL;
  result = ((__int64 (__fastcall *)(_QWORD, __int64))off_140398AA8[0])(*(_QWORD *)a1, a1 + 8);
  if ( (int)result >= 0 )
    *(_BYTE *)(a1 + 16) |= 2u;
  return result;
}
