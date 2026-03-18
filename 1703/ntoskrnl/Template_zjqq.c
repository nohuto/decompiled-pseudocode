/*
 * XREFs of Template_zjqq @ 0x1401F8E68
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zjqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        char a6,
        char a7)
{
  __int64 v7; // rax
  ULONG v8; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-21h] BYREF
  __int64 v11; // [rsp+50h] [rbp-11h]
  __int64 v12; // [rsp+58h] [rbp-9h]
  char *v13; // [rsp+60h] [rbp-1h]
  __int64 v14; // [rsp+68h] [rbp+7h]
  char *v15; // [rsp+70h] [rbp+Fh]
  __int64 v16; // [rsp+78h] [rbp+17h]

  if ( a4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a4[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  UserData.Size = v8;
  UserData.Reserved = 0;
  v14 = 4LL;
  if ( !a4 )
    a4 = L"NULL";
  v16 = 4LL;
  v11 = a5;
  v13 = &a6;
  v15 = &a7;
  UserData.Ptr = (ULONGLONG)a4;
  v12 = 16LL;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 0, 0LL, 0LL, 4u, &UserData);
}
