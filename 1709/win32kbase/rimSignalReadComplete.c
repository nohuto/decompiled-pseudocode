/*
 * XREFs of rimSignalReadComplete @ 0x1C00A46B8
 * Callers:
 *     RIMOnPnpNotification @ 0x1C000A430 (RIMOnPnpNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 *     RIMCompleteSecondaryRimReads @ 0x1C0101244 (RIMCompleteSecondaryRimReads.c)
 *     RIMDoMobileKeyboardInvalidation @ 0x1C01014E4 (RIMDoMobileKeyboardInvalidation.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C010B940 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C010BA6C (rimDispatchCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_qdqqq @ 0x1C0009FF4 (WPP_RECORDER_SF_qdqqq.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E724 (WPP_RECORDER_SF_qq.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RIMArmWatchDog @ 0x1C00A47F0 (RIMArmWatchDog.c)
 *     RIMHandleTTMDeviceInput @ 0x1C00A4810 (RIMHandleTTMDeviceInput.c)
 */

int __fastcall rimSignalReadComplete(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  int result; // eax
  int updated; // eax
  int v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]

  v2 = *(_DWORD *)(a2 + 748);
  if ( v2 == 1 || v2 == 2 && (*(_DWORD *)(*(_QWORD *)(a2 + 344) + 76LL) & gWakeOnDeviceTypes) == 0 )
  {
    result = WPP_RECORDER_SF_qq(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               3u,
               0x13u,
               0xAu,
               (__int64)&WPP_7f939aa136043ee70ba1a66d38f0357a_Traceguids,
               a2,
               *(_QWORD *)(a2 + 16));
    *(_BYTE *)(a1 + 712) = 1;
  }
  else if ( *(_BYTE *)(a1 + 712) )
  {
    return WPP_RECORDER_SF_qq(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             0x13u,
             0xEu,
             (__int64)&WPP_7f939aa136043ee70ba1a66d38f0357a_Traceguids,
             a2,
             *(_QWORD *)(a2 + 16));
  }
  else
  {
    v5 = RIMHandleTTMDeviceInput(a2);
    if ( v5 < 0 )
    {
      v10 = v5;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0xBu,
        (__int64)&WPP_7f939aa136043ee70ba1a66d38f0357a_Traceguids,
        v10);
    }
    RIMLockExclusive((__int64)&gWatchDogQPCLock);
    *(LARGE_INTEGER *)(a1 + 840) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 848) = 1;
    RIMArmWatchDog(v6);
    qword_1C0193AC8 = 0LL;
    ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
    KeLeaveCriticalRegion();
    if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(a2 + 472) + 24LL) != 7 )
    {
      updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL, 0, 0);
      if ( updated < 0 )
      {
        LODWORD(v11) = updated;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x14u,
          0xCu,
          (__int64)&WPP_7f939aa136043ee70ba1a66d38f0357a_Traceguids,
          v11);
      }
    }
    LODWORD(v12) = *(_DWORD *)(a1 + 980) != 0;
    WPP_RECORDER_SF_qdqqq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      0x13u,
      0xDu,
      (__int64)&WPP_7f939aa136043ee70ba1a66d38f0357a_Traceguids,
      a1,
      v12,
      a2,
      *(_QWORD *)(a2 + 16),
      *(_QWORD *)(a1 + 776));
    *(_DWORD *)(a2 + 184) |= 0x20000000u;
    ZwSetEvent(*(HANDLE *)(a1 + 776), 0LL);
    result = ZwClose(*(HANDLE *)(a1 + 776));
    *(_QWORD *)(a1 + 776) = 0LL;
  }
  return result;
}
