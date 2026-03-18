/*
 * XREFs of ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0004DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxSystemWorkItem::_WorkItemThunk(_DEVICE_OBJECT *DeviceObject, char *Context, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *v4; // rdx
  unsigned __int8 v5; // al
  void (__fastcall *v6)(__int64); // rsi
  __int64 v7; // rdi
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // di
  unsigned __int8 v10; // r8
  bool v11; // zf
  FxVerifierLock *v12; // rcx
  FxVerifierLock *v13; // rcx
  FxVerifierLock *v14; // rcx
  unsigned __int8 PreviousIrql; // [rsp+38h] [rbp+10h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)Context + 2);
  if ( v4->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v4;
  if ( Context[24] < 0 && (v12 = (FxVerifierLock *)*((_QWORD *)Context - 5)) != 0LL )
  {
    FxVerifierLock::Lock(v12, &PreviousIrql, a3);
    v5 = PreviousIrql;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    PreviousIrql = v5;
  }
  v6 = (void (__fastcall *)(__int64))*((_QWORD *)Context + 17);
  v7 = *((_QWORD *)Context + 18);
  ++*((_DWORD *)Context + 46);
  *((_QWORD *)Context + 17) = 0LL;
  Context[121] = 0;
  FxNonPagedObject::Unlock((FxNonPagedObject *)Context, v5);
  v6(v7);
  if ( Context[24] < 0 && (v13 = (FxVerifierLock *)*((_QWORD *)Context - 5)) != 0LL )
  {
    FxVerifierLock::Lock(v13, &PreviousIrql, v8);
    v9 = PreviousIrql;
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    PreviousIrql = v9;
  }
  v11 = (*((_DWORD *)Context + 46))-- == 1;
  if ( v11 && !Context[121] )
    KeSetEvent((PRKEVENT)(Context + 152), 0, 0);
  if ( Context[24] < 0 && (v14 = (FxVerifierLock *)*((_QWORD *)Context - 5)) != 0LL )
    FxVerifierLock::Unlock(v14, v9, v10);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v9);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 47, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)Context + 8, 0, 0);
}
