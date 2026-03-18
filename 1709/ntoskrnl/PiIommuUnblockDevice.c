/*
 * XREFs of PiIommuUnblockDevice @ 0x1406D3BC8
 * Callers:
 *     PiDmaGuardProcessPreStart @ 0x1400FCF80 (PiDmaGuardProcessPreStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PiIommuUnblockDevice(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    return 0LL;
  result = ((__int64 (__fastcall *)(_QWORD))off_140353708)(*(_QWORD *)a1);
  if ( (int)result >= 0 )
    *(_BYTE *)(a1 + 8) |= 2u;
  return result;
}
