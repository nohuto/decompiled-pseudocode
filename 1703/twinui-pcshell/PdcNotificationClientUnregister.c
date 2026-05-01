/*
 * XREFs of PdcNotificationClientUnregister @ 0x180172208
 * Callers:
 *     ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F49D0 (-UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     PdcPortClose @ 0x1801725A4 (PdcPortClose.c)
 */

__int64 __fastcall PdcNotificationClientUnregister(RTL_SRWLOCK *P)
{
  unsigned int v2; // ebx
  RTL_SRWLOCK *v3; // rdi

  if ( !P || LODWORD(P->Ptr) != 1315136592 )
    return (unsigned int)-1073741585;
  v3 = P + 1;
  AcquireSRWLockExclusive(P + 1);
  LODWORD(v3[1].Ptr) = GetCurrentThreadId();
  if ( HIDWORD(P[12].Ptr) == GetCurrentThreadId() )
  {
    v2 = -1073741823;
LABEL_8:
    LODWORD(v3[1].Ptr) = 0;
    ReleaseSRWLockExclusive(v3);
    return v2;
  }
  if ( !LOBYTE(P[10].Ptr) )
  {
    v2 = -1073741431;
    goto LABEL_8;
  }
  LOBYTE(P[10].Ptr) = 0;
  LODWORD(v3[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v3);
  while ( LODWORD(P[11].Ptr) )
    Sleep(0x1Eu);
  PdcPortClose(P[4].Ptr);
  P[4].Ptr = 0LL;
  LODWORD(P->Ptr) = 0;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
