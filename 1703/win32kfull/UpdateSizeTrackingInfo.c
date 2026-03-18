/*
 * XREFs of UpdateSizeTrackingInfo @ 0x1C01F6198
 * Callers:
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01E1140 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     GetWindowExtendedMargin @ 0x1C00FC110 (GetWindowExtendedMargin.c)
 *     ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C01F0AD0 (-IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z.c)
 */

__int64 __fastcall UpdateSizeTrackingInfo(struct tagWND *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r10
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v9; // rax
  __m128i *v10; // rax
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rcx
  BOOL v14; // ecx
  int v15; // eax
  int v16; // ebx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v6 = *(_QWORD *)(v3 + 592);
  v7 = *(_QWORD *)(v6 + 216);
  if ( *(_QWORD *)(v6 + 200) != v7 )
    return 0LL;
  if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
    && (v9 = *(_QWORD *)(v3 + 408)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 52LL) & 1) != 0 )
  {
    v10 = (__m128i *)(*(_QWORD *)(v7 + 40) + 92LL);
  }
  else if ( (*((_DWORD *)a1 + 92) & 0xF) == 1
         && (v11 = *(_QWORD *)(v3 + 408)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v11 + 8) + 52LL) & 1) != 0 )
  {
    v10 = (__m128i *)(*(_QWORD *)(v7 + 40) + 108LL);
  }
  else
  {
    v10 = (__m128i *)(*(_QWORD *)(v7 + 40) + 76LL);
  }
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(*v10, 8)) - _mm_cvtsi128_si32(*v10);
  if ( IsLeftOrRightArranged(a1) && (unsigned int)GetWindowExtendedMargin(v13, &v17) )
    v12 += WORD1(v17) + (unsigned __int16)v17;
  v14 = 0;
  v15 = v12 - *a3;
  if ( v15 <= 0 )
    return 0LL;
  v16 = v12 - *a2;
  if ( v16 > 0 )
    v14 = v16 > *(_DWORD *)(v6 + 92);
  if ( v15 < *(_DWORD *)(v6 + 96) )
    *(_DWORD *)(v6 + 96) = v15;
  if ( v14 )
    *(_DWORD *)(v6 + 88) = v16;
  return 1LL;
}
