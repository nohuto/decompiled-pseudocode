/*
 * XREFs of MmImageSectionPagable @ 0x1405BB1AC
 * Callers:
 *     MmResetDriverPaging @ 0x1405BB0E0 (MmResetDriverPaging.c)
 *     MiSnapDriverRange @ 0x1405F8770 (MiSnapDriverRange.c)
 *     sub_14087CF84 @ 0x14087CF84 (sub_14087CF84.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 *     MiLockPagableSections @ 0x14089C824 (MiLockPagableSections.c)
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
    if ( v2 == 75 )
    {
      if ( *(_BYTE *)(a1 + 5) == 68 )
        return (unsigned __int8)KdPageDebuggerSection;
    }
    else if ( v2 == 86 && *(_BYTE *)(a1 + 5) == 82 && *(_BYTE *)(a1 + 6) == 70 )
    {
      return (MiFlags & 1) == 0;
    }
  }
  return result;
}
