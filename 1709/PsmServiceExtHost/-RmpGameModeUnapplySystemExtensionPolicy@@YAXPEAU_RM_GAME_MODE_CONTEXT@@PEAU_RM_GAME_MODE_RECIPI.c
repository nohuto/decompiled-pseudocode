/*
 * XREFs of ?RmpGameModeUnapplySystemExtensionPolicy@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180039BC0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z @ 0x18004115C (-RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z.c)
 */

void __fastcall RmpGameModeUnapplySystemExtensionPolicy(struct _RM_GAME_MODE_CONTEXT *a1, void **a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // eax
  int v7; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  RmpSystemNotifyGameModeExtensionStateChange(a2[5], 0);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v6 = *((_DWORD *)a2 + 23);
      v11 = 0;
      v7 = v6;
      v9 = &v7;
      v10 = 4;
      TlgWrite(v3, &unk_1800580B9, v4, v5, 3u, &pData);
    }
  }
}
