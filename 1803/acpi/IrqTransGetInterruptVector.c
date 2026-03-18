/*
 * XREFs of IrqTransGetInterruptVector @ 0x1C008D6B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     IrqLibAcquireArbiterLock @ 0x1C0056D90 (IrqLibAcquireArbiterLock.c)
 *     IrqLibReleaseArbiterLock @ 0x1C0056E18 (IrqLibReleaseArbiterLock.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C008D95C (IrqTranslatepQueryDeviceIrql.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C008E4A0 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C0090A20 (IrqArbGsivFromIrq.c)
 */

__int64 __fastcall IrqTransGetInterruptVector(__int64 a1, __int64 a2, unsigned int a3, int a4, _BYTE *a5, _QWORD *a6)
{
  __int64 v6; // rsi
  unsigned int v8; // edi
  __int64 v10; // rsi
  int DeviceIdtAssignment; // ebx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = a3;
  memset(v12, 0, 0x20uLL);
  v8 = 0;
  if ( (_DWORD)v6 != a4 )
    return 0LL;
  IrqLibAcquireArbiterLock(0);
  v10 = (unsigned int)IrqArbGsivFromIrq(v6);
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, v10, 0LL, v12);
  IrqLibReleaseArbiterLock();
  if ( DeviceIdtAssignment >= 0 )
  {
    v8 = HIDWORD(v12[2]);
    *a5 = IrqTranslatepQueryDeviceIrql((unsigned int)v10, HIDWORD(v12[2]));
    *a6 = v12[0];
  }
  return v8;
}
