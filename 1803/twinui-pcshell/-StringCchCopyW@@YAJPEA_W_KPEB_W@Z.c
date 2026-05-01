/*
 * XREFs of ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1802660CC
 * Callers:
 *     ?DecodeRelativePath@@YAJPEA_W_KPEB_W@Z @ 0x1802652DC (-DecodeRelativePath@@YAJPEA_W_KPEB_W@Z.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x1802FBA28 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x1802FBAF4 (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(wchar_t *a1, __int64 a2, const wchar_t *a3)
{
  signed int v3; // r9d
  __int64 v4; // r10
  signed __int64 v5; // r8
  wchar_t v6; // ax
  wchar_t *v7; // rax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    if ( a2 )
    {
      v4 = 2147483646 - a2;
      v5 = (char *)a3 - (char *)a1;
      do
      {
        if ( !(v4 + a2) )
          break;
        v6 = *(wchar_t *)((char *)a1 + v5);
        if ( !v6 )
          break;
        *a1++ = v6;
        --a2;
      }
      while ( a2 );
    }
    v7 = a1 - 1;
    if ( a2 )
      v7 = a1;
    v3 = a2 == 0 ? 0x8007007A : 0;
    *v7 = 0;
  }
  return (unsigned int)v3;
}
