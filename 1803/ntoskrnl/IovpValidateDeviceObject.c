/*
 * XREFs of IovpValidateDeviceObject @ 0x140812910
 * Callers:
 *     IovCallDriver @ 0x140811AB4 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1408122EC (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall IovpValidateDeviceObject(__int64 a1)
{
  return a1 && *(_WORD *)a1 == 3 && *(_QWORD *)(a1 + 8) && *(int *)(a1 + 4) >= 0;
}
