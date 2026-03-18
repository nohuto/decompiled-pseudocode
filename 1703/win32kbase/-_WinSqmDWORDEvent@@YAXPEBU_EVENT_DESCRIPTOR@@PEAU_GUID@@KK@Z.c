/*
 * XREFs of ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0065A6C
 * Callers:
 *     SqmPowerState @ 0x1C0065930 (SqmPowerState.c)
 *     WinSqmSetDWORD @ 0x1C0065A30 (WinSqmSetDWORD.c)
 *     WinSqmIncrementDWORD @ 0x1C0065A50 (WinSqmIncrementDWORD.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009899C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     WinSqmAddToAverageDWORD @ 0x1C00E7560 (WinSqmAddToAverageDWORD.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C012BA20 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     WinSqmEventEnabled @ 0x1C0065B00 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0065B50 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C006D1A4 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall _WinSqmDWORDEvent(PCEVENT_DESCRIPTOR EventDescriptor, struct _GUID *a2, int a3, int a4)
{
  struct _GUID *v6; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+20h] [rbp-29h] BYREF
  int v8; // [rsp+C0h] [rbp+77h] BYREF
  int v9; // [rsp+C8h] [rbp+7Fh] BYREF

  v9 = a4;
  v8 = a3;
  memset(UserData, 0, 0x40uLL);
  if ( a2 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a2) )
    {
      v6 = (struct _GUID *)((char *)a2 + 24);
    }
    else
    {
      v6 = (struct _GUID *)&unk_1C0161360;
      if ( a2 )
        v6 = a2;
    }
    if ( (unsigned int)WinSqmEventEnabled(EventDescriptor, v6) )
    {
      UserData[0].Reserved = 0;
      UserData[1].Reserved = 0;
      UserData[2].Reserved = 0;
      UserData[3].Reserved = 0;
      UserData[1].Ptr = (ULONGLONG)&v8;
      UserData[2].Ptr = (ULONGLONG)&unk_1C018E930;
      UserData[3].Ptr = (ULONGLONG)&v9;
      UserData[0].Ptr = (ULONGLONG)v6;
      UserData[0].Size = 16;
      UserData[1].Size = 4;
      UserData[2].Size = 4;
      UserData[3].Size = 4;
      WinSqmEventWrite(EventDescriptor, 4u, UserData);
    }
  }
}
