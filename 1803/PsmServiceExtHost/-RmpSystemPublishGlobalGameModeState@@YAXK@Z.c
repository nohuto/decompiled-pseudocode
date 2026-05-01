/*
 * XREFs of ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x1800382C0
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002CE10 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800381CC (-RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall RmpSystemPublishGlobalGameModeState(int a1)
{
  const struct _TlgProvider_t *v1; // rcx
  int v2; // [rsp+30h] [rbp-58h] BYREF
  int v3; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  int *v5; // [rsp+60h] [rbp-28h]
  int v6; // [rsp+68h] [rbp-20h]
  int v7; // [rsp+6Ch] [rbp-1Ch]

  v2 = a1;
  v3 = RtlPublishWnfStateData(WNF_RM_GAME_MODE_ACTIVE, 0LL, &v2, 4LL, 0LL);
  if ( v3 < 0 && hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
    {
      v7 = 0;
      v5 = &v3;
      v6 = 4;
      TlgWrite(v1, &unk_180080982, 0LL, 0LL, 3u, &pData);
    }
  }
}
