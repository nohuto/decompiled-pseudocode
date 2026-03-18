/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C000CF78
 * Callers:
 *     xxxClientGetTextExtentPointW @ 0x1C000CC7C (xxxClientGetTextExtentPointW.c)
 *     xxxClientExtTextOutW @ 0x1C0138734 (xxxClientExtTextOutW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0200C88 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C020103C (xxxClientPSMTextOut.c)
 * Callees:
 *     GreSetTextAlign @ 0x1C000E1DC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C000E37C (GreGetTextAlign.c)
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     NtGdiGetDCObject @ 0x1C000E960 (NtGdiGetDCObject.c)
 *     GreGetLayout @ 0x1C002AFE0 (GreGetLayout.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007DB44 (GreCreateCompatibleBitmapInternal.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, __int64 *a2)
{
  HDC result; // rax
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  int DCObject; // eax
  __int64 CompatibleBitmapInternal; // rax
  __int64 v9; // rbp
  unsigned int v10; // [rsp+64h] [rbp-34h]

  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1);
  v6 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 1LL) )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  DCObject = NtGdiGetDCObject(a1, 327680LL);
  GreExtGetObjectW(DCObject);
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, 0LL, 0LL);
  v9 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v6);
    if ( v9 )
      GreDeleteObject(v9);
    return 0LL;
  }
  GreSelectBitmap(v6, v9);
  GetDPIServerInfo();
  GreSelectFontInternal(a1);
  GreSelectFontInternal(a1);
  GreSelectFontInternal(v6);
  GreGetTextAlign(a1);
  GreSetTextAlign(v6);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v6, v10 - 1, 1LL);
  NtGdiBitBltInternal(v6, 0LL, 0LL, v10);
  result = v6;
  *a2 = v9;
  return result;
}
