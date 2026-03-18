/*
 * XREFs of PpmEventAutonomousModeChange @ 0x140235340
 * Callers:
 *     PpmUpdateTargetProcessorPolicy @ 0x14017D478 (PpmUpdateTargetProcessorPolicy.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PpmEventAutonomousModeChange(__int64 a1, int a2)
{
  REGHANDLE v3; // rbx
  __int16 v4; // ax
  __int16 v5; // [rsp+30h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-48h] BYREF
  __int64 v7; // [rsp+48h] [rbp-38h]
  int v8; // [rsp+50h] [rbp-30h]
  int v9; // [rsp+54h] [rbp-2Ch]
  int *v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  int v13; // [rsp+98h] [rbp+18h] BYREF

  v13 = a2;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_AUTONOMOUS_MODE_CHANGE) )
    {
      v4 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v5 = v4;
      UserData.Ptr = (ULONGLONG)&v5;
      v7 = a1 + 209;
      v10 = &v13;
      UserData.Size = 2;
      v8 = 1;
      v11 = 4;
      EtwWrite(v3, &PPM_ETW_AUTONOMOUS_MODE_CHANGE, 0LL, 3u, &UserData);
    }
  }
}
