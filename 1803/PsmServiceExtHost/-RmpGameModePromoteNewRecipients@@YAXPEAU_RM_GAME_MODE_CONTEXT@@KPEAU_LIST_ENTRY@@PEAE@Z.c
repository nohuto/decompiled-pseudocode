/*
 * XREFs of ?RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z @ 0x18002D218
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002CE10 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180057354 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800579D8 (-RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x180057B58 (-RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180057BA4 (-RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180058464 (-RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModePromoteNewRecipients(
        struct _RM_GAME_MODE_CONTEXT *a1,
        unsigned int a2,
        struct _LIST_ENTRY *a3,
        bool *a4)
{
  struct _RM_GAME_MODE_CONTEXT *v6; // rdi
  char *v7; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  struct _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  bool v18; // zf
  char v19; // dl
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  char *v22; // r11
  char *i; // r10
  __int64 v24; // rcx
  char **v25; // r10

  *a4 = *((_DWORD *)a1 + 34) != 0;
  v6 = (struct _RM_GAME_MODE_CONTEXT *)*((_QWORD *)a1 + 11);
  if ( v6 != (struct _RM_GAME_MODE_CONTEXT *)((char *)a1 + 88) )
  {
    v7 = (char *)v6 - 88;
    goto LABEL_24;
  }
  v9 = (unsigned __int64)a1 + 8;
  v10 = *((_QWORD *)a1 + 2);
  v11 = *(_QWORD *)v9;
  if ( (v10 & 1) != 0 && v11 )
    v11 ^= v9;
  v12 = v10 & 1;
  while ( 1 )
  {
    if ( !v11 )
      return;
    if ( a2 >= *(_DWORD *)(v11 + 100) )
      break;
    v13 = *(_QWORD *)v11;
LABEL_12:
    if ( v12 && v13 )
      v11 ^= v13;
    else
      v11 = v13;
  }
  if ( a2 > *(_DWORD *)(v11 + 100) )
  {
    v13 = *(_QWORD *)(v11 + 8);
    goto LABEL_12;
  }
  v7 = (char *)(v11 - 8);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 - 8)) <= 1 )
    __fastfail(0xEu);
  if ( v11 != 8 )
  {
    if ( (v7[170] & 5) == 1 && RmpGameModeIsProcessPrimary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v7) )
    {
      *((_DWORD *)v7 + 26) = 0;
      v14 = (struct _LIST_ENTRY *)(v7 + 88);
      v7[171] |= 1u;
      Blink = a3->Blink;
      if ( Blink->Flink != a3 )
        __fastfail(3u);
      v14->Flink = a3;
      *((_QWORD *)v7 + 12) = Blink;
      Blink->Flink = v14;
      a3->Blink = v14;
LABEL_24:
      v16 = *((_QWORD *)v7 + 9);
      if ( v16 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            if ( (int)RmpGameModePromotePairedAuxiliaryNode((struct _RTL_BALANCED_NODE *)v16, a3) < 0 )
              goto LABEL_46;
            v17 = *(_QWORD *)v16;
            if ( *(_QWORD *)v16 )
            {
              v18 = (v7[80] & 1) == 0;
              goto LABEL_28;
            }
            v17 = *(_QWORD *)(v16 + 8);
            v19 = v7[80] & 1;
            if ( v17 )
            {
              v18 = v19 == 0;
LABEL_28:
              if ( v18 )
                v16 = v17;
              else
                v16 ^= v17;
              continue;
            }
            break;
          }
          v20 = v16;
LABEL_34:
          v20 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v19 )
          {
            if ( !v20 )
              goto LABEL_46;
            v20 ^= v16;
          }
          if ( !v20 )
            goto LABEL_46;
          v21 = *(_QWORD *)(v20 + 8);
          if ( v19 )
          {
            if ( v21 )
            {
              v21 ^= v20;
              goto LABEL_41;
            }
          }
          else
          {
LABEL_41:
            if ( v21 && v21 != v16 )
            {
              v16 = v21;
              continue;
            }
          }
          break;
        }
        v16 = v20;
        goto LABEL_34;
      }
LABEL_46:
      v22 = (char *)a1 + 24;
      for ( i = (char *)*((_QWORD *)a1 + 3); i != v22; i = *v25 )
      {
        if ( RmpGameModeShouldPromoteAuxiliary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(i - 56)) )
        {
          if ( (*(_BYTE *)(v24 + 170) & 8) == 0 )
            RmpGameModePromoteAuxiliaryProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v24, a3);
        }
      }
    }
    else
    {
      RmpGameModeDereferenceRecipientProcess(v7);
    }
  }
}
