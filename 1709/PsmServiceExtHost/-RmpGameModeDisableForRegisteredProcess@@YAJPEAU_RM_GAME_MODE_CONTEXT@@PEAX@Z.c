/*
 * XREFs of ?RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180038728
 * Callers:
 *     ?RmSrvGameModeDisableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x18003373C (-RmSrvGameModeDisableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180007354 (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800386C0 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x1800387E4 (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 */

__int64 __fastcall RmpGameModeDisableForRegisteredProcess(struct _RM_GAME_MODE_CONTEXT *a1, HANDLE Process)
{
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v4; // rdi
  unsigned int v5; // ebx
  DWORD ProcessId; // eax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessById; // rax
  char v8; // al

  v4 = 0LL;
  RtlAcquireSRWLockExclusive((char *)a1 + 72);
  *((_DWORD *)a1 + 20) = GetCurrentThreadId();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 1892LL) & 2) != 0 )
  {
    v5 = -1073741077;
  }
  else
  {
    ProcessId = GetProcessId(Process);
    RecipientProcessById = RmpGameModeFindRecipientProcessById(a1, ProcessId);
    v4 = RecipientProcessById;
    if ( RecipientProcessById )
    {
      v8 = *((_BYTE *)RecipientProcessById + 154);
      if ( (v8 & 4) != 0 )
      {
        v5 = -1073741584;
      }
      else
      {
        *((_BYTE *)v4 + 154) = v8 | 4;
        RmpGameModeQueuePolicyWorkerWithLock(a1);
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741275;
    }
  }
  *((_DWORD *)a1 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  if ( v4 )
    RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v4);
  return v5;
}
