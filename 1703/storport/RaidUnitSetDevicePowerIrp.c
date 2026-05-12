/*
 * XREFs of RaidUnitSetDevicePowerIrp @ 0x1C000E684
 * Callers:
 *     RaidUnitSetPowerIrp @ 0x1C000E478 (RaidUnitSetPowerIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0005080 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000E778 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001D930 (RaidAdapterPoFxActivateComponent.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidUnitSetDevicePowerIrp(struct _SLIST_ENTRY *Context, _SLIST_ENTRY *Irp)
{
  __int64 v2; // rdi
  char v6; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)&Context[1].Next + 1);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 50LL, &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids, Context, Irp);
  }
  if ( HIDWORD(Context[12].Next) == 4 && *(_DWORD *)(*((_QWORD *)&Irp[11].Next + 1) + 24LL) == 1 )
  {
    if ( (*(_BYTE *)(v2 + 109) & 4) == 0 && *(_QWORD *)(v2 + 5088) )
    {
      v6 = *((_BYTE *)&Context[9].Next + 9);
      if ( (v6 & 8) == 0 )
      {
        *((_BYTE *)&Context[9].Next + 9) = v6 | 8;
        RaidAdapterPoFxActivateComponent(v2, 0LL);
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 80), &LockHandle);
    if ( *(int *)(v2 + 268) > 1 )
    {
      *((_BYTE *)&Context[101].Next + 9) = 1;
      Context[102].Next = Irp;
      RaUnitAcquireRemoveLock((__int64)Context);
      *(_BYTE *)(*((_QWORD *)&Irp[11].Next + 1) + 3LL) |= 1u;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v2 + 5072), Context + 103);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 259LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return RaidUnitProcessSetDevicePowerIrp(Context, (PIRP)Irp);
}
