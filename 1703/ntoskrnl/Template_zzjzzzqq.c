/*
 * XREFs of Template_zzjzzzqq @ 0x14014FF80
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x140591B34 (PiDevCfgLogDeviceStarted.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zzjzzzqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        __int64 a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10,
        char a11)
{
  __int64 v11; // rcx
  int v13; // edx
  __int64 v14; // rax
  ULONG v15; // r8d
  const wchar_t *v16; // rax
  __int64 v17; // r8
  int v18; // r9d
  const wchar_t *v19; // rax
  __int64 v20; // r8
  int v21; // r9d
  const wchar_t *v22; // rax
  __int64 v23; // r8
  int v24; // r9d
  const wchar_t *v25; // rax
  bool v26; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-81h] BYREF
  const wchar_t *v29; // [rsp+50h] [rbp-71h]
  int v30; // [rsp+58h] [rbp-69h]
  int v31; // [rsp+5Ch] [rbp-65h]
  __int64 v32; // [rsp+60h] [rbp-61h]
  __int64 v33; // [rsp+68h] [rbp-59h]
  const wchar_t *v34; // [rsp+70h] [rbp-51h]
  int v35; // [rsp+78h] [rbp-49h]
  int v36; // [rsp+7Ch] [rbp-45h]
  const wchar_t *v37; // [rsp+80h] [rbp-41h]
  int v38; // [rsp+88h] [rbp-39h]
  int v39; // [rsp+8Ch] [rbp-35h]
  const wchar_t *v40; // [rsp+90h] [rbp-31h]
  int v41; // [rsp+98h] [rbp-29h]
  int v42; // [rsp+9Ch] [rbp-25h]
  char *v43; // [rsp+A0h] [rbp-21h]
  __int64 v44; // [rsp+A8h] [rbp-19h]
  char *v45; // [rsp+B0h] [rbp-11h]
  __int64 v46; // [rsp+B8h] [rbp-9h]

  v11 = -1LL;
  v13 = 10;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v16 = a5;
  UserData.Size = v15;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  UserData.Ptr = (ULONGLONG)a4;
  if ( a5 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a5[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v30 = v18;
  v31 = 0;
  if ( !a5 )
    v16 = L"NULL";
  v33 = 16LL;
  v29 = v16;
  v32 = a6;
  v19 = a7;
  if ( a7 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a7[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v35 = v21;
  v36 = 0;
  if ( !a7 )
    v19 = L"NULL";
  v34 = v19;
  v22 = a8;
  if ( a8 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a8[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v38 = v24;
  v39 = 0;
  if ( !a8 )
    v22 = L"NULL";
  v37 = v22;
  v25 = a9;
  v26 = a9 == 0LL;
  if ( a9 )
  {
    do
      ++v11;
    while ( a9[v11] );
    v13 = 2 * v11 + 2;
    v26 = a9 == 0LL;
  }
  if ( v26 )
    v25 = L"NULL";
  v41 = v13;
  v40 = v25;
  v42 = 0;
  v43 = &a10;
  v44 = 4LL;
  v45 = &a11;
  v46 = 4LL;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 0, 0LL, 0LL, 8u, &UserData);
}
