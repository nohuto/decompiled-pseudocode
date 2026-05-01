/*
 * XREFs of ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800347D0
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180034704 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x18000404C (-HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     CemRcTableGetNext @ 0x180005FE4 (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x1800060D0 (CemRcTableGetFirst.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180012AF0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180029FD0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002A038 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180034854 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003487C (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x1800348AC (RmpWnfCleanupPendingCallbackList.c)
 */

void __fastcall HampClientRundownObjects(struct _HAM_CLIENT_CONTEXT *a1)
{
  struct _HOST_ACTIVITY_MANAGER *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  struct _HAM_PACKAGE **i; // rax
  struct _CEM_RC_OBJECT *v7; // rdi
  void *v8; // rcx

  HampClientAcquireLockExclusive(a1);
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a1);
  v2 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  *((_DWORD *)a1 + 32) |= 1u;
  HampManagerReleaseLockExclusive(v2, v3);
  v4 = (_QWORD *)((char *)a1 + 40);
  while ( 1 )
  {
    v5 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    if ( _InterlockedIncrement64(v5 - 3) <= 1 )
      __fastfail(0xEu);
    HampClientReleaseLockExclusive(a1);
    HampActClose((struct _HAM_ACTIVITY *)(v5 - 6));
    CemRcObjectDereference((struct _CEM_RC_OBJECT *)(v5 - 6));
    HampClientAcquireLockExclusive(a1);
  }
  HampClientReleaseLockExclusive(a1);
  for ( i = (struct _HAM_PACKAGE **)CemRcTableGetFirst((__int64)a1 + 56);
        ;
        i = (struct _HAM_PACKAGE **)CemRcTableGetNext(v7) )
  {
    v7 = (struct _CEM_RC_OBJECT *)i;
    if ( !i )
      break;
    HampClientPkgClose(i);
  }
  if ( (*((_BYTE *)a1 + 128) & 2) == 0 )
  {
    v8 = (void *)*((_QWORD *)a1 + 14);
    if ( v8 )
      RmpWnfCleanupPendingCallbackList(v8);
  }
}
