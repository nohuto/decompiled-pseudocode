/*
 * XREFs of PiDmaGuardProcessPostRemove @ 0x1405C89E0
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140144EC4 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405C87FC (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     PipDmgIsConsoleLockPolicyActive @ 0x140145224 (PipDmgIsConsoleLockPolicyActive.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x14023DE00 (PiDmaGuardQueueRemoveEntry.c)
 *     PipDmgDestroyIommuExtension @ 0x1405C526C (PipDmgDestroyIommuExtension.c)
 *     PipDmgConsoleUnlockCallback @ 0x1407291F0 (PipDmgConsoleUnlockCallback.c)
 *     PiCslIsConsoleLocked @ 0x140739400 (PiCslIsConsoleLocked.c)
 *     PiDmaGuardQueueInsertEntry @ 0x14073DDA0 (PiDmaGuardQueueInsertEntry.c)
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
    if ( PipDmaRemappingEnabled )
    {
      if ( (*(_BYTE *)(v3 + 16) & 2) != 0 )
      {
        v7 = ((__int64 (__fastcall *)(_QWORD))off_140398AA0[0])(*(_QWORD *)(v3 + 8));
        if ( v7 >= 0 )
          *(_BYTE *)(v3 + 16) &= ~2u;
        *(_QWORD *)(v3 + 8) = 0LL;
      }
      else
      {
        v7 = 0;
      }
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
      PiDmaGuardQueueRemoveEntry(v9);
    }
  }
}
