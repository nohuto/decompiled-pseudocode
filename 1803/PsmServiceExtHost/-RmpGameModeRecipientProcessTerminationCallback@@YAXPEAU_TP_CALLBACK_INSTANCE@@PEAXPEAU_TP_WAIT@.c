/*
 * XREFs of ?RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180057C00
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x1800571A8 (-RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180057354 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1800573BC (-RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180058228 (-RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeRecipientProcessTerminationCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD *a2,
        struct _TP_WAIT *a3)
{
  _DWORD *v4; // rdi
  int v5; // eax
  char v6; // cl
  int v7; // eax
  DWORD v8; // ebx
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  struct _LIST_ENTRY v10; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v11[144]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v13; // [rsp+108h] [rbp+0h]
  int v14; // [rsp+110h] [rbp+8h]
  int v15; // [rsp+114h] [rbp+Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  v4 = (_DWORD *)a2[4];
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v5 = *((_DWORD *)a2 + 27);
    v15 = 0;
    LODWORD(v9) = v5;
    v13 = &v9;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007E66E, 0LL, 0LL, 3u, &pData);
  }
  RtlAcquireSRWLockExclusive(v4 + 18);
  v4[20] = GetCurrentThreadId();
  v6 = *((_BYTE *)a2 + 170);
  if ( (v6 & 1) == 0 || (*(_BYTE *)(*(_QWORD *)v4 + 2228LL) & 2) != 0 )
  {
    v10.Blink = &v10;
    v10.Flink = &v10;
  }
  else
  {
    RmpGameModeClearPairingTree((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)a2, &v10);
    RmpGameModeRemoveRecipientProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)a2);
    v6 = *((_BYTE *)a2 + 170);
  }
  *((_BYTE *)a2 + 170) = v6 & 0xFD;
  v4[20] = 0;
  RtlReleaseSRWLockExclusive(v4 + 18);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
  {
    v7 = *((_DWORD *)a2 + 27);
    v15 = 0;
    LODWORD(v9) = v7;
    v13 = &v9;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007E52E, 0LL, 0LL, 3u, &pData);
  }
  RmpGameModeDereferenceRemovedProcesses(&v10);
  RmpGameModeDereferenceRecipientProcess(a2);
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v8, 0LL);
  }
}
