/*
 * XREFs of RIMEndAllActiveContacts @ 0x1C001B040
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C000B9F4 (RIMDoOnPnpNotification.c)
 *     RIMSetDeviceOutputConfig @ 0x1C000CB48 (RIMSetDeviceOutputConfig.c)
 *     RIMResetPointerDevices @ 0x1C0093AD0 (RIMResetPointerDevices.c)
 *     RIMSetTestModeStatus @ 0x1C00FF520 (RIMSetTestModeStatus.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01028C0 (RIMIDERemoveInjectionDevice.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C010C1C8 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C00188F0 (RIMAbandonPointerDeviceFrame.c)
 *     ListTableIteratorNext @ 0x1C008C710 (ListTableIteratorNext.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104AB4 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010D1BC (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C010D6D4 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C010F7F8 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmDeactivateContact @ 0x1C0115690 (RIMCmDeactivateContact.c)
 */

__int64 __fastcall RIMEndAllActiveContacts(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // r14
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned __int64 v8; // r12
  int v9; // r15d
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 v12; // xmm1_8
  __int64 v13; // rdi
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  __int128 v19; // [rsp+38h] [rbp-29h] BYREF
  __int64 v20; // [rsp+48h] [rbp-19h]
  __int64 *v21; // [rsp+50h] [rbp-11h] BYREF
  int v22; // [rsp+58h] [rbp-9h]
  __int64 v23; // [rsp+60h] [rbp-1h]
  _BYTE v24[24]; // [rsp+68h] [rbp+7h] BYREF
  _BYTE v25[24]; // [rsp+80h] [rbp+1Fh] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  RIMAbandonPointerDeviceFrame(a1, v3);
  v22 = 0;
  v10 = (__int64 *)(a2 + 896);
  v21 = v10;
  v23 = *v10;
  v11 = ListTableIteratorNext(v24, &v21);
  v12 = *(_QWORD *)(v11 + 16);
  v19 = *(_OWORD *)v11;
  v20 = v12;
  while ( 1 )
  {
    v13 = v20;
    if ( (__int64 *)v19 == v10 && DWORD2(v19) == *((_DWORD *)v10 + 2) && v20 == *v10 + 16LL * *((unsigned int *)v10 + 2) )
      break;
    if ( (*(_DWORD *)(v20 + 16) & 2) == 0 )
      __int2c();
    v16 = ListTableIteratorNext(v25, &v19);
    v17 = *(_OWORD *)v16;
    v18 = *(_QWORD *)(v16 + 16);
    LODWORD(v16) = *(_DWORD *)(v13 + 2604);
    v20 = v18;
    v19 = v17;
    if ( (v16 & 2) != 0 )
    {
      if ( !v9 )
      {
        v9 = 1;
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              v3,
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x13u,
            0x25u,
            (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
          v9 = 0;
          break;
        }
      }
      RIMInsertSimulatedContactEndStateInFrame(a1, v3, v13 - 16, PerformanceCounter.LowPart, v8, 1);
      *(_DWORD *)(v13 + 2304) |= 4u;
    }
    else
    {
      RIMCmDeactivateContact(a2, v13 - 16);
    }
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, v3);
    RIMCompletePointerDeviceFrame(a1, v3);
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x13u,
           0x26u,
           (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
}
