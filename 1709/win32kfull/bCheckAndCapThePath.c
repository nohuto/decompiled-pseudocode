/*
 * XREFs of bCheckAndCapThePath @ 0x1C00FB67C
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1C00FB3A0 (NtGdiAddFontResourceW.c)
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C028A540 (NtGdiGetFontResourceInfoInternalW.c)
 *     NtGdiRemoveFontResourceW @ 0x1C028B250 (NtGdiRemoveFontResourceW.c)
 * Callees:
 *     cCapString @ 0x1C00B21B4 (cCapString.c)
 */

__int64 __fastcall bCheckAndCapThePath(WCHAR *a1, WCHAR *a2, unsigned int a3, int a4)
{
  unsigned int v5; // ebx
  __int64 v7; // r14
  WCHAR *v8; // rdi
  int v9; // esi
  __int64 v10; // rax

  v5 = 0;
  v7 = a3;
  v8 = a1;
  v9 = 1;
  v10 = a3;
  if ( v10 * 2 && ((unsigned __int64)&a2[v10] > MmUserProbeAddress || &a2[v10] < a2) )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( !a2[a3 - 1] )
  {
    cCapString(a1, a2, a3);
    if ( a3 )
    {
      do
      {
        if ( *v8 == 124 )
        {
          *v8 = 0;
          ++v9;
        }
        ++v8;
        --v7;
      }
      while ( v7 );
    }
    LOBYTE(v5) = a4 == v9;
  }
  return v5;
}
