/*
 * XREFs of UpdateSpriteArea @ 0x1C00E4894
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     UpdateSprite @ 0x1C00923FC (UpdateSprite.c)
 *     GreHintSpriteBlt @ 0x1C00E4BB4 (GreHintSpriteBlt.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00E6448 (GreConvertMemToRedirectionDC.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GreConvertRedirectionToMemDC @ 0x1C027BDF4 (GreConvertRedirectionToMemDC.c)
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
  HDC v22; // rdi
  __int64 v23; // r8
  int v24; // [rsp+88h] [rbp-80h]
  unsigned int v25; // [rsp+98h] [rbp-70h]
  unsigned int v26; // [rsp+9Ch] [rbp-6Ch]
  struct tagPOINT v27; // [rsp+A0h] [rbp-68h] BYREF
  struct tagSIZE v28; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-58h]
  __int64 v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  HDC v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  __int64 v34; // [rsp+D8h] [rbp-30h]
  struct tagRECT v35; // [rsp+E8h] [rbp-20h] BYREF

  result = 0LL;
  v14 = *((_DWORD *)a1 + 32);
  v16 = (*((_BYTE *)a1 + 66) & 8) == 0;
  v30 = a2;
  v18 = *((_DWORD *)a1 + 33);
  v31 = a3;
  v25 = v18;
  v32 = a5;
  v33 = a6;
  v29 = 0LL;
  v26 = v14;
  if ( !v16 && a2 )
  {
    v19 = *a7;
    v28.cx = *((_DWORD *)a1 + 34) - v14;
    v20 = *((_DWORD *)a1 + 35) - v18;
    v35.bottom = v19.m128i_i32[3] - v18;
    v35.top = v19.m128i_i32[1] - v18;
    v35.right = v19.m128i_i32[2] - v14;
    v28.cy = v20;
    v35.left = _mm_cvtsi128_si32(v19) - v14;
    GreOffsetRgn(a6, -v14, -v18);
    v24 = a8 + _mm_cvtsi128_si32(v19) - a10;
    v34 = GreSelectBitmap(a5, a3);
    if ( a5 != a4 )
      v29 = GreSelectBitmap(a4, a2);
    GreHintSpriteBlt((HWND)*a1);
    GreSelectVisRgn(a4, a6, 4LL);
    v21 = GreConvertMemToRedirectionDC(a4);
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(*a1, *a1, v31);
    v22 = v32;
    NtGdiBitBltInternal(
      a4,
      v35.left,
      v35.top,
      v35.right - v35.left,
      v35.bottom - v35.top,
      v32,
      v24,
      a9 + v19.m128i_i32[1] - a11,
      -2134114272,
      0,
      0);
    if ( v21 )
      GreConvertRedirectionToMemDC(a4);
    v27 = (struct tagPOINT)a1[16];
    UpdateSprite(
      *(HDEV *)(gpDispInfo + 32LL),
      (struct tagWND *)a1,
      v23,
      0LL,
      0LL,
      &v28,
      a4,
      &v27,
      0,
      0LL,
      0x40000000u,
      &v35);
    GreSelectVisRgn(a4, v33, 4LL);
    GreOffsetRgn(v33, v26, v25);
    GreSelectBitmap(v22, v34);
    result = v29;
    if ( v29 )
      return GreSelectBitmap(a4, v29);
  }
  return result;
}
