/*
 * XREFs of xxxRegisterForDeviceClassNotifications @ 0x1C0122350
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 * Callees:
 *     RegisterCDROMNotify @ 0x1C01224D0 (RegisterCDROMNotify.c)
 *     OpenMultiplePortDevice @ 0x1C01BE8E8 (OpenMultiplePortDevice.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRegisterForDeviceClassNotifications(__int64 a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  __int64 v3; // rbp
  CBaseInput **v4; // rcx
  int v5; // eax
  __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  int v13; // [rsp+48h] [rbp-30h]

  v1 = -1073741811;
  v2 = 0;
  v3 = 0LL;
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
    UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
    if ( !v2 )
    {
      v1 = 0;
      goto LABEL_11;
    }
    if ( v2 == 2 )
    {
      if ( (gdwMitConfig & 4) != 0 )
      {
        v1 = CBaseInput::InitializeSensor(gpHidInput);
        if ( v1 < 0 )
          goto LABEL_11;
        v4 = (CBaseInput **)gpHidInput;
LABEL_9:
        v5 = CBaseInput::Read(*v4);
      }
      else
      {
LABEL_26:
        v7 = 70LL * v2;
        v8 = DeviceTypeToRimInputType(v2);
        LOBYTE(v13) = 0;
        v1 = RIMRegisterForInput(
               v8,
               0LL,
               gpWin32kDriverObject,
               *(_QWORD *)(aDeviceTemplate[0] + v3 + 112),
               *(_QWORD *)(aDeviceTemplate[0] + v3 + 192),
               0LL,
               0,
               0LL,
               Win32kRIMDevChangeCallback,
               v13,
               0LL,
               &aDeviceTemplate[v7 + 12]);
        if ( v1 < 0 )
          goto LABEL_11;
        LOBYTE(v9) = 1;
        RawInputManagerObjectResolveHandle(
          *(_QWORD *)(aDeviceTemplate[0] + v3 + 96),
          3LL,
          v9,
          &aDeviceTemplate[v7 + 13]);
        EnterCrit(0LL, 1LL);
        OpenMultiplePortDevice(*(_QWORD *)(aDeviceTemplate[0] + v3 + 96), v2);
        UserSessionSwitchLeaveCrit(v11, v10);
        *(_DWORD *)(aDeviceTemplate[0] + v3 + 444) = 64;
        LOBYTE(BugCheckParameter4) = 0;
        v5 = RIMReadInput(
               *(_QWORD *)(aDeviceTemplate[0] + v3 + 96),
               &aDeviceTemplate[v7 + 61],
               *(unsigned int *)(aDeviceTemplate[0] + v3 + 444),
               *(_QWORD *)(aDeviceTemplate[0] + v3 + 152),
               BugCheckParameter4,
               &aDeviceTemplate[v7 + 58],
               &aDeviceTemplate[v7 + 55],
               &aDeviceTemplate[v7 + 56]);
      }
      v1 = v5;
      goto LABEL_11;
    }
    if ( (gdwMitConfig & 2) == 0 )
      goto LABEL_26;
    v1 = CBaseInput::InitializeSensor(gpKeyboardSensor);
    if ( v1 >= 0 )
    {
      v4 = (CBaseInput **)gpKeyboardSensor;
      goto LABEL_9;
    }
LABEL_11:
    EnterCrit(0LL, 1LL);
LABEL_12:
    ++v2;
    v3 += 560LL;
  }
  while ( v2 <= 2 );
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
  if ( !gbFirstConnectionDone && gpWin32kDriverObject )
  {
    if ( !gProtocolType )
      RegisterCDROMNotify();
    gbFirstConnectionDone = 1;
  }
  EnterCrit(0LL, 1LL);
  return (unsigned int)v1;
}
