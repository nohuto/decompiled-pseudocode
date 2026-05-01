/*
 * XREFs of ?RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180038A80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800386C0 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180038E90 (-RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeRecipientProcessTerminationCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD *a2,
        struct _TP_WAIT *a3)
{
  _DWORD *v4; // rdi
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // eax
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // eax
  DWORD v11; // ebx
  _DWORD v12[4]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v13[80]; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp+17h] BYREF
  _DWORD *v15; // [rsp+B8h] [rbp+37h]
  int v16; // [rsp+C0h] [rbp+3Fh]
  int v17; // [rsp+C4h] [rbp+43h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  v4 = (_DWORD *)a2[4];
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v7 = *((_DWORD *)a2 + 23);
    v17 = 0;
    v12[0] = v7;
    v15 = v12;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058227, v5, v6, 3u, &pData);
  }
  RtlAcquireSRWLockExclusive(v4 + 18);
  v4[20] = GetCurrentThreadId();
  if ( (*((_BYTE *)a2 + 154) & 1) != 0 && (*(_BYTE *)(*(_QWORD *)v4 + 1892LL) & 2) == 0 )
    RmpGameModeRemoveRecipientProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)a2);
  *((_BYTE *)a2 + 154) &= ~2u;
  v4[20] = 0;
  RtlReleaseSRWLockExclusive(v4 + 18);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
  {
    v10 = *((_DWORD *)a2 + 23);
    v17 = 0;
    v12[0] = v10;
    v15 = v12;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800583F0, v8, v9, 3u, &pData);
  }
  RmpGameModeDereferenceRecipientProcess(a2);
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
}
