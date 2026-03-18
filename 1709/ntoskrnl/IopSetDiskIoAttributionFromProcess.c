/*
 * XREFs of IopSetDiskIoAttributionFromProcess @ 0x14012BBFC
 * Callers:
 *     IoSetDiskIoAttributionFromThread @ 0x1400668D0 (IoSetDiskIoAttributionFromThread.c)
 *     IoSetIoAttributionIrp @ 0x1401F9B30 (IoSetIoAttributionIrp.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x140008E14 (IopSetDiskIoAttributionExtension.c)
 *     IopReferenceIoAttributionFromProcess @ 0x140020DF8 (IopReferenceIoAttributionFromProcess.c)
 */

__int64 __fastcall IopSetDiskIoAttributionFromProcess(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  result = IopReferenceIoAttributionFromProcess(a2, 1, &v4);
  if ( (int)result >= 0 )
  {
    result = IopSetDiskIoAttributionExtension(a1, v4, (__int64)KeGetCurrentThread(), 0);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
