/*
 * XREFs of ?TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C021FE70
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C021E938 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 */

void __fastcall InkDevice::TerminateActiveCommand(
        InkDevice *this,
        struct InkFeedbackProviderBase::ActiveCommand *a2,
        const GUID *a3)
{
  _DWORD v3[4]; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-58h] BYREF
  _DWORD *v5; // [rsp+60h] [rbp-38h]
  __int64 v6; // [rsp+68h] [rbp-30h]
  const char *v7; // [rsp+70h] [rbp-28h]
  __int64 v8; // [rsp+78h] [rbp-20h]

  if ( *((_BYTE *)this - 20) )
  {
    if ( *((_DWORD *)a2 + 4) == 1 )
    {
      v3[0] = *((_DWORD *)a2 + 5);
      InkDevice::DoSuperWetInkStop((InkDevice *)((char *)this - 32), (const struct IFC_SUPERWET_INK_STOP_DATA *)v3);
    }
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v3[0] = -1073741823;
    v5 = v3;
    v6 = 4LL;
    v7 = "Device not opened";
    v8 = 18LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E8C52, a3, 0LL, 4u, &v4);
  }
}
