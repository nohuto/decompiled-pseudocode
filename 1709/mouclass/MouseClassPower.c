/*
 * XREFs of MouseClassPower @ 0x1C0002C10
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassCheckWaitWakeEnabled @ 0x1C000255C (MouseClassCheckWaitWakeEnabled.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0004ED0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqsd @ 0x1C0005B3C (WPP_RECORDER_SF_qqsd.c)
 *     MouseClassCreateWaitWakeIrp @ 0x1C000BEE8 (MouseClassCreateWaitWakeIrp.c)
 */

__int64 __fastcall MouseClassPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v3; // r14
  char v5; // r13
  ULONG Options; // ebp
  __int64 LowPart; // rbx
  NTSTATUS v8; // esi
  int v9; // r8d
  int v10; // r9d
  int MinorFunction; // ecx
  char v12; // r15
  int v13; // ecx
  KIRQL v14; // al
  char v15; // bl
  char v16; // bp
  char v17; // al
  struct _IO_STACK_LOCATION *v18; // rax
  struct _IO_STACK_LOCATION *v19; // rax
  const char *v20; // rax
  int v21; // eax
  int v23; // eax
  KIRQL v24; // al
  char v25; // si
  POWER_STATE v26; // eax
  KIRQL v27; // al
  KIRQL v28; // al
  int RemlockSize; // [rsp+20h] [rbp-68h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = *(_QWORD *)(a1 + 64);
  v5 = a1;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v3 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels || !*(_BYTE *)(v3 + 64) )
  {
    PoStartNextPowerIrp(a2);
    v8 = -1073741637;
LABEL_3:
    a2->IoStatus.Status = v8;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v8;
  }
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, File, 1u, 0x20u);
  if ( v8 < 0 )
  {
    PoStartNextPowerIrp(a2);
    goto LABEL_3;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  v12 = 0;
  if ( !MinorFunction )
  {
    WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 5, 90);
    v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 72));
    if ( *(_QWORD *)(v3 + 280) )
    {
      v16 = 0;
      *(_QWORD *)(v3 + 296) = a2;
      v8 = -1073741436;
    }
    else
    {
      *(_QWORD *)(v3 + 280) = a2;
      *(_BYTE *)(v3 + 288) = 0;
      if ( (unsigned int)(_InterlockedExchange((volatile __int32 *)(v3 + 304), 0) - 1) <= 1 )
      {
        v8 = -1073741436;
      }
      else
      {
        v8 = 0;
        v12 = 1;
      }
      v16 = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v28);
    v17 = 0;
LABEL_19:
    if ( v8 >= 0 )
    {
      if ( v12 )
      {
LABEL_21:
        IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, File, 1u, 0x20u);
        v18 = a2->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v18[-1].MajorFunction = *(_OWORD *)&v18->MajorFunction;
        *(_OWORD *)&v18[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v18->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v18[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v18->Parameters.SetQuota + 6);
        v18[-1].FileObject = v18->FileObject;
        v18[-1].Control = 0;
        v19 = a2->Tail.Overlay.CurrentStackLocation;
        v19[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&MouseClassPowerComplete;
        v19[-1].Context = 0LL;
        v19[-1].Control = -32;
        a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        PoCallDriver(*(PDEVICE_OBJECT *)(v3 + 16), a2);
LABEL_69:
        v8 = 259;
LABEL_30:
        if ( v16 )
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, 0x20u);
        return (unsigned int)v8;
      }
      if ( v17 )
        goto LABEL_69;
LABEL_29:
      PoStartNextPowerIrp(a2);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v8 = PoCallDriver(*(PDEVICE_OBJECT *)(v3 + 16), a2);
      goto LABEL_30;
    }
LABEL_67:
    a2->IoStatus.Status = v8;
    PoStartNextPowerIrp(a2);
    IofCompleteRequest(a2, 0);
    goto LABEL_30;
  }
  v13 = MinorFunction - 2;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      if ( (int)LowPart >= 5 || (int)LowPart <= *(_DWORD *)(v3 + 272) )
        goto LABEL_16;
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 72));
      if ( !*(_QWORD *)(v3 + 280) || (v15 = 1, *(_BYTE *)(v3 + 288)) )
        v15 = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v14);
      v8 = -1073741101;
      if ( !v15 )
LABEL_16:
        v8 = 0;
      a2->IoStatus.Status = v8;
    }
    goto LABEL_18;
  }
  v20 = "S";
  if ( Options )
    v20 = "D";
  WPP_RECORDER_SF_qqsd(
    WPP_GLOBAL_Control->DeviceExtension,
    (unsigned int)"D",
    v9,
    v10,
    RemlockSize,
    v5,
    (char)a2,
    (__int64)v20,
    LowPart - 1);
  if ( Options )
  {
    if ( Options != 1 )
    {
LABEL_18:
      v16 = 1;
      v17 = 0;
      goto LABEL_19;
    }
    a2->IoStatus.Status = 0;
    v21 = *(_DWORD *)(v3 + 172);
    if ( (int)LowPart > v21 )
    {
      PoSetPowerState(*(PDEVICE_OBJECT *)v3, DevicePowerState, (POWER_STATE)LowPart);
      *(_DWORD *)(v3 + 172) = LowPart;
LABEL_28:
      v16 = 1;
      goto LABEL_29;
    }
    if ( (int)LowPart >= v21 )
      goto LABEL_28;
LABEL_34:
    v16 = 1;
    goto LABEL_21;
  }
  v23 = *(_DWORD *)(v3 + 176);
  if ( (int)LowPart <= v23 )
  {
    if ( (int)LowPart >= v23 )
    {
      if ( (_DWORD)LowPart == 1 && *(int *)(v3 + 268) > 1 && *(int *)(v3 + 272) > 1 )
      {
        v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 72));
        if ( !*(_QWORD *)(v3 + 280) || *(_BYTE *)(v3 + 288) )
          LOBYTE(LowPart) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v27);
        if ( !(_BYTE)LowPart && MouseClassCheckWaitWakeEnabled(v3) )
          MouseClassCreateWaitWakeIrp((PVOID)v3);
      }
      a2->IoStatus.Status = 0;
      v8 = 0;
      goto LABEL_18;
    }
    a2->IoStatus.Status = 0;
    goto LABEL_34;
  }
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, File, 1u, 0x20u);
  if ( v8 < 0 )
  {
    v16 = 1;
    goto LABEL_67;
  }
  v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 72));
  if ( !*(_QWORD *)(v3 + 280) || (v25 = 1, *(_BYTE *)(v3 + 288)) )
    v25 = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v24);
  if ( v25 && (int)LowPart < 5 )
    v26.SystemState = *(SYSTEM_POWER_STATE *)(v3 + 4 * LowPart + 248);
  else
    v26.SystemState = PowerSystemSleeping3;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v8 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)v3, 2u, v26, (PREQUEST_POWER_COMPLETE)MouseClassPoRequestComplete, a2, 0LL);
  if ( v8 >= 0 )
  {
    v17 = 1;
    v16 = 1;
    goto LABEL_19;
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, 0x20u);
  PoStartNextPowerIrp(a2);
  a2->IoStatus.Status = v8;
  IofCompleteRequest(a2, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, 0x20u);
  return 259LL;
}
