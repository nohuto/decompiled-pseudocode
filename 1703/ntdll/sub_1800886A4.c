/*
 * XREFs of sub_1800886A4 @ 0x1800886A4
 * Callers:
 *     sub_1800884C4 @ 0x1800884C4 (sub_1800884C4.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EB450 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     ZwPowerInformation @ 0x1800A5ED0 (ZwPowerInformation.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800886A4(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v9, 0, 0x20uLL);
  v9[0] = a2;
  v9[1] = a4;
  v9[2] = a3;
  LODWORD(v9[3]) = 1;
  if ( a1 )
    HIDWORD(v9[3]) |= 1u;
  return ZwPowerInformation(94LL, v9, 32LL);
}
