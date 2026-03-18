/*
 * XREFs of ?TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C021EB30
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C021D654 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 */

void __fastcall InkDevice::TerminateActiveCommand(LPCSTR *this, struct InkFeedbackProviderBase::ActiveCommand *a2)
{
  LPCGUID v2; // r8
  LPCGUID cData; // r9
  _DWORD v4[4]; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  _DWORD *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+70h] [rbp-28h] BYREF

  if ( *((_BYTE *)this - 20) )
  {
    if ( *((_DWORD *)a2 + 4) == 1 )
    {
      v4[0] = *((_DWORD *)a2 + 5);
      InkDevice::DoSuperWetInkStop(this - 4, (const struct IFC_SUPERWET_INK_STOP_DATA *)v4);
    }
  }
  else if ( hProvider > 2u )
  {
    v4[0] = -1073741823;
    v6 = v4;
    v7 = 4;
    v8 = 0;
    TlgCreateSz(&v9, "Device not opened");
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v2, cData, (UINT32)cData, &pData);
  }
}
