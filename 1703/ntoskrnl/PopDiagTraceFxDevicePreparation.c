/*
 * XREFs of PopDiagTraceFxDevicePreparation @ 0x1405708A0
 * Callers:
 *     PoFxPrepareDevice @ 0x14006776C (PoFxPrepareDevice.c)
 *     PoFxAbandonDevice @ 0x140570AF4 (PoFxAbandonDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDevicePreparation(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int8 a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v7; // rbx
  int v8; // r8d
  __int16 v10; // [rsp+38h] [rbp-39h] BYREF
  int v11; // [rsp+3Ch] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v13; // [rsp+58h] [rbp-19h]
  int v14; // [rsp+60h] [rbp-11h]
  int v15; // [rsp+64h] [rbp-Dh]
  __int16 *v16; // [rsp+68h] [rbp-9h]
  int v17; // [rsp+70h] [rbp-1h]
  int v18; // [rsp+74h] [rbp+3h]
  __int64 v19; // [rsp+78h] [rbp+7h]
  int v20; // [rsp+80h] [rbp+Fh]
  int v21; // [rsp+84h] [rbp+13h]
  int *v22; // [rsp+88h] [rbp+17h]
  int v23; // [rsp+90h] [rbp+1Fh]
  int v24; // [rsp+94h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v26; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v27; // [rsp+E0h] [rbp+6Fh] BYREF

  v4 = &retaddr;
  v27 = a2;
  v26 = a1;
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_PREPARATION);
    if ( (_BYTE)v4 )
    {
      v8 = *a3;
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v11 = a4;
      v10 = (unsigned __int16)v8 >> 1;
      UserData.Ptr = (ULONGLONG)&v26;
      v13 = &v27;
      v16 = &v10;
      v19 = *((_QWORD *)a3 + 1);
      v22 = &v11;
      UserData.Size = 8;
      v14 = 8;
      v20 = v8;
      v17 = 2;
      v23 = 4;
      LOBYTE(v4) = EtwWrite(v7, &POP_ETW_EVENT_DEVICE_PREPARATION, 0LL, 5u, &UserData);
    }
  }
  return (char)v4;
}
