/*
 * XREFs of rimAbIsPointInGlobalPenDeadzone @ 0x1C0103AF8
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104474 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C010490C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     ApiSetGetUserHandedness @ 0x1C0007724 (ApiSetGetUserHandedness.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C01164F8 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 */

__int64 __fastcall rimAbIsPointInGlobalPenDeadzone(__int64 a1, __int128 *a2, __int64 a3)
{
  unsigned int v3; // edi
  int UserHandedness; // eax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( *(_DWORD *)(a1 + 620) )
  {
    RIMLockExclusive((__int64)&gDeadzoneLock);
    if ( gDeviceArbitrationType == 1 )
    {
      v3 = 1;
    }
    else if ( RIMDeadzone::s_pRimDeadzoneInstance )
    {
      UserHandedness = ApiSetGetUserHandedness();
      v8 = *(_QWORD *)(a1 + 624);
      v11 = *a2;
      v3 = RIMDeadzone::IsInDeadzone(v9, &v11, a3, v8, UserHandedness);
    }
    qword_1C018E7C8 = 0LL;
    ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
    KeLeaveCriticalRegion();
  }
  return v3;
}
