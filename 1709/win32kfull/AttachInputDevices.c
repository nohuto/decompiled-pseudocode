/*
 * XREFs of AttachInputDevices @ 0x1C0141648
 * Callers:
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AttachInputDevices(int a1)
{
  unsigned int v1; // edi
  unsigned int v2; // r14d
  char *v3; // rbp
  __int64 v4; // rbx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int Timeout; // [rsp+20h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+70h] [rbp+8h]
  char v17; // [rsp+78h] [rbp+10h] BYREF

  v1 = 1;
  if ( a1 )
  {
    if ( (dword_1C0327D90 & 1) == 0 )
    {
      dword_1C0327D90 |= 1u;
      byte_1C0327D88 = gdwMitConfig & 1;
      byte_1C0327D89 = (gdwMitConfig & 2) != 0;
      byte_1C0327D8A = (gdwMitConfig & 4) != 0;
    }
    v2 = 0;
    v3 = &byte_1C0327D88;
    v4 = 0LL;
    do
    {
      if ( !*v3 )
      {
        v11 = *(_QWORD *)(v4 + aDeviceTemplate[0] + 104);
        if ( v11 )
        {
          if ( *(struct _KTHREAD **)(v11 + 40) == KeGetCurrentThread() )
          {
            if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            RIMDirectStartDeviceClassNotifications(*(_QWORD *)(v4 + aDeviceTemplate[0] + 96), gpWin32kDriverObject);
          }
          else
          {
            KeSetEvent(*(PRKEVENT *)(v4 + aDeviceTemplate[0] + 408), 1, 0);
            UserSessionSwitchLeaveCrit(v13, v12);
            KeWaitForSingleObject(*(PVOID *)(v4 + aDeviceTemplate[0] + 432), WrUserRequest, 0, 0, 0LL);
            EnterCrit(0LL, 1LL);
          }
        }
      }
      ++v2;
      ++v3;
      v4 += 560LL;
    }
    while ( v2 <= 2 );
    if ( byte_1C0327D88 )
      CBaseInput::HandleTSRequest(gpMouseSensor, 2LL);
    if ( byte_1C0327D89 )
      CBaseInput::HandleTSRequest(gpKeyboardSensor, 2LL);
    if ( byte_1C0327D8A )
      CBaseInput::HandleTSRequest(gpHidInput, 2LL);
  }
  else
  {
    gbPendRecreateTouchInjectionDevices = 1;
    if ( (gdwMitConfig & 1) != 0 )
    {
      CBaseInput::HandleTSRequest(gpMouseSensor, 0LL);
      v6 = v16;
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
               &v17);
      }
      else
      {
        LODWORD(aDeviceTemplate[36]) = 0;
        KeSetEvent((PRKEVENT)aDeviceTemplate[34], 1, 0);
        UserSessionSwitchLeaveCrit(v8, v7);
        KeWaitForSingleObject((PVOID)aDeviceTemplate[35], WrUserRequest, 0, 0, 0LL);
        EnterCrit(0LL, 1LL);
        v6 = aDeviceTemplate[36];
      }
      LOBYTE(v1) = v6 >= 0;
    }
    if ( (gdwMitConfig & 2) != 0 )
    {
      CBaseInput::HandleTSRequest(gpKeyboardSensor, 0LL);
    }
    else if ( gptiCurrent == gptiRit )
    {
      LOBYTE(Timeout) = 0;
      v6 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
             aDeviceTemplate[82],
             &DestinationString,
             1LL,
             ghRemoteKeyboardChannel,
             Timeout,
             &v17);
    }
    else
    {
      LODWORD(aDeviceTemplate[106]) = 0;
      KeSetEvent((PRKEVENT)aDeviceTemplate[104], 1, 0);
      UserSessionSwitchLeaveCrit(v10, v9);
      KeWaitForSingleObject((PVOID)aDeviceTemplate[105], WrUserRequest, 0, 0, 0LL);
      EnterCrit(0LL, 1LL);
      v6 = aDeviceTemplate[106];
    }
    return (v6 >= 0) & (unsigned __int8)v1;
  }
  return v1;
}
