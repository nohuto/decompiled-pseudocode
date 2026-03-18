/*
 * XREFs of Template_zq @ 0x1401F9D1C
 * Callers:
 *     PnpLogActionQueueEvent @ 0x14003D290 (PnpLogActionQueueEvent.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  ULONG v6; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  char *v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  UserData.Size = v6;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  v10 = 4LL;
  UserData.Ptr = (ULONGLONG)a4;
  v9 = &a5;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 0, 0LL, 0LL, 2u, &UserData);
}
