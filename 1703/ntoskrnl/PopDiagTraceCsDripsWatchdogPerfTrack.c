/*
 * XREFs of PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1402308F0
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1406D4DDC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsDripsWatchdogPerfTrack(
        int a1,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        char a6,
        unsigned __int8 a7)
{
  _UNKNOWN **v7; // rax
  REGHANDLE v12; // rbx
  __int16 v13; // cx
  _DWORD *v14; // r8
  __int16 v15; // ax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rax
  __int64 v20; // r9
  _DWORD v22[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v23; // [rsp+48h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  v7 = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    v12 = PopDiagHandle;
    LOBYTE(v7) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG_PERFTRACK);
    if ( (_BYTE)v7 )
    {
      v22[0] = a1;
      v22[1] = a2;
      v23 = a3;
      if ( a6 )
        v13 = (a4 != 0) | 0x200;
      else
        v13 = a4 != 0;
      v14 = v22;
      v15 = v13 & 0xFE01 | (2 * a7);
      v16 = 0xFFFF;
      v17 = v15 & 0x3FF;
      if ( a5 <= 0xFFFF )
        v16 = a5;
      v18 = v17 | (v16 << 16);
      p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
      HIDWORD(v23) = v18;
      v20 = 4LL;
      do
      {
        p_Reserved->Reserved = 0;
        *(_QWORD *)&p_Reserved[-3].Reserved = v14++;
        p_Reserved[-1].Reserved = 4;
        p_Reserved += 4;
        --v20;
      }
      while ( v20 );
      LOBYTE(v7) = EtwWriteEx(v12, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG_PERFTRACK, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v7;
}
