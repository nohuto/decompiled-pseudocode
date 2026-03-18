/*
 * XREFs of RIMEndAllActiveContacts @ 0x1C0105DA0
 * Callers:
 *     rimSetPointerDeviceDisplayConfig @ 0x1C000B8E4 (rimSetPointerDeviceDisplayConfig.c)
 *     RIMDoOnPnpNotification @ 0x1C0094468 (RIMDoOnPnpNotification.c)
 *     RIMSetTestModeStatus @ 0x1C00FF200 (RIMSetTestModeStatus.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01020DC (RIMIDERemoveInjectionDevice.c)
 *     RIMResetPointerDevices @ 0x1C0103490 (RIMResetPointerDevices.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C010D1F8 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104C7C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C010E1D0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010E278 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C010E78C (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0110D50 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmDeactivateContact @ 0x1C0116B14 (RIMCmDeactivateContact.c)
 *     ListTableIteratorNext @ 0x1C01180C8 (ListTableIteratorNext.c)
 */

__int64 __fastcall RIMEndAllActiveContacts(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // r14
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned __int64 v8; // r12
  int v9; // r15d
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r11
  __int64 v13; // xmm1_8
  __int64 v14; // rdi
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  int v18; // edx
  __int128 v20; // [rsp+38h] [rbp-29h] BYREF
  __int64 v21; // [rsp+48h] [rbp-19h]
  __int64 v22; // [rsp+50h] [rbp-11h] BYREF
  int v23; // [rsp+58h] [rbp-9h]
  __int64 v24; // [rsp+60h] [rbp-1h]
  _BYTE v25[24]; // [rsp+68h] [rbp+7h] BYREF
  _BYTE v26[24]; // [rsp+80h] [rbp+1Fh] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  RIMAbandonPointerDeviceFrame(a1, v3);
  v23 = 0;
  v24 = *(_QWORD *)(a2 + 1560);
  v22 = a2 + 1560;
  v10 = ListTableIteratorNext(v25, &v22);
  v13 = *(_QWORD *)(v10 + 16);
  v20 = *(_OWORD *)v10;
  v21 = v13;
  while ( 1 )
  {
    v14 = v21;
    if ( (_QWORD)v20 == v12
      && DWORD2(v20) == *(_DWORD *)(v12 + 8)
      && v21 == *(_QWORD *)v12 + 16LL * *(unsigned int *)(v12 + 8) )
    {
      break;
    }
    if ( (*(_DWORD *)(v21 + 16) & 2) == 0 )
      __int2c();
    v15 = ListTableIteratorNext(v26, &v20);
    v16 = *(_OWORD *)v15;
    v17 = *(_QWORD *)(v15 + 16);
    LODWORD(v15) = *(_DWORD *)(v14 + 2604);
    v21 = v17;
    v20 = v16;
    if ( (v15 & 2) != 0 )
    {
      if ( !v9 )
      {
        v9 = 1;
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              v3,
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          LOBYTE(v18) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            19,
            39,
            (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
          v9 = 0;
          break;
        }
      }
      RIMInsertSimulatedContactEndStateInFrame(a1, v3, v14 - 16, PerformanceCounter.LowPart, v8, 1);
      *(_DWORD *)(v14 + 2304) |= 4u;
    }
    else
    {
      RIMCmDeactivateContact(a2, v14 - 16);
    }
    v12 = a2 + 1560;
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, v3);
    RIMCompletePointerDeviceFrame(a1, v3);
  }
  LOBYTE(v11) = 3;
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           v11,
           19,
           40,
           (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
}
