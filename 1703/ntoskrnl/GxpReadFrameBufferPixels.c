/*
 * XREFs of GxpReadFrameBufferPixels @ 0x1407561CC
 * Callers:
 *     BgpGxReadRectangle @ 0x14075615C (BgpGxReadRectangle.c)
 * Callees:
 *     BgpGetResolution @ 0x14003C760 (BgpGetResolution.c)
 *     GxpAdjustRectangleToFrameBuffer @ 0x140140C9C (GxpAdjustRectangleToFrameBuffer.c)
 *     BgpGetBitsPerPixel @ 0x140140DD4 (BgpGetBitsPerPixel.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     GxpGetRotatedPixelOffset @ 0x140266408 (GxpGetRotatedPixelOffset.c)
 */

__int64 __fastcall GxpReadFrameBufferPixels(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // r14d
  _DWORD *Resolution; // rax
  int v6; // r9d
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // edx
  __int64 result; // rax
  __int64 v11; // r8
  unsigned int v12; // r13d
  char *v13; // r12
  unsigned int v14; // r15d
  char *v15; // rbx
  size_t v16; // r13
  __int64 v17; // rsi
  unsigned int v18; // r15d
  unsigned int v19; // r13d
  __int64 v20; // [rsp+30h] [rbp-59h] BYREF
  char *v21; // [rsp+38h] [rbp-51h]
  __int64 v22; // [rsp+40h] [rbp-49h] BYREF
  int v23; // [rsp+48h] [rbp-41h]
  __int64 v24; // [rsp+50h] [rbp-39h] BYREF
  int v25; // [rsp+58h] [rbp-31h]
  __int64 v26; // [rsp+60h] [rbp-29h] BYREF
  int v27; // [rsp+68h] [rbp-21h]
  __int64 v28; // [rsp+70h] [rbp-19h] BYREF
  int v29; // [rsp+78h] [rbp-11h]
  _DWORD v30[4]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v31; // [rsp+90h] [rbp+7h]
  int RotatedPixelOffset; // [rsp+F0h] [rbp+67h]
  int v34; // [rsp+100h] [rbp+77h] BYREF
  unsigned __int64 v35; // [rsp+108h] [rbp+7Fh]

  v2 = a2;
  v4 = (unsigned int)BgpGetBitsPerPixel() >> 3;
  Resolution = BgpGetResolution(&v28);
  v7 = Resolution[2];
  v22 = *(_QWORD *)Resolution;
  v23 = v7;
  if ( !a1 )
    return 3221225485LL;
  v8 = *(_DWORD *)(a1 + 4);
  if ( !v8 )
    return 3221225485LL;
  v9 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1
    || *(_DWORD *)(a1 + 8) != v6
    || !v2
    || v8 + *(_DWORD *)v2 > (unsigned int)v22
    || v9 + *(_DWORD *)(v2 + 4) > HIDWORD(v22) )
  {
    return 3221225485LL;
  }
  if ( (dword_140341A30 & 8) != 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(a1 + 12) < v4 * v8 * v9 )
    return 3221225507LL;
  if ( (dword_140341A30 & 2) == 0 )
    return 3221225473LL;
  result = GxpAdjustRectangleToFrameBuffer(
             (unsigned int *)a1,
             (__int64 *)v2,
             (unsigned int *)&v22,
             (unsigned int *)&v24,
             &v20,
             0);
  if ( (int)result >= 0 )
  {
    v12 = 0;
    RotatedPixelOffset = 0;
    if ( !(_BYTE)BgInternal )
    {
      v30[0] = *(_DWORD *)a1;
      LOBYTE(v11) = 1;
      v30[1] = *(_DWORD *)(a1 + 4);
      v30[3] = *(_DWORD *)(a1 + 12);
      v30[2] = xmmword_1403419D0;
      v31 = *(_QWORD *)(a1 + 24);
      v12 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64))qword_1403419E0)(v30, v2, v11);
      goto LABEL_19;
    }
    v13 = *(char **)(a1 + 24);
    v21 = (char *)qword_1403419E0;
    if ( BYTE2(BgInternal) )
    {
      v18 = 0;
      HIDWORD(v35) = 0;
      if ( !*(_DWORD *)a1 )
        goto LABEL_19;
      while ( 1 )
      {
        v19 = 0;
        LODWORD(v35) = 0;
        if ( *(_DWORD *)(a1 + 4) )
          break;
LABEL_30:
        HIDWORD(v35) = ++v18;
        if ( v18 >= *(_DWORD *)a1 )
          goto LABEL_18;
      }
      v26 = v22;
      v27 = v23;
      v28 = v24;
      v29 = v25;
      while ( 1 )
      {
        RotatedPixelOffset = GxpGetRotatedPixelOffset(v35, (int *)&v28, (_DWORD *)v2, (__int64)&v26, &v34);
        if ( RotatedPixelOffset < 0 )
          break;
        memmove(v13, &v21[v4 * v34], v4);
        v13 += v4;
        LODWORD(v35) = ++v19;
        if ( v19 >= *(_DWORD *)(a1 + 4) )
          goto LABEL_30;
      }
    }
    else
    {
      v14 = *(_DWORD *)a1;
      v15 = (char *)qword_1403419E0 + v4 * (*(_DWORD *)v2 + v23 * *(_DWORD *)(v2 + 4));
      if ( !*(_DWORD *)a1 )
      {
LABEL_19:
        *(_DWORD *)a1 = HIDWORD(v24);
        *(_DWORD *)(a1 + 4) = v24;
        *(_QWORD *)v2 = v20;
        return v12;
      }
      v16 = v4 * *(_DWORD *)(a1 + 4);
      v17 = v4 * v23;
      do
      {
        memmove(v13, v15, v16);
        v15 += v17;
        v13 += v4 * *(_DWORD *)(a1 + 4);
        --v14;
      }
      while ( v14 );
      v2 = a2;
    }
LABEL_18:
    v12 = RotatedPixelOffset;
    goto LABEL_19;
  }
  return result;
}
