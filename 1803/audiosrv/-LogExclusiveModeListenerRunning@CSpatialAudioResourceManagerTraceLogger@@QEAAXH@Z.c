/*
 * XREFs of ?LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x1800F85E8
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x1800F9204 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x1800F9894 (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 * Callees:
 *     _TlgCreateSz @ 0x1800059B0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerRunning(
        CSpatialAudioResourceManagerTraceLogger *this,
        int a2)
{
  const CHAR *v3; // rdx
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  if ( (unsigned int)dword_180188330 > 4 )
  {
    v3 = "Started";
    if ( !a2 )
      v3 = "Shutdown";
    TlgCreateSz(&pDesc, v3);
    TlgWrite((TraceLoggingHProvider)&dword_180188330, &unk_1801482A1, v4, v5, 3u, &pData);
  }
}
