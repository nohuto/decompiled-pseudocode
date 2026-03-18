/*
 * XREFs of ValidateHmenu @ 0x1C007D5D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C007D620 (HMValidateHandle.c)
 */

__int64 __fastcall ValidateHmenu(void *a1)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = HMValidateHandle(a1);
  if ( result )
  {
    if ( *(_QWORD *)(result + 24) != *(_QWORD *)(ThreadWin32Thread + 432) )
    {
      UserSetLastError(1401);
      return 0LL;
    }
  }
  return result;
}
