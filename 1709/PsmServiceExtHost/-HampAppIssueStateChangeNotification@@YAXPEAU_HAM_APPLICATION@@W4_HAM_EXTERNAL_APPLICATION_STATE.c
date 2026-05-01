/*
 * XREFs of ?HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18004631C
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B480 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800438BC (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180046450 (-HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@@Z @ 0x180042E1C (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE.c)
 *     ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x18004D16C (-HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z.c)
 */

void __fastcall HampAppIssueStateChangeNotification(__int64 a1, int a2)
{
  __int64 v4; // rcx
  unsigned int v5[4]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v6[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v7[130]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v8; // [rsp+13Ch] [rbp+3Ch]
  __int128 v9; // [rsp+14Ch] [rbp+4Ch]
  __int128 v10; // [rsp+15Ch] [rbp+5Ch]
  __int128 v11; // [rsp+16Ch] [rbp+6Ch]
  int v12; // [rsp+17Ch] [rbp+7Ch]

  memset_0(v6, 0, 0x154uLL);
  v5[0] = 260;
  HampUtilGetAumidFromPsmKey((const unsigned __int16 *)(a1 + 128), v5, v7);
  v4 = *(_QWORD *)(a1 + 48);
  v6[0] = 0;
  v6[1] = a2;
  v8 = *(_OWORD *)(v4 + 172);
  v9 = *(_OWORD *)(v4 + 188);
  v10 = *(_OWORD *)(v4 + 204);
  v11 = *(_OWORD *)(v4 + 220);
  v12 = *(_DWORD *)(v4 + 236);
  HampManagerIssueStateChangeNotifications(
    (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - 128),
    *(unsigned int *)(v4 + 240),
    (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)v6);
}
