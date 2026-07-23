/*
 * XREFs of sub_1800E71DC @ 0x1800E71DC
 * Callers:
 *     RtlRestoreBootStatusDefaults @ 0x1800E6DA0 (RtlRestoreBootStatusDefaults.c)
 *     sub_1800E70A4 @ 0x1800E70A4 (sub_1800E70A4.c)
 * Callees:
 *     ZwPowerInformation @ 0x18009B690 (ZwPowerInformation.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __fastcall sub_1800E71DC(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD InputBuffer[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(InputBuffer, 0, 0x20uLL);
  InputBuffer[0] = a2;
  InputBuffer[1] = a4;
  InputBuffer[2] = a3;
  LODWORD(InputBuffer[3]) = 1;
  if ( a1 )
    HIDWORD(InputBuffer[3]) |= 1u;
  return ZwPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
}
