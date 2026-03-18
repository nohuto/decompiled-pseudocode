/*
 * XREFs of UpdateSpriteArea @ 0x1C013534C
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x1C0025A10 (UpdateSprite.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GreConvertMemToRedirectionDC @ 0x1C009ED74 (GreConvertMemToRedirectionDC.c)
 *     GreHintSpriteBlt @ 0x1C013564C (GreHintSpriteBlt.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreConvertRedirectionToMemDC @ 0x1C027F2C4 (GreConvertRedirectionToMemDC.c)
 */

__int64 __fastcall UpdateSpriteArea(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        HDC a4,
        HDC a5,
        __int64 a6,
        __m128i *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 result; // rax
  unsigned int v14; // ecx
  bool v16; // zf
  unsigned int v18; // edx
  __m128i v19; // xmm6
  LONG v20; // eax
  int v21; // r15d
  unsigned int v22; // r14d
  int v23; // edi
  HDC v24; // rdi
  __int64 v25; // r8
  int v26; // [rsp+38h] [rbp-D0h]
  int v27[4]; // [rsp+78h] [rbp-90h] BYREF
  int v28; // [rsp+88h] [rbp-80h]
  unsigned int v29; // [rsp+8Ch] [rbp-7Ch]
  int v30; // [rsp+90h] [rbp-78h]
  int v31; // [rsp+94h] [rbp-74h]
  unsigned int v32; // [rsp+98h] [rbp-70h]
  unsigned int v33; // [rsp+9Ch] [rbp-6Ch]
  struct tagPOINT v34; // [rsp+A0h] [rbp-68h] BYREF
  struct tagSIZE v35; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-58h]
  __int64 v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  HDC v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  __int64 v41; // [rsp+D8h] [rbp-30h]
  struct tagRECT v42; // [rsp+E8h] [rbp-20h] BYREF

  result = 0LL;
  v27[0] = 0;
  v14 = *((_DWORD *)a1 + 32);
  v16 = (*((_BYTE *)a1 + 66) & 8) == 0;
  v37 = a2;
  v18 = *((_DWORD *)a1 + 33);
  v38 = a3;
  v32 = v18;
  v39 = a5;
  v40 = a6;
  v36 = 0LL;
  v33 = v14;
  if ( !v16 && a2 )
  {
    v19 = *a7;
    v35.cx = *((_DWORD *)a1 + 34) - v14;
    v20 = *((_DWORD *)a1 + 35) - v18;
    v42.bottom = v19.m128i_i32[3] - v18;
    v42.top = v19.m128i_i32[1] - v18;
    v42.right = v19.m128i_i32[2] - v14;
    v35.cy = v20;
    v42.left = _mm_cvtsi128_si32(v19) - v14;
    GreOffsetRgn(a6, -v14, -v18);
    v30 = a8 + v19.m128i_i32[2] - a10;
    v28 = a8 + _mm_cvtsi128_si32(v19) - a10;
    v31 = a9 + v19.m128i_i32[3] - a11;
    v29 = a9 + v19.m128i_i32[1] - a11;
    v41 = GreSelectBitmap(a5, a3);
    if ( a5 != a4 )
      v36 = GreSelectBitmap(a4, a2);
    GreHintSpriteBlt((HWND)*a1);
    GreSelectVisRgn(a4, a6, 4LL);
    v21 = GreConvertMemToRedirectionDC(a4, v27);
    v22 = v29;
    v23 = v28;
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(
      *a1,
      *a1,
      v38,
      (unsigned int)v42.left,
      v42.top,
      v42.right,
      v42.bottom,
      *a1,
      *a1,
      v37,
      v28,
      v29,
      v28 + v42.right - v42.left,
      v29 + v42.bottom - v42.top);
    v26 = v23;
    v24 = v39;
    NtGdiBitBltInternal(
      a4,
      v42.left,
      v42.top,
      v42.right - v42.left,
      v42.bottom - v42.top,
      v39,
      v26,
      v22,
      -2134114272,
      0,
      0);
    if ( v21 )
      GreConvertRedirectionToMemDC(a4);
    v34 = (struct tagPOINT)a1[16];
    UpdateSprite(
      *(HDEV *)(gpDispInfo + 32LL),
      (struct tagWND *)a1,
      v25,
      0LL,
      0LL,
      &v35,
      a4,
      &v34,
      0,
      0LL,
      0x40000000u,
      &v42);
    GreSelectVisRgn(a4, v40, 4LL);
    GreOffsetRgn(v40, v33, v32);
    GreSelectBitmap(v24, v41);
    result = v36;
    if ( v36 )
      return GreSelectBitmap(a4, v36);
  }
  return result;
}
