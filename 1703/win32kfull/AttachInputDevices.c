/*
 * XREFs of AttachInputDevices @ 0x1C013A9A4
 * Callers:
 *     xxxRemoteReconnect @ 0x1C0139E30 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AttachInputDevices(int a1)
{
  unsigned int v1; // edi
  unsigned int v2; // r14d
  char *v3; // rbp
  unsigned __int64 v4; // rbx
  int v6; // eax
  PRKEVENT v7; // r10
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _LIST_ENTRY *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int Timeout; // [rsp+20h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+70h] [rbp+8h]
  char v25; // [rsp+78h] [rbp+10h] BYREF

  v1 = 1;
  if ( a1 )
  {
    if ( (dword_1C032CB00 & 1) == 0 )
    {
      dword_1C032CB00 |= 1u;
      byte_1C032CAF8 = gdwMitConfig & 1;
      byte_1C032CAF9 = (gdwMitConfig & 2) != 0;
      byte_1C032CAFA = (gdwMitConfig & 4) != 0;
    }
    v2 = 0;
    v3 = &byte_1C032CAF8;
    v4 = 0LL;
    do
    {
      if ( !*v3 )
      {
        v17 = (&aDeviceTemplate[0][4].Header.WaitListHead.Flink)[v4 / 8];
        if ( v17 )
        {
          if ( (struct _KTHREAD *)v17[2].Blink == KeGetCurrentThread() )
          {
            if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            RIMDirectStartDeviceClassNotifications(
              *(_QWORD *)((char *)&aDeviceTemplate[0][4].Header.Lock + v4),
              gpWin32kDriverObject);
          }
          else
          {
            KeSetEvent(*(PRKEVENT *)((char *)&aDeviceTemplate[0][17].Header.Lock + v4), 1, 0);
            UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
            KeWaitForSingleObject(
              *(PVOID *)((char *)&aDeviceTemplate[0][18].Header.Lock + v4),
              WrUserRequest,
              0,
              0,
              0LL);
            EnterCrit(0LL, 1LL);
          }
        }
      }
      ++v2;
      ++v3;
      v4 += 560LL;
    }
    while ( v2 <= 2 );
    if ( byte_1C032CAF8 )
      CBaseInput::HandleTSRequest(gpMouseSensor, 2LL);
    if ( byte_1C032CAF9 )
      CBaseInput::HandleTSRequest(gpKeyboardSensor, 2LL);
    if ( byte_1C032CAFA )
      CBaseInput::HandleTSRequest(gpHidInput, 2LL);
  }
  else
  {
    gbPendRecreateTouchInjectionDevices = 1;
    if ( (gdwMitConfig & 1) != 0 )
    {
      CBaseInput::HandleTSRequest(gpMouseSensor, 0LL);
      v7 = aDeviceTemplate[0];
      v8 = v24;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      if ( gptiCurrent == gTermIO[2] )
      {
        v6 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
               aDeviceTemplate[12],
               &DestinationString,
               0LL,
               ghRemoteMouseChannel,
               0,
               &v25);
        v7 = aDeviceTemplate[0];
        v8 = v6;
      }
      else
      {
        LODWORD(aDeviceTemplate[36]) = 0;
        KeSetEvent(aDeviceTemplate[34], 1, 0);
        UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
        KeWaitForSingleObject(aDeviceTemplate[35], WrUserRequest, 0, 0, 0LL);
        EnterCrit(0LL, 1LL);
        v7 = aDeviceTemplate[0];
        v8 = (int)aDeviceTemplate[36];
      }
      LOBYTE(v1) = v8 >= 0;
    }
    if ( (gdwMitConfig & 2) != 0 )
    {
      CBaseInput::HandleTSRequest(gpKeyboardSensor, 0LL);
    }
    else if ( gptiCurrent == gptiRit )
    {
      LOBYTE(Timeout) = 0;
      v8 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
             v7[27].Header.WaitListHead.Flink,
             &DestinationString,
             1LL,
             ghRemoteKeyboardChannel,
             Timeout,
             &v25);
    }
    else
    {
      LODWORD(v7[35].Header.WaitListHead.Flink) = 0;
      KeSetEvent(aDeviceTemplate[104], 1, 0);
      UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
      KeWaitForSingleObject(aDeviceTemplate[105], WrUserRequest, 0, 0, 0LL);
      EnterCrit(0LL, 1LL);
      v8 = (int)aDeviceTemplate[106];
    }
    return (v8 >= 0) & (unsigned __int8)v1;
  }
  return v1;
}
