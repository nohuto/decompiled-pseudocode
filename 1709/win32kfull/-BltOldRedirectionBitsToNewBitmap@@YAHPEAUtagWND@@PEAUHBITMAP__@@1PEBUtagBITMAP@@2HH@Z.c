/*
 * XREFs of ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00E61EC
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     GreExtSelectClipRgn @ 0x1C008074C (GreExtSelectClipRgn.c)
 *     GreExcludeClipRect @ 0x1C00E3BEC (GreExcludeClipRect.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00E6448 (GreConvertMemToRedirectionDC.c)
 *     GreConvertRedirectionToMemDC @ 0x1C027BDF4 (GreConvertRedirectionToMemDC.c)
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
  int v12; // r15d
  unsigned int v13; // ebp
  HBRUSH v14; // rbx
  __int64 v16; // [rsp+70h] [rbp-58h]
  RECT v17; // [rsp+78h] [rbp-50h] BYREF
  __int64 v18; // [rsp+E8h] [rbp+20h]

  v11 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
    v11 = (*((_BYTE *)a1 + 66) & 8) != 0;
  v18 = GreSelectBitmap(*(_QWORD *)ghdcMem, a2);
  v16 = GreSelectBitmap(*(_QWORD *)ghdcMem2, a3);
  v12 = GreConvertMemToRedirectionDC(*(HDC *)ghdcMem2);
  EtwTraceWindowRenderingOldToNewRedirectionBitmap(*(_QWORD *)a1, *(_QWORD *)a1, a2);
  v13 = NtGdiBitBltInternal(
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
    v14 = *(HBRUSH *)(*((_QWORD *)a1 + 21) + 144LL);
    if ( v14 )
    {
      if ( (unsigned __int64)v14 <= 0x1F )
        v14 = *(HBRUSH *)(gpsi + 8LL * (_QWORD)v14 + 4672);
      GreExcludeClipRect(*(HDC *)ghdcMem2, -a6, -a7, a4->bmWidth - a6, a4->bmHeight - a7);
      *(_QWORD *)&v17.left = 0LL;
      v17.right = a5->bmWidth;
      v17.bottom = a5->bmHeight;
      FillRect(*(HDC *)ghdcMem2, &v17, v14);
      GreExtSelectClipRgn(*(HDC *)ghdcMem2, 0LL, 5);
    }
  }
  if ( v12 )
    GreConvertRedirectionToMemDC(*(HDC *)ghdcMem2);
  GreSelectBitmap(*(_QWORD *)ghdcMem, v18);
  GreSelectBitmap(*(_QWORD *)ghdcMem2, v16);
  return v13;
}
