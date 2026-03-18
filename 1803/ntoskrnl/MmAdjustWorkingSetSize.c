/*
 * XREFs of MmAdjustWorkingSetSize @ 0x1402539A0
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x14053154C (PspApplyWorkingSetLimitsToProcess.c)
 *     PspApplyWorkingSetLimits @ 0x14077B47C (PspApplyWorkingSetLimits.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x1400C8FB8 (MmAdjustWorkingSetSizeEx.c)
 */

__int64 __fastcall MmAdjustWorkingSetSize(unsigned __int64 a1, unsigned __int64 a2, int a3, char a4)
{
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  return MmAdjustWorkingSetSizeEx(a1, a2, a3, a4, 0, v5);
}
