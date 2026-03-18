/*
 * XREFs of ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009EAEC
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 * Callees:
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GreConvertMemToRedirectionDC @ 0x1C009ED74 (GreConvertMemToRedirectionDC.c)
 *     GreExcludeClipRect @ 0x1C00A14FC (GreExcludeClipRect.c)
 *     GreExtSelectClipRgnInternal @ 0x1C013EDB0 (GreExtSelectClipRgnInternal.c)
 *     GreConvertRedirectionToMemDC @ 0x1C027F2C4 (GreConvertRedirectionToMemDC.c)
 */

__int64 __fastcall BltOldRedirectionBitsToNewBitmap(
        struct tagWND *a1,
        HBITMAP a2,
        HBITMAP a3,
        const struct tagBITMAP *a4,
        const struct tagBITMAP *a5,
        int a6,
        int a7)
{
  BOOL v11; // ebx
  __int64 v12; // r12
  __int64 v13; // r13
  int v14; // r15d
  unsigned int v15; // ebp
  HBRUSH v16; // rbx
  RECT v18; // [rsp+78h] [rbp-50h] BYREF

  v11 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
    v11 = (*((_BYTE *)a1 + 66) & 8) != 0;
  v12 = GreSelectBitmap(*(_QWORD *)ghdcMem, a2);
  v13 = GreSelectBitmap(*(_QWORD *)ghdcMem2, a3);
  v14 = GreConvertMemToRedirectionDC(*(HDC *)ghdcMem2);
  EtwTraceWindowRenderingOldToNewRedirectionBitmap(
    *(_QWORD *)a1,
    *(_QWORD *)a1,
    a2,
    (unsigned int)-a6,
    -a7,
    a4->bmWidth - a6,
    a4->bmHeight - a7,
    *(_QWORD *)a1,
    *(_QWORD *)a1,
    a3,
    0,
    0,
    a4->bmWidth + a6,
    a4->bmHeight);
  v15 = NtGdiBitBltInternal(
          *(HDC *)ghdcMem2,
          -a6,
          -a7,
          a4->bmWidth,
          a4->bmHeight,
          *(HDC *)ghdcMem,
          0,
          0,
          -2134114272,
          0,
          2);
  if ( v11 )
  {
    v16 = *(HBRUSH *)(*((_QWORD *)a1 + 21) + 136LL);
    if ( v16 )
    {
      if ( (unsigned __int64)v16 <= 0x1F )
        v16 = *(HBRUSH *)(gpsi + 8LL * (_QWORD)v16 + 5080);
      GreExcludeClipRect(*(HDC *)ghdcMem2, a4->bmHeight - a7);
      v18.left = 0;
      v18.top = 0;
      v18.right = a5->bmWidth;
      v18.bottom = a5->bmHeight;
      FillRect(*(HDC *)ghdcMem2, &v18, v16);
      GreExtSelectClipRgnInternal(*(HDC *)ghdcMem2);
    }
  }
  if ( v14 )
    GreConvertRedirectionToMemDC(*(HDC *)ghdcMem2);
  GreSelectBitmap(*(_QWORD *)ghdcMem, v12);
  GreSelectBitmap(*(_QWORD *)ghdcMem2, v13);
  return v15;
}
