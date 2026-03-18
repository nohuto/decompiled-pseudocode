/*
 * XREFs of PopNewWakeSource @ 0x1406FA840
 * Callers:
 *     PopHandleWakeSources @ 0x140431A40 (PopHandleWakeSources.c)
 *     PopProcessWakeSourceWork @ 0x1406FA890 (PopProcessWakeSourceWork.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall PopNewWakeSource(int a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x206D654Du);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    v3[4] = a1;
  }
  return v3;
}
