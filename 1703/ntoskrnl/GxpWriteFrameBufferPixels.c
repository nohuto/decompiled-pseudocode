/*
 * XREFs of GxpWriteFrameBufferPixels @ 0x140140AAC
 * Callers:
 *     BgpGxDrawRectangle @ 0x140140A34 (BgpGxDrawRectangle.c)
 * Callees:
 *     GxpAdjustRectangleToFrameBuffer @ 0x140140C9C (GxpAdjustRectangleToFrameBuffer.c)
 *     BgpGetBitsPerPixel @ 0x140140DD4 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x14014141C (BgpGxConvertRectangleEx.c)
 *     BgfxGrowDirtyRect @ 0x14015F0AC (BgfxGrowDirtyRect.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     GxpGetRotatedPixelOffset @ 0x140266408 (GxpGetRotatedPixelOffset.c)
 *     BgpGxRectangleDestroy @ 0x140757D34 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall GxpWriteFrameBufferPixels(unsigned int *a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  unsigned int *v3; // rdi
  unsigned int BitsPerPixel; // r15d
  __int64 result; // rax
  int v6; // r11d
  char *v7; // r12
  unsigned int v8; // r15d
  unsigned int v9; // r10d
  __int64 v10; // rsi
  char *v11; // rsi
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // eax
  size_t v17; // r13
  __int64 v18; // r14
  __int64 v19; // rdi
  int RotatedPixelOffset; // ebx
  _BYTE *v21; // rsi
  _BYTE *v22; // rax
  unsigned int v23; // esi
  unsigned int v24; // r13d
  char *v25; // r12
  _BYTE *v26; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int *v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v29; // [rsp+48h] [rbp-B8h]
  int v30; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+60h] [rbp-A0h]
  unsigned int v33; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v34; // [rsp+6Ch] [rbp-94h]
  int v35; // [rsp+70h] [rbp-90h]
  _DWORD v36[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v37; // [rsp+80h] [rbp-80h] BYREF
  int v38; // [rsp+88h] [rbp-78h]
  _DWORD v39[2]; // [rsp+90h] [rbp-70h] BYREF
  int v40; // [rsp+98h] [rbp-68h]
  unsigned int v41; // [rsp+9Ch] [rbp-64h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  _DWORD v43[6]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+C0h] [rbp-40h] BYREF
  int v45; // [rsp+C8h] [rbp-38h]
  _BYTE v46[80]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = a2;
  v29 = (unsigned __int64)a2;
  v3 = a1;
  v27 = a1;
  BitsPerPixel = BgpGetBitsPerPixel();
  v37 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v31 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v32 = HIDWORD(BgInternal);
  if ( !v3 || !v3[1] || !*v3 || v3[2] != BitsPerPixel || !v2 )
    return 3221225485LL;
  if ( (dword_140341A30 & 2) == 0 )
    return 3221225473LL;
  result = GxpAdjustRectangleToFrameBuffer(
             (_DWORD)v3,
             (_DWORD)v2,
             (unsigned int)&v31,
             (unsigned int)v43,
             (__int64)v36,
             1);
  if ( (int)result >= 0 )
  {
    if ( (_BYTE)BgInternal )
    {
      v6 = v32;
      v7 = (char *)*((_QWORD *)v3 + 3);
      v8 = BitsPerPixel >> 3;
      v9 = v8 * v43[0];
      v10 = v8 * (*v2 + v32 * v2[1]);
      v28 = v8 * v43[0];
      v11 = (char *)qword_1403419E0 + v10;
      if ( !BYTE2(BgInternal) )
      {
LABEL_10:
        v12 = *v3;
        v13 = *v3;
        v14 = v3[1];
        v15 = v14;
        v34 = *v3;
LABEL_11:
        v16 = v8 * v15;
        v33 = v16;
        v35 = v8 * v32;
        if ( BYTE2(BgInternal) )
        {
          v23 = 0;
          v29 = __PAIR64__(v12, v14);
          HIDWORD(v26) = 0;
          if ( v12 )
          {
            while ( 1 )
            {
              v24 = 0;
              LODWORD(v26) = 0;
              v25 = (char *)(*((_QWORD *)v3 + 3) + v9 * v23);
              if ( v3[1] )
                break;
LABEL_44:
              HIDWORD(v26) = ++v23;
              if ( v23 >= *v3 )
                goto LABEL_16;
            }
            v44 = v31;
            v37 = v29;
            v45 = v6;
            v38 = v30;
            while ( 1 )
            {
              RotatedPixelOffset = GxpGetRotatedPixelOffset(
                                     (_DWORD)v26,
                                     (unsigned int)&v37,
                                     (_DWORD)v2,
                                     (unsigned int)&v44,
                                     (__int64)&v27);
              if ( RotatedPixelOffset < 0 )
                goto LABEL_19;
              memmove((char *)qword_1403419E0 + v8 * (unsigned int)v27, v25, v8);
              ++v24;
              v25 += v8;
              LODWORD(v26) = v24;
              if ( v24 >= v3[1] )
              {
                v9 = v28;
                v6 = v32;
                goto LABEL_44;
              }
            }
          }
        }
        else if ( v13 )
        {
          v17 = v16;
          v26 = (_BYTE *)v9;
          v18 = v9;
          v19 = v8 * v32;
          do
          {
            memmove(v11, v7, v17);
            v7 += v18;
            v11 += v19;
            --v13;
          }
          while ( v13 );
          v3 = v27;
          v2 = (_DWORD *)v29;
        }
LABEL_16:
        if ( qword_140341B80 )
          BgfxGrowDirtyRect(&v33, v2, v8);
LABEL_18:
        RotatedPixelOffset = 0;
LABEL_19:
        *v3 = v43[1];
        v3[1] = v43[0];
        *v2 = v36[0];
        v2[1] = v36[1];
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
      v14 = v3[1];
      v13 = v14;
      v12 = *v3;
      v15 = *v3;
      v34 = v14;
      goto LABEL_11;
    }
    v21 = 0LL;
    v39[0] = *v3;
    v39[1] = v3[1];
    if ( (dword_140341A30 & 8) == 0 )
    {
      v41 = v3[3];
      v42 = *((_QWORD *)v3 + 3);
      v40 = xmmword_1403419D0;
      goto LABEL_28;
    }
    v22 = v46;
    if ( (dword_140341A30 & 0xC00) == 0 )
      v22 = 0LL;
    v26 = v22;
    result = BgpGxConvertRectangleEx(v3, 4LL, &v26, (dword_140341A30 & 0xC00) != 0);
    if ( (int)result >= 0 )
    {
      v21 = v26;
      v41 = *((_DWORD *)v26 + 3);
      v42 = *((_QWORD *)v26 + 3);
      v40 = 1;
LABEL_28:
      RotatedPixelOffset = ((__int64 (__fastcall *)(_DWORD *, _DWORD *, _QWORD))qword_1403419E0)(v39, v2, 0LL);
      if ( v21 && v21 != v46 )
        BgpGxRectangleDestroy(v21);
      if ( RotatedPixelOffset < 0 )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
  return result;
}
