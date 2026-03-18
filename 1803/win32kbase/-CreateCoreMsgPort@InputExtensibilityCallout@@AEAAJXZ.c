/*
 * XREFs of ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C0120A58
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C013147C (UserSetMITInputCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     CoreMsgCreatePort @ 0x1C01652B4 (CoreMsgCreatePort.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CreateCoreMsgPort(InputExtensibilityCallout *this, __int64 a2)
{
  InputExtensibilityCallout *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // r8
  int Port; // eax
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = this;
  v2 = gpInputExtensibilityCallout;
  if ( *((_QWORD *)gpInputExtensibilityCallout + 5) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v3 = SeConvertStringSecurityDescriptorToSecurityDescriptor(
         L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)",
         1LL,
         &P);
  v4 = v3;
  if ( v3 < 0 )
  {
    v10 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
      2u,
      2u,
      0xBu,
      (__int64)&WPP_ae1264a177d634da784129fd655dc111_Traceguids,
      v10);
  }
  else
  {
    RIMLockExclusive((__int64)v2 + 24);
    Port = CoreMsgCreatePort(v5, P, v6, (char *)v2 + 40);
    v4 = Port;
    if ( Port < 0 )
    {
      v9 = Port;
      WPP_RECORDER_SF_d(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
        2u,
        2u,
        0xAu,
        (__int64)&WPP_ae1264a177d634da784129fd655dc111_Traceguids,
        v9);
    }
    *((_QWORD *)v2 + 4) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v2 + 24, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v4;
}
