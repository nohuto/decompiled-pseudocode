/*
 * XREFs of CmpDummyThreadRoutine @ 0x140655880
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __noreturn CmpDummyThreadRoutine()
{
  NTSTATUS v0; // eax

  v0 = KeWaitForSingleObject(&CmpDummyThreadEvent, Executive, 0, 0, 0LL);
  KeBugCheckEx(0x51u, 0x23uLL, v0, 0LL, 0LL);
}
