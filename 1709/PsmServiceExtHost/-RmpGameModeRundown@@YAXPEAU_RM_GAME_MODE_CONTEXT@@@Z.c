/*
 * XREFs of ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180038F20
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x180031264 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180007354 (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180039014 (-RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall RmpGameModeRundown(struct _RM_GAME_MODE_CONTEXT *a1)
{
  struct _RTL_BALANCED_NODE *v2; // rcx
  int v3; // esi
  struct _RTL_BALANCED_NODE *v4; // rdx
  unsigned __int64 v5; // rax
  struct _RTL_BALANCED_NODE *v6; // rdx
  unsigned __int64 v7; // rbx
  char v8; // al

  if ( *((_QWORD *)a1 + 8) )
  {
    RtlAcquireSRWLockExclusive((char *)a1 + 72);
    *((_DWORD *)a1 + 20) = GetCurrentThreadId();
    RmpGameModeQueuePolicyWorkerWithLock(a1);
    *((_BYTE *)a1 + 148) |= 4u;
    *((_DWORD *)a1 + 20) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 72);
    TpWaitForWork(*((_QWORD *)a1 + 8), 0LL);
  }
  v2 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 1);
  v3 = *((_BYTE *)a1 + 16) & 1;
  if ( v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v2->Children[0] )
        {
          v4 = v2;
          if ( v3 )
            v2 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v2->Children[0] ^ (unsigned __int64)v2);
          else
            v2 = v2->Children[0];
          v4->Children[0] = 0LL;
        }
        v5 = (unsigned __int64)v2->Children[1];
        if ( !v5 )
          break;
        v6 = v2;
        if ( v3 )
          v2 = (struct _RTL_BALANCED_NODE *)(v5 ^ (unsigned __int64)v2);
        else
          v2 = v2->Children[1];
        v6->Children[1] = 0LL;
      }
      v7 = v2->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v3 && v7 )
        v7 ^= (unsigned __int64)v2;
      RmpGameModeRundownRecipientProcessTreeCallback(v2, 0LL);
      if ( !v7 )
        break;
      v2 = (struct _RTL_BALANCED_NODE *)v7;
    }
  }
  v8 = *((_BYTE *)a1 + 16);
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  if ( (v8 & 1) != 0 )
    *((_BYTE *)a1 + 16) |= 1u;
}
