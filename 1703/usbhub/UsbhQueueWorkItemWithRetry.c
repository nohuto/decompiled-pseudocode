/*
 * XREFs of UsbhQueueWorkItemWithRetry @ 0x1C00247B0
 * Callers:
 *     UsbhSS_SignalPdoWake @ 0x1C0007864 (UsbhSS_SignalPdoWake.c)
 *     UsbhHubIsr @ 0x1C0016DB0 (UsbhHubIsr.c)
 *     UsbhInitCallback @ 0x1C00280D0 (UsbhInitCallback.c)
 *     UsbhIsrRetryTimer @ 0x1C0043990 (UsbhIsrRetryTimer.c)
 *     UsbhResetIrqPipeRetryTimer @ 0x1C0043DB0 (UsbhResetIrqPipeRetryTimer.c)
 *     UsbHubhInitTimeoutTimer @ 0x1C004AB70 (UsbHubhInitTimeoutTimer.c)
 *     UsbhInitRetryTimer @ 0x1C004B6E0 (UsbhInitRetryTimer.c)
 *     UsbhIdleIrpRetryTimer @ 0x1C0056B20 (UsbhIdleIrpRetryTimer.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005706C (UsbhIdleIrp_NoIrp.c)
 *     UsbhSS_WakeIrpRetryTimer @ 0x1C0057930 (UsbhSS_WakeIrpRetryTimer.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003C01C (WPP_RECORDER_SF_dd.c)
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
  unsigned int v7; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  PDEVICE_OBJECT v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  _DWORD *PoolWithTag; // rax
  _DWORD *v19; // rbx
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64, _QWORD); // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  PDEVICE_OBJECT v25; // rcx
  unsigned int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  void (__fastcall *v30)(__int64, _QWORD, __int64 (__fastcall *(__fastcall *)(__int64, __int64))(__int64), _QWORD, _DWORD *, int); // rax
  int v31; // edx
  int v33; // [rsp+28h] [rbp-60h]
  unsigned __int8 v34; // [rsp+90h] [rbp+8h]

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
  v12 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      48,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
      a6);
    v12 = WPP_GLOBAL_Control;
  }
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v13 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v34 = *(_BYTE *)(v13 + 5268);
  if ( LOWORD(v12->DeviceType) )
  {
    WPP_RECORDER_SF_d(v12->DeviceExtension, 0, 1, 46, (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids, a6);
    v12 = WPP_GLOBAL_Control;
  }
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 1297568097;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = a7;
      *(_QWORD *)(v15 + 24) = a5;
      v12 = WPP_GLOBAL_Control;
    }
  }
  v16 = *(_QWORD *)(a1 + 64);
  if ( !v16 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v16 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    v17 = *(_QWORD *)(v16 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
    *(_DWORD *)v17 = 1296783201;
    *(_QWORD *)(v17 + 16) = a6;
    *(_QWORD *)(v17 + 8) = 0LL;
    *(_QWORD *)(v17 + 24) = a5;
    v12 = WPP_GLOBAL_Control;
  }
  if ( LOWORD(v12->DeviceType) )
    WPP_RECORDER_SF_d(v12->DeviceExtension, 0, 1, 45, (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids, a6);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x48uLL, 0x42554855u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_60;
  memset(PoolWithTag, 0, 0x48uLL);
  v20 = *(_QWORD *)(a1 + 64);
  if ( !v20 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v20 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v21 = *(__int64 (__fastcall **)(__int64, _QWORD))(v20 + 4768);
  if ( !v21 || (v22 = v21(a1, v34)) == 0 )
  {
    ExFreePoolWithTag(v19, 0);
LABEL_60:
    v26 = a6;
    v31 = -1073741670;
    goto LABEL_42;
  }
  *((_QWORD *)v19 + 5) = v22;
  v19[3] = a6;
  *v19 = 1230463592;
  v19[1] = a7;
  *((_QWORD *)v19 + 4) = a5;
  *((_QWORD *)v19 + 2) = a1;
  *((_QWORD *)v19 + 3) = a3;
  ExInterlockedInsertTailList((PLIST_ENTRY)(v16 + 2784), (PLIST_ENTRY)v19 + 3, (PKSPIN_LOCK)(v16 + 2800));
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
  v25 = WPP_GLOBAL_Control;
  v26 = a6;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
      a6);
    v25 = WPP_GLOBAL_Control;
  }
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    v27 = *(_QWORD *)(a1 + 64);
    if ( v27 )
    {
      v28 = *(_QWORD *)(v27 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
      *(_DWORD *)v28 = 726488145;
      *(_QWORD *)(v28 + 8) = 0LL;
      *(_QWORD *)(v28 + 16) = a7;
      *(_QWORD *)(v28 + 24) = v19;
      v25 = WPP_GLOBAL_Control;
    }
  }
  v29 = *(_QWORD *)(a1 + 64);
  if ( !v29 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v29 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v30 = *(void (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *(__fastcall *)(__int64, __int64))(__int64), _QWORD, _DWORD *, int))(v29 + 4784);
  if ( v30 )
  {
    LOBYTE(v33) = v34;
    v30(a1, *((_QWORD *)v19 + 5), UsbhHubWorker, a4, v19, v33);
    v31 = 0;
LABEL_42:
    v25 = WPP_GLOBAL_Control;
    goto LABEL_43;
  }
  v31 = -1073741822;
LABEL_43:
  if ( (v31 & 0xC0000000) == 0xC0000000 )
  {
    if ( LOWORD(v25->DeviceType) )
      WPP_RECORDER_SF_dd(
        v25->DeviceExtension,
        v31,
        1,
        49,
        (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
        v26,
        v31);
    Log(a1, 8, 1364476705, a7, a5);
    v31 = a2;
    if ( a2 )
      UsbhEnableTimerObject(a1, a2, 0, v26, a5, a7);
    v25 = WPP_GLOBAL_Control;
    v7 = 1;
  }
  if ( LOWORD(v25->DeviceType) )
    WPP_RECORDER_SF_dd(
      v25->DeviceExtension,
      v31,
      1,
      50,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
      v26,
      v7);
  return v7;
}
