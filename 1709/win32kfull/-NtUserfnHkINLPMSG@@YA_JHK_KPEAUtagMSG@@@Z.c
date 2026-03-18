/*
 * XREFs of ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C00A6240
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C00A6150 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 */

__int64 __fastcall NtUserfnHkINLPMSG(int a1, int a2, int a3, struct tagMSG *a4)
{
  struct tagMSG *v6; // r10
  __m128i v7; // xmm2
  __int128 v8; // xmm3
  int v9; // ecx
  __int64 result; // rax
  _BYTE v11[24]; // [rsp+30h] [rbp-58h] BYREF
  __m128i v12; // [rsp+48h] [rbp-40h] BYREF
  __int128 v13; // [rsp+58h] [rbp-30h]
  __int128 v14; // [rsp+68h] [rbp-20h]

  v6 = (struct tagMSG *)MmUserProbeAddress;
  if ( (unsigned __int64)a4 < MmUserProbeAddress )
    v6 = a4;
  v7 = *(__m128i *)v6;
  v12 = *(__m128i *)v6;
  v13 = *((_OWORD *)v6 + 1);
  v8 = *((_OWORD *)v6 + 2);
  v14 = v8;
  if ( a1 == 3 )
  {
    v9 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
    if ( v9 == 576 || v9 == 281 )
    {
      *((_QWORD *)&v13 + 1) = *(_QWORD *)(gptiCurrent + 672LL);
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 680LL);
    }
  }
  result = *(_QWORD *)(gptiCurrent + 664LL);
  if ( !result )
    goto LABEL_12;
  while ( 1 )
  {
    if ( *(_QWORD *)(result + 40) )
    {
      result = *(_QWORD *)(result + 40);
      goto LABEL_9;
    }
    if ( (*(_DWORD *)(result + 64) & 1) != 0 )
      break;
    result = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8LL * (*(_DWORD *)(result + 48) + 1) + 32);
LABEL_9:
    if ( !result || (*(_DWORD *)(result + 64) & 0x80u) == 0 )
      goto LABEL_11;
  }
  LODWORD(result) = 0;
LABEL_11:
  result = xxxCallHook2(result, a2, a3, (unsigned int)&v12, (__int64)v11);
  v8 = v14;
  v7 = v12;
LABEL_12:
  if ( a1 == 3 )
  {
    *(__m128i *)a4 = v7;
    *((_OWORD *)a4 + 1) = v13;
    *((_OWORD *)a4 + 2) = v8;
  }
  return result;
}
