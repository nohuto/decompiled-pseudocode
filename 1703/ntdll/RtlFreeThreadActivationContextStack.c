/*
 * XREFs of RtlFreeThreadActivationContextStack @ 0x180078260
 * Callers:
 *     LdrShutdownThread @ 0x1800411F0 (LdrShutdownThread.c)
 * Callees:
 *     RtlFreeActivationContextStack @ 0x1800782F0 (RtlFreeActivationContextStack.c)
 */

__int64 RtlFreeThreadActivationContextStack()
{
  struct _TEB *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  v0 = NtCurrentTeb();
  RtlFreeActivationContextStack(v0->ActivationContextStackPointer);
  v0->ActivationContextStackPointer = 0LL;
  return sub_180078290(v0, v1, v2, v3);
}
