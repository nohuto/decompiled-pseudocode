/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x1406F2EDC
 * Callers:
 *     CmLoadKey @ 0x14057F140 (CmLoadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     UNLOCK_HIVE_LOAD @ 0x14049BB10 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14049BCCC (LOCK_HIVE_LOAD.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     CmpReferenceKeyControlBlock @ 0x14052AA50 (CmpReferenceKeyControlBlock.c)
 *     CmpRecordUnloadEventForHive @ 0x14054E5D0 (CmpRecordUnloadEventForHive.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1406F2D58 (CmpIsHiveAlreadyLoaded.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // esi
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v37; // [rsp+50h] [rbp-B0h]
  _QWORD *v38; // [rsp+58h] [rbp-A8h]
  _QWORD v39[38]; // [rsp+60h] [rbp-A0h] BYREF

  v37 = a6;
  v38 = a7;
  v36 = 0LL;
  Object = 0LL;
  v11 = 0LL;
  memset(v39, 0, 0x128uLL);
  v39[19] = &v39[18];
  v39[18] = &v39[18];
  memset(&v39[27], 0, 0x50uLL);
  v13 = ObReferenceObjectByNameEx(a1, v12, 0x20019u, (__int64)CmKeyObjectType, 0, (__int64)v39, &Object);
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
    if ( v11 && (*(_DWORD *)(v11 + 4152) & 1) == 0 )
    {
      v15 = -1073741811;
      goto LABEL_32;
    }
LABEL_9:
    if ( CmpIsHiveAlreadyLoaded((__int64)v14, a2, a3, (__int64)&v36, v37) )
    {
      v16 = v36;
      v17 = *(_DWORD *)(v36 + 160);
      if ( (v17 & 0x8000) != 0 && (a3 & 0x2000) == 0 || (v17 & 0x8000) == 0 && (a3 & 0x2000) != 0 )
      {
        v15 = -1073741757;
        goto LABEL_32;
      }
      CmpLockKcbExclusive(v14[1]);
      if ( (a3 & 0x800) != 0 )
      {
        CmpReferenceKeyControlBlock(v14[1]);
        *v38 = v14[1];
      }
      if ( !a5 || (v21 = CmpRecordUnloadEventForHive(v16, a5), v21 >= 0) )
      {
        CmpUnlockKcb(v14[1], v18, v19, v20);
        if ( v11 )
        {
          v22 = v16 + 4160;
          if ( *(_QWORD *)v22 != v22 )
          {
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
            v25 = *(_QWORD *)v22;
            if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 || (v26 = *(_QWORD **)(v16 + 4168), *v26 != v22) )
              __fastfail(3u);
            *v26 = v25;
            *(_QWORD *)(v25 + 8) = v26;
            ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, v23, v24);
          }
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          v29 = *(__int64 **)(v11 + 4168);
          if ( *v29 != v11 + 4160 )
            __fastfail(3u);
          *(_QWORD *)(v16 + 4168) = v29;
          *(_QWORD *)v22 = v11 + 4160;
          *v29 = v22;
          *(_QWORD *)(v11 + 4168) = v22;
          ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, v27, v28);
          *(_DWORD *)(v16 + 4152) |= 1u;
        }
        v15 = 0;
        goto LABEL_32;
      }
      CmpUnlockKcb(v14[1], v18, v19, v20);
    }
    else
    {
      v21 = -1073741757;
    }
    if ( v21 == -1073741275 )
      v21 = -1073741823;
    v15 = v21;
    goto LABEL_32;
  }
  v15 = -1073741444;
LABEL_32:
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD(v31, v30, v32, v33);
LABEL_33:
  if ( v14 )
    ObfDereferenceObject(v14);
  CmpCleanupParseContext((__int64)v39, 0);
  return v15;
}
