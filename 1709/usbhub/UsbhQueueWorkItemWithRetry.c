/*
 * XREFs of UsbhQueueWorkItemWithRetry @ 0x1C00256A0
 * Callers:
 *     UsbhSS_SignalPdoWake @ 0x1C00062E4 (UsbhSS_SignalPdoWake.c)
 *     UsbhHubIsr @ 0x1C00187D0 (UsbhHubIsr.c)
 *     UsbhInitCallback @ 0x1C0027E30 (UsbhInitCallback.c)
 *     UsbhIsrRetryTimer @ 0x1C00447D0 (UsbhIsrRetryTimer.c)
 *     UsbhResetIrqPipeRetryTimer @ 0x1C0044BE0 (UsbhResetIrqPipeRetryTimer.c)
 *     UsbHubhInitTimeoutTimer @ 0x1C004B9E0 (UsbHubhInitTimeoutTimer.c)
 *     UsbhInitRetryTimer @ 0x1C004C550 (UsbhInitRetryTimer.c)
 *     UsbhIdleIrpRetryTimer @ 0x1C0056A20 (UsbhIdleIrpRetryTimer.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0056F70 (UsbhIdleIrp_NoIrp.c)
 *     UsbhSS_WakeIrpRetryTimer @ 0x1C0057830 (UsbhSS_WakeIrpRetryTimer.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhEnableTimerObject @ 0x1C001CF30 (UsbhEnableTimerObject.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D2D8 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhQueueWorkItemWithRetry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  _DWORD *PoolWithTag; // rax
  __int64 v18; // rdx
  _DWORD *v19; // rbx
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64, _QWORD); // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // esi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  void (__fastcall *v29)(__int64, __int64, __int64 (__fastcall *(__fastcall *)(__int64, __int64))(__int64), _QWORD, _DWORD *, int); // rax
  int v30; // ecx
  int v32; // [rsp+28h] [rbp-60h]
  unsigned __int8 v33; // [rsp+90h] [rbp+8h]

  v7 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v10);
  if ( (UsbhLogMask & 8) != 0 )
  {
    v11 = *(_QWORD *)(v10 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
    *(_DWORD *)v11 = 1129141329;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = a7;
    *(_QWORD *)(v11 + 24) = a5;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      48,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
      a6);
  v12 = *(_QWORD *)(a1 + 64);
  if ( !v12 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v12 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v33 = *(_BYTE *)(v12 + 5268);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
      a6);
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 1297568097;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = a7;
      *(_QWORD *)(v14 + 24) = a5;
    }
  }
  v15 = *(_QWORD *)(a1 + 64);
  if ( !v15 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v15 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    v16 = *(_QWORD *)(v15 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
    *(_DWORD *)v16 = 1296783201;
    *(_QWORD *)(v16 + 16) = a6;
    *(_QWORD *)(v16 + 8) = 0LL;
    *(_QWORD *)(v16 + 24) = a5;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      45,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
      a6);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x48uLL, 0x42554855u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_59;
  memset(PoolWithTag, 0, 0x48uLL);
  v20 = *(_QWORD *)(a1 + 64);
  if ( !v20 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v20 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v21 = *(__int64 (__fastcall **)(__int64, _QWORD))(v20 + 4768);
  if ( !v21 || (v22 = v21(a1, v33)) == 0 )
  {
    ExFreePoolWithTag(v19, 0);
LABEL_59:
    v25 = a6;
    v30 = -1073741670;
    goto LABEL_42;
  }
  *((_QWORD *)v19 + 5) = v22;
  v19[3] = a6;
  *v19 = 1230463592;
  v19[1] = a7;
  *((_QWORD *)v19 + 4) = a5;
  *((_QWORD *)v19 + 2) = a1;
  *((_QWORD *)v19 + 3) = a3;
  ExInterlockedInsertTailList((PLIST_ENTRY)(v15 + 2784), (PLIST_ENTRY)v19 + 3, (PKSPIN_LOCK)(v15 + 2800));
  if ( v19[1] != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    v23 = *(_QWORD *)(a1 + 64);
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
      *(_DWORD *)v24 = 726485847;
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)(v24 + 16) = 0LL;
      *(_QWORD *)(v24 + 24) = v19;
    }
  }
  _InterlockedIncrement(v19 + 2);
  v25 = a6;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
      a6);
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    v26 = *(_QWORD *)(a1 + 64);
    if ( v26 )
    {
      v27 = *(_QWORD *)(v26 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
      *(_DWORD *)v27 = 726488145;
      *(_QWORD *)(v27 + 8) = 0LL;
      *(_QWORD *)(v27 + 16) = a7;
      *(_QWORD *)(v27 + 24) = v19;
    }
  }
  v28 = *(_QWORD *)(a1 + 64);
  v18 = *((_QWORD *)v19 + 5);
  if ( !v28 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v28 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v29 = *(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *(__fastcall *)(__int64, __int64))(__int64), _QWORD, _DWORD *, int))(v28 + 4784);
  if ( v29 )
  {
    LOBYTE(v32) = v33;
    v29(a1, v18, UsbhHubWorker, a4, v19, v32);
    v30 = 0;
  }
  else
  {
    v30 = -1073741822;
  }
LABEL_42:
  if ( (v30 & 0xC0000000) == 0xC0000000 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        1,
        49,
        (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
        v25,
        v30);
    Log(a1, 8, 1364476705, a7, a5);
    LODWORD(v18) = a2;
    if ( a2 )
      UsbhEnableTimerObject(a1, a2, 0, v25, a5, a7);
    v7 = 1;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v18,
      1,
      50,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
      v25,
      v7);
  return v7;
}
