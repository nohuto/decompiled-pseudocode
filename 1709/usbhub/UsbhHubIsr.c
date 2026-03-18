/*
 * XREFs of UsbhHubIsr @ 0x1C00187D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C00066B0 (UsbhSignalResumeEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00256A0 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C0042180 (UsbhSignalSuspendEvent.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhHubIsr(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  unsigned int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rcx
  signed __int32 v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 Status; // r12
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // r8
  KIRQL v18; // al
  _DWORD *v19; // rcx
  KIRQL v20; // r14
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _DWORD *v23; // rax
  _DWORD *v24; // rax
  struct _KEVENT *v25; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rdx
  KSPIN_LOCK *v34; // rdi
  KIRQL v35; // al
  int v36; // r10d
  __int64 v37; // r9
  _DWORD *v38; // rax
  int v39; // [rsp+48h] [rbp-40h]

  v5 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids);
  if ( !Context )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = Context[8];
  if ( !v6 )
    UsbhTrapFatal_Dbg(Context, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(Context, Context[8]);
  v7 = *(_QWORD *)(v6 + 2672);
  if ( (UsbhLogMask & 4) != 0 )
  {
    v8 = *(_QWORD *)(v6 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
    *(_DWORD *)v8 = 1145661539;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = v7;
    *(_QWORD *)(v8 + 24) = Irp;
  }
  v9 = _InterlockedDecrement((volatile signed __int32 *)(v6 + 2712));
  if ( (UsbhLogMask & 4) != 0 )
  {
    v10 = Context[8];
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v11 = 1717790819;
      *(_QWORD *)(v11 + 24) = v9;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v7;
    }
  }
  Status = Irp->IoStatus.Status;
  v13 = *(int *)(v7 + 4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    v14 = Context[8];
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 843671651;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = Status;
      *(_QWORD *)(v15 + 24) = v13;
    }
  }
  if ( (int)Status >= 0 && !*(_DWORD *)(v7 + 36) )
  {
    Log((__int64)Context, 4, 1769101906, Status, *(int *)(v7 + 4));
    LOBYTE(v39) = 0;
    UsbhException((int)Context, 0, 116, 0, v36, Status, *(_DWORD *)(v7 + 4), usbfile_bus_c, 1094, v39);
  }
  if ( (Status & 0xC0000000) != 0xC0000000 && *(int *)(v7 + 4) >= 0 && v9 != -1 )
  {
    *(_DWORD *)(v6 + 2656) = 0;
    v16 = 0;
    v17 = Context[8];
    while ( 1 )
    {
      if ( !v17 )
        UsbhTrapFatal_Dbg(Context, 0LL);
      if ( *(_DWORD *)v17 != 541218120 )
        UsbhTrapFatal_Dbg(Context, Context[8]);
      if ( v16 > *(unsigned __int8 *)(v17 + 2938)
        || ((unsigned __int8)(1 << (v16 & 7)) & *(_BYTE *)(((unsigned __int64)v16 >> 3) + *(_QWORD *)(v6 + 2680))) != 0 )
      {
        break;
      }
      ++v16;
    }
    if ( v16 > *((unsigned __int8 *)FdoExt((__int64)Context) + 2938) )
    {
      v37 = v16;
      v16 = 0;
      Log((__int64)Context, 4, 1113870435, v37, 0LL);
      LOBYTE(v39) = 0;
      UsbhException((int)Context, 0, 117, 0, 0, 0, 0, usbfile_bus_c, 1190, v39);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
        v16);
    v18 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v19 = (_DWORD *)Context[8];
    v20 = v18;
    if ( !v19 )
      UsbhTrapFatal_Dbg(Context, 0LL);
    if ( *v19 != 541218120 )
      UsbhTrapFatal_Dbg(Context, Context[8]);
    v19[383] = v16;
    v19[384] = 1;
    v21 = v19 + 386;
    v22 = (_QWORD *)qword_1C006A668;
    if ( *(__int64 **)qword_1C006A668 != &qword_1C006A660 )
      __fastfail(3u);
    *v21 = &qword_1C006A660;
    v21[1] = v22;
    *v22 = v21;
    qword_1C006A668 = (__int64)v21;
    v23 = FdoExt((__int64)Context);
    _InterlockedIncrement(v23 + 685);
    Log((__int64)Context, 4, 1212764715, (__int64)Context, (int)v23[685]);
    KeReleaseSpinLock(&SpinLock, v20);
    v24 = (_DWORD *)Context[8];
    if ( !v24 )
      UsbhTrapFatal_Dbg(Context, 0LL);
    if ( *v24 != 541218120 )
      UsbhTrapFatal_Dbg(Context, Context[8]);
    UsbhQueueWorkItemWithRetry(
      (_DWORD)Context,
      *(_QWORD *)(v6 + 2720),
      (unsigned int)UsbhHubIsrWorker,
      0,
      (__int64)(v24 + 346),
      v16,
      1230467945);
    v25 = &Event;
    goto LABEL_36;
  }
  if ( (_DWORD)Status == -1073741536 )
  {
    if ( *(_DWORD *)(v7 + 4) != -1073676288 )
    {
LABEL_59:
      Log((__int64)Context, 4, 1667778867, Status, v9);
LABEL_60:
      v25 = (struct _KEVENT *)(v6 + 2688);
LABEL_36:
      KeSetEvent(v25, 0, 0);
      return 3221225494LL;
    }
    while ( 1 )
    {
LABEL_40:
      v27 = Context[8];
      if ( !v27 )
        UsbhTrapFatal_Dbg(Context, 0LL);
      if ( *(_DWORD *)v27 != 541218120 )
        UsbhTrapFatal_Dbg(Context, v27);
      if ( v5 > *(unsigned __int8 *)(v27 + 2938) )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v28 = *(_QWORD *)(v27 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
        *(_DWORD *)v28 = 1413771367;
        *(_QWORD *)(v28 + 16) = (unsigned __int16)v5;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 24) = 0LL;
      }
      if ( (_WORD)v5 )
      {
        v29 = Context[8];
        if ( !v29 )
          UsbhTrapFatal_Dbg(Context, 0LL);
        if ( *(_DWORD *)v29 != 541218120 )
          UsbhTrapFatal_Dbg(Context, v29);
        if ( (unsigned __int16)v5 > *(unsigned __int8 *)(v29 + 2938) )
        {
          v31 = 0LL;
        }
        else
        {
          v30 = *(_QWORD *)(v29 + 3056);
          if ( v30 )
          {
            v31 = 2928LL * (unsigned __int16)v5 + v30 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v32 = *(_QWORD *)(v29 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
              *(_DWORD *)v32 = 1044672615;
              *(_QWORD *)(v32 + 16) = (unsigned __int16)v5;
              *(_QWORD *)(v32 + 8) = 0LL;
              *(_QWORD *)(v32 + 24) = v31;
            }
          }
          else
          {
            v31 = 0LL;
          }
        }
      }
      else
      {
        v31 = 0LL;
      }
      v33 = Context[8];
      if ( !v33 )
        UsbhTrapFatal_Dbg(Context, 0LL);
      if ( *(_DWORD *)v33 != 541218120 )
        UsbhTrapFatal_Dbg(Context, v33);
      v34 = (KSPIN_LOCK *)(v33 + 4944);
      v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v33 + 4944));
      if ( *(_DWORD *)(v31 + 696) == 2 )
      {
        KeReleaseSpinLock(v34, v35);
        Log((__int64)Context, 16, 1666207794, (__int64)Context, *(unsigned __int16 *)(v31 + 4));
        UsbhSignalSuspendEvent(Context, v31);
      }
      else if ( *(_DWORD *)(v31 + 696) == 3 )
      {
        KeReleaseSpinLock(v34, v35);
        Log((__int64)Context, 16, 1666207793, (__int64)Context, *(unsigned __int16 *)(v31 + 4));
        UsbhSignalResumeEvent((__int64)Context, v31);
      }
      else
      {
        KeReleaseSpinLock(v34, v35);
      }
      ++v5;
    }
    goto LABEL_58;
  }
  if ( (_DWORD)Status == -1073741823 )
  {
    if ( *(_DWORD *)(v7 + 4) != -1073741819 )
      goto LABEL_87;
    goto LABEL_40;
  }
LABEL_58:
  if ( (_DWORD)Status == -1073741536 )
    goto LABEL_59;
  if ( (_DWORD)Status == -1073741810 || (_DWORD)Status == -1073741667 )
    goto LABEL_60;
LABEL_87:
  if ( v9 == -1 )
    goto LABEL_59;
  if ( ++*(_DWORD *)(v6 + 2656) < 3u )
  {
    *(_DWORD *)(v6 + 2560) |= 0x1000u;
    v38 = FdoExt((__int64)Context);
    UsbhQueueWorkItemWithRetry(
      (_DWORD)Context,
      *(_QWORD *)(v6 + 2728),
      (unsigned int)UsbhHubResetIrqPipeWorker,
      0,
      (__int64)(v38 + 346),
      0,
      1230467689);
  }
  else
  {
    KeSetEvent((PRKEVENT)(v6 + 2688), 0, 0);
    LOBYTE(v39) = 0;
    UsbhException((int)Context, 0, 7, 0, 0, Status, *(_DWORD *)(v7 + 4), usbfile_bus_c, 1147, v39);
  }
  return 3221225494LL;
}
