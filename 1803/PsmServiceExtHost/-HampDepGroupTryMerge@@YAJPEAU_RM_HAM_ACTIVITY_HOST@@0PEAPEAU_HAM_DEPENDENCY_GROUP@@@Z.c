/*
 * XREFs of ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180067264
 * Callers:
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026FF0 (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 * Callees:
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BAB8 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BB78 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F450 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4B8 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180014260 (CempLockTrackerMarkReleased.c)
 *     CempLockTrackerMarkAcquired @ 0x18001B190 (CempLockTrackerMarkAcquired.c)
 *     CempLockAcquireExclusive @ 0x18001B298 (CempLockAcquireExclusive.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18002715C (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002775C (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180027AF0 (-HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18002C220 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180066BB8 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180066D20 (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800675BC (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampDepGroupTryMerge(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  __int64 *v3; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v5; // r14
  __int64 *v6; // r15
  unsigned __int64 v7; // rdi
  struct _HAM_DEPENDENCY_GROUP *v8; // rcx
  unsigned __int64 v9; // rbx
  struct _HAM_DEPENDENCY_GROUP *v10; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v11; // r14
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *i; // rbx
  __int64 v16; // rax
  struct _HAM_DEPENDENCY_LINK *FirstLink; // r14
  unsigned __int64 *v18; // r12
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  int v22; // r12d
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v27[3]; // [rsp+20h] [rbp-40h] BYREF
  struct _HAM_DEPENDENCY_GROUP **v28; // [rsp+38h] [rbp-28h]
  struct _RM_HAM_ACTIVITY_HOST *v29; // [rsp+40h] [rbp-20h]
  unsigned __int64 v30[2]; // [rsp+48h] [rbp-18h] BYREF

  v3 = (__int64 *)*((_QWORD *)a1 + 83);
  v28 = a3;
  v29 = a1;
  v5 = a1;
  if ( _InterlockedIncrement64(v3 + 12) <= 1 )
    __fastfail(0xEu);
  v6 = (__int64 *)*((_QWORD *)a2 + 83);
  if ( _InterlockedIncrement64(v6 + 12) <= 1 )
    __fastfail(0xEu);
  HampHostReleaseLockExclusiveEx(a1);
  HampHostReleaseLockExclusiveEx(a2);
  v7 = *v3;
  v8 = (struct _HAM_DEPENDENCY_GROUP *)v3;
  v9 = *v6;
  if ( *v3 >= (unsigned __int64)*v6 )
    v8 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  HampDepGroupWaitEnterStateChange(v8);
  v10 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  if ( v7 >= v9 )
    v10 = (struct _HAM_DEPENDENCY_GROUP *)v3;
  HampDepGroupWaitEnterStateChange(v10);
  HampHostAcquireTwoLocksExclusive(v5, a2);
  if ( *((__int64 **)v5 + 83) == v3 && *((__int64 **)a2 + 83) == v6 )
  {
    HampHostReleaseLockExclusiveEx(v5);
    HampHostReleaseLockExclusiveEx(a2);
    v27[1] = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v27;
    v27[0] = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v27;
    HampDepGroupTryLockAndReferenceMembers(
      (struct _HAM_DEPENDENCY_GROUP *)v3,
      (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v27);
    v11 = v27[0];
    v12 = 0;
    while ( v11 != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v27 )
    {
      RtlRbRemoveNode(v3 + 7, (char *)v11 - 24);
      *((_QWORD *)v11 - 1) = -1LL;
      if ( (((unsigned __int64)*((unsigned int *)v11 - 18) >> 26) & 7) == 0 )
        --*((_DWORD *)v3 + 23);
      HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v3);
      *((_QWORD *)v11 - 5) = 0LL;
      v11 = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)v11;
    }
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
    for ( i = v27[0]; i != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v27; i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)i )
      HampDepGroupAddHost(
        (struct _HAM_DEPENDENCY_GROUP *)v6,
        (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)i - 704));
    v16 = v3[10];
    if ( (v16 & 1) != 0 )
    {
      if ( v16 == 1 )
        FirstLink = 0LL;
      else
        FirstLink = (struct _HAM_DEPENDENCY_LINK *)(v16 ^ ((unsigned __int64)(v3 + 9) | 1));
    }
    else
    {
      FirstLink = (struct _HAM_DEPENDENCY_LINK *)v3[10];
    }
    if ( FirstLink )
    {
      v18 = (unsigned __int64 *)(v6 + 9);
      do
      {
        CempLockTrackerMarkAcquired(v14, v13, 2u, 0);
        CempLockAcquireExclusive((__int64)FirstLink + 48);
        HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
        RtlRbRemoveNode(v3 + 9, FirstLink);
        *((_QWORD *)FirstLink + 2) = -1LL;
        HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
        v30[0] = *((_QWORD *)FirstLink + 3);
        v30[1] = *((_QWORD *)FirstLink + 4);
        HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v6);
        v20 = v18[1];
        v21 = *v18;
        if ( (v20 & 1) != 0 )
        {
          if ( v21 )
            v21 ^= (unsigned __int64)v18;
          else
            v21 = 0LL;
        }
        LOBYTE(v19) = 0;
        v22 = v20 & 1;
        if ( v21 )
        {
          while ( 1 )
          {
            if ( (int)HampDepGroupCompareDependencyLinkForRbTree(v30, (struct _RTL_BALANCED_NODE *)v21) < 0 )
            {
              v23 = *(_QWORD *)v21;
              if ( v22 )
              {
                if ( !v23 )
                  goto LABEL_42;
                v23 ^= v21;
              }
              if ( !v23 )
              {
LABEL_42:
                LOBYTE(v19) = 0;
                break;
              }
            }
            else
            {
              v23 = *(_QWORD *)(v21 + 8);
              if ( v22 )
              {
                if ( !v23 )
                  goto LABEL_36;
                v23 ^= v21;
              }
              if ( !v23 )
              {
LABEL_36:
                LOBYTE(v19) = 1;
                break;
              }
            }
            v21 = v23;
          }
        }
        v18 = (unsigned __int64 *)(v6 + 9);
        RtlRbInsertNodeEx(v6 + 9, v21, v19, FirstLink);
        HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v6);
        HampDepGroupDereference(*((struct _HAM_DEPENDENCY_GROUP **)FirstLink + 5));
        if ( _InterlockedIncrement64(v6 + 12) <= 1 )
          __fastfail(0xEu);
        *((_QWORD *)FirstLink + 5) = v6;
        CempLockTrackerMarkReleased(v25, v24, 2u);
        *((_DWORD *)FirstLink + 14) = 0;
        RtlReleaseSRWLockExclusive((char *)FirstLink + 48);
        FirstLink = HampDepGroupGetFirstLink((struct _HAM_DEPENDENCY_GROUP *)v3);
      }
      while ( FirstLink );
    }
    HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v27);
    HampDepGroupDereferenceMembers(v27);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v3);
    v5 = v29;
    *v28 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  }
  else
  {
    v12 = -1073741267;
    HampHostReleaseLockExclusiveEx(v5);
    HampHostReleaseLockExclusiveEx(a2);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v6);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v6);
  }
  HampHostAcquireTwoLocksExclusive(v5, a2);
  return v12;
}
