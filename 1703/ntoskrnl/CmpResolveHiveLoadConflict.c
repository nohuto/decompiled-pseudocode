/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x1406653F8
 * Callers:
 *     CmLoadKey @ 0x1404CBC54 (CmLoadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpRecordUnloadEventForHive @ 0x1404CA910 (CmpRecordUnloadEventForHive.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404D8520 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1404D85E4 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpReferenceKeyControlBlock @ 0x14054CCC0 (CmpReferenceKeyControlBlock.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140665298 (CmpIsHiveAlreadyLoaded.c)
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
  __int64 v10; // r14
  __int64 v12; // rdx
  int v13; // eax
  __int64 *v14; // rdi
  unsigned int v15; // ebx
  __int64 *v16; // rbp
  int v17; // edx
  int v18; // esi
  __int64 *v19; // rbx
  __int64 v20; // rcx
  __int64 **v21; // rax
  __int64 **v22; // rcx
  PVOID Object; // [rsp+40h] [rbp-148h] BYREF
  __int64 *v25; // [rsp+48h] [rbp-140h] BYREF
  _QWORD *v26; // [rsp+50h] [rbp-138h]
  _BYTE v27[224]; // [rsp+60h] [rbp-128h] BYREF

  v26 = a7;
  v25 = 0LL;
  Object = 0LL;
  v10 = 0LL;
  memset(v27, 0, sizeof(v27));
  v13 = ObReferenceObjectByNameEx(a1, v12, 0x20019u, (__int64)CmKeyObjectType, 0, (__int64)v27, &Object);
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
    v10 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 24LL);
    if ( v10 && (*(_DWORD *)(v10 + 5360) & 1) == 0 )
    {
      v15 = -1073741811;
      goto LABEL_32;
    }
LABEL_9:
    if ( CmpIsHiveAlreadyLoaded((__int64)v14, a2, a3, &v25, a6) )
    {
      v16 = v25;
      v17 = *((_DWORD *)v25 + 36);
      if ( (v17 & 0x8000) != 0 && (a3 & 0x2000) == 0 || (v17 & 0x8000) == 0 && (a3 & 0x2000) != 0 )
      {
        v15 = -1073741757;
        goto LABEL_32;
      }
      CmpLockKcbExclusive(v14[1]);
      if ( (a3 & 0x800) != 0 )
      {
        CmpReferenceKeyControlBlock(v14[1]);
        *v26 = v14[1];
      }
      if ( !a5 || (v18 = CmpRecordUnloadEventForHive((__int64)v16, a5), v18 >= 0) )
      {
        CmpUnlockKcb(v14[1]);
        if ( v10 )
        {
          v19 = v16 + 671;
          if ( (__int64 *)*v19 != v19 )
          {
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
            v20 = *v19;
            v21 = (__int64 **)v16[672];
            if ( *(__int64 **)(*v19 + 8) != v19 || *v21 != v19 )
              __fastfail(3u);
            *v21 = (__int64 *)v20;
            *(_QWORD *)(v20 + 8) = v21;
            ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          }
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          v22 = *(__int64 ***)(v10 + 5376);
          if ( *v22 != (__int64 *)(v10 + 5368) )
            __fastfail(3u);
          v16[672] = (__int64)v22;
          *v19 = v10 + 5368;
          *v22 = v19;
          *(_QWORD *)(v10 + 5376) = v19;
          ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          *((_DWORD *)v16 + 1340) |= 1u;
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
  CmpCleanupParseContext((__int64)v27, 0);
  return v15;
}
