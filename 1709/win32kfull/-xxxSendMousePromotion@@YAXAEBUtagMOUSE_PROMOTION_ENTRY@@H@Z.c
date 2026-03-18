/*
 * XREFs of ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01E20A8
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01E1B50 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall xxxSendMousePromotion(const struct tagMOUSE_PROMOTION_ENTRY *a1, int a2)
{
  unsigned int v2; // r9d
  int v5; // edx
  int v6; // edi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // xmm0_8
  unsigned __int64 v9; // r8
  __int64 v10; // rsi
  LARGE_INTEGER PerformanceCounter; // r10
  int v12; // r8d
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // r9d
  int v19; // r8d
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // edx
  char v23; // cl
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  __int64 v28; // [rsp+30h] [rbp-20h] BYREF
  __int128 v29; // [rsp+38h] [rbp-18h]

  v2 = *((_DWORD *)a1 + 3);
  v28 = 0LL;
  *(_QWORD *)&v29 = 0LL;
  v5 = *((_DWORD *)a1 + 2);
  v6 = 1;
  LODWORD(v28) = 262142;
  DWORD1(v29) = v5;
  *((_QWORD *)&v29 + 1) = v2;
  v7 = *(_QWORD *)(*gpDispInfo + 24LL);
  v8 = _mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8).m128i_u64[0];
  if ( (_DWORD)v8 != (_DWORD)v7 )
    DWORD1(v29) = 0xFFFF * (v5 - (int)v7) / ((int)v8 - (int)v7) + 1;
  v9 = HIDWORD(v7);
  if ( HIDWORD(v8) != (_DWORD)v9 )
    DWORD2(v29) = (int)(0xFFFF * (v2 - v9)) / (HIDWORD(v8) - (int)v9) + 1;
  v10 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = ((_DWORD)v10 << 8) - (*((_DWORD *)a1 + 6) << 8);
  v13 = *((_DWORD *)a1 + 4);
  if ( v13 == 3 )
  {
    v14 = *((unsigned __int16 *)a1 + 20);
    WORD1(v28) |= 0x40u;
    v15 = v12 | v14;
    v16 = *((_DWORD *)a1 + 11);
    HIDWORD(v29) = v15;
    if ( (v16 & 0x40) != 0 )
      HIDWORD(v29) = v15 | 0x80;
  }
  else if ( v13 == 2 )
  {
    v17 = *((unsigned __int16 *)a1 + 20);
    WORD1(v28) |= 0x10u;
    HIDWORD(v29) = v12 | v17 | 0x80;
  }
  v18 = *((_DWORD *)a1 + 11);
  v19 = 0;
  v20 = 0;
  if ( *(_DWORD *)(gpsi + 1972LL) )
    LOBYTE(v20) = (*((_DWORD *)a1 + 11) & 1) == 0;
  else
    LOBYTE(v20) = (*((_DWORD *)a1 + 11) & 1) != 0;
  v21 = *((_DWORD *)a1 + 5);
  if ( (v21 & 0x40000) != 0 )
  {
    WORD2(v28) |= v20 != 0 ? 2 : 8;
    v19 = (v21 >> 15) & 1;
  }
  else if ( (v21 & 0x10000) != 0 )
  {
    WORD2(v28) |= v20 != 0 ? 1 : 4;
  }
  v22 = *((_DWORD *)a1 + 2);
  if ( gptCursorAsync[0] != v22 || (v23 = 0, gptCursorAsync[1] != *((_DWORD *)a1 + 3)) )
    v23 = 1;
  if ( (v18 & 2) != 0 && (!gbEnforceUIPI || (v18 & 4) == 0) )
    v6 = 0;
  if ( v23 )
  {
    v24 = 8246;
    DWORD2(v29) = *((_DWORD *)a1 + 3);
    DWORD1(v29) = v22;
  }
  else
  {
    v24 = 56;
    *(_QWORD *)((char *)&v29 + 4) = 0LL;
  }
  v25 = v24 | 0x101;
  if ( !a2 )
    v25 = v24;
  v26 = v25 | 0x1000;
  if ( !v19 )
    v26 = v25;
  v27 = v26 | 0x40;
  if ( !v6 )
    v27 = v26;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
    0LL,
    &v28,
    v10,
    (LARGE_INTEGER)PerformanceCounter.QuadPart,
    v27);
}
