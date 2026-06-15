/*
 * XREFs of ?GetEndpointBufferSize@CVADServer@@UEAAJPEAIPEAM@Z @ 0x18008B6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetEndpointBufferSize@CAudioStream@@QEAAJPEAIPEAM@Z @ 0x18007C814 (-GetEndpointBufferSize@CAudioStream@@QEAAJPEAIPEAM@Z.c)
 *     WPP_SF_dd @ 0x180089EEC (WPP_SF_dd.c)
 */

__int64 __fastcall CVADServer::GetEndpointBufferSize(CVADServer *this, unsigned int *a2, float *a3)
{
  CAudioStream *v6; // rcx
  int EndpointBufferSize; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !a2 || !a3 )
  {
    EndpointBufferSize = -2147467261;
    goto LABEL_15;
  }
  if ( !*((_DWORD *)this + 46) || (v6 = (CAudioStream *)*((_QWORD *)this + 24)) == 0LL )
  {
    EndpointBufferSize = -2004287487;
    goto LABEL_16;
  }
  EndpointBufferSize = CAudioStream::GetEndpointBufferSize(v6, a2, a3);
  if ( EndpointBufferSize < 0 )
  {
LABEL_15:
    if ( EndpointBufferSize >= 0 )
      goto LABEL_6;
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetEndpointBufferSize", 2057, EndpointBufferSize);
    goto LABEL_10;
  }
LABEL_6:
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Fu,
      (__int64)&WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids,
      *a2);
  }
LABEL_10:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)EndpointBufferSize;
}
