/*
 * XREFs of ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C012B3D4
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012B1C4 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 *     NtGdiFrameRgn @ 0x1C012A6A0 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C012C5F0 (NtGdiFillRgn.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C027A2E0 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall DrawWindowShadow(struct tagWND *a1, HDC a2, int a3, int a4, int *a5)
{
  unsigned int v8; // r14d
  __int64 RectRgn; // rdi
  __int64 v10; // rax
  HRGN v11; // rsi
  int v12; // ecx
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rdx
  unsigned __int8 *v17; // r15
  HBRUSH SolidBrush; // rax
  HBRUSH v19; // r12
  __int64 v20; // rcx
  __int128 v22; // [rsp+38h] [rbp-18h] BYREF

  v8 = 0;
  v22 = *((_OWORD *)a1 + 8);
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v10 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v11 = (HRGN)v10;
  if ( RectRgn && v10 )
  {
    if ( !*((_QWORD *)a1 + 27) || (*((_BYTE *)a1 + 61) & 8) != 0 )
    {
      v12 = -(int)v22;
      LODWORD(v22) = 0;
      v13 = HIDWORD(v22) - DWORD1(v22);
      DWORD1(v22) = 0;
      HIDWORD(v22) = v13;
      DWORD2(v22) += v12;
      GreSetRectRgn(RectRgn, 0LL, 0LL, DWORD2(v22), v13);
      *a5 = 1;
    }
    else
    {
      SetRectRgnIndirect(RectRgn, &v22);
      GreCombineRgn(RectRgn, RectRgn, *((_QWORD *)a1 + 27), 1LL);
      GreOffsetRgn(RectRgn, (unsigned int)-(int)v22, (unsigned int)-DWORD1(v22));
      *a5 = 0;
    }
    if ( !IsPWNDEligibleForGDIScaling((__int64)a1) || (v20 = *((unsigned __int16 *)a1 + 186), (_WORD)v20 == 96) )
    {
      v8 = 1;
    }
    else
    {
      v8 = GreScaleRgnToDestLogPixel(v20, RectRgn);
      if ( !v8 )
        goto LABEL_13;
    }
    v14 = 5;
    GreCombineRgn(v11, RectRgn, 0LL, 5LL);
    v15 = 5LL;
    if ( a3 )
    {
      GreOffsetRgn(RectRgn, 5LL, 0LL);
      v15 = 0LL;
    }
    GreOffsetRgn(v11, v15, 5LL);
    if ( !*a5 || a4 )
    {
      v17 = (unsigned __int8 *)&unk_1C02E71D4;
      while ( 1 )
      {
        SolidBrush = (HBRUSH)GreCreateSolidBrush(*v17 | (*v17 << 16) | (*v17 << 8));
        v19 = SolidBrush;
        if ( !SolidBrush )
          break;
        NtGdiFrameRgn(a2, v11, SolidBrush, v14, v14);
        GreDeleteObject(v19);
        --v14;
        --v17;
        if ( v14 <= 0 )
        {
          GreGetStockObject(4LL);
          goto LABEL_12;
        }
      }
      v8 = 0;
    }
    else
    {
      GreCombineRgn(v11, v11, RectRgn, 4LL);
      GreGetStockObject(0LL);
LABEL_12:
      NtGdiFillRgn(a2);
    }
  }
LABEL_13:
  GreDeleteObject(RectRgn);
  GreDeleteObject(v11);
  return v8;
}
