/*
 * XREFs of PopDiagTraceCsDripsWatchdogPerfTrack @ 0x140245348
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x14070A8CC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceCsDripsWatchdogPerfTrack(
        int a1,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        char a6,
        unsigned __int8 a7)
{
  __int16 v11; // ax
  __int64 v12; // r8
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rax
  _DWORD *v17; // rcx
  _DWORD v18[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v19; // [rsp+48h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-58h] BYREF

  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG_PERFTRACK) )
  {
    v18[0] = a1;
    v18[1] = a2;
    v19 = a3;
    if ( a6 )
      v11 = (a4 != 0) | 0x200;
    else
      v11 = a4 != 0;
    v12 = 4LL;
    v13 = v11 & 0x201 | (2 * a7) & 0x3FF;
    v14 = 0xFFFF;
    if ( a5 <= 0xFFFF )
      v14 = a5;
    v15 = (v14 << 16) | v13;
    p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
    HIDWORD(v19) = v15;
    v17 = v18;
    do
    {
      p_Reserved->Reserved = 0;
      *(_QWORD *)&p_Reserved[-3].Reserved = v17++;
      p_Reserved[-1].Reserved = 4;
      p_Reserved += 4;
      --v12;
    }
    while ( v12 );
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG_PERFTRACK, 0LL, 0, 0LL, 0LL, 4u, &UserData);
  }
}
