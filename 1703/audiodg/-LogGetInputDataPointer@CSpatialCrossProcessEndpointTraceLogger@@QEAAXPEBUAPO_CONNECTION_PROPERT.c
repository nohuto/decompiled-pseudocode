/*
 * XREFs of ?LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERTY@@_N@Z @ 0x140059E8C
 * Callers:
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14005F240 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogGetInputDataPointer(
        CSpatialCrossProcessEndpointTraceLogger *this,
        const struct APO_CONNECTION_PROPERTY *a2,
        const GUID *a3)
{
  APO_BUFFER_FLAGS u32BufferFlags; // [rsp+30h] [rbp-39h] BYREF
  BOOL v4; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  char *v6; // [rsp+60h] [rbp-9h]
  __int64 v7; // [rsp+68h] [rbp-1h]
  UINT32 *p_u32ValidFrameCount; // [rsp+70h] [rbp+7h]
  __int64 v9; // [rsp+78h] [rbp+Fh]
  APO_BUFFER_FLAGS *p_u32BufferFlags; // [rsp+80h] [rbp+17h]
  __int64 v11; // [rsp+88h] [rbp+1Fh]
  BOOL *v12; // [rsp+90h] [rbp+27h]
  __int64 v13; // [rsp+98h] [rbp+2Fh]

  if ( (unsigned int)dword_1400850A0 > 5 )
  {
    v7 = 16LL;
    v6 = (char *)this + 8;
    v9 = 4LL;
    p_u32ValidFrameCount = &a2->u32ValidFrameCount;
    u32BufferFlags = a2->u32BufferFlags;
    p_u32BufferFlags = &u32BufferFlags;
    v11 = 4LL;
    v4 = (_BYTE)a3 != 0;
    v12 = &v4;
    v13 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1400850A0, &unk_14006FDC8, a3, 0LL, 6u, &pData);
  }
}
