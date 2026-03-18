/*
 * XREFs of RIMRemoveFromActiveDevices @ 0x1C00096B0
 * Callers:
 *     RIMFreePointerDevice @ 0x1C0009450 (RIMFreePointerDevice.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0111020 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C00DA320 (EtwTracePointerDeviceOutOfRangeMessageStart.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C00DA350 (EtwTracePointerDeviceOutOfRangeMessageStop.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0106768 (RIMUpdatePrimaryDevice.c)
 */

__int64 __fastcall RIMRemoveFromActiveDevices(__int64 a1, __int64 a2, int a3, int *a4)
{
  int v4; // r15d
  _QWORD *v5; // r14
  _QWORD *v7; // rsi
  __int64 v9; // rbp
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx

  v4 = 0;
  v5 = (_QWORD *)(a1 + 576);
  v7 = *(_QWORD **)(a1 + 576);
  v9 = a2;
  if ( *(_QWORD *)(a1 + 608) == a2 )
    RIMUpdatePrimaryDevice(a1, 0LL);
  while ( v7 != v5 )
  {
    v12 = v7 - 1;
    v7 = (_QWORD *)*v7;
    if ( *v12 == v9 )
    {
      v13 = *(_QWORD *)(v9 + 16);
      *(_DWORD *)(v13 + 184) &= ~0x40000000u;
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        20,
        34,
        (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids,
        v13);
      if ( (v12[3] & 1) == 0 && *(_DWORD *)(v9 + 24) != 7 )
      {
        EtwTracePointerDeviceOutOfRangeMessageStart();
        if ( (int)IsPostPointerDeviceOutOfRangeMessageSupported() >= 0 )
          PostPointerDeviceOutOfRangeMessage(v9, 0LL, 0LL);
        EtwTracePointerDeviceOutOfRangeMessageStop();
      }
      if ( (*(_DWORD *)(a1 + 604) & 1) != 0 )
      {
        *((_DWORD *)v12 + 6) |= 1u;
        *(_DWORD *)(a1 + 604) |= 2u;
        if ( a3 )
        {
          *((_DWORD *)v12 + 6) |= 2u;
          *(_DWORD *)(a1 + 604) |= 4u;
        }
        v4 = 1;
      }
      else
      {
        v14 = v12[1];
        v15 = (_QWORD *)v12[2];
        if ( *(_QWORD **)(v14 + 8) != v12 + 1 || (_QWORD *)*v15 != v12 + 1 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        Win32FreePool(v12);
        --*(_DWORD *)(a1 + 592);
      }
      break;
    }
  }
  if ( a4 )
    *a4 = v4;
  return 1LL;
}
