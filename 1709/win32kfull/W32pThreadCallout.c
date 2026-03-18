/*
 * XREFs of W32pThreadCallout @ 0x1C00F3960
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     AllocateW32Thread @ 0x1C00F3A68 (AllocateW32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall W32pThreadCallout(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdx
  int W32Thread; // esi
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 *ThreadWin32Thread; // rax
  int v11; // edx
  __int64 v12; // rcx
  __int64 *v13; // rax
  void *v14; // rdi

  v2 = 0LL;
  if ( a2 || (W32Thread = AllocateW32Thread(), W32Thread >= 0) )
  {
    W32Thread = DCompositionThreadCallout(a1, a2);
    if ( W32Thread >= 0 )
    {
      W32Thread = GdiThreadCallout(a1, a2);
      if ( W32Thread >= 0 )
      {
        W32Thread = UserThreadCallout(a1, a2);
        if ( W32Thread < 0 )
        {
          if ( !a2 )
            GdiThreadCalloutCleanup(a1);
        }
        else
        {
          W32Thread = 0;
          if ( !a2 )
            return (unsigned int)W32Thread;
        }
      }
    }
    if ( a2 == 1 || W32Thread < 0 )
    {
      v9 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(a1);
        if ( ThreadWin32Thread )
          v9 = *ThreadWin32Thread;
      }
      vMarkFreeW32Thread(v9);
      if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11) )
      {
        v13 = (__int64 *)PsGetThreadWin32Thread(a1);
        if ( v13 )
          v2 = *v13;
      }
      v14 = *(void **)v2;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
        UserDeleteW32Thread(v2);
      ObfDereferenceObject(v14);
    }
  }
  else
  {
    UserSetLastError(a2 + 8, v5);
  }
  return (unsigned int)W32Thread;
}
