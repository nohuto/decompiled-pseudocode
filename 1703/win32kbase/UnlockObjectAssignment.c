/*
 * XREFs of UnlockObjectAssignment @ 0x1C0043590
 * Callers:
 *     HMFreeObject @ 0x1C0040150 (HMFreeObject.c)
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00509D8 (DestroyProcessInfo.c)
 *     UserDeleteW32Thread @ 0x1C00D8150 (UserDeleteW32Thread.c)
 * Callees:
 *     <none>
 */

void *__fastcall UnlockObjectAssignment(void **a1)
{
  void *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (void *)ObfDereferenceObject(result);
  }
  return result;
}
