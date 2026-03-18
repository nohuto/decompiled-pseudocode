/*
 * XREFs of rimAbIsPointInPenDeadzone @ 0x1C0103BA8
 * Callers:
 *     rimAbIsPointerSuppressedByPointer @ 0x1C0103EC0 (rimAbIsPointerSuppressedByPointer.c)
 *     RIMIsPointInPenDeadzone @ 0x1C0105150 (RIMIsPointInPenDeadzone.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C0127E50 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z.c)
 * Callees:
 *     ApiSetGetUserHandedness @ 0x1C0007724 (ApiSetGetUserHandedness.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C01164F8 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 */

__int64 __fastcall rimAbIsPointInPenDeadzone(__int128 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  int UserHandedness; // eax
  __int64 v8; // rcx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( gDeviceArbitrationType )
  {
    if ( gDeviceArbitrationType == 1 )
    {
      return 1;
    }
    else if ( (unsigned int)(gDeviceArbitrationType - 2) <= 1 )
    {
      RIMLockExclusive((__int64)&gDeadzoneLock);
      if ( RIMDeadzone::s_pRimDeadzoneInstance )
      {
        v10 = *a1;
        UserHandedness = ApiSetGetUserHandedness();
        v3 = RIMDeadzone::IsInDeadzone(v8, &v10, a2, a3, UserHandedness);
      }
      qword_1C018E7C8 = 0LL;
      ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return v3;
}
