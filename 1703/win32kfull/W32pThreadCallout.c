/*
 * XREFs of W32pThreadCallout @ 0x1C00E1040
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     AllocateW32Thread @ 0x1C00E1134 (AllocateW32Thread.c)
 */

__int64 __fastcall W32pThreadCallout(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  int W32Thread; // edi
  __int64 v7; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v9; // rax
  void *v10; // rsi

  v2 = 0LL;
  if ( !a2 )
  {
    W32Thread = AllocateW32Thread();
    if ( W32Thread < 0 )
    {
      UserSetLastError(8LL);
      return (unsigned int)W32Thread;
    }
  }
  W32Thread = DCompositionThreadCallout(a1, a2);
  if ( W32Thread >= 0 )
  {
    W32Thread = GdiThreadCallout(a1, a2);
    if ( W32Thread >= 0 )
    {
      W32Thread = UserThreadCallout(a1, a2);
      if ( W32Thread >= 0 )
      {
        W32Thread = 0;
        if ( !a2 )
          return (unsigned int)W32Thread;
      }
      if ( !a2 )
      {
        if ( W32Thread >= 0 )
          return (unsigned int)W32Thread;
        GdiThreadCalloutCleanup(a1);
      }
    }
  }
  if ( a2 == 1 || W32Thread < 0 )
  {
    v7 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(a1);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
    vMarkFreeW32Thread(v7);
    v9 = (__int64 *)PsGetThreadWin32Thread(a1);
    if ( v9 )
      v2 = *v9;
    v10 = *(void **)v2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      UserDeleteW32Thread(v2);
    ObfDereferenceObject(v10);
  }
  return (unsigned int)W32Thread;
}
