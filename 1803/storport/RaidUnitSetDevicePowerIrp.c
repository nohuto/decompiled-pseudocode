/*
 * XREFs of RaidUnitSetDevicePowerIrp @ 0x1C000E0E8
 * Callers:
 *     RaidUnitSetPowerIrp @ 0x1C000DE04 (RaidUnitSetPowerIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0008084 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000E75C (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0026AA8 (RaidAdapterPoFxActivateComponent.c)
 *     WPP_SF_qq @ 0x1C002C280 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidUnitSetDevicePowerIrp(struct _SLIST_ENTRY *Context, _SLIST_ENTRY *Irp)
{
  __int64 v2; // rdi
  __int64 v5; // r8
  char v7; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)&Context[1].Next + 1);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 50LL, &WPP_39b6f691d58430155b1312f31604fba7_Traceguids, Context, Irp);
  }
  if ( HIDWORD(Context[12].Next) == 4 && *(_DWORD *)(*((_QWORD *)&Irp[11].Next + 1) + 24LL) == 1 )
  {
    if ( (*(_BYTE *)(v2 + 109) & 4) == 0 && *(_QWORD *)(v2 + 5088) )
    {
      v7 = *((_BYTE *)&Context[9].Next + 9);
      if ( (v7 & 8) == 0 )
      {
        *((_BYTE *)&Context[9].Next + 9) = v7 | 8;
        RaidAdapterPoFxActivateComponent(v2, 0LL, 0LL);
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 80), &LockHandle);
    if ( *(int *)(v2 + 268) > 1 )
    {
      LOBYTE(v5) = 1;
      *((_BYTE *)&Context[103].Next + 9) = 1;
      Context[104].Next = Irp;
      RaUnitAcquireRemoveLock((__int64)Context, (__int64)Irp, v5);
      *(_BYTE *)(*((_QWORD *)&Irp[11].Next + 1) + 3LL) |= 1u;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v2 + 5072), Context + 105);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 259LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return RaidUnitProcessSetDevicePowerIrp(Context, (PIRP)Irp);
}
