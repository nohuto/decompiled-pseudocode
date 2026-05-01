/*
 * XREFs of ?RmpGameModeUnapplySystemExtensionPolicy@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180059120
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z @ 0x180061A1C (-RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z.c)
 */

void __fastcall RmpGameModeUnapplySystemExtensionPolicy(struct _RM_GAME_MODE_CONTEXT *a1, void **a2)
{
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  int v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  RmpSystemNotifyGameModeExtensionStateChange(a2[5], 0);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v4 = *((_DWORD *)a2 + 27);
      v9 = 0;
      v5 = v4;
      v7 = &v5;
      v8 = 4;
      TlgWrite(v3, &unk_18007E46E, 0LL, 0LL, 3u, &pData);
    }
  }
}
