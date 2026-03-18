/*
 * XREFs of KsepDsEventSystemPowerIrp @ 0x1402099A8
 * Callers:
 *     KseDsCallbackHookIrpPowerFunction @ 0x140208840 (KseDsCallbackHookIrpPowerFunction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall KsepDsEventSystemPowerIrp(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7)
{
  _UNKNOWN **v7; // rax
  REGHANDLE v8; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-61h] BYREF
  __int64 *v11; // [rsp+58h] [rbp-51h]
  int v12; // [rsp+60h] [rbp-49h]
  int v13; // [rsp+64h] [rbp-45h]
  __int64 *v14; // [rsp+68h] [rbp-41h]
  int v15; // [rsp+70h] [rbp-39h]
  int v16; // [rsp+74h] [rbp-35h]
  int *v17; // [rsp+78h] [rbp-31h]
  int v18; // [rsp+80h] [rbp-29h]
  int v19; // [rsp+84h] [rbp-25h]
  char *v20; // [rsp+88h] [rbp-21h]
  int v21; // [rsp+90h] [rbp-19h]
  int v22; // [rsp+94h] [rbp-15h]
  char *v23; // [rsp+98h] [rbp-11h]
  int v24; // [rsp+A0h] [rbp-9h]
  int v25; // [rsp+A4h] [rbp-5h]
  char *v26; // [rsp+A8h] [rbp-1h]
  int v27; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B4h] [rbp+Bh]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+47h] BYREF
  __int64 v30; // [rsp+F8h] [rbp+4Fh] BYREF
  __int64 v31; // [rsp+100h] [rbp+57h] BYREF
  __int64 v32; // [rsp+108h] [rbp+5Fh] BYREF
  int v33; // [rsp+110h] [rbp+67h] BYREF

  v7 = &retaddr;
  v33 = a4;
  v32 = a3;
  v31 = a2;
  v30 = a1;
  v8 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    LOBYTE(v7) = EtwEventEnabled(KseEtwHandle, &KseDsEventSystemPowerIrp);
    if ( (_BYTE)v7 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      UserData.Ptr = (ULONGLONG)&v30;
      v11 = &v31;
      v14 = &v32;
      v17 = &v33;
      v20 = &a5;
      v23 = &a6;
      UserData.Size = 8;
      v12 = 8;
      v15 = 8;
      v26 = &a7;
      v18 = 4;
      v21 = 4;
      v24 = 4;
      v27 = 4;
      LOBYTE(v7) = EtwWriteEx(v8, &KseDsEventSystemPowerIrp, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
  return (char)v7;
}
