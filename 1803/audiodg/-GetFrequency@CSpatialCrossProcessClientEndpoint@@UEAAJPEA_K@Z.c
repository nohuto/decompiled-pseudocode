/*
 * XREFs of ?GetFrequency@CSpatialCrossProcessClientEndpoint@@UEAAJPEA_K@Z @ 0x14005DAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::GetFrequency(
        CSpatialCrossProcessClientEndpoint *this,
        unsigned __int64 *a2)
{
  unsigned int v3; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 888);
  v3 = 0;
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !a2 )
  {
    v3 = -2147467261;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientEndpoint::GetFrequency", 274, v3);
    goto LABEL_7;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this - 212, 1, 1) )
  {
    v3 = -2005139437;
    goto LABEL_5;
  }
  *a2 = *(unsigned int *)(*((_QWORD *)this - 96) + 8LL);
LABEL_7:
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
