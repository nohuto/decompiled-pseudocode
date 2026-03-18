/*
 * XREFs of PopFanWorker @ 0x140707450
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopPrepareIoctl @ 0x1407071AC (PopPrepareIoctl.c)
 *     PopFanUpdateRunningState @ 0x1407073BC (PopFanUpdateRunningState.c)
 */

void __fastcall PopFanWorker(__int64 a1)
{
  IRP *v1; // r14
  struct _DEVICE_OBJECT *v3; // r15
  char v4; // di
  bool v5; // si
  char v6; // si
  int Status; // eax
  char v8; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax

  v1 = *(IRP **)(a1 + 56);
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  v4 = 0;
  v5 = 0;
  PopAcquireRwLockExclusive(a1 + 112);
  if ( *(_BYTE *)(a1 + 152) )
    goto LABEL_2;
  Status = v1->IoStatus.Status;
  if ( Status >= 0 )
  {
    v8 = *(_BYTE *)(a1 + 68);
    if ( *(_BYTE *)(a1 + 72) )
    {
      if ( v8 )
      {
LABEL_13:
        PopPrepareIoctl(*(IRP **)(a1 + 56), 0x294240u, 1, (struct _IRP *)(a1 + 64), 8u, 8u);
        CurrentStackLocation = v1->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopFanIrpComplete;
        CurrentStackLocation[-1].Context = (PVOID)a1;
        CurrentStackLocation[-1].Control = -32;
        IofCallDriver(v3, v1);
        goto LABEL_14;
      }
    }
    else if ( !v8 )
    {
      goto LABEL_13;
    }
    v5 = 1;
    *(_BYTE *)(a1 + 72) = v8;
    v4 = v8;
    goto LABEL_13;
  }
  if ( Status == -1073741667 || Status == -1073741536 )
    goto LABEL_13;
LABEL_2:
  v6 = *(_BYTE *)(a1 + 72);
  if ( v6 )
    *(_BYTE *)(a1 + 72) = 0;
  KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
  v4 = 0;
  v5 = v6 != 0;
LABEL_14:
  if ( v5 )
    PopFanUpdateRunningState(v4);
  PopReleaseRwLock(a1 + 112);
}
