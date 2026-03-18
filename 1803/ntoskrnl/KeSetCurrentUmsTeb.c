/*
 * XREFs of KeSetCurrentUmsTeb @ 0x14024CEB0
 * Callers:
 *     KeUnInitializeUmsThread @ 0x140742CE8 (KeUnInitializeUmsThread.c)
 *     KiSwapToUmsThread @ 0x140742F20 (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1407801FC (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KeSetCurrentUmsTeb(struct _KTHREAD *CurrentThread, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
  {
    result = a2;
    __writemsr(0xC0000102, a2);
  }
  return result;
}
