/*
 * XREFs of InvalidateDCE @ 0x1C0072E04
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     RevalidateDCE @ 0x1C00FB000 (RevalidateDCE.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x1C0029120 (GreSelectRedirectionBitmap.c)
 */

__int64 __fastcall InvalidateDCE(__int64 a1, __int64 a2, int a3)
{
  int v4; // eax

  v4 = *(_DWORD *)(a1 + 64) & 0x4002 | 0x800;
  *(_DWORD *)(a1 + 64) = v4;
  if ( (v4 & 0x4000) != 0 )
  {
    GreSelectRedirectionBitmap(*(HDC *)(a1 + 8), 0LL, a3);
    *(_DWORD *)(a1 + 64) &= ~0x4000u;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return GreSelectVisRgn(*(_QWORD *)(a1 + 8), 0LL, 1LL);
}
