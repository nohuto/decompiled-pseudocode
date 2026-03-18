/*
 * XREFs of Template_qzq @ 0x1401F793C
 * Callers:
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qzq(__int64 a1, __int64 a2, __int64 a3, int a4, const wchar_t *a5, char a6)
{
  const wchar_t *v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  const wchar_t *v11; // [rsp+50h] [rbp-30h]
  int v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+5Ch] [rbp-24h]
  char *v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+A8h] [rbp+28h] BYREF

  v16 = a4;
  v6 = a5;
  UserData.Ptr = (ULONGLONG)&v16;
  *(_QWORD *)&UserData.Size = 4LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v12 = v8;
  v13 = 0;
  if ( !a5 )
    v6 = L"NULL";
  v15 = 4LL;
  v11 = v6;
  v14 = &a6;
  return EtwWriteEx(
           Microsoft_Windows_Kernel_PnPHandle,
           &KMPnPEvt_DriverOverride_SetOverride,
           0LL,
           0,
           0LL,
           0LL,
           3u,
           &UserData);
}
