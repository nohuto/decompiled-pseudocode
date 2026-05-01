/*
 * XREFs of ?HampPkgIssueStateChangeNotification@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180046CEC
 * Callers:
 *     ?HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@1@Z @ 0x180046ECC (-HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@@Z @ 0x180042E1C (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE.c)
 */

void __fastcall HampPkgIssueStateChangeNotification(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int128 v5; // xmm1
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int16 v8; // ax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _DWORD v18[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+28h] [rbp-D8h]
  __int128 v20; // [rsp+38h] [rbp-C8h]
  __int128 v21; // [rsp+48h] [rbp-B8h]
  __int128 v22; // [rsp+58h] [rbp-A8h]
  __int128 v23; // [rsp+68h] [rbp-98h]
  __int128 v24; // [rsp+78h] [rbp-88h]
  __int128 v25; // [rsp+88h] [rbp-78h]
  __int128 v26; // [rsp+98h] [rbp-68h]
  __int16 v27; // [rsp+A8h] [rbp-58h]
  __int128 v28; // [rsp+12Ch] [rbp+2Ch]
  __int128 v29; // [rsp+13Ch] [rbp+3Ch]
  __int128 v30; // [rsp+14Ch] [rbp+4Ch]
  __int128 v31; // [rsp+15Ch] [rbp+5Ch]
  int v32; // [rsp+16Ch] [rbp+6Ch]
  int v33; // [rsp+170h] [rbp+70h]

  memset_0(v18, 0, 0x154uLL);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_OWORD *)(a1 + 56);
  v6 = *(unsigned int *)(a1 + 240);
  v19 = *(_OWORD *)(a1 + 40);
  v7 = *(_OWORD *)(a1 + 72);
  v8 = *(_WORD *)(a1 + 168);
  v20 = v5;
  v9 = *(_OWORD *)(a1 + 88);
  v21 = v7;
  v10 = *(_OWORD *)(a1 + 104);
  v22 = v9;
  v11 = *(_OWORD *)(a1 + 120);
  v23 = v10;
  v12 = *(_OWORD *)(a1 + 136);
  v24 = v11;
  v13 = *(_OWORD *)(a1 + 188);
  v25 = v12;
  v26 = *(_OWORD *)(a1 + 152);
  v27 = v8;
  v14 = *(_OWORD *)(a1 + 172);
  v15 = *(_DWORD *)(a1 + 236);
  v29 = v13;
  v18[0] = 1;
  v16 = *(_OWORD *)(a1 + 220);
  v18[1] = a2;
  v28 = v14;
  v32 = v15;
  v17 = *(_OWORD *)(a1 + 204);
  v33 = v6;
  v31 = v16;
  v30 = v17;
  HampManagerIssueStateChangeNotifications(
    (struct _HOST_ACTIVITY_MANAGER *)((v4 & 0xFFFFFFFFFFFFFFFCuLL) - 128),
    v6,
    (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)v18);
}
