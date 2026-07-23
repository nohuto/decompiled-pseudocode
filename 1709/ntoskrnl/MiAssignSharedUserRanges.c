/*
 * XREFs of MiAssignSharedUserRanges @ 0x140143C30
 * Callers:
 *     MiInitializeSystemVa @ 0x14083959C (MiInitializeSystemVa.c)
 * Callees:
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     RtlFindClearBitsAndSet @ 0x1400BB560 (RtlFindClearBitsAndSet.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiAssignSharedUserRanges(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int16 v4; // ax
  __int64 result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+28h] [rbp-39h] BYREF
  int v7; // [rsp+38h] [rbp-29h]
  _DWORD v8[11]; // [rsp+3Ch] [rbp-25h] BYREF
  _BYTE v9[64]; // [rsp+68h] [rbp+7h] BYREF

  memset(v8, 0, sizeof(v8));
  memset(v9, 0, sizeof(v9));
  BitMapHeader.SizeOfBitMap = 512;
  BitMapHeader.Buffer = (unsigned int *)v9;
  RtlSetBits(&BitMapHeader, 0, 1u);
  v7 = 0;
  v2 = &v8[1];
  v8[5] = 1;
  *(_QWORD *)&v8[3] = 0x1000000000LL;
  v3 = 2LL;
  *(_QWORD *)&v8[9] = 0x80000000LL;
  do
  {
    v4 = ExGenRandom(1);
    *v2 = (RtlFindClearBitsAndSet(&BitMapHeader, ((unsigned __int64)(v2[1] + 0x3FFFFFFFLL) >> 30) + 1, v4 & 0x1FF)
         - 8704LL) << 30;
    v2 += 3;
    --v3;
  }
  while ( v3 );
  qword_140388938 = *(_QWORD *)&v8[1];
  qword_140388940 = *(_QWORD *)&v8[1];
  qword_140388948 = *(_QWORD *)&v8[1];
  qword_140388858 = *(_QWORD *)&v8[9];
  qword_140388850 = *(_QWORD *)&v8[7];
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2608LL) = *(_QWORD *)&v8[7];
  result = qword_140388858;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2616LL) = qword_140388858;
  return result;
}
