/*
 * XREFs of IovpValidateDeviceObject @ 0x1407A5940
 * Callers:
 *     IovCallDriver @ 0x1407A4AE8 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1407A531C (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall IovpValidateDeviceObject(__int64 a1)
{
  return a1 && *(_WORD *)a1 == 3 && *(_QWORD *)(a1 + 8) && *(int *)(a1 + 4) >= 0;
}
