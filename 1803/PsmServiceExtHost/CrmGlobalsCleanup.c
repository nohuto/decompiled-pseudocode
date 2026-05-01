/*
 * XREFs of CrmGlobalsCleanup @ 0x180069D80
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004E120 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CrmGlobalsSubscriberRemoveAll @ 0x180069E6C (CrmGlobalsSubscriberRemoveAll.c)
 *     CrmSubscriberCleanup @ 0x18006A2CC (CrmSubscriberCleanup.c)
 */

ULONG CrmGlobalsCleanup()
{
  char *v0; // rdx
  __int64 v1; // rbx
  ULONG result; // eax

  v0 = (char *)P;
  if ( P )
  {
    v1 = 0LL;
    if ( dword_180092A60 )
    {
      while ( 1 )
      {
        CrmSubscriberCleanup(&v0[80 * v1], 1LL);
        v1 = (unsigned int)(v1 + 1);
        if ( (unsigned int)v1 >= dword_180092A60 )
          break;
        v0 = (char *)P;
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  CrmGlobalsSubscriberRemoveAll();
  result = EventUnregister(qword_180092150);
  qword_180092150 = 0LL;
  dword_180092130 = 0;
  return result;
}
