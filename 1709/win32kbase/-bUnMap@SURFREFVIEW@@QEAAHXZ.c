/*
 * XREFs of ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C001F590
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C006D210 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C001FE08 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C00205FC (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall SURFREFVIEW::bUnMap(SURFACE **this)
{
  __int64 result; // rax
  SURFACE *v3; // rcx
  SURFACE *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx

  result = 0LL;
  v3 = *this;
  if ( v3 )
  {
    if ( gbTouchOnUnmap )
    {
      v5 = *((unsigned int *)v3 + 16);
      if ( (_DWORD)v5 )
      {
        v6 = *((_QWORD *)v3 + 9);
        if ( v6 )
        {
          v7 = v6 + v5;
          while ( v6 < v7 )
            v6 += 4096LL;
        }
      }
    }
    v4 = *this;
    if ( (unsigned int)SURFACE::bRedirectionBitmap(*this) && (*((_WORD *)v4 + 51) & 0x800) != 0 )
    {
      KeReleaseMutex((PRKMUTEX)(*((_QWORD *)v4 + 40) + 64LL), 0);
      W32PIDLOCK::vUnlockSimple((SURFACE *)((char *)v4 + 280));
    }
    result = 1LL;
  }
  *this = 0LL;
  return result;
}
