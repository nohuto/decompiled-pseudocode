/*
 * XREFs of CrmGlobalsStart @ 0x180039230
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800384A0 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1800376E4 (TraceLoggingRegisterEx.c)
 *     CrmSubscriberStart @ 0x180039328 (CrmSubscriberStart.c)
 *     CrmSubscriberInitialize @ 0x180039AC4 (CrmSubscriberInitialize.c)
 */

__int64 CrmGlobalsStart()
{
  char *Heap; // rax
  char *v1; // rsi
  char *v2; // rbx
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180092130, 0LL, 0LL);
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x3C0uLL);
  v1 = Heap;
  if ( Heap )
  {
    P = Heap;
    v2 = Heap;
    dword_180092A60 = 12;
    v3 = 12LL;
    do
    {
      CrmSubscriberInitialize(v2);
      v2 += 80;
      --v3;
    }
    while ( v3 );
    while ( 1 )
    {
      v4 = CrmSubscriberStart(&v1[80 * v3], (unsigned int)(v3 + 4), 0LL);
      if ( v4 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= 0xC )
      {
        v4 = TpAllocTimer(&qword_180092A68, CrmGlobalsPeriodicRundown, &CrmGlobals, 0LL);
        if ( v4 >= 0 )
        {
          v6 = -864000000000LL;
          TpSetTimer(qword_180092A68, &v6, 86400000LL, 900000LL);
        }
        return (unsigned int)v4;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
