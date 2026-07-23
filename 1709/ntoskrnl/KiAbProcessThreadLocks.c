/*
 * XREFs of KiAbProcessThreadLocks @ 0x1400A7650
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiAbDeferredProcessingWorker @ 0x1400A79A0 (KiAbDeferredProcessingWorker.c)
 *     KiAbPropagateBoosts @ 0x1400A86D0 (KiAbPropagateBoosts.c)
 * Callees:
 *     KiAbEntryGetLockedHeadEntry @ 0x14005E0E0 (KiAbEntryGetLockedHeadEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400A6E08 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1400A8B70 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1400A8BC0 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1400A9504 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1400A95A0 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x1400AA790 (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400AA8CC (KiAbEntryUpdateWaiterTreePosition.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 *     KiAbIoBoostOwners @ 0x14011B6B8 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14011BBCC (KiAbCpuBoostOwners.c)
 *     ExGetExtensionTable @ 0x14011BEF0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessThreadLocks(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // r12d
  int v8; // r15d
  __int64 v10; // rdi
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // r13d
  char *LockedHeadEntry; // rax
  char *v18; // r14
  __int64 v19; // rax
  char v20; // r15
  int v21; // r10d
  char CpuPriorityKey; // r12
  char v23; // al
  _DWORD *v24; // rsi
  char v25; // al
  __int64 ExtensionTable; // rax
  int v27; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  int v29; // [rsp+90h] [rbp+8h] BYREF
  int v30; // [rsp+A0h] [rbp+18h]
  int v31; // [rsp+A8h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v7 = a4;
  v8 = a3;
  v10 = a1;
  if ( (*(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 1422)) != 63 )
  {
    v11 = (*(char *)(a1 + 792) | *(char *)(a1 + 1422)) ^ 0x3F;
    for ( i = !_BitScanForward((unsigned int *)&a1, v11); !i; v7 = v31 )
    {
      v11 &= v11 - 1;
      v13 = 96 * a1;
      v14 = v13 + v10 + 800;
      v15 = *(_QWORD *)(v14 + 32);
      if ( !v15 || (v15 & 2) != 0 || a2 && (v15 & 1) != 0 )
        goto LABEL_21;
      if ( *(__int64 *)(v14 + 32) >= 0 )
      {
        if ( !a2 )
          goto LABEL_21;
      }
      else if ( a2 )
      {
        if ( (*(_BYTE *)(v14 + 27) & 1) != 0 )
          goto LABEL_21;
        if ( (*(_BYTE *)(v14 + 25) & 1) != 0 )
        {
          v25 = *(_BYTE *)(v14 - (unsigned __int16)(16 * *(unsigned __int8 *)(v14 + 24)) + 195);
          if ( v25 > 15 )
            v25 = 15;
          if ( v25 == *(_BYTE *)(v14 + 48) )
            goto LABEL_21;
        }
        else if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v13 + v10 + 800) == *(_BYTE *)(v14 + 48) )
        {
          goto LABEL_21;
        }
      }
      else if ( (*(_BYTE *)(v14 + 25) & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_21;
      }
      else if ( !v7 )
      {
        goto LABEL_21;
      }
      v16 = 0;
      v27 = 0;
      LockedHeadEntry = KiAbEntryGetLockedHeadEntry((char *)v14, a2, &LockHandle);
      v18 = LockedHeadEntry;
      if ( LockedHeadEntry )
      {
        if ( (*(_BYTE *)(v14 + 25) & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_30;
          if ( (char *)v14 != LockedHeadEntry )
            KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v14);
          v19 = *((_QWORD *)v18 + 7);
          if ( v19 )
            v20 = *(_BYTE *)(v19 + 48);
          else
            v20 = 15;
          i = (v18[25] & 1) == 0;
          LOBYTE(v29) = v20;
          if ( i )
          {
            v23 = KiAbOwnerComputeCpuPriorityKey(v18);
            if ( v23 < v20 )
            {
              v20 = v23;
              LOBYTE(v29) = v23;
            }
          }
          KiAbTryIncrementIoWaiterCounts(v14, v18);
          CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v14);
          if ( v20 < CpuPriorityKey )
          {
            if ( v21 )
LABEL_45:
              KiAbIoBoostOwners((_DWORD)v18, v21, a5, a6, a7);
            KiAbCpuBoostOwners((_DWORD)v18, (unsigned __int8)CpuPriorityKey, a5, a6, a7);
LABEL_30:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( v16 )
            {
              v24 = (_DWORD *)(v14 - (unsigned __int16)(16 * *(unsigned __int8 *)(v14 + 24)));
              if ( ObReferenceObjectSafeWithTag((__int64)v24) )
              {
                if ( (v16 & 1) != 0 )
                  IoBoostThreadIoPriority(v24, 2LL, 0x80000000LL);
                if ( (v16 & 2) != 0 && v24[452] )
                {
                  ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                  if ( ExtensionTable )
                  {
                    (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v24);
                    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                  }
                }
                ObDereferenceObjectDeferDeleteWithTag(v24, 0x746C6644u);
              }
            }
            goto LABEL_21;
          }
          if ( v21 )
            goto LABEL_45;
        }
        else
        {
          if ( !v7 )
            goto LABEL_30;
          if ( (char *)v14 != LockedHeadEntry )
            KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v14);
          KiAbDetermineMaxWaiterPriority(v18, &v29);
          if ( v29 )
          {
            if ( (unsigned int)KiAbSetMinimumThreadPriority(v14, (__int64)&v29, a5, a6, a7, &v27) && (char *)v14 != v18 )
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v14);
            v16 = v27;
            goto LABEL_30;
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
LABEL_21:
      i = !_BitScanForward((unsigned int *)&a1, v11);
      v8 = v30;
    }
  }
}
