/*
 * XREFs of ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180038CC8
 * Callers:
 *     ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x180033C00 (-RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x1800383C0 (-RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800386C0 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x1800387E4 (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     ?RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18003884C (-RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

__int64 __fastcall RmpGameModeRegisterProcess(
        struct _RM_GAME_MODE_CONTEXT *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3)
{
  volatile signed __int64 *RecipientProcessById; // rsi
  _QWORD *Heap; // rax
  _QWORD *v8; // rbx
  int ObjectsForRecipientProcess; // edi
  DWORD ProcessId; // eax
  __int64 v11; // rdx
  __int64 v12; // r8

  RecipientProcessById = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
  v8 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0xA0uLL);
    v8[4] = a1;
    *((_OWORD *)v8 + 6) = *(_OWORD *)a3;
    *((_OWORD *)v8 + 7) = *((_OWORD *)a3 + 1);
    v8[16] = *((_QWORD *)a3 + 4);
    *v8 = 1LL;
    *((_DWORD *)v8 + 22) = 2;
    RtlAcquireSRWLockExclusive((char *)a1 + 72);
    *((_DWORD *)a1 + 20) = GetCurrentThreadId();
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 1892LL) & 2) != 0 )
    {
      ObjectsForRecipientProcess = -1073741077;
    }
    else
    {
      ProcessId = GetProcessId(a2);
      RecipientProcessById = (volatile signed __int64 *)RmpGameModeFindRecipientProcessById(a1, ProcessId);
      if ( RecipientProcessById )
      {
        ObjectsForRecipientProcess = -1073740008;
      }
      else
      {
        ObjectsForRecipientProcess = RmpGameModeAllocateObjectsForRecipientProcess(
                                       (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v8,
                                       a2);
        if ( ObjectsForRecipientProcess >= 0 )
        {
          RmpGameModeInsertRecipientProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v8, v11, v12);
          v8 = 0LL;
          ObjectsForRecipientProcess = 0;
        }
      }
    }
    *((_DWORD *)a1 + 20) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 72);
    if ( RecipientProcessById )
      RmpGameModeDereferenceRecipientProcess(RecipientProcessById);
    if ( v8 )
      RmpGameModeDereferenceRecipientProcess(v8);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)ObjectsForRecipientProcess;
}
