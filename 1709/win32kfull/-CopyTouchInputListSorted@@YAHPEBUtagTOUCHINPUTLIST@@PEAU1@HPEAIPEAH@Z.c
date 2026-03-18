/*
 * XREFs of ?CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x1C01BC810
 * Callers:
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01BCA58 (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall CopyTouchInputListSorted(
        const struct tagTOUCHINPUTLIST *a1,
        struct tagTOUCHINPUTLIST *a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v6; // rdx
  __m128i *v7; // r14
  int v8; // r8d
  unsigned int v9; // r11d
  __m128i v10; // xmm3
  __m128i v11; // xmm2
  __m128i v12; // xmm4
  __int64 v13; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // edi
  unsigned int i; // edx
  __int64 v23; // rbx
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __m128i v30; // [rsp+38h] [rbp-60h]

  v6 = 0LL;
  v7 = (__m128i *)*((_QWORD *)a1 + 1);
  v8 = *((_DWORD *)a1 + 1);
  v9 = 1;
  while ( 2 )
  {
    if ( v8 )
    {
      v10 = *v7;
      v30 = *v7;
      v11 = v7[1];
      v12 = v7[2];
      if ( (v11.m128i_i32[1] & 0xFFFFFF00) != 0 || (_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) & 0xFFFFFFF8) != 0 )
      {
        v13 = 1004LL;
LABEL_5:
        UserSetLastError(v13, v6);
        return 0LL;
      }
      v15 = (_mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) & 0xF) - 4;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
          goto LABEL_15;
        v17 = v16 - 4;
        if ( !v17 )
        {
          v20 = 1;
          goto LABEL_19;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v20 = 2;
          goto LABEL_19;
        }
        if ( (unsigned int)(v18 - 1) < 2 )
        {
LABEL_15:
          v13 = RtlNtStatusToDosError(-1073741811);
          goto LABEL_5;
        }
        v19 = -1;
      }
      else
      {
        v19 = 3;
      }
      if ( v19 == -1 )
        goto LABEL_15;
      v20 = 4;
LABEL_19:
      if ( v9 != v20 )
      {
        if ( v9 == 1 )
        {
          v9 = v20;
        }
        else if ( v20 != 1 )
        {
          goto LABEL_15;
        }
      }
      v21 = *((_DWORD *)a2 + 1);
      for ( i = v21; ; --i )
      {
        if ( !i )
          goto LABEL_31;
        v23 = i - 1;
        v24 = *((_QWORD *)a2 + 1);
        v25 = *(_QWORD *)(v24 + 48 * v23 + 8);
        if ( v30.m128i_i64[1] >= v25
          && (v30.m128i_i64[1] != v25 || v11.m128i_i32[0] >= *(_DWORD *)(v24 + 48 * v23 + 16)) )
        {
          break;
        }
        v26 = 6LL * i;
        *(_OWORD *)(v24 + 8 * v26) = *(_OWORD *)(v24 + 48 * v23);
        *(_OWORD *)(v24 + 8 * v26 + 16) = *(_OWORD *)(v24 + 48 * v23 + 16);
        *(_OWORD *)(v24 + 8 * v26 + 32) = *(_OWORD *)(v24 + 48 * v23 + 32);
      }
      v27 = *((_QWORD *)a2 + 1) + 48LL * (i - 1);
      if ( v30.m128i_i64[1] != *(_QWORD *)(v27 + 8) || v11.m128i_i32[0] != *(_DWORD *)(v27 + 16) )
      {
LABEL_31:
        v28 = 6LL * i;
        v29 = *((_QWORD *)a2 + 1);
        *(__m128i *)(v29 + 8 * v28) = v10;
        *(__m128i *)(v29 + 8 * v28 + 16) = v11;
        *(__m128i *)(v29 + 8 * v28 + 32) = v12;
        *((_DWORD *)a2 + 1) = v21 + 1;
        --v8;
        v7 += 3;
        v6 = 0LL;
        continue;
      }
      goto LABEL_15;
    }
    break;
  }
  if ( a4 )
    *a4 = v9;
  return 1LL;
}
