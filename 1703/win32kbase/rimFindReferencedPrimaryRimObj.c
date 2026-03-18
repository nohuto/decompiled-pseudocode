/*
 * XREFs of rimFindReferencedPrimaryRimObj @ 0x1C008E7AC
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C008FB70 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0093588 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 */

__int64 __fastcall rimFindReferencedPrimaryRimObj(int a1, struct _LIST_ENTRY **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v9; // rbx
  NTSTATUS v10; // edi

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_13;
  do
  {
    v9 = Flink - 1;
    if ( !LOBYTE(Flink[3].Blink)
      && !BYTE1(v9[4].Blink)
      && (a1 & HIDWORD(v9[4].Blink)) != 0
      && LODWORD(v9[61].Flink)
      && v9[2].Flink == (struct _LIST_ENTRY *)PsGetCurrentProcess(v5, v4, v6, v7)
      && (struct _KTHREAD *)v9[2].Blink == KeGetCurrentThread() )
    {
      break;
    }
    Flink = Flink->Flink;
    v9 = 0LL;
  }
  while ( Flink != &gObRimList );
  if ( !v9 )
  {
LABEL_13:
    v10 = -1073741637;
  }
  else
  {
    v10 = ObReferenceObjectByPointer(v9, 3u, ExRawInputManagerObjectType, 1);
    if ( v10 >= 0 )
      *a2 = v9;
  }
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
