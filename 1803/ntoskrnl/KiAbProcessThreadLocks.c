/*
 * XREFs of KiAbProcessThreadLocks @ 0x1400640E0
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x140063F80 (KiAbDeferredProcessingWorker.c)
 *     KiAbPropagateBoosts @ 0x140064050 (KiAbPropagateBoosts.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiAbDetermineMaxWaiterPriority @ 0x1400638BC (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbIoBoostOwners @ 0x140063C78 (KiAbIoBoostOwners.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140063D78 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbCpuBoostOwners @ 0x140063E30 (KiAbCpuBoostOwners.c)
 *     KiAbSetMinimumThreadPriority @ 0x140064924 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140064B24 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140064BFC (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140064C50 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140064D30 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400E7EF0 (KiAbEntryGetLockedHeadEntry.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessThreadLocks(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // r14d
  int v8; // r15d
  __int64 v10; // rdx
  int v11; // r13d
  unsigned int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // rax
  bool v15; // zf
  int v16; // esi
  _RTL_RB_TREE *LockedHeadEntry; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  char v22; // r9
  char v23; // r14
  int v24; // r10d
  char CpuPriorityKey; // r15
  int v26; // eax
  char v27; // al
  char v28; // r9
  _DWORD *v29; // rbx
  char v30; // al
  __int64 ExtensionTable; // rax
  int v32; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+38h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  int v35; // [rsp+A0h] [rbp+40h] BYREF
  int v36; // [rsp+B0h] [rbp+50h]
  int v37; // [rsp+B8h] [rbp+58h]

  v37 = a4;
  v36 = a3;
  v7 = a4;
  v8 = a3;
  if ( (*(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 1422)) != 63 )
  {
    v10 = a1 + 800;
    v11 = *(char *)(a1 + 792) | *(char *)(a1 + 1422);
    v33 = a1 + 800;
    v12 = v11 ^ 0x3F;
    v15 = !_BitScanForward((unsigned int *)&a1, v12);
    if ( !v15 )
    {
      while ( 1 )
      {
        v12 &= v12 - 1;
        v13 = v10 + 96 * a1;
        v14 = *(_QWORD *)(v13 + 32);
        if ( !v14 || (v14 & 2) != 0 )
          break;
        if ( a2 && (v14 & 1) != 0 )
          goto LABEL_23;
        if ( *(__int64 *)(v13 + 32) >= 0 )
        {
          v26 = a2;
LABEL_26:
          if ( !v26 )
            goto LABEL_23;
          goto LABEL_11;
        }
        if ( a2 )
        {
          if ( (*(_BYTE *)(v13 + 27) & 1) != 0 )
            goto LABEL_23;
          if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
          {
            if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v10 + 96 * a1, v10, 15LL) == *(_BYTE *)(v13 + 48) )
              goto LABEL_22;
LABEL_11:
            v16 = 0;
            v32 = 0;
            LockedHeadEntry = (_RTL_RB_TREE *)KiAbEntryGetLockedHeadEntry((PRTL_BALANCED_NODE)v13);
            v20 = (__int64)LockedHeadEntry;
            if ( LockedHeadEntry )
            {
              if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
              {
                if ( v8 )
                {
                  if ( (_RTL_RB_TREE *)v13 != LockedHeadEntry )
                    KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v13);
                  v21 = *(_QWORD *)(v20 + 56);
                  if ( v21 )
                  {
                    v22 = *(_BYTE *)(v21 + 48);
                    LOBYTE(v35) = v22;
                  }
                  else
                  {
                    LOBYTE(v35) = 15;
                    v22 = 15;
                  }
                  v23 = v22;
                  if ( (*(_BYTE *)(v20 + 25) & 1) == 0 )
                  {
                    v27 = KiAbOwnerComputeCpuPriorityKey(v20, v18, v19);
                    v23 = v28;
                    if ( v27 < v28 )
                    {
                      LOBYTE(v35) = v27;
                      v23 = v27;
                    }
                  }
                  KiAbTryIncrementIoWaiterCounts(v13, v20);
                  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v13);
                  if ( v23 < CpuPriorityKey )
                  {
                    if ( v24 )
                      goto LABEL_49;
                  }
                  else
                  {
                    if ( !v24 )
                      goto LABEL_21;
LABEL_49:
                    KiAbIoBoostOwners(v20, v24, a5, a6, a7);
                  }
                  KiAbCpuBoostOwners(v20, CpuPriorityKey, a5, a6, a7);
                }
LABEL_33:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                if ( v16 )
                {
                  v29 = (_DWORD *)(v13 - (unsigned __int16)(16 * *(unsigned __int8 *)(v13 + 24)));
                  if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v29, 1953261124LL) )
                  {
                    if ( (v16 & 1) != 0 )
                      IoBoostThreadIoPriority(v29, 2LL, 0x80000000LL);
                    if ( (v16 & 2) != 0 && v29[452] )
                    {
                      ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                      if ( ExtensionTable )
                      {
                        (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v29);
                        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                      }
                    }
                    ObDereferenceObjectDeferDeleteWithTag(v29, 0x746C6644u);
                  }
                }
                goto LABEL_22;
              }
              if ( !v7 )
                goto LABEL_33;
              if ( (_RTL_RB_TREE *)v13 != LockedHeadEntry )
                KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13, LockedHeadEntry);
              KiAbDetermineMaxWaiterPriority(v20, (__int64)&v35);
              if ( v35 )
              {
                if ( (unsigned int)KiAbSetMinimumThreadPriority(v13, (unsigned int)&v35, a5, a6, a7, (__int64)&v32)
                  && v13 != v20 )
                {
                  KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13, (_RTL_RB_TREE *)v20);
                }
                v16 = v32;
                goto LABEL_33;
              }
LABEL_21:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            }
LABEL_22:
            v10 = v33;
            goto LABEL_23;
          }
          v30 = *(_BYTE *)(v13 - (unsigned __int16)(16 * *(unsigned __int8 *)(v13 + 24)) + 195);
          if ( v30 > 15 )
            v30 = 15;
          v15 = v30 == *(_BYTE *)(v13 + 48);
        }
        else if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
        {
          v15 = v8 == 0;
        }
        else
        {
          v15 = v7 == 0;
        }
        if ( !v15 )
          goto LABEL_11;
LABEL_23:
        v15 = !_BitScanForward((unsigned int *)&a1, v12);
        v7 = v37;
        v8 = v36;
        if ( v15 )
          return;
      }
      v26 = 0;
      goto LABEL_26;
    }
  }
}
