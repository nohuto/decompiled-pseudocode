/*
 * XREFs of sub_180005554 @ 0x180005554
 * Callers:
 *     sub_1800024A8 @ 0x1800024A8 (sub_1800024A8.c)
 *     sub_1800051E4 @ 0x1800051E4 (sub_1800051E4.c)
 *     sub_1800730D0 @ 0x1800730D0 (sub_1800730D0.c)
 *     sub_180073218 @ 0x180073218 (sub_180073218.c)
 * Callees:
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180005554(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int128 v6; // xmm1
  __int64 v8; // [rsp+20h] [rbp-39h]
  _QWORD v9[12]; // [rsp+30h] [rbp-29h] BYREF

  v8 = *(unsigned __int16 *)(a1 + 20);
  BYTE3(v8) = 1;
  memset(v9, 0, sizeof(v9));
  LODWORD(v9[3]) = -1;
  v6 = *(_OWORD *)(a1 + 56);
  *(_OWORD *)&v9[5] = xmmword_180118FC0;
  v9[0] = 0x6000000007LL;
  *(_OWORD *)&v9[7] = v6;
  v9[10] = v8;
  v9[9] = __PAIR64__(a3, a2);
  HIDWORD(v9[4]) = NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock(v9);
}
