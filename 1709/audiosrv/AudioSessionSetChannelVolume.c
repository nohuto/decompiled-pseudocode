/*
 * XREFs of AudioSessionSetChannelVolume @ 0x180078CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioSessionSetChannelVolume(_QWORD *a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 320LL))(*a1);
  v2 = v1;
  if ( v1 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionSetChannelVolume", 2168, v1);
  return v2;
}
