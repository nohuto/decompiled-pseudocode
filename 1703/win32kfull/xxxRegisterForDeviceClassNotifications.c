/*
 * XREFs of xxxRegisterForDeviceClassNotifications @ 0x1C01187EC
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 * Callees:
 *     RegisterCDROMNotify @ 0x1C011896C (RegisterCDROMNotify.c)
 *     OpenMultiplePortDevice @ 0x1C01BA2F8 (OpenMultiplePortDevice.c)
 */

__int64 __fastcall xxxRegisterForDeviceClassNotifications(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rbp
  CBaseInput **v7; // rcx
  int v8; // eax
  _DWORD *v9; // rcx
  __int64 v11; // r14
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-48h]
  int v20; // [rsp+48h] [rbp-30h]

  v4 = -1073741811;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( !gpWin32kDriverObject )
      goto LABEL_12;
    if ( gdwInAtomicOperation )
    {
      a1 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
    if ( !v5 )
    {
      v4 = 0;
      goto LABEL_11;
    }
    if ( v5 == 2 )
    {
      if ( (gdwMitConfig & 4) != 0 )
      {
        v4 = CBaseInput::InitializeSensor(gpHidInput);
        if ( v4 < 0 )
          goto LABEL_11;
        v7 = (CBaseInput **)gpHidInput;
LABEL_9:
        v8 = CBaseInput::Read(*v7);
      }
      else
      {
LABEL_26:
        v11 = 70LL * v5;
        v12 = DeviceTypeToRimInputType(v5);
        LOBYTE(v20) = 0;
        LODWORD(v19) = 0;
        v4 = RIMRegisterForInput(
               v12,
               0LL,
               gpWin32kDriverObject,
               (&aDeviceTemplate[0][4].Header.WaitListHead.Blink)[v6],
               *(_QWORD *)((char *)&aDeviceTemplate[0][8].Header.Lock + v6 * 8),
               0LL,
               v19,
               0LL,
               Win32kRIMDevChangeCallback,
               v20,
               0LL,
               &aDeviceTemplate[v11 + 12]);
        if ( v4 < 0 )
          goto LABEL_11;
        LOBYTE(v13) = 1;
        RawInputManagerObjectResolveHandle(
          *(_QWORD *)((char *)&aDeviceTemplate[0][4].Header.Lock + v6 * 8),
          3LL,
          v13,
          &aDeviceTemplate[v11 + 13]);
        EnterCrit(0LL, 1LL);
        OpenMultiplePortDevice(*(_QWORD *)((char *)&aDeviceTemplate[0][4].Header.Lock + v6 * 8), v5);
        UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
        HIDWORD((&aDeviceTemplate[0][18].Header.WaitListHead.Flink)[v6]) = 64;
        LOBYTE(BugCheckParameter4) = 0;
        v8 = RIMReadInput(
               *(_QWORD *)((char *)&aDeviceTemplate[0][4].Header.Lock + v6 * 8),
               &aDeviceTemplate[v11 + 61],
               HIDWORD((&aDeviceTemplate[0][18].Header.WaitListHead.Flink)[v6]),
               (&aDeviceTemplate[0][6].Header.WaitListHead.Flink)[v6],
               BugCheckParameter4,
               &aDeviceTemplate[v11 + 58],
               &aDeviceTemplate[v11 + 55],
               &aDeviceTemplate[v11 + 56]);
      }
      v4 = v8;
      goto LABEL_11;
    }
    if ( (gdwMitConfig & 2) == 0 )
      goto LABEL_26;
    v4 = CBaseInput::InitializeSensor(gpKeyboardSensor);
    if ( v4 >= 0 )
    {
      v7 = (CBaseInput **)gpKeyboardSensor;
      goto LABEL_9;
    }
LABEL_11:
    EnterCrit(0LL, 1LL);
LABEL_12:
    ++v5;
    v6 += 70LL;
  }
  while ( v5 <= 2 );
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  v9 = (_DWORD *)gbFirstConnectionDone;
  if ( !gbFirstConnectionDone && gpWin32kDriverObject )
  {
    if ( !gProtocolType )
    {
      RegisterCDROMNotify();
      v9 = (_DWORD *)gbFirstConnectionDone;
    }
    *v9 = 1;
  }
  EnterCrit(0LL, 1LL);
  return (unsigned int)v4;
}
