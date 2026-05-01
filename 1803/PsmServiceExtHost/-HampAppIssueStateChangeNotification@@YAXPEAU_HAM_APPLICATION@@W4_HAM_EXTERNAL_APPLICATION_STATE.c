/*
 * XREFs of ?HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18000A2E4
 * Callers:
 *     ?HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18000A0EC (-HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 * Callees:
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@@Z @ 0x18000A460 (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

void __fastcall HampAppIssueStateChangeNotification(__int64 a1, int a2)
{
  __int64 v4; // rdx
  _OWORD *v5; // rax
  char *v6; // r8
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _DWORD v19[2]; // [rsp+20h] [rbp-E0h] BYREF
  char v20; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v21; // [rsp+1F8h] [rbp+F8h]
  __int128 v22; // [rsp+208h] [rbp+108h]
  __int128 v23; // [rsp+218h] [rbp+118h]
  __int128 v24; // [rsp+228h] [rbp+128h]
  int v25; // [rsp+238h] [rbp+138h]

  memset_0(v19, 0, 0x220uLL);
  v4 = 3LL;
  v5 = (_OWORD *)(a1 + 96);
  v6 = &v20;
  do
  {
    v7 = v5[1];
    *(_OWORD *)v6 = *v5;
    v8 = v5[2];
    *((_OWORD *)v6 + 1) = v7;
    v9 = v5[3];
    *((_OWORD *)v6 + 2) = v8;
    v10 = v5[4];
    *((_OWORD *)v6 + 3) = v9;
    v11 = v5[5];
    *((_OWORD *)v6 + 4) = v10;
    v12 = v5[6];
    *((_OWORD *)v6 + 5) = v11;
    v13 = v5[7];
    v5 += 8;
    *((_OWORD *)v6 + 6) = v12;
    v6 += 128;
    *((_OWORD *)v6 - 1) = v13;
    --v4;
  }
  while ( v4 );
  v14 = *(_QWORD *)(a1 + 88);
  v15 = v5[1];
  *(_OWORD *)v6 = *v5;
  v16 = v5[2];
  *((_OWORD *)v6 + 1) = v15;
  v17 = v5[3];
  *((_OWORD *)v6 + 2) = v16;
  v18 = v5[4];
  *((_OWORD *)v6 + 3) = v17;
  *((_OWORD *)v6 + 4) = v18;
  v19[0] = 0;
  v19[1] = a2;
  v21 = *(_OWORD *)(v14 + 228);
  v22 = *(_OWORD *)(v14 + 244);
  v23 = *(_OWORD *)(v14 + 260);
  v24 = *(_OWORD *)(v14 + 276);
  v25 = *(_DWORD *)(v14 + 292);
  HampManagerIssueStateChangeNotifications(
    (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)((*(_QWORD *)((*(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                                                 - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                                    - 152),
    *(_DWORD *)(v14 + 296),
    (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)v19);
}
