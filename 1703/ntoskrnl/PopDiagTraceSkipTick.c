/*
 * XREFs of PopDiagTraceSkipTick @ 0x1406CDCB8
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSkipTick(unsigned __int8 a1, unsigned __int8 a2)
{
  REGHANDLE v4; // rbx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+34h] [rbp-44h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+54h] [rbp-24h]

  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SKIP_TICK) )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v5 = a1;
      v6 = a2;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v5;
      v8 = &v6;
      v9 = 4;
      EtwWrite(v4, &POP_ETW_EVENT_SKIP_TICK, 0LL, 2u, &UserData);
    }
  }
}
