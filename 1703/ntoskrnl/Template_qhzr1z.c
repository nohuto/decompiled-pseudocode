/*
 * XREFs of Template_qhzr1z @ 0x1401FAF04
 * Callers:
 *     PnpCallAddDevice @ 0x1405C6CE0 (PnpCallAddDevice.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qhzr1z(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        __int64 a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-21h] BYREF
  unsigned __int16 *v12; // [rsp+50h] [rbp-11h]
  __int64 v13; // [rsp+58h] [rbp-9h]
  __int64 v14; // [rsp+60h] [rbp-1h]
  int v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+6Ch] [rbp+Bh]
  const wchar_t *v17; // [rsp+70h] [rbp+Fh]
  int v18; // [rsp+78h] [rbp+17h]
  int v19; // [rsp+7Ch] [rbp+1Bh]
  int v20; // [rsp+C8h] [rbp+67h] BYREF

  v20 = a4;
  v7 = a7;
  UserData.Ptr = (ULONGLONG)&v20;
  *(_QWORD *)&UserData.Size = 4LL;
  v12 = &a5;
  v14 = a6;
  v13 = 2LL;
  v15 = 2 * a5;
  v16 = 0;
  if ( a7 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v18 = v9;
  v19 = 0;
  if ( !a7 )
    v7 = L"NULL";
  v17 = v7;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, &KMPnPEvt_DeviceAdd_Start, 0LL, 0, 0LL, 0LL, 4u, &UserData);
}
