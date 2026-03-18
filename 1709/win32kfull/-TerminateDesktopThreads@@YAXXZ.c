/*
 * XREFs of ?TerminateDesktopThreads@@YAXXZ @ 0x1C00D7100
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00D7298 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     IPostQuitMessage @ 0x1C00D7230 (IPostQuitMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
void TerminateDesktopThreads(void)
{
  ULONG v0; // ebx
  PVOID *v1; // rcx
  __int64 v2; // rcx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v4; // [rsp+48h] [rbp-10h]
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  v1 = (PVOID *)gTermIO[2];
  if ( v1 )
  {
    Object = *v1;
    ObfReferenceObject(Object);
    v0 = 1;
    if ( gTermIO[7] )
    {
      LODWORD(gTermIO[0]) |= 8u;
      KeSetEvent((PRKEVENT)gTermIO[7], 1, 0);
    }
    else
    {
      IPostQuitMessage(gTermIO[2], 0LL);
    }
    gdwHydraHint |= 0x80000u;
  }
  else if ( gTermIO[1] )
  {
    HMAssignmentUnlock(&gTermIO[1]);
  }
  v2 = qword_1C032AB00;
  if ( qword_1C032AB00 )
  {
    v4 = *(PVOID *)qword_1C032AB00;
    ObfReferenceObject(v4);
    ++v0;
    if ( Event )
    {
      gTermNOIO |= 8u;
      KeSetEvent(Event, 1, 0);
    }
    else
    {
      IPostQuitMessage(qword_1C032AB00, 0LL);
    }
  }
  if ( v0 )
  {
    if ( gdwInAtomicOperation )
    {
      v2 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v2, gdwInAtomicOperation);
    Timeout.QuadPart = -3000000000LL;
    while ( KeWaitForMultipleObjects(v0, &Object, WaitAll, WrUserRequest, 0, 1u, &Timeout, 0LL) == 258 )
      gdwHydraHint |= 0x800000u;
    ObfDereferenceObject(Object);
    if ( v0 > 1 )
      ObfDereferenceObject(v4);
    EnterCrit(0LL, 1LL);
  }
  gdwHydraHint |= 0x800u;
}
