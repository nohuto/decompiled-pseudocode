/*
 * XREFs of EtwpSetPmcProfileSource @ 0x14074764C
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140748538 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     KeInitializeProfileCallback @ 0x1406D8620 (KeInitializeProfileCallback.c)
 */

__int64 __fastcall EtwpSetPmcProfileSource(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v6; // r14
  _DWORD *v7; // rsi

  v2 = 0;
  v3 = a2;
  if ( !a2 || a2 > 8 )
    return 3221225485LL;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x400) != 0 )
  {
    v2 = -1073741053;
  }
  else
  {
    if ( qword_14035EC28 )
    {
      ExFreePoolWithTag(qword_14035EC28, 0);
      qword_14035EC28 = 0LL;
      EtwpPmcProfile = 0;
    }
    v6 = v3;
    qword_14035EC28 = ExAllocatePoolWithTag(NonPagedPoolNx, 248 * v3, 0x58777445u);
    v7 = qword_14035EC28;
    if ( qword_14035EC28 )
    {
      EtwpPmcProfile = v3;
      if ( (_DWORD)v3 )
      {
        do
        {
          KeInitializeProfileCallback(v7, (__int64)EtwpPmcInterrupt, (unsigned int)*a1, *a1);
          v7 += 62;
          ++a1;
          --v6;
        }
        while ( v6 );
      }
    }
    else
    {
      v2 = -1073741801;
    }
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return v2;
}
