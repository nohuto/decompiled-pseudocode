/*
 * XREFs of ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18003858C
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E050 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpGameModeAcquireAndApplyRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180038050 (-RmpGameModeAcquireAndApplyRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_R.c)
 */

void __fastcall RmpGameModeApplyNewRecipientPolicies(struct _RM_GAME_MODE_CONTEXT *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v5; // rax
  struct _LIST_ENTRY *v6; // rdx
  struct _LIST_ENTRY *Blink; // rax

  *((_DWORD *)a1 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  while ( 1 )
  {
    Flink = a2->Flink;
    if ( a2->Flink == a2 )
      break;
    if ( Flink->Blink != a2 || (v5 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    a2->Flink = v5;
    v5->Blink = a2;
    RmpGameModeAcquireAndApplyRecipientResources(a1, (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)&Flink[-5].Blink);
    BYTE3(Flink[5].Flink) &= ~1u;
    v6 = (struct _LIST_ENTRY *)((char *)a1 + 16 * SLODWORD(Flink[1].Flink) + 88);
    Blink = v6->Blink;
    if ( Blink->Flink != v6 )
      __fastfail(3u);
    Flink->Flink = v6;
    Flink->Blink = Blink;
    Blink->Flink = Flink;
    v6->Blink = Flink;
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 72);
  *((_DWORD *)a1 + 20) = GetCurrentThreadId();
}
