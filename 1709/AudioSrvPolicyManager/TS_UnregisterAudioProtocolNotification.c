/*
 * XREFs of TS_UnregisterAudioProtocolNotification @ 0x18001E2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18001B684 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001CBE8 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 */

__int64 __fastcall TS_UnregisterAudioProtocolNotification(void *a1, struct AUDIOPROTOCOLNOTIFY **a2)
{
  struct AUDIOPROTOCOLNOTIFY *v2; // rdi
  __int64 result; // rax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a2;
  if ( !*a2 )
    return 87LL;
  result = RpcClientProcessSessionId(a1, &v6, &v5);
  if ( !(_DWORD)result )
  {
    result = TsSessionIdDeleteNotify(v5, v2);
    if ( !(_DWORD)result )
      *a2 = 0LL;
  }
  return result;
}
