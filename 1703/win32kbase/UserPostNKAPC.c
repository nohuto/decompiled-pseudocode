/*
 * XREFs of UserPostNKAPC @ 0x1C0055860
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 */

__int64 __fastcall UserPostNKAPC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  char v12; // [rsp+30h] [rbp-18h]

  v9 = Win32AllocPoolNonPaged(96LL, 0x616E7355u);
  v10 = v9;
  if ( v9 )
  {
    v12 = 0;
    KeInitializeApc(v9, a1, 0LL, a2, a3, a4, v12, a5);
    if ( (unsigned __int8)KeInsertQueueApc(v10, v10, 0LL, 0LL) )
      return 1LL;
    Win32FreePool(v10);
  }
  return 0LL;
}
