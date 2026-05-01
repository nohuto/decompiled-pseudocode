/*
 * XREFs of ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x1800591B8
 * Callers:
 *     ?RmSrvGameModeUnregisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180050D4C (-RmSrvGameModeUnregisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180057078 (-RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x1800571A8 (-RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180057354 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1800573BC (-RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18005762C (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180058228 (-RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

__int64 __fastcall RmpGameModeUnregisterProcess(struct _RM_GAME_MODE_CONTEXT *a1, HANDLE Process)
{
  char *v2; // rbp
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v5; // rbx
  unsigned int v6; // edi
  DWORD ProcessId; // eax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessById; // rax
  struct _LIST_ENTRY v10; // [rsp+20h] [rbp-18h] BYREF

  v2 = (char *)a1 + 72;
  v5 = 0LL;
  RtlAcquireSRWLockExclusive((char *)a1 + 72);
  *((_DWORD *)a1 + 20) = GetCurrentThreadId();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 2228LL) & 2) != 0 )
  {
    v6 = -1073741077;
LABEL_5:
    *((_DWORD *)a1 + 20) = 0;
    RtlReleaseSRWLockExclusive(v2);
    goto LABEL_7;
  }
  ProcessId = GetProcessId(Process);
  RecipientProcessById = RmpGameModeFindRecipientProcessById(a1, ProcessId);
  v5 = RecipientProcessById;
  if ( !RecipientProcessById )
  {
    v6 = -1073741275;
    goto LABEL_5;
  }
  RmpGameModeClearPairingTree(RecipientProcessById, &v10);
  RmpGameModeRemoveRecipientProcess(v5);
  *((_DWORD *)a1 + 20) = 0;
  RtlReleaseSRWLockExclusive(v2);
  RmpGameModeCancelRecipientProcessThreadpoolWait(v5);
  RmpGameModeDereferenceRemovedProcesses(&v10);
  v6 = 0;
LABEL_7:
  if ( v5 )
    RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v5);
  return v6;
}
