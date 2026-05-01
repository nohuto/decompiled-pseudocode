/*
 * XREFs of ?RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18003884C
 * Callers:
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180038CC8 (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpGameModeAddRecipientToAuxiliaryList@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180038378 (-RmpGameModeAddRecipientToAuxiliaryList@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeIsRecipientProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18003892C (-RmpGameModeIsRecipientProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeInsertRecipientProcess(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax

  v3 = *((_QWORD *)a1 + 4);
  LOBYTE(a3) = 0;
  v5 = *(_QWORD *)(v3 + 8);
  if ( v5 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)a1 + 23) < *(_DWORD *)(v5 + 84) )
      {
        v6 = *(_QWORD *)v5;
        if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
        {
          if ( !v6 )
            goto LABEL_13;
          v6 ^= v5;
        }
        if ( !v6 )
        {
LABEL_13:
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v6 = *(_QWORD *)(v5 + 8);
        if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
        {
          if ( !v6 )
            goto LABEL_7;
          v6 ^= v5;
        }
        if ( !v6 )
        {
LABEL_7:
          LOBYTE(a3) = 1;
          break;
        }
      }
      v5 = v6;
    }
  }
  RtlRbInsertNodeEx(v3 + 8, v5, a3, (char *)a1 + 8);
  if ( (*((_BYTE *)a1 + 128) & 1) != 0 )
    RmpGameModeAddRecipientToAuxiliaryList(a1);
  if ( RmpGameModeIsRecipientProcessPrimary(a1) )
    ++*(_DWORD *)(v3 + 136);
  *((_BYTE *)a1 + 154) |= 1u;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1) <= 1 )
    __fastfail(0xEu);
  TpSetWait(*((_QWORD *)a1 + 6), *((_QWORD *)a1 + 5), 0LL);
  *((_BYTE *)a1 + 154) |= 2u;
  RmpGameModeQueuePolicyWorkerWithLock((struct _RM_GAME_MODE_CONTEXT *)v3);
}
