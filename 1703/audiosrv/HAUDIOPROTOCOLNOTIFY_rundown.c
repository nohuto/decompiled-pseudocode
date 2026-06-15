/*
 * XREFs of HAUDIOPROTOCOLNOTIFY_rundown @ 0x18002F380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HAUDIOPROTOCOLNOTIFY_rundown(__int64 a1)
{
  __int64 result; // rax

  result = IsHdAudioProtocolNotifyRundownSupported();
  if ( (_DWORD)result )
    return TS_AudioProtocolNotifyRundown(a1);
  return result;
}
