/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x14068ECFC
 * Callers:
 *     CmLoadKey @ 0x140596790 (CmLoadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     CmpRecordUnloadEventForHive @ 0x14046EDD4 (CmpRecordUnloadEventForHive.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404E3B40 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1404E3C0C (LOCK_HIVE_LOAD.c)
 *     CmpReferenceKeyControlBlock @ 0x140563480 (CmpReferenceKeyControlBlock.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14068EB9C (CmpIsHiveAlreadyLoaded.c)
 */

__int64 __fastcall CmpResolveHiveLoadConflict(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        void *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v11; // r15
  __int64 v12; // rdx
  int v13; // eax
  __int64 *v14; // rdi
  unsigned int v15; // ebx
  __int64 v16; // r14
  int v17; // edx
  int v18; // esi
  __int64 v19; // rbx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 *v22; // rcx
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v26; // [rsp+50h] [rbp-B0h]
  _QWORD *v27; // [rsp+58h] [rbp-A8h]
  _QWORD v28[30]; // [rsp+60h] [rbp-A0h] BYREF

  v26 = a6;
  v27 = a7;
  v25 = 0LL;
  Object = 0LL;
  v11 = 0LL;
  memset(v28, 0, sizeof(v28));
  v28[19] = &v28[18];
  v28[18] = &v28[18];
  memset(&v28[20], 0, 0x50uLL);
  v13 = ObReferenceObjectByNameEx(a1, v12, 0x20019u, (__int64)CmKeyObjectType, 0, (__int64)v28, &Object);
  v14 = (__int64 *)Object;
  if ( v13 < 0 )
  {
    v15 = -1073741275;
    goto LABEL_33;
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  if ( !a4 )
    goto LABEL_9;
  if ( !CmpIsKeyDeletedForKeyBody(a4, 0LL) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 24LL);
    if ( v11 && (*(_DWORD *)(v11 + 5360) & 1) == 0 )
    {
      v15 = -1073741811;
      goto LABEL_32;
    }
LABEL_9:
    if ( CmpIsHiveAlreadyLoaded((__int64)v14, a2, a3, (__int64)&v25, v26) )
    {
      v16 = v25;
      v17 = *(_DWORD *)(v25 + 144);
      if ( (v17 & 0x8000) != 0 && (a3 & 0x2000) == 0 || (v17 & 0x8000) == 0 && (a3 & 0x2000) != 0 )
      {
        v15 = -1073741757;
        goto LABEL_32;
      }
      CmpLockKcbExclusive(v14[1]);
      if ( (a3 & 0x800) != 0 )
      {
        CmpReferenceKeyControlBlock(v14[1]);
        *v27 = v14[1];
      }
      if ( !a5 || (v18 = CmpRecordUnloadEventForHive(v16, a5), v18 >= 0) )
      {
        CmpUnlockKcb(v14[1]);
        if ( v11 )
        {
          v19 = v16 + 5368;
          if ( *(_QWORD *)v19 != v19 )
          {
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
            v20 = *(_QWORD *)v19;
            if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 || (v21 = *(_QWORD **)(v16 + 5376), *v21 != v19) )
              __fastfail(3u);
            *v21 = v20;
            *(_QWORD *)(v20 + 8) = v21;
            ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          }
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          v22 = *(__int64 **)(v11 + 5376);
          if ( *v22 != v11 + 5368 )
            __fastfail(3u);
          *(_QWORD *)(v16 + 5376) = v22;
          *(_QWORD *)v19 = v11 + 5368;
          *v22 = v19;
          *(_QWORD *)(v11 + 5376) = v19;
          ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          *(_DWORD *)(v16 + 5360) |= 1u;
        }
        v15 = 0;
        goto LABEL_32;
      }
      CmpUnlockKcb(v14[1]);
    }
    else
    {
      v18 = -1073741757;
    }
    if ( v18 == -1073741275 )
      v18 = -1073741823;
    v15 = v18;
    goto LABEL_32;
  }
  v15 = -1073741444;
LABEL_32:
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
LABEL_33:
  if ( v14 )
    ObfDereferenceObject(v14);
  CmpCleanupParseContext((__int64)v28, 0);
  return v15;
}
