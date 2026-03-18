/*
 * XREFs of PiDmaGuardProcessPostRemove @ 0x14055DC84
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1400FEF24 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405E9D90 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     PipDmgIsConsoleLockPolicyActive @ 0x1400FF29C (PipDmgIsConsoleLockPolicyActive.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x140200D2C (PiDmaGuardQueueRemoveEntry.c)
 *     PipDmgDestroyIommuExtension @ 0x1405171F8 (PipDmgDestroyIommuExtension.c)
 *     PipDmgConsoleUnlockCallback @ 0x1406C3110 (PipDmgConsoleUnlockCallback.c)
 *     PiCslIsConsoleLocked @ 0x1406D4410 (PiCslIsConsoleLocked.c)
 *     PiDmaGuardQueueInsertEntry @ 0x1406D463C (PiDmaGuardQueueInsertEntry.c)
 */

void __fastcall PiDmaGuardProcessPostRemove(ULONG_PTR BugCheckParameter4, int a2, char a3)
{
  __int64 v3; // rdi
  int v7; // esi
  __int64 v8; // rax
  void *v9; // rcx

  v3 = *(_QWORD *)(BugCheckParameter4 + 720);
  if ( v3 )
  {
    if ( PipDmaRemappingEnabled && (*(_BYTE *)(v3 + 8) & 2) != 0 )
    {
      v7 = ((__int64 (__fastcall *)(_QWORD))off_140353700[0])(*(_QWORD *)v3);
      if ( v7 < 0 )
      {
        IoAddTriageDumpDataBlock(BugCheckParameter4, 728);
        if ( *(_WORD *)(BugCheckParameter4 + 40) )
        {
          IoAddTriageDumpDataBlock(BugCheckParameter4 + 40, 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(BugCheckParameter4 + 48), *(unsigned __int16 *)(BugCheckParameter4 + 40));
        }
        if ( *(_WORD *)(BugCheckParameter4 + 56) )
        {
          IoAddTriageDumpDataBlock(BugCheckParameter4 + 56, 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(BugCheckParameter4 + 64), *(unsigned __int16 *)(BugCheckParameter4 + 56));
        }
        v8 = *(_QWORD *)(BugCheckParameter4 + 16);
        if ( v8 && *(_WORD *)(v8 + 56) )
        {
          IoAddTriageDumpDataBlock(v8 + 56, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 16) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 16) + 56LL));
        }
        KeBugCheckEx(0xCAu, 0x13uLL, 0x1001uLL, v7, BugCheckParameter4);
      }
      *(_BYTE *)(v3 + 8) &= ~2u;
    }
    PipDmgDestroyIommuExtension(BugCheckParameter4);
  }
  if ( a3 && PipDmgIsConsoleLockPolicyActive() )
  {
    v9 = *(void **)(BugCheckParameter4 + 32);
    if ( a2 == 55 )
    {
      PiDmaGuardQueueInsertEntry(v9);
      if ( !(unsigned __int8)PiCslIsConsoleLocked() )
        PipDmgConsoleUnlockCallback();
    }
    else
    {
      PiDmaGuardQueueRemoveEntry((__int64)v9);
    }
  }
}
