/*
 * XREFs of _ThreadMessageQueueAttached @ 0x1C004CDF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall ThreadMessageQueueAttached(int a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  v1 = 0;
  if ( gptiCurrent )
  {
    *(_DWORD *)(gptiCurrent + 1096LL) &= ~0x200u;
    if ( !a1 )
    {
      LOBYTE(v1) = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 344LL) > 1u;
      return v1;
    }
    v3 = PtiFromThreadId();
    if ( v3 )
    {
      LOBYTE(v1) = *(_QWORD *)(gptiCurrent + 384LL) == *(_QWORD *)(v3 + 384);
      return v1;
    }
    UserSetLastError(87LL);
  }
  return 0LL;
}
