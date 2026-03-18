/*
 * XREFs of UsbhHubIsr @ 0x1C0016DB0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C0007C30 (UsbhSignalResumeEvent.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00247B0 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C0041390 (UsbhSignalSuspendEvent.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhHubIsr(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rcx
  signed __int32 v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 Status; // r13
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rdx
  KSPIN_LOCK *v23; // r12
  KIRQL v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _KEVENT *v27; // rcx
  unsigned int v29; // ebp
  __int64 v30; // r8
  KIRQL v31; // r14
  _DWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  _DWORD *v35; // rax
  _DWORD *v36; // rax
  int v37; // r10d
  __int64 v38; // r9
  _DWORD *v39; // rax
  int v40; // [rsp+48h] [rbp-50h]
  __int64 v41; // [rsp+50h] [rbp-48h]

  v5 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
  if ( !Context )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = Context[8];
  if ( !v6 )
    UsbhTrapFatal_Dbg(Context, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(Context, Context[8]);
  v7 = *(_QWORD *)(v6 + 2672);
  v41 = v7;
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
    LOBYTE(v40) = 0;
    UsbhException((int)Context, 0, 116, 0, v37, Status, *(_DWORD *)(v7 + 4), usbfile_bus_c, 1094, v40);
  }
  if ( (Status & 0xC0000000) != 0xC0000000 && *(int *)(v7 + 4) >= 0 && v9 != -1 )
  {
    *(_DWORD *)(v6 + 2656) = 0;
    v29 = 0;
    v30 = Context[8];
    while ( 1 )
    {
      if ( !v30 )
        UsbhTrapFatal_Dbg(Context, 0LL);
      if ( *(_DWORD *)v30 != 541218120 )
        UsbhTrapFatal_Dbg(Context, Context[8]);
      if ( v29 > *(unsigned __int8 *)(v30 + 2938)
        || ((unsigned __int8)(1 << (v29 & 7)) & *(_BYTE *)(((unsigned __int64)v29 >> 3) + *(_QWORD *)(v6 + 2680))) != 0 )
      {
        break;
      }
      ++v29;
    }
    if ( v29 > *((unsigned __int8 *)FdoExt((__int64)Context) + 2938) )
    {
      v38 = v29;
      v29 = 0;
      Log((__int64)Context, 4, 1113870435, v38, 0LL);
      LOBYTE(v40) = 0;
      UsbhException((int)Context, 0, 117, 0, 0, 0, 0, usbfile_bus_c, 1190, v40);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
        v29);
    v31 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v32 = FdoExt((__int64)Context);
    v32[383] = v29;
    v32[384] = 1;
    v33 = v32 + 386;
    v34 = (_QWORD *)qword_1C0069668;
    if ( *(__int64 **)qword_1C0069668 != &qword_1C0069660 )
      __fastfail(3u);
    v33[1] = qword_1C0069668;
    *v33 = &qword_1C0069660;
    *v34 = v33;
    qword_1C0069668 = (__int64)v33;
    v35 = FdoExt((__int64)Context);
    _InterlockedIncrement(v35 + 685);
    Log((__int64)Context, 4, 1212764715, (__int64)Context, (int)v35[685]);
    KeReleaseSpinLock(&SpinLock, v31);
    v36 = FdoExt((__int64)Context);
    UsbhQueueWorkItemWithRetry(
      (_DWORD)Context,
      *(_QWORD *)(v6 + 2720),
      (unsigned int)UsbhHubIsrWorker,
      0,
      (__int64)(v36 + 346),
      v29,
      1230467945);
    v27 = &stru_1C0069670;
    goto LABEL_42;
  }
  if ( (_DWORD)Status == -1073741536 )
  {
    if ( *(_DWORD *)(v7 + 4) != -1073676288 )
    {
LABEL_38:
      if ( (UsbhLogMask & 4) != 0 )
      {
        v25 = Context[8];
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_DWORD *)v26 = 860448867;
          *(_QWORD *)(v26 + 24) = v9;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = Status;
        }
      }
      goto LABEL_41;
    }
    while ( 1 )
    {
LABEL_18:
      v16 = Context[8];
      if ( !v16 )
        UsbhTrapFatal_Dbg(Context, 0LL);
      if ( *(_DWORD *)v16 != 541218120 )
        UsbhTrapFatal_Dbg(Context, v16);
      if ( v5 > *(unsigned __int8 *)(v16 + 2938) )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 1413771367;
        *(_QWORD *)(v17 + 16) = (unsigned __int16)v5;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 24) = 0LL;
      }
      if ( (_WORD)v5 )
      {
        v18 = Context[8];
        if ( !v18 )
          UsbhTrapFatal_Dbg(Context, 0LL);
        if ( *(_DWORD *)v18 != 541218120 )
          UsbhTrapFatal_Dbg(Context, v18);
        if ( (unsigned __int16)v5 > *(unsigned __int8 *)(v18 + 2938) )
        {
          v20 = 0LL;
        }
        else
        {
          v19 = *(_QWORD *)(v18 + 3056);
          if ( v19 )
          {
            v20 = v19 + 2928LL * ((unsigned __int16)v5 - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v21 = *(_QWORD *)(v18 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
              *(_DWORD *)v21 = 1044672615;
              *(_QWORD *)(v21 + 16) = (unsigned __int16)v5;
              *(_QWORD *)(v21 + 8) = 0LL;
              *(_QWORD *)(v21 + 24) = v20;
            }
          }
          else
          {
            v20 = 0LL;
          }
        }
      }
      else
      {
        v20 = 0LL;
      }
      v22 = Context[8];
      if ( !v22 )
        UsbhTrapFatal_Dbg(Context, 0LL);
      if ( *(_DWORD *)v22 != 541218120 )
        UsbhTrapFatal_Dbg(Context, v22);
      v23 = (KSPIN_LOCK *)(v22 + 4944);
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 4944));
      if ( *(_DWORD *)(v20 + 696) == 2 )
      {
        KeReleaseSpinLock(v23, v24);
        Log((__int64)Context, 16, 1666207794, (__int64)Context, *(unsigned __int16 *)(v20 + 4));
        UsbhSignalSuspendEvent(Context, v20);
      }
      else if ( *(_DWORD *)(v20 + 696) == 3 )
      {
        KeReleaseSpinLock(v23, v24);
        Log((__int64)Context, 16, 1666207793, (__int64)Context, *(unsigned __int16 *)(v20 + 4));
        UsbhSignalResumeEvent((__int64)Context, v20);
      }
      else
      {
        KeReleaseSpinLock(v23, v24);
      }
      ++v5;
    }
    v7 = v41;
    goto LABEL_37;
  }
  if ( (_DWORD)Status == -1073741823 )
  {
    if ( *(_DWORD *)(v7 + 4) != -1073741819 )
      goto LABEL_82;
    goto LABEL_18;
  }
LABEL_37:
  if ( (_DWORD)Status == -1073741536 )
    goto LABEL_38;
  if ( (_DWORD)Status == -1073741810 || (_DWORD)Status == -1073741667 )
  {
LABEL_41:
    v27 = (struct _KEVENT *)(v6 + 2688);
LABEL_42:
    KeSetEvent(v27, 0, 0);
    return 3221225494LL;
  }
LABEL_82:
  if ( v9 == -1 )
    goto LABEL_38;
  if ( ++*(_DWORD *)(v6 + 2656) < 3u )
  {
    *(_DWORD *)(v6 + 2560) |= 0x1000u;
    v39 = FdoExt((__int64)Context);
    UsbhQueueWorkItemWithRetry(
      (_DWORD)Context,
      *(_QWORD *)(v6 + 2728),
      (unsigned int)UsbhHubResetIrqPipeWorker,
      0,
      (__int64)(v39 + 346),
      0,
      1230467689);
  }
  else
  {
    KeSetEvent((PRKEVENT)(v6 + 2688), 0, 0);
    LOBYTE(v40) = 0;
    UsbhException((int)Context, 0, 7, 0, 0, Status, *(_DWORD *)(v7 + 4), usbfile_bus_c, 1147, v40);
  }
  return 3221225494LL;
}
