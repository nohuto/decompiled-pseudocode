/*
 * XREFs of BltIcon @ 0x1C009B384
 * Callers:
 *     _DrawIconEx @ 0x1C009B010 (_DrawIconEx.c)
 *     ?BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0211DD8 (-BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 * Callees:
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     GreSetStretchBltMode @ 0x1C009B588 (GreSetStretchBltMode.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 */

__int64 __fastcall BltIcon(HDC a1, int a2, int a3, int a4, int a5, HDC a6, __int64 a7, int a8, int a9)
{
  int v9; // esi
  __int64 v14; // rdi
  __int64 v16; // [rsp+78h] [rbp-30h]
  int v17; // [rsp+E8h] [rbp+40h]

  v9 = 0;
  if ( a8 == 1 )
    goto LABEL_2;
  if ( a8 == 3 )
  {
    v14 = *(_QWORD *)(a7 + 128);
  }
  else
  {
    v14 = *(_QWORD *)(a7 + 96);
    if ( !v14 )
    {
      v9 = *(_DWORD *)(a7 + 144) >> 1;
LABEL_2:
      v14 = *(_QWORD *)(a7 + 88);
    }
  }
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  GreSetStretchBltMode(a1);
  v16 = GreSelectBitmap(a6, v14);
  if ( a8 == 3 )
  {
    LOBYTE(v17) = 0;
    HIWORD(v17) = 511;
    BYTE1(v17) = a9 < 0 ? 0 : 0x80;
    NtGdiAlphaBlend(a1, a2, a3, a4, a5, a6, 0, v9, *(_DWORD *)(a7 + 140), *(_DWORD *)(a7 + 144) >> 1, v17);
  }
  else
  {
    GreStretchBltInternal(a1, a2, a3, a4, a5, a6, 0, v9, *(_DWORD *)(a7 + 140), *(_DWORD *)(a7 + 144) >> 1, a9, -1, 0);
  }
  GreSetStretchBltMode(a1);
  GreSetTextColor(a1);
  GreSetBkColor(a1);
  GreSelectBitmap(a6, v16);
  return 1LL;
}
