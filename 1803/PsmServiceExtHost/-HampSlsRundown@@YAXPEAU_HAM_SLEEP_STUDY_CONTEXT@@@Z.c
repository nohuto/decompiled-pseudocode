/*
 * XREFs of ?HampSlsRundown@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x1800695A8
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180064564 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180068CFC (-HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180068FBC (-HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180069580 (-HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 */

void __fastcall HampSlsRundown(struct _HAM_SLEEP_STUDY_CONTEXT *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD **v5; // r15
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  void *v10; // r12
  struct _RTL_BALANCED_NODE *v11; // rcx
  int v12; // ebp
  struct _RTL_BALANCED_NODE *v13; // rdx
  unsigned __int64 v14; // rax
  struct _RTL_BALANCED_NODE *v15; // rdx
  unsigned __int64 v16; // rbx
  void *v17; // rbp
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  struct _RTL_BALANCED_NODE *v20; // rcx
  int v21; // esi
  struct _RTL_BALANCED_NODE *v22; // rdx
  unsigned __int64 v23; // rax
  struct _RTL_BALANCED_NODE *v24; // rdx
  unsigned __int64 v25; // rbx

  HampSlsAcquireLockExclusive(a1, a2);
  *((_DWORD *)a1 + 25) |= 4u;
  HampSlsReleaseLockExclusive(a1, v3);
  if ( *((_QWORD *)a1 + 11) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  v4 = *((_QWORD *)a1 + 10);
  if ( v4 )
    TpWaitForWork(v4, 1LL);
  v5 = (_QWORD **)((char *)a1 + 56);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = v7;
    v8 = (unsigned __int64)(v6 + 3);
    v7[1] = v5;
    v9 = v6[4];
    v10 = (void *)v6[2];
    v11 = (struct _RTL_BALANCED_NODE *)v6[3];
    if ( (v9 & 1) != 0 && v11 )
      v11 = (struct _RTL_BALANCED_NODE *)(v8 ^ (unsigned __int64)v11);
    v12 = v9 & 1;
    if ( v11 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v11->Children[0] )
          {
            v13 = v11;
            if ( v12 )
              v11 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v11->Children[0] ^ (unsigned __int64)v11);
            else
              v11 = v11->Children[0];
            v13->Children[0] = 0LL;
          }
          v14 = (unsigned __int64)v11->Children[1];
          if ( !v14 )
            break;
          v15 = v11;
          if ( v12 )
            v11 = (struct _RTL_BALANCED_NODE *)(v14 ^ (unsigned __int64)v11);
          else
            v11 = v11->Children[1];
          v15->Children[1] = 0LL;
        }
        v16 = v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v12 && v16 )
          v16 ^= (unsigned __int64)v11;
        HampSlsBlockerTreeDeleteCallback(v11, v10);
        if ( !v16 )
          break;
        v11 = (struct _RTL_BALANCED_NODE *)v16;
      }
      LOBYTE(v9) = *((_BYTE *)v6 + 32);
    }
    *(_QWORD *)v8 = 0LL;
    v6[4] = 0LL;
    if ( (v9 & 1) != 0 )
      *((_BYTE *)v6 + 32) = 1;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  v17 = (void *)*((_QWORD *)a1 + 3);
  v18 = (unsigned __int64)a1 + 32;
  v19 = *(_QWORD *)(v18 + 8);
  v20 = *(struct _RTL_BALANCED_NODE **)v18;
  if ( (v19 & 1) != 0 && v20 )
    v20 = (struct _RTL_BALANCED_NODE *)(v18 ^ (unsigned __int64)v20);
  v21 = v19 & 1;
  if ( v20 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v20->Children[0] )
        {
          v22 = v20;
          if ( v21 )
            v20 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v20->Children[0] ^ (unsigned __int64)v20);
          else
            v20 = v20->Children[0];
          v22->Children[0] = 0LL;
        }
        v23 = (unsigned __int64)v20->Children[1];
        if ( !v23 )
          break;
        v24 = v20;
        if ( v21 )
          v20 = (struct _RTL_BALANCED_NODE *)(v23 ^ (unsigned __int64)v20);
        else
          v20 = v20->Children[1];
        v24->Children[1] = 0LL;
      }
      v25 = v20->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v21 && v25 )
        v25 ^= (unsigned __int64)v20;
      HampSlsBlockerTreeDeleteCallback(v20, v17);
      if ( !v25 )
        break;
      v20 = (struct _RTL_BALANCED_NODE *)v25;
    }
    LOBYTE(v19) = *(_BYTE *)(v18 + 8);
  }
  *(_QWORD *)v18 = 0LL;
  *(_QWORD *)(v18 + 8) = 0LL;
  if ( (v19 & 1) != 0 )
    *(_BYTE *)(v18 + 8) = 1;
}
