/*
 * XREFs of ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F4E4
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C138 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM.c)
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F3E8 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042EC0 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampClientRemove@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F584 (-HampClientRemove@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x18001F5D0 (RmpWnfCleanupPendingCallbackList.c)
 *     CemRcTableGetFirst @ 0x18001F640 (CemRcTableGetFirst.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F698 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F6C0 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047218 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 *     CemRcTableGetNext @ 0x1800495FC (CemRcTableGetNext.c)
 */

void __fastcall HampClientDestroy(struct _HAM_CLIENT_CONTEXT *a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi
  __int64 i; // rax
  __int64 v5; // rdi
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  struct _HAM_CLIENT_CONTEXT *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  HampClientAcquireLockExclusive(a1);
  v2 = (_QWORD *)((char *)a1 + 40);
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    if ( _InterlockedIncrement64(v3 - 3) <= 1 )
      __fastfail(0xEu);
    HampClientReleaseLockExclusive(a1);
    HampActClose((struct _HAM_ACTIVITY *)(v3 - 6));
    CemRcObjectDereference(v3 - 6, v7, v8, v9);
    HampClientAcquireLockExclusive(a1);
  }
  HampClientReleaseLockExclusive(a1);
  for ( i = CemRcTableGetFirst((char *)a1 + 56); ; i = CemRcTableGetNext(v5) )
  {
    v5 = i;
    if ( !i )
      break;
    HampClientAcquireLockExclusive(*(struct _HAM_CLIENT_CONTEXT **)(i + 40));
    v10 = *(_DWORD *)(v5 + 64);
    v11 = *(struct _HAM_CLIENT_CONTEXT **)(v5 + 40);
    if ( (v10 & 2) != 0 )
    {
      HampClientReleaseLockExclusive(v11);
    }
    else
    {
      *(_DWORD *)(v5 + 64) = v10 | 2;
      HampClientReleaseLockExclusive(v11);
      CemRcObjectDereference(v5, v12, v13, v14);
    }
  }
  v6 = (void *)*((_QWORD *)a1 + 14);
  if ( v6 )
    RmpWnfCleanupPendingCallbackList(v6);
  if ( *(_QWORD *)a1 )
    HampClientRemove(a1);
  if ( *((_DWORD *)a1 + 26) || *((_DWORD *)a1 + 27) )
    NtDeleteWnfStateName((char *)a1 + 104);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
