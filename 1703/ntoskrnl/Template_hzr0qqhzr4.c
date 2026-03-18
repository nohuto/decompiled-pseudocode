/*
 * XREFs of Template_hzr0qqhzr4 @ 0x1401F8248
 * Callers:
 *     IopDeviceRemovalForResetComplete @ 0x140694A70 (IopDeviceRemovalForResetComplete.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_hzr0qqhzr4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        unsigned __int16 a8,
        __int64 a9)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-51h] BYREF
  __int64 v11; // [rsp+50h] [rbp-41h]
  int v12; // [rsp+58h] [rbp-39h]
  int v13; // [rsp+5Ch] [rbp-35h]
  char *v14; // [rsp+60h] [rbp-31h]
  __int64 v15; // [rsp+68h] [rbp-29h]
  char *v16; // [rsp+70h] [rbp-21h]
  __int64 v17; // [rsp+78h] [rbp-19h]
  unsigned __int16 *v18; // [rsp+80h] [rbp-11h]
  __int64 v19; // [rsp+88h] [rbp-9h]
  __int64 v20; // [rsp+90h] [rbp-1h]
  int v21; // [rsp+98h] [rbp+7h]
  int v22; // [rsp+9Ch] [rbp+Bh]
  unsigned __int16 v23; // [rsp+E8h] [rbp+57h] BYREF

  v23 = a4;
  UserData.Ptr = (ULONGLONG)&v23;
  v11 = a5;
  *(_QWORD *)&UserData.Size = 2LL;
  v12 = 2 * a4;
  v14 = &a6;
  v16 = &a7;
  v18 = &a8;
  v20 = a9;
  v13 = 0;
  v21 = 2 * a8;
  v15 = 4LL;
  v17 = 4LL;
  v19 = 2LL;
  v22 = 0;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, &KMPnPEvt_DeviceReset_Stop, 0LL, 0, 0LL, 0LL, 6u, &UserData);
}
