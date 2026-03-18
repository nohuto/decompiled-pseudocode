/*
 * XREFs of MmImageSectionPagable @ 0x1404B240C
 * Callers:
 *     MiSnapDriverRange @ 0x1404B1FD8 (MiSnapDriverRange.c)
 *     MmResetDriverPaging @ 0x1404B2340 (MmResetDriverPaging.c)
 *     sub_1407DCDE8 @ 0x1407DCDE8 (sub_1407DCDE8.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 *     MiLockPagableSections @ 0x140803B20 (MiLockPagableSections.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmImageSectionPagable(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl

  result = 0LL;
  if ( *(_DWORD *)a1 == 1633969454 )
    return 1LL;
  if ( *(_DWORD *)a1 == 1162297680 )
  {
    v2 = *(_BYTE *)(a1 + 4);
    result = 1LL;
    if ( v2 == 75 && *(_BYTE *)(a1 + 5) == 68 )
    {
      return (unsigned __int8)KdPageDebuggerSection;
    }
    else if ( v2 == 86 && *(_BYTE *)(a1 + 5) == 82 && *(_BYTE *)(a1 + 6) == 70 && (MiFlags & 1) != 0 )
    {
      return 0LL;
    }
  }
  return result;
}
