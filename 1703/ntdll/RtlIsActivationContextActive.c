/*
 * XREFs of RtlIsActivationContextActive @ 0x1800E04C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlIsActivationContextActive(__int64 a1)
{
  struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *i; // rax

  for ( i = NtCurrentTeb()->ActivationContextStackPointer->ActiveFrame;
        i;
        i = *(struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME **)i )
  {
    if ( *((_QWORD *)i + 1) == a1 )
    {
      LOBYTE(i) = 1;
      return (char)i;
    }
  }
  return (char)i;
}
