/*
 * XREFs of GxpWriteFrameBufferPixels @ 0x140165238
 * Callers:
 *     BgpGxDrawRectangle @ 0x1401651B0 (BgpGxDrawRectangle.c)
 * Callees:
 *     GxpAdjustRectangleToFrameBuffer @ 0x140165430 (GxpAdjustRectangleToFrameBuffer.c)
 *     BgpGetBitsPerPixel @ 0x140165560 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x1401739C0 (BgpGxConvertRectangleEx.c)
 *     BgfxGrowDirtyRect @ 0x14017D3BC (BgfxGrowDirtyRect.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     GxpGetRotatedPixelOffset @ 0x1402C61A4 (GxpGetRotatedPixelOffset.c)
 *     BgpGxRectangleDestroy @ 0x14083D230 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall GxpWriteFrameBufferPixels(unsigned int *a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // r14
  unsigned int *v4; // rdi
  unsigned int BitsPerPixel; // r15d
  __int64 result; // rax
  int v7; // r11d
  char *v8; // r12
  unsigned int v9; // r15d
  unsigned int v10; // r10d
  __int64 v11; // rsi
  char *v12; // rsi
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  size_t v18; // r13
  __int64 v19; // r14
  __int64 v20; // rdi
  int RotatedPixelOffset; // ebx
  _BYTE *v22; // rsi
  __int64 v23; // r9
  unsigned int v24; // esi
  unsigned int v25; // r13d
  char *v26; // r12
  unsigned __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int *v29; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v31; // [rsp+58h] [rbp-A8h]
  int v32; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  int v34; // [rsp+70h] [rbp-90h]
  _DWORD v35[4]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v36[2]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v37[2]; // [rsp+90h] [rbp-70h] BYREF
  int v38; // [rsp+98h] [rbp-68h]
  unsigned int v39; // [rsp+9Ch] [rbp-64h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v41; // [rsp+B0h] [rbp-50h] BYREF
  int v42; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v43; // [rsp+C0h] [rbp-40h] BYREF
  int v44; // [rsp+C8h] [rbp-38h]
  _BYTE v45[80]; // [rsp+D0h] [rbp-30h] BYREF

  v3 = a2;
  v31 = (unsigned __int64)a2;
  v4 = a1;
  v29 = a1;
  BitsPerPixel = BgpGetBitsPerPixel(a1, a2, a3);
  v28 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v33 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v34 = HIDWORD(BgInternal);
  if ( !v4 || !v4[1] || !*v4 || v4[2] != BitsPerPixel || !v3 )
    return 3221225485LL;
  if ( (dword_14039D7F0 & 2) == 0 )
    return 3221225473LL;
  result = GxpAdjustRectangleToFrameBuffer(
             (_DWORD)v4,
             (_DWORD)v3,
             (unsigned int)&v33,
             (unsigned int)&v28,
             (__int64)v36,
             1);
  if ( (int)result >= 0 )
  {
    if ( (_BYTE)BgInternal )
    {
      v7 = v34;
      v8 = (char *)*((_QWORD *)v4 + 3);
      v9 = BitsPerPixel >> 3;
      v10 = v9 * v28;
      v11 = v9 * (*v3 + v34 * v3[1]);
      v30 = v9 * v28;
      v12 = (char *)qword_14039D7A0 + v11;
      if ( !BYTE2(BgInternal) )
      {
LABEL_10:
        v13 = v4[1];
        v14 = v13;
        v15 = *v4;
        v16 = *v4;
LABEL_11:
        v17 = v9 * v14;
        v35[1] = v15;
        v35[0] = v17;
        v35[2] = v9 * v34;
        if ( BYTE2(BgInternal) )
        {
          v24 = 0;
          v31 = __PAIR64__(v16, v13);
          HIDWORD(v27) = 0;
          if ( v16 )
          {
            while ( 1 )
            {
              v25 = 0;
              LODWORD(v27) = 0;
              v26 = (char *)(*((_QWORD *)v4 + 3) + v10 * v24);
              if ( v4[1] )
                break;
LABEL_45:
              HIDWORD(v27) = ++v24;
              if ( v24 >= *v4 )
                goto LABEL_16;
            }
            v41 = v33;
            v43 = v31;
            v42 = v7;
            v44 = v32;
            while ( 1 )
            {
              RotatedPixelOffset = GxpGetRotatedPixelOffset(
                                     v27,
                                     (unsigned int)&v43,
                                     (_DWORD)v3,
                                     (unsigned int)&v41,
                                     (__int64)&v29);
              if ( RotatedPixelOffset < 0 )
                goto LABEL_19;
              memmove((char *)qword_14039D7A0 + v9 * (unsigned int)v29, v26, v9);
              ++v25;
              v26 += v9;
              LODWORD(v27) = v25;
              if ( v25 >= v4[1] )
              {
                v10 = v30;
                v7 = v34;
                goto LABEL_45;
              }
            }
          }
        }
        else if ( v15 )
        {
          v18 = v17;
          v27 = v10;
          v19 = v10;
          v20 = v9 * v34;
          do
          {
            memmove(v12, v8, v18);
            v8 += v19;
            v12 += v20;
            --v15;
          }
          while ( v15 );
          v4 = v29;
          v3 = (_DWORD *)v31;
        }
LABEL_16:
        if ( qword_14039D950 )
          BgfxGrowDirtyRect(v35, v3, v9);
LABEL_18:
        RotatedPixelOffset = 0;
LABEL_19:
        *v4 = HIDWORD(v28);
        v4[1] = v28;
        *v3 = v36[0];
        v3[1] = v36[1];
        return (unsigned int)RotatedPixelOffset;
      }
      if ( BYTE2(BgInternal) != 1 )
      {
        if ( BYTE2(BgInternal) == 2 )
          goto LABEL_10;
        if ( BYTE2(BgInternal) != 3 )
        {
          RotatedPixelOffset = -1073741811;
          goto LABEL_19;
        }
      }
      v16 = *v4;
      v14 = *v4;
      v15 = v4[1];
      v13 = v15;
      goto LABEL_11;
    }
    v22 = 0LL;
    v37[0] = *v4;
    v37[1] = v4[1];
    v27 = 0LL;
    if ( (dword_14039D7F0 & 8) == 0 )
    {
      v39 = v4[3];
      v40 = *((_QWORD *)v4 + 3);
      v38 = xmmword_14039D790;
      goto LABEL_29;
    }
    if ( (dword_14039D7F0 & 0xC00) != 0 )
    {
      v23 = 1LL;
      v27 = (unsigned __int64)v45;
    }
    else
    {
      v23 = 0LL;
    }
    result = BgpGxConvertRectangleEx(v4, 4LL, &v27, v23);
    if ( (int)result >= 0 )
    {
      v22 = (_BYTE *)v27;
      v39 = *(_DWORD *)(v27 + 12);
      v40 = *(_QWORD *)(v27 + 24);
      v38 = 1;
LABEL_29:
      RotatedPixelOffset = ((__int64 (__fastcall *)(_DWORD *, _DWORD *, _QWORD))qword_14039D7A0)(v37, v3, 0LL);
      if ( v22 && v22 != v45 )
        BgpGxRectangleDestroy(v22);
      if ( RotatedPixelOffset < 0 )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
  return result;
}
