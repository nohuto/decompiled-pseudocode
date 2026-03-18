/*
 * XREFs of rimFindReferencedPrimaryRimObj @ 0x1C0095BD0
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0009818 (RIMDiscoverDevicesOfInputType.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0098970 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

__int64 __fastcall rimFindReferencedPrimaryRimObj(int a1, struct _LIST_ENTRY **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v7; // rbx
  NTSTATUS v8; // edi

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_13;
  do
  {
    v7 = Flink - 1;
    if ( !LOBYTE(Flink[3].Blink)
      && !BYTE1(v7[4].Blink)
      && (a1 & HIDWORD(v7[4].Blink)) != 0
      && LODWORD(v7[61].Flink)
      && v7[2].Flink == (struct _LIST_ENTRY *)PsGetCurrentProcess(v5, v4)
      && (struct _KTHREAD *)v7[2].Blink == KeGetCurrentThread() )
    {
      break;
    }
    Flink = Flink->Flink;
    v7 = 0LL;
  }
  while ( Flink != &gObRimList );
  if ( !v7 )
  {
LABEL_13:
    v8 = -1073741637;
  }
  else
  {
    v8 = ObReferenceObjectByPointer(v7, 3u, ExRawInputManagerObjectType, 1);
    if ( v8 >= 0 )
      *a2 = v7;
  }
  qword_1C0193AE8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
