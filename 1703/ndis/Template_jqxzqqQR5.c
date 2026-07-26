/*
 * XREFs of Template_jqxzqqQR5 @ 0x1C005D304
 * Callers:
 *     NdisWriteErrorLogEntry @ 0x1C0026910 (NdisWriteErrorLogEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxzqqQR5(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        char a8,
        int a9,
        __int64 a10)
{
  const wchar_t *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-69h] BYREF
  char *v15; // [rsp+40h] [rbp-59h]
  __int64 v16; // [rsp+48h] [rbp-51h]
  char *v17; // [rsp+50h] [rbp-49h]
  __int64 v18; // [rsp+58h] [rbp-41h]
  const wchar_t *v19; // [rsp+60h] [rbp-39h]
  int v20; // [rsp+68h] [rbp-31h]
  int v21; // [rsp+6Ch] [rbp-2Dh]
  char *v22; // [rsp+70h] [rbp-29h]
  __int64 v23; // [rsp+78h] [rbp-21h]
  int *v24; // [rsp+80h] [rbp-19h]
  __int64 v25; // [rsp+88h] [rbp-11h]
  __int64 v26; // [rsp+90h] [rbp-9h]
  int v27; // [rsp+98h] [rbp-1h]
  int v28; // [rsp+9Ch] [rbp+3h]

  v10 = a7;
  UserData.Ptr = a4;
  v15 = &a5;
  v17 = &a6;
  *(_QWORD *)&UserData.Size = 16LL;
  v16 = 4LL;
  v18 = 8LL;
  if ( a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a7[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v20 = v12;
  v21 = 0;
  if ( !a7 )
    v10 = L"NULL";
  v28 = 0;
  v19 = v10;
  v22 = &a8;
  v23 = 4LL;
  v24 = &a9;
  v26 = a10;
  v27 = 4 * a9;
  v25 = 4LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, &NdisErrorLogEntry, a3, 7u, &UserData);
}
