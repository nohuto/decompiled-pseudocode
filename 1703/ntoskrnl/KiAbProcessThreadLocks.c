/*
 * XREFs of KiAbProcessThreadLocks @ 0x14011EB5C
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiAbDeferredProcessingWorker @ 0x14011EA00 (KiAbDeferredProcessingWorker.c)
 *     KiAbPropagateBoosts @ 0x14011EACC (KiAbPropagateBoosts.c)
 * Callees:
 *     KiAbEntryGetLockedHeadEntry @ 0x140049DE0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14004B7C8 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 *     KiAbIoBoostOwners @ 0x14011E81C (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14011E910 (KiAbCpuBoostOwners.c)
 *     KiAbSetMinimumThreadPriority @ 0x14011EE4C (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14011F034 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14011F070 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14011F10C (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14011F160 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x14011F320 (KiAbDetermineMaxWaiterPriority.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessThreadLocks(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // esi
  int v8; // r15d
  unsigned int v9; // r9d
  __int64 v10; // r12
  unsigned int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  bool v15; // zf
  int v16; // r14d
  char *LockedHeadEntry; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  char v20; // si
  int v21; // r10d
  char CpuPriorityKey; // r15
  unsigned int v23; // eax
  char v24; // al
  char v25; // dl
  __int64 v26; // rbx
  char v27; // al
  unsigned __int64 ExtensionTable; // rax
  int v29; // [rsp+30h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  int v31; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v32; // [rsp+A8h] [rbp+50h]
  int v33; // [rsp+B0h] [rbp+58h]
  int v34; // [rsp+B8h] [rbp+60h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  if ( (*(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 1422)) != 63 )
  {
    v11 = (*(char *)(a1 + 792) | *(char *)(a1 + 1422)) ^ 0x3F;
    v15 = !_BitScanForward((unsigned int *)&a1, v11);
    if ( !v15 )
    {
      while ( 1 )
      {
        v11 &= v11 - 1;
        v12 = 96 * a1;
        v13 = v12 + v10 + 800;
        v14 = *(_QWORD *)(v13 + 32);
        if ( !v14 || (v14 & 2) != 0 )
          break;
        if ( v9 && (v14 & 1) != 0 )
          goto LABEL_23;
        if ( *(__int64 *)(v13 + 32) >= 0 )
        {
          v23 = v9;
          goto LABEL_27;
        }
        if ( v9 )
        {
          if ( (*(_BYTE *)(v13 + 27) & 1) != 0 )
            goto LABEL_23;
          if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
          {
            if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v12 + v10 + 800) == *(_BYTE *)(v13 + 48) )
              goto LABEL_23;
LABEL_11:
            v16 = 0;
            v29 = 0;
            LockedHeadEntry = KiAbEntryGetLockedHeadEntry((char *)v13, v9, &LockHandle);
            v18 = (__int64)LockedHeadEntry;
            if ( LockedHeadEntry )
            {
              if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
              {
                if ( v8 )
                {
                  if ( (char *)v13 != LockedHeadEntry )
                    KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v13, (_RTL_RB_TREE *)LockedHeadEntry);
                  v19 = *(_QWORD *)(v18 + 56);
                  if ( v19 )
                    v20 = *(_BYTE *)(v19 + 48);
                  else
                    v20 = 15;
                  v15 = (*(_BYTE *)(v18 + 25) & 1) == 0;
                  LOBYTE(v31) = v20;
                  if ( v15 )
                  {
                    v24 = KiAbOwnerComputeCpuPriorityKey(v18);
                    v25 = v20;
                    if ( v24 < v20 )
                      v25 = v24;
                    v20 = v25;
                    LOBYTE(v31) = v25;
                  }
                  KiAbTryIncrementIoWaiterCounts(v13, v18);
                  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v13);
                  if ( v20 < CpuPriorityKey )
                  {
                    if ( v21 )
                      goto LABEL_47;
                  }
                  else
                  {
                    if ( !v21 )
                      goto LABEL_21;
LABEL_47:
                    KiAbIoBoostOwners(v18, v21, a5, a6, a7);
                  }
                  KiAbCpuBoostOwners(v18, CpuPriorityKey, a5, a6, a7);
                }
LABEL_34:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                if ( v16 )
                {
                  v26 = v13 - 16LL * *(unsigned __int8 *)(v13 + 24);
                  if ( ObReferenceObjectSafeWithTag(v26) )
                  {
                    if ( (v16 & 1) != 0 )
                      IoBoostThreadIoPriority((KSPIN_LOCK *)v26, 2, 0x80000000);
                    if ( (v16 & 2) != 0 && *(_DWORD *)(v26 + 1800) )
                    {
                      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
                      if ( ExtensionTable )
                      {
                        (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(v26);
                        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                      }
                    }
                    ObDereferenceObjectDeferDeleteWithTag((PVOID)v26, 0x746C6644u);
                  }
                }
              }
              else
              {
                if ( !v7 )
                  goto LABEL_34;
                if ( (char *)v13 != LockedHeadEntry )
                  KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13);
                KiAbDetermineMaxWaiterPriority(v18, &v31);
                if ( v31 )
                {
                  if ( (unsigned int)KiAbSetMinimumThreadPriority(v13, (unsigned int)&v31, a5, a6, a7, (__int64)&v29)
                    && v13 != v18 )
                  {
                    KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13);
                  }
                  v16 = v29;
                  goto LABEL_34;
                }
LABEL_21:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
            }
            v9 = v32;
            goto LABEL_23;
          }
          v27 = *(_BYTE *)(v13 - 16LL * *(unsigned __int8 *)(v13 + 24) + 195);
          if ( v27 > 15 )
            v27 = 15;
          v15 = v27 == *(_BYTE *)(v13 + 48);
        }
        else if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
        {
          v15 = v8 == 0;
        }
        else
        {
          v15 = v7 == 0;
        }
LABEL_10:
        if ( !v15 )
          goto LABEL_11;
LABEL_23:
        v15 = !_BitScanForward((unsigned int *)&a1, v11);
        v7 = v34;
        v8 = v33;
        if ( v15 )
          return;
      }
      v23 = 0;
LABEL_27:
      v15 = v23 == 0;
      goto LABEL_10;
    }
  }
}
