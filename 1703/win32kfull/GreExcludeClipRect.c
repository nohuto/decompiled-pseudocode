/*
 * XREFs of GreExcludeClipRect @ 0x1C00A14FC
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009EAEC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     NtGdiExcludeClipRect @ 0x1C00A14F0 (NtGdiExcludeClipRect.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00954C4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GreExcludeClipRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // ebx
  int v9; // eax
  ULONG v11; // ecx
  DC *v12[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _RECTL v14; // [rsp+40h] [rbp-20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v8 = 0;
  if ( !v12[0] )
  {
    v11 = 6;
    goto LABEL_14;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v13, (struct XDCOBJ *)v12, -2147483132);
  v14.left = a2;
  v14.top = a3;
  v14.right = a4;
  v14.bottom = a5;
  if ( (*(_BYTE *)(v13[0] + 32LL) & 1) != 0 )
  {
    EXFORMOBJ::bXform((EXFORMOBJ *)v13, (struct _POINTL *)&v14);
    ERECTL::vOrder((ERECTL *)&v14);
    v9 = DC::iCombine(v12[0], &v14, 4);
    goto LABEL_4;
  }
  if ( (a2 & 0xF8000000) != 0 && (a2 & 0xF8000000) != -134217728
    || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v11 = 87;
LABEL_14:
    EngSetLastError(v11);
    goto LABEL_6;
  }
  v9 = DC::iCombine(v12[0], (struct EXFORMOBJ *)v13, &v14, 4);
LABEL_4:
  v8 = v9;
  if ( v9 > 1 )
    v8 = 3;
LABEL_6:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v12);
  return v8;
}
