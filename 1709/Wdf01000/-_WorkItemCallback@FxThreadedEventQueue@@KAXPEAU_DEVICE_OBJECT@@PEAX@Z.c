/*
 * XREFs of ?_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C002D720
 * Callers:
 *     <none>
 * Callees:
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C002D824 (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 */

void __fastcall FxThreadedEventQueue::_WorkItemCallback(_DEVICE_OBJECT *DeviceObject, void *Context)
{
  __int64 v2; // rax
  _FX_DRIVER_GLOBALS *v4; // rdx
  FxPkgPnp *v5; // rsi
  KIRQL v6; // al
  KIRQL v7; // al
  char v8; // dl
  FxPostProcessInfo v9; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)Context + 1);
  v9.m_Event = 0LL;
  *(_WORD *)&v9.m_DeleteObject = 0;
  v9.m_FireAndForgetIrp = 0LL;
  v4 = *(_FX_DRIVER_GLOBALS **)(v2 + 16);
  if ( v4->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v4;
  v5 = (FxPkgPnp *)*((_QWORD *)Context + 1);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 4);
  *((_BYTE *)Context + 96) &= ~1u;
  ++*((_BYTE *)Context + 97);
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 4, v6);
  (*((void (__fastcall **)(_QWORD, FxPostProcessInfo *, _QWORD))Context + 10))(
    *((_QWORD *)Context + 1),
    &v9,
    *((_QWORD *)Context + 2));
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 4);
  --*((_BYTE *)Context + 97);
  v8 = *((_BYTE *)Context + 96);
  if ( (v8 & 1) == 0 && !*((_BYTE *)Context + 97) && *(_BYTE *)Context == *((_BYTE *)Context + 1) )
  {
    if ( (v8 & 4) != 0 )
    {
      v9.m_DeleteObject = 1;
      *((_BYTE *)Context + 96) = v8 & 0xFB;
    }
    if ( (*((_BYTE *)Context + 96) & 2) != 0 )
    {
      v9.m_Event = (FxCREvent *)*((_QWORD *)Context + 11);
      *((_QWORD *)Context + 11) = 0LL;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 4, v7);
  FxPostProcessInfo::Evaluate(&v9, v5);
}
