/*
 * XREFs of AudioServerRequestSpatialDynamicObjects @ 0x180090210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 AudioServerRequestSpatialDynamicObjects()
{
  int v0; // eax
  unsigned int v1; // ebx

  v0 = (*(__int64 (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)g_SpatialAudioResourceManager + 48LL))(g_SpatialAudioResourceManager);
  v1 = v0;
  if ( v0 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerRequestSpatialDynamicObjects", 5110, v0);
  return v1;
}
