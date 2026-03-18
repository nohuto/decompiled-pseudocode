/*
 * XREFs of GxpWriteFrameBufferPixels @ 0x14013BD50
 * Callers:
 *     BgpGxDrawRectangle @ 0x14013BCD8 (BgpGxDrawRectangle.c)
 * Callees:
 *     GxpAdjustRectangleToFrameBuffer @ 0x14013BF44 (GxpAdjustRectangleToFrameBuffer.c)
 *     BgpGetBitsPerPixel @ 0x14013C074 (BgpGetBitsPerPixel.c)
 *     BgfxGrowDirtyRect @ 0x14013C09C (BgfxGrowDirtyRect.c)
 *     BgpGxConvertRectangleEx @ 0x14013C748 (BgpGxConvertRectangleEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     GxpGetRotatedPixelOffset @ 0x140290720 (GxpGetRotatedPixelOffset.c)
 *     BgpGxRectangleDestroy @ 0x1407CFF98 (BgpGxRectangleDestroy.c)
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
  unsigned __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int *v28; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v29; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v30; // [rsp+58h] [rbp-A8h]
  int v31; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  int v33; // [rsp+70h] [rbp-90h]
  unsigned int v34; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v35; // [rsp+7Ch] [rbp-84h]
  int v36; // [rsp+80h] [rbp-80h]
  _DWORD v37[2]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v38[2]; // [rsp+90h] [rbp-70h] BYREF
  int v39; // [rsp+98h] [rbp-68h]
  unsigned int v40; // [rsp+9Ch] [rbp-64h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v42; // [rsp+B0h] [rbp-50h] BYREF
  int v43; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v44; // [rsp+C0h] [rbp-40h] BYREF
  int v45; // [rsp+C8h] [rbp-38h]
  _BYTE v46[80]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = a2;
  v30 = (unsigned __int64)a2;
  v3 = a1;
  v28 = a1;
  BitsPerPixel = BgpGetBitsPerPixel();
  v27 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v32 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v33 = HIDWORD(BgInternal);
  if ( !v3 || !v3[1] || !*v3 || v3[2] != BitsPerPixel || !v2 )
    return 3221225485LL;
  if ( (dword_14035A1B0 & 2) == 0 )
    return 3221225473LL;
  result = GxpAdjustRectangleToFrameBuffer(
             (_DWORD)v3,
             (_DWORD)v2,
             (unsigned int)&v32,
             (unsigned int)&v27,
             (__int64)v37,
             1);
  if ( (int)result >= 0 )
  {
    if ( (_BYTE)BgInternal )
    {
      v6 = v33;
      v7 = (char *)*((_QWORD *)v3 + 3);
      v8 = BitsPerPixel >> 3;
      v9 = v8 * v27;
      v10 = v8 * (*v2 + v33 * v2[1]);
      v29 = v8 * v27;
      v11 = (char *)qword_14035A160 + v10;
      if ( !BYTE2(BgInternal) )
      {
LABEL_10:
        v12 = *v3;
        v13 = *v3;
        v14 = v3[1];
        v15 = v14;
        v35 = *v3;
LABEL_11:
        v16 = v8 * v15;
        v34 = v16;
        v36 = v8 * v33;
        if ( BYTE2(BgInternal) )
        {
          v23 = 0;
          v30 = __PAIR64__(v12, v14);
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
            v42 = v32;
            v44 = v30;
            v43 = v6;
            v45 = v31;
            while ( 1 )
            {
              RotatedPixelOffset = GxpGetRotatedPixelOffset(
                                     v26,
                                     (unsigned int)&v44,
                                     (_DWORD)v2,
                                     (unsigned int)&v42,
                                     (__int64)&v28);
              if ( RotatedPixelOffset < 0 )
                goto LABEL_19;
              memmove((char *)qword_14035A160 + v8 * (unsigned int)v28, v25, v8);
              ++v24;
              v25 += v8;
              LODWORD(v26) = v24;
              if ( v24 >= v3[1] )
              {
                v9 = v29;
                v6 = v33;
                goto LABEL_44;
              }
            }
          }
        }
        else if ( v13 )
        {
          v17 = v16;
          v26 = v9;
          v18 = v9;
          v19 = v8 * v33;
          do
          {
            memmove(v11, v7, v17);
            v7 += v18;
            v11 += v19;
            --v13;
          }
          while ( v13 );
          v3 = v28;
          v2 = (_DWORD *)v30;
        }
LABEL_16:
        if ( qword_14035A300 )
          BgfxGrowDirtyRect(&v34, v2, v8);
LABEL_18:
        RotatedPixelOffset = 0;
LABEL_19:
        *v3 = HIDWORD(v27);
        v3[1] = v27;
        *v2 = v37[0];
        v2[1] = v37[1];
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
      v35 = v14;
      goto LABEL_11;
    }
    v21 = 0LL;
    v38[0] = *v3;
    v38[1] = v3[1];
    if ( (dword_14035A1B0 & 8) == 0 )
    {
      v40 = v3[3];
      v41 = *((_QWORD *)v3 + 3);
      v39 = xmmword_14035A150;
      goto LABEL_28;
    }
    v22 = v46;
    if ( (dword_14035A1B0 & 0xC00) == 0 )
      v22 = 0LL;
    v26 = (unsigned __int64)v22;
    result = BgpGxConvertRectangleEx(v3, 4LL, &v26, (dword_14035A1B0 & 0xC00) != 0);
    if ( (int)result >= 0 )
    {
      v21 = (_BYTE *)v26;
      v40 = *(_DWORD *)(v26 + 12);
      v41 = *(_QWORD *)(v26 + 24);
      v39 = 1;
LABEL_28:
      RotatedPixelOffset = ((__int64 (__fastcall *)(_DWORD *, _DWORD *, _QWORD))qword_14035A160)(v38, v2, 0LL);
      if ( v21 && v21 != v46 )
        BgpGxRectangleDestroy(v21);
      if ( RotatedPixelOffset < 0 )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
  return result;
}
