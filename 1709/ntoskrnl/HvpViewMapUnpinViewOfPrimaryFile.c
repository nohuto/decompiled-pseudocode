/*
 * XREFs of HvpViewMapUnpinViewOfPrimaryFile @ 0x1401E553C
 * Callers:
 *     HvpViewMapUnpinForFileOffset @ 0x1401E53E8 (HvpViewMapUnpinForFileOffset.c)
 * Callees:
 *     MmProtectSystemCacheView @ 0x14021A1C8 (MmProtectSystemCacheView.c)
 */

__int64 __fastcall HvpViewMapUnpinViewOfPrimaryFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (HIBYTE(a2) & 0x7F)) + 32LL * ((a2 >> 18) & 0x3F);
  if ( (*(_QWORD *)v2 & 1) != 0 )
    MmProtectSystemCacheView(*(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFEuLL, (*(_DWORD *)(v2 + 24) + 4095) & 0xFFFFF000, 2LL);
  *(_QWORD *)v2 &= ~1uLL;
  return 0LL;
}
