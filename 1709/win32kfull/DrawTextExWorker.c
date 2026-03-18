/*
 * XREFs of DrawTextExWorker @ 0x1C023BB1C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CEF08 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GreExtSelectClipRgn @ 0x1C008074C (GreExtSelectClipRgn.c)
 *     GreGetRandomRgn @ 0x1C00808C0 (GreGetRandomRgn.c)
 *     GreSetTextAlign @ 0x1C0080E00 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C0080F98 (GreGetTextAlign.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C023B204 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C023B7C8 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 */

__int64 __fastcall DrawTextExWorker(
        HDC a1,
        unsigned __int16 *a2,
        int a3,
        struct tagRECT *a4,
        unsigned int a5,
        struct tagDRAWTEXTPARAMS *a6)
{
  __int64 v7; // rsi
  __int64 v10; // rdx
  int TextAlign; // eax
  HRGN RectRgn; // rax
  __int64 v14; // rdi
  __m128i v15; // xmm0
  unsigned int top; // ebx
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // esi
  LONG v21; // eax
  int v22; // [rsp+40h] [rbp-B8h]
  _DWORD v23[20]; // [rsp+50h] [rbp-A8h] BYREF

  LODWORD(v7) = a3;
  memset(v23, 0, 0x48uLL);
  v22 = 0;
  if ( !a2 )
    return 0LL;
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == -1 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( a2[v7] );
    }
  }
  else if ( *a2 )
  {
    return 1LL;
  }
  if ( a6 && *(_DWORD *)a6 != 20 )
  {
    UserSetLastError(87LL, v10);
    return 0LL;
  }
  if ( !(unsigned int)DT_InitDrawTextInfo(a1, a4, a5, (struct DRAWTEXTDATA *)v23, a6) )
    return 0LL;
  v23[16] = -1;
  if ( (a5 & 0x20000) != 0 )
  {
    TextAlign = GreGetTextAlign(a1);
    v22 = GreSetTextAlign(a1, TextAlign | 0x100u);
  }
  if ( (a5 & 0x100) != 0 )
  {
    v14 = 0LL;
  }
  else
  {
    RectRgn = (HRGN)GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    v14 = (__int64)RectRgn;
    if ( RectRgn )
    {
      if ( (unsigned int)GreGetRandomRgn(a1, RectRgn, 1) != 1 )
      {
        GreDeleteObject(v14);
        v14 = -1LL;
      }
      v15 = _mm_srli_si128(*(__m128i *)a4, 8);
      GreIntersectClipRect(
        a1,
        *(_QWORD *)&a4->left,
        HIDWORD(*(_QWORD *)&a4->left),
        (unsigned int)_mm_cvtsi128_si32(v15),
        v15.m128i_i32[1]);
    }
  }
  top = a4->top;
  v17 = a5 & 0xC;
  if ( v17 == 4 )
  {
    top += (int)(a4->bottom - top - v23[7]) / 2;
  }
  else if ( v17 == 8 )
  {
    top = a4->bottom - v23[7];
  }
  v18 = AddEllipsisAndDrawLine(a1, top, a2, (unsigned int)v7, a5, (struct DRAWTEXTDATA *)v23);
  v19 = v23[7] + top;
  v20 = (_DWORD)a2 + 2 * v18;
  if ( v14 )
  {
    if ( v14 == -1 )
    {
      GreExtSelectClipRgn(a1, 0LL, 5);
    }
    else
    {
      GreExtSelectClipRgn(a1, (HRGN)v14, 5);
      GreDeleteObject(v14);
    }
  }
  if ( (a5 & 0x20000) != 0 )
    GreSetTextAlign(a1, v22);
  if ( a6 )
    *((_DWORD *)a6 + 4) = (unsigned int)(v20 - (_DWORD)a2) >> 1;
  v21 = a4->top;
  if ( v19 == v21 )
    return 1LL;
  return v19 - v21;
}
