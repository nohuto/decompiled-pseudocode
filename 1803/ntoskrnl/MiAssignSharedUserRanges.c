/*
 * XREFs of MiAssignSharedUserRanges @ 0x14017D65C
 * Callers:
 *     MiInitializeSystemVa @ 0x1408BB130 (MiInitializeSystemVa.c)
 * Callees:
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     RtlFindClearBitsAndSet @ 0x14006C950 (RtlFindClearBitsAndSet.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiAssignSharedUserRanges(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int16 v4; // ax
  __int64 result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v7[6]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v8[64]; // [rsp+68h] [rbp+7h] BYREF

  memset(v7, 0, sizeof(v7));
  memset(v8, 0, sizeof(v8));
  BitMapHeader.SizeOfBitMap = 512;
  BitMapHeader.Buffer = (unsigned int *)v8;
  RtlSetBits(&BitMapHeader, 0, 1u);
  LODWORD(v7[0]) = 0;
  v2 = &v7[1];
  LODWORD(v7[3]) = 1;
  v7[2] = 0x1000000000LL;
  v3 = 2LL;
  v7[5] = 0x80000000LL;
  do
  {
    v4 = ExGenRandom(1);
    *v2 = (RtlFindClearBitsAndSet(&BitMapHeader, ((unsigned __int64)(v2[1] + 0x3FFFFFFFLL) >> 30) + 1, v4 & 0x1FF)
         - 8704LL) << 30;
    v2 += 3;
    --v3;
  }
  while ( v3 );
  qword_1403CBB38 = v7[1];
  qword_1403CBB40 = v7[1];
  qword_1403CBB48 = v7[1];
  qword_1403CBA58 = v7[5];
  qword_1403CBA50 = v7[4];
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2608LL) = v7[4];
  result = qword_1403CBA58;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2616LL) = qword_1403CBA58;
  return result;
}
