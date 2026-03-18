/*
 * XREFs of UsbhSshResumePort @ 0x1C00028AC
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C000266C (UsbhSshResumeDownstream.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0005B44 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSshPropagateResume @ 0x1C0006014 (UsbhSshPropagateResume.c)
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     UsbhRefPdo @ 0x1C000B180 (UsbhRefPdo.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0013490 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhUnlatchPdo @ 0x1C00248C0 (UsbhUnlatchPdo.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0041A7C (UsbhPCE_ResumeTimeout.c)
 */

__int64 __fastcall UsbhSshResumePort(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rax
  unsigned __int16 v8; // bx
  __int64 v9; // r13
  __int64 v10; // r14
  KIRQL v11; // r15
  __int64 PortData; // rax
  __int64 v13; // rcx
  int v14; // r9d
  int v16; // eax
  KIRQL v17; // al
  KSPIN_LOCK *v18; // rcx
  int v19; // r10d
  int v20; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v20 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v7 = FdoExt(a1);
  v8 = *(_WORD *)(a3 + 4);
  v9 = v7;
  v10 = 0LL;
  Log(a1, 256, 1817199695, v8, 1399612007LL);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  PortData = UsbhGetPortData(a1, v8);
  if ( PortData )
  {
    v10 = *(_QWORD *)(PortData + 392);
    if ( v10 )
      v10 = UsbhRefPdo(v13, *(_QWORD *)(PortData + 392), 0LL, 1399612007LL);
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v11);
  v14 = *(unsigned __int16 *)(a3 + 4);
  if ( v10 )
  {
    Log(a1, 0x10000, 1936937522, v14, v10);
    Log(a1, 0x10000, 1936937523, 0, *(unsigned __int16 *)(a3 + 4));
    while ( 1 )
    {
      v16 = UsbhFdoCheckUpstreamConnectionState(a1, &v20);
      if ( (v16 & 0xC0000000) == 0xC0000000 )
        break;
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 4944));
      v18 = (KSPIN_LOCK *)(v9 + 4944);
      if ( *(_DWORD *)(a3 + 696) == 3 )
      {
        KeReleaseSpinLock(v18, v17);
        v19 = UsbhWaitEventWithTimeoutEx(a1, a3 + 712, 500LL, 1936937556LL, 0, 0LL);
      }
      else
      {
        KeReleaseSpinLock(v18, v17);
        v19 = 0;
      }
      if ( v19 != 258 )
        goto LABEL_14;
      UsbhPCE_ResumeTimeout(a1, a2, *(unsigned __int16 *)(a3 + 4));
    }
    Log(a1, 0x10000, 1936937560, *(unsigned __int16 *)(a3 + 4), v16);
LABEL_14:
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PORT, *(unsigned __int16 *)(a3 + 4), v19);
    v3 = UsbhSshPropagateResume(a1, a2, v10);
    Log(a1, 0x10000, 1936937524, *(unsigned __int16 *)(a3 + 4), v10);
    UsbhUnlatchPdo(a1, v10, 0LL, 1399612007LL);
  }
  else
  {
    Log(a1, 0x10000, 1936937525, v14, 0LL);
  }
  return v3;
}
