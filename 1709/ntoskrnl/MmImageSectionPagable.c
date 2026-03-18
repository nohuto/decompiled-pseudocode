/*
 * XREFs of MmImageSectionPagable @ 0x14051703C
 * Callers:
 *     MiSnapDriverRange @ 0x140516C14 (MiSnapDriverRange.c)
 *     MmResetDriverPaging @ 0x140516F70 (MmResetDriverPaging.c)
 *     sub_14080CF60 @ 0x14080CF60 (sub_14080CF60.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 *     MiLockPagableSections @ 0x1408296B4 (MiLockPagableSections.c)
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
