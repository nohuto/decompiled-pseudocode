/*
 * XREFs of NtGdiFlushUserBatch @ 0x1C0078C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void NtGdiFlushUserBatch()
{
  __int64 v0; // rdx
  DC *v1; // r8
  __int64 v2; // r9

  if ( (unsigned int)GreStackExpansionRequired(0x2000LL) )
    KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)NtGdiFlushUserBatchInternal, 0LL, 0x2000uLL, 1u, 0LL);
  else
    NtGdiFlushUserBatchInternal(0LL, v0, v1, v2);
}
