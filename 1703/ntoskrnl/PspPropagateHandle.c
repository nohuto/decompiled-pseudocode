/*
 * XREFs of PspPropagateHandle @ 0x140544FEC
 * Callers:
 *     PspUpdateCreateInfo @ 0x140544DD0 (PspUpdateCreateInfo.c)
 * Callees:
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
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
                           (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process,
                           *a2,
                           (ULONG_PTR)CurrentThread->ApcState.Process,
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
