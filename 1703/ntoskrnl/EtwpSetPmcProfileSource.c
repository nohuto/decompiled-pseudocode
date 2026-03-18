/*
 * XREFs of EtwpSetPmcProfileSource @ 0x14070C004
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x14070CEA0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     KeInitializeProfileCallback @ 0x1406AD320 (KeInitializeProfileCallback.c)
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
  if ( (WORD2(PerfGlobalGroupMask) & 0x400) != 0 )
  {
    v2 = -1073741053;
  }
  else
  {
    if ( qword_140345208 )
    {
      ExFreePoolWithTag(qword_140345208, 0);
      qword_140345208 = 0LL;
      EtwpPmcProfile = 0;
    }
    v6 = v3;
    qword_140345208 = ExAllocatePoolWithTag(NonPagedPoolNx, 248 * v3, 0x58777445u);
    v7 = qword_140345208;
    if ( qword_140345208 )
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
