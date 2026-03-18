/*
 * XREFs of UnlockObjectAssignment @ 0x1C003C740
 * Callers:
 *     HMFreeObject @ 0x1C003E4A0 (HMFreeObject.c)
 *     UserDeleteW32Thread @ 0x1C007DB50 (UserDeleteW32Thread.c)
 *     DestroyProcessInfo @ 0x1C009CD88 (DestroyProcessInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
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
