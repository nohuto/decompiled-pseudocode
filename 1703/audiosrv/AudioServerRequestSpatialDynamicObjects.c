/*
 * XREFs of AudioServerRequestSpatialDynamicObjects @ 0x1800A38C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 AudioServerRequestSpatialDynamicObjects()
{
  int v0; // eax
  unsigned int v1; // ebx

  v0 = (*(__int64 (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)g_SpatialAudioResourceManager + 48LL))(g_SpatialAudioResourceManager);
  v1 = v0;
  if ( v0 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerRequestSpatialDynamicObjects", 5119, v0);
  return v1;
}
