/*
 * XREFs of ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C002B780
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C00F22E0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?bUnMap@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C002C760 (-bUnMap@SURFACE@@QEAAHPEAXPEAVDC@@@Z.c)
 */

__int64 __fastcall SURFREFVIEW::bUnMap(SURFACE **this)
{
  __int64 result; // rax
  SURFACE *v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  result = 0LL;
  v3 = *this;
  if ( v3 )
  {
    if ( gbTouchOnUnmap )
    {
      v4 = *((unsigned int *)v3 + 16);
      if ( (_DWORD)v4 )
      {
        v5 = *((_QWORD *)v3 + 9);
        if ( v5 )
        {
          v6 = v5 + v4;
          while ( v5 < v6 )
            v5 += 4096LL;
        }
      }
    }
    result = SURFACE::bUnMap(*this, this, 0LL);
  }
  *this = 0LL;
  return result;
}
