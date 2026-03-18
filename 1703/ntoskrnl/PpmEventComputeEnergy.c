/*
 * XREFs of PpmEventComputeEnergy @ 0x140235514
 * Callers:
 *     PpmCheckComputeEnergy @ 0x140046D20 (PpmCheckComputeEnergy.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PpmEventComputeEnergy(int a1, __int64 a2)
{
  REGHANDLE v2; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]
  int v7; // [rsp+80h] [rbp+8h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  if ( PpmEtwRegistered )
  {
    v2 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_COMPUTE_ENERGY) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 4;
      v4 = &v8;
      v5 = 8;
      EtwWriteEx(v2, &PPM_ETW_COMPUTE_ENERGY, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
