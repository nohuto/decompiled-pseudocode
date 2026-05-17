/*
 * XREFs of sub_1800E71DC @ 0x1800E71DC
 * Callers:
 *     RtlRestoreBootStatusDefaults @ 0x1800E6DA0 (RtlRestoreBootStatusDefaults.c)
 *     sub_1800E70A4 @ 0x1800E70A4 (sub_1800E70A4.c)
 * Callees:
 *     ZwPowerInformation @ 0x18009B690 (ZwPowerInformation.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800E71DC(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v9[4]; // [rsp+30h] [rbp-28h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[0] = a2;
  v9[1] = a4;
  v9[2] = a3;
  LODWORD(v9[3]) = 1;
  if ( a1 )
    HIDWORD(v9[3]) |= 1u;
  return ZwPowerInformation();
}
