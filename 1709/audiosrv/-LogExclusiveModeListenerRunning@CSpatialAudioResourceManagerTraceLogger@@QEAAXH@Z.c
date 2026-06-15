/*
 * XREFs of ?LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x1800C60E8
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x1800C6BDC (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x1800C71DC (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
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

  if ( (unsigned int)dword_18014A370 > 4 )
  {
    v3 = "Started";
    if ( !a2 )
      v3 = "Shutdown";
    TlgCreateSz(&pDesc, v3);
    TlgWrite((TraceLoggingHProvider)&dword_18014A370, &unk_1801115D5, v4, v5, 3u, &pData);
  }
}
