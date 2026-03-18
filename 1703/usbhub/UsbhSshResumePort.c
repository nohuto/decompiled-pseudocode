/*
 * XREFs of UsbhSshResumePort @ 0x1C0002B00
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C0002760 (UsbhSshResumeDownstream.c)
 * Callees:
 *     UsbhSshPropagateResume @ 0x1C0001418 (UsbhSshPropagateResume.c)
 *     UsbhRefPdo @ 0x1C000B0C0 (UsbhRefPdo.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000B540 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0025AA4 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0040C8C (UsbhPCE_ResumeTimeout.c)
 */

__int64 __fastcall UsbhSshResumePort(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbp
  int v7; // r12d
  struct _DEVICE_OBJECT *v8; // r14
  KIRQL v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v18; // eax
  KIRQL v19; // al
  KSPIN_LOCK *v20; // rcx
  int v21; // r10d
  int v22; // [rsp+30h] [rbp-48h]
  int v24; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v24 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v7 = *(unsigned __int16 *)(a3 + 4);
  v8 = 0LL;
  Log(a1, 256, 1817199695, v7, 1399612007LL);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  LOBYTE(v22) = v9;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  Log(a1, 8, 1735410772, v7, 0LL);
  if ( (_WORD)v7 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( !v10 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v10 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    if ( (unsigned __int16)v7 <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
    {
      v11 = *(_QWORD *)(v10 + 3056);
      if ( v11 )
      {
        Log(a1, 8, 1735410750, (unsigned __int16)v7, v11 + 2928LL * ((unsigned __int16)v7 - 1));
        if ( v13 )
        {
          v8 = *(struct _DEVICE_OBJECT **)(v13 + 392);
          if ( v8 )
            v8 = (struct _DEVICE_OBJECT *)UsbhRefPdo(v12, *(_QWORD *)(v13 + 392), 0LL, 1399612007LL);
        }
      }
    }
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
  if ( v8 )
  {
    Log(a1, 0x10000, 1936937522, *(unsigned __int16 *)(a3 + 4), (__int64)v8);
    Log(a1, 0x10000, 1936937523, 0, *(unsigned __int16 *)(a3 + 4));
    while ( 1 )
    {
      v18 = UsbhFdoCheckUpstreamConnectionState(a1, &v24);
      if ( (v18 & 0xC0000000) == 0xC0000000 )
        break;
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 4944));
      v20 = (KSPIN_LOCK *)(v6 + 4944);
      if ( *(_DWORD *)(a3 + 696) != 3 )
      {
        KeReleaseSpinLock(v20, v19);
        v21 = 0;
        goto LABEL_23;
      }
      KeReleaseSpinLock(v20, v19);
      v21 = UsbhWaitEventWithTimeoutEx(a1, a3 + 712, 500LL, 1936937556LL, 0, 0LL, v22);
      if ( v21 != 258 )
        goto LABEL_23;
      UsbhPCE_ResumeTimeout(a1, a2, *(unsigned __int16 *)(a3 + 4));
    }
    Log(a1, 0x10000, 1936937560, *(unsigned __int16 *)(a3 + 4), v18);
LABEL_23:
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PORT, *(unsigned __int16 *)(a3 + 4), v21);
    v3 = UsbhSshPropagateResume(a1, a2, v8);
    Log(a1, 0x10000, 1936937524, *(unsigned __int16 *)(a3 + 4), (__int64)v8);
    UsbhUnlatchPdo(a1, v8, 0LL, 1399612007LL);
  }
  else
  {
    v14 = *(unsigned __int16 *)(a3 + 4);
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 894595955;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = v14;
        *(_QWORD *)(v16 + 24) = 0LL;
      }
    }
  }
  return v3;
}
