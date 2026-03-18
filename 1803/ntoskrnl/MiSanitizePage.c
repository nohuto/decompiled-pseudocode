/*
 * XREFs of MiSanitizePage @ 0x14013A248
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x1405BA250 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     MiMapViewOfPhysicalSection @ 0x140646C40 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSanitizePage(unsigned __int64 a1)
{
  __int64 result; // rax

  result = a1 & 0xFFFFFFFFFLL;
  if ( a1 < 0x1000000000LL )
    return a1;
  return result;
}
