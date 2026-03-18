/*
 * XREFs of ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C0123830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C00E0610 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     RimInputTypeToDeviceInputType @ 0x1C012E918 (RimInputTypeToDeviceInputType.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnRemoteOpenNotification(char **this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v10; // [rsp+28h] [rbp-20h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = RimInputTypeToDeviceInputType(*((unsigned int *)this + 34));
  v5 = v2;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
LABEL_7:
      WPP_RECORDER_SF_d(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
        4u,
        2u,
        0xBu,
        (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids,
        v5);
      return (unsigned int)-1073741816;
    }
    v6 = ghRemoteKeyboardChannel;
  }
  else
  {
    v6 = ghRemoteMouseChannel;
  }
  if ( v6 == -1 )
    goto LABEL_7;
  if ( v6 )
  {
    v8 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(this[1], &DestinationString, v2, v6, 0, 0LL);
    v7 = v8;
    if ( v8 < 0 )
    {
      LODWORD(v10) = v8;
      WPP_RECORDER_SF_d(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
        2u,
        2u,
        0xDu,
        (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids,
        v10);
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
      2u,
      2u,
      0xCu,
      (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids);
    return 0;
  }
  return v7;
}
