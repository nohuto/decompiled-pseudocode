/*
 * XREFs of Template_zzjzxtq @ 0x1401F9AC4
 * Callers:
 *     PiDevCfgLogDeviceMigrated @ 0x14069A7C0 (PiDevCfgLogDeviceMigrated.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zzjzxtq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        __int64 a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10)
{
  __int64 v10; // rcx
  int v12; // r8d
  __int64 v13; // rax
  ULONG v14; // edx
  const wchar_t *v15; // rax
  __int64 v16; // rdx
  int v17; // r9d
  const wchar_t *v18; // rax
  bool v19; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-69h] BYREF
  const wchar_t *v22; // [rsp+50h] [rbp-59h]
  int v23; // [rsp+58h] [rbp-51h]
  int v24; // [rsp+5Ch] [rbp-4Dh]
  __int64 v25; // [rsp+60h] [rbp-49h]
  __int64 v26; // [rsp+68h] [rbp-41h]
  const wchar_t *v27; // [rsp+70h] [rbp-39h]
  int v28; // [rsp+78h] [rbp-31h]
  int v29; // [rsp+7Ch] [rbp-2Dh]
  char *v30; // [rsp+80h] [rbp-29h]
  __int64 v31; // [rsp+88h] [rbp-21h]
  char *v32; // [rsp+90h] [rbp-19h]
  __int64 v33; // [rsp+98h] [rbp-11h]
  char *v34; // [rsp+A0h] [rbp-9h]
  __int64 v35; // [rsp+A8h] [rbp-1h]

  v10 = -1LL;
  v12 = 10;
  if ( a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v15 = a5;
  UserData.Size = v14;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  UserData.Ptr = (ULONGLONG)a4;
  if ( a5 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a5[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v23 = v17;
  v24 = 0;
  if ( !a5 )
    v15 = L"NULL";
  v26 = 16LL;
  v22 = v15;
  v25 = a6;
  v18 = a7;
  v19 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v10;
    while ( a7[v10] );
    v12 = 2 * v10 + 2;
    v19 = a7 == 0LL;
  }
  if ( v19 )
    v18 = L"NULL";
  v28 = v12;
  v27 = v18;
  v29 = 0;
  v30 = &a8;
  v31 = 8LL;
  v32 = &a9;
  v33 = 4LL;
  v34 = &a10;
  v35 = 4LL;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 0, 0LL, 0LL, 7u, &UserData);
}
