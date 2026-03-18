/*
 * XREFs of DpiRequestIoPowerState @ 0x1C01F1AF8
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F05A0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C01F4850 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C01F60B0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoInitializeFdo @ 0x1C01F6A34 (DpiFdoInitializeFdo.c)
 *     DpiFdoResetFdo @ 0x1C01F8990 (DpiFdoResetFdo.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C01F8B44 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z @ 0x1C003A614 (-DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z.c)
 */

__int64 __fastcall DpiRequestIoPowerState(__int64 a1, LONG a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  NTSTATUS v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _KEVENT v11[4]; // [rsp+30h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  memset(v11, 0, 0x58uLL);
  v11[1].Header.WaitListHead.Flink = 0LL;
  v11[3].Header.WaitListHead.Flink = 0LL;
  v11[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)0xB74727044LL;
  v11[1].Header.LockNV = a2;
  LODWORD(v11[1].Header.WaitListHead.Blink) = a4;
  KeInitializeEvent(&v11[2], SynchronizationEvent, 0);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 4104));
  DpiInsertEntryToPowerActionQueue((KSPIN_LOCK *)v4, (struct _DPI_POWER_ACTION *)v11);
  KeSetEvent((PRKEVENT)(v4 + 3760), 0, 0);
  if ( a2 == 7 )
  {
    v7 = KeWaitForSingleObject(*(PVOID *)(v4 + 3752), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v4 + 3752));
  }
  else
  {
    v7 = KeWaitForSingleObject(&v11[2], Executive, 0, 0, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 4104));
  if ( v7 )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = v7;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    return (unsigned int)v11[3].Header.Lock;
  }
  return (unsigned int)v7;
}
