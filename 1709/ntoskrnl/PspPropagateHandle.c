/*
 * XREFs of PspPropagateHandle @ 0x14053B49C
 * Callers:
 *     PspUpdateCreateInfo @ 0x14053B280 (PspUpdateCreateInfo.c)
 * Callees:
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 */

__int64 __fastcall PspPropagateHandle(char a1, void **a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // r9d

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( a1 )
  {
    return (unsigned int)ObDuplicateObject(
                           (ULONG_PTR)CurrentThread->ApcState.Process,
                           *a2,
                           CurrentThread->ApcState.Process,
                           a3,
                           0,
                           0,
                           2,
                           0);
  }
  else
  {
    *a3 = (__int64)*a2;
    *a2 = 0LL;
  }
  return v4;
}
