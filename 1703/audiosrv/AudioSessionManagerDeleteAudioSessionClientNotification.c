/*
 * XREFs of AudioSessionManagerDeleteAudioSessionClientNotification @ 0x1800947A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerDeleteAudioSessionClientNotification(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)**a1 + 128LL))(**a1, (*a1)[1]);
  v2 = v1;
  if ( v1 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerDeleteAudioSessionClientNotification", 2168, v1);
  return v2;
}
