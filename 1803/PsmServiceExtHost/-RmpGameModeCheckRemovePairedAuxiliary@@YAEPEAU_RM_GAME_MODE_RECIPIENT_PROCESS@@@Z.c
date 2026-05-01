/*
 * XREFs of ?RmpGameModeCheckRemovePairedAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800570F8
 * Callers:
 *     ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x1800571A8 (-RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180058228 (-RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

unsigned __int8 __fastcall RmpGameModeCheckRemovePairedAuxiliary(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1)
{
  __int64 v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = *((_QWORD *)a1 + 9);
  if ( (*((_BYTE *)a1 + 80) & 1) != 0 )
  {
    if ( !v2 )
      goto LABEL_5;
    v2 ^= (unsigned __int64)a1 + 72;
  }
  if ( v2 )
    return 0;
LABEL_5:
  RmpGameModeRemoveRecipientProcess(a1);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v4 = *((_DWORD *)a1 + 27);
      v10 = 0;
      v8 = &v6;
      v6 = v4;
      v9 = 4;
      TlgWrite(v3, &unk_18007E969, 0LL, 0LL, 3u, &pData);
    }
  }
  return 1;
}
