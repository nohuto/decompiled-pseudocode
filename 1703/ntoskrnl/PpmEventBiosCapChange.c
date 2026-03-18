/*
 * XREFs of PpmEventBiosCapChange @ 0x140235420
 * Callers:
 *     PpmRegisterPerfCap @ 0x14022D480 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PpmEventBiosCapChange(__int64 a1, int a2)
{
  _UNKNOWN **v2; // rax
  REGHANDLE v4; // rbx
  __int16 v5; // ax
  __int16 v7; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v9; // [rsp+60h] [rbp+1Fh]
  int v10; // [rsp+68h] [rbp+27h]
  int v11; // [rsp+6Ch] [rbp+2Bh]
  int *v12; // [rsp+70h] [rbp+2Fh]
  int v13; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+7Ch] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  int v16; // [rsp+B0h] [rbp+6Fh] BYREF

  v2 = &retaddr;
  v16 = a2;
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_BIOS_CAP_CHANGE);
    if ( (_BYTE)v2 )
    {
      v5 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v7 = v5;
      UserData.Ptr = (ULONGLONG)&v7;
      v9 = a1 + 209;
      v12 = &v16;
      UserData.Size = 2;
      v10 = 1;
      v13 = 4;
      LOBYTE(v2) = EtwWriteEx(v4, &PPM_ETW_BIOS_CAP_CHANGE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v2;
}
