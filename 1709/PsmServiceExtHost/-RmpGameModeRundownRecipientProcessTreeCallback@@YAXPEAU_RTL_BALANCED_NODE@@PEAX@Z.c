/*
 * XREFs of ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180039014
 * Callers:
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180038F20 (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     ?RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180038640 (-RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800386C0 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeRundownRecipientProcessTreeCallback(struct _RTL_BALANCED_NODE *a1, void *a2)
{
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *v2; // rbx
  struct _RTL_BALANCED_NODE *v3; // rdi
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *v4; // rax
  ULONG_PTR ParentValue; // rcx
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E **v6; // rdx

  v2 = &a1[-1].16;
  v3 = a1[1].Children[0];
  RtlAcquireSRWLockExclusive(&v3[3]);
  LODWORD(v3[3].Right) = GetCurrentThreadId();
  if ( (*(_BYTE *)&v2[16] & 1) != 0 )
  {
    v4 = v2 + 7;
    ParentValue = v2[7].ParentValue;
    if ( *(union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E **)(ParentValue + 8) != &v2[7]
      || (v6 = (union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E **)v2[8].ParentValue, *v6 != v4) )
    {
      __fastfail(3u);
    }
    *v6 = (union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *)ParentValue;
    *(_QWORD *)(ParentValue + 8) = v6;
    v4->ParentValue = 0LL;
    v2[8].ParentValue = 0LL;
    RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v2);
  }
  *((_BYTE *)&v2[19] + 2) &= ~1u;
  LODWORD(v3[3].Right) = 0;
  RtlReleaseSRWLockExclusive(&v3[3]);
  RmpGameModeCancelRecipientProcessThreadpoolWait(v2);
  RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v2);
}
