/*
 * XREFs of ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800582B8
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004E354 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180057BC4 (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1800583B4 (-RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall RmpGameModeRundown(struct _RM_GAME_MODE_CONTEXT *a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  struct _RTL_BALANCED_NODE *v4; // rcx
  int v5; // esi
  struct _RTL_BALANCED_NODE *v6; // rdx
  unsigned __int64 v7; // rax
  struct _RTL_BALANCED_NODE *v8; // rdx
  unsigned __int64 v9; // rbx

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
  v2 = *((_QWORD *)a1 + 2);
  v3 = (unsigned __int64)a1 + 8;
  v4 = *(struct _RTL_BALANCED_NODE **)v3;
  if ( (v2 & 1) != 0 && v4 )
    v4 = (struct _RTL_BALANCED_NODE *)(v3 ^ (unsigned __int64)v4);
  v5 = v2 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v4->Children[0] )
        {
          v6 = v4;
          if ( v5 )
            v4 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v4->Children[0] ^ (unsigned __int64)v4);
          else
            v4 = v4->Children[0];
          v6->Children[0] = 0LL;
        }
        v7 = (unsigned __int64)v4->Children[1];
        if ( !v7 )
          break;
        v8 = v4;
        if ( v5 )
          v4 = (struct _RTL_BALANCED_NODE *)(v7 ^ (unsigned __int64)v4);
        else
          v4 = v4->Children[1];
        v8->Children[1] = 0LL;
      }
      v9 = v4->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v9 )
        v9 ^= (unsigned __int64)v4;
      RmpGameModeRundownRecipientProcessTreeCallback(v4, 0LL);
      if ( !v9 )
        break;
      v4 = (struct _RTL_BALANCED_NODE *)v9;
    }
    LOBYTE(v2) = *(_BYTE *)(v3 + 8);
  }
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  if ( (v2 & 1) != 0 )
    *(_BYTE *)(v3 + 8) = 1;
}
