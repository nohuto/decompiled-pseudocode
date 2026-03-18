/*
 * XREFs of Template_qqqqzzzqx @ 0x1C00DD07C
 * Callers:
 *     EtwTraceMessageCheckDelay @ 0x1C004A880 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqqzzzqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10,
        char a11,
        char a12)
{
  const wchar_t *v12; // rcx
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r9d
  const wchar_t *v17; // rcx
  __int64 v18; // rdx
  int v19; // r9d
  const wchar_t *v20; // rcx
  bool v21; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-99h] BYREF
  char *v24; // [rsp+48h] [rbp-89h]
  __int64 v25; // [rsp+50h] [rbp-81h]
  char *v26; // [rsp+58h] [rbp-79h]
  __int64 v27; // [rsp+60h] [rbp-71h]
  char *v28; // [rsp+68h] [rbp-69h]
  __int64 v29; // [rsp+70h] [rbp-61h]
  const wchar_t *v30; // [rsp+78h] [rbp-59h]
  int v31; // [rsp+80h] [rbp-51h]
  int v32; // [rsp+84h] [rbp-4Dh]
  const wchar_t *v33; // [rsp+88h] [rbp-49h]
  int v34; // [rsp+90h] [rbp-41h]
  int v35; // [rsp+94h] [rbp-3Dh]
  const wchar_t *v36; // [rsp+98h] [rbp-39h]
  int v37; // [rsp+A0h] [rbp-31h]
  int v38; // [rsp+A4h] [rbp-2Dh]
  char *v39; // [rsp+A8h] [rbp-29h]
  __int64 v40; // [rsp+B0h] [rbp-21h]
  char *v41; // [rsp+B8h] [rbp-19h]
  __int64 v42; // [rsp+C0h] [rbp-11h]
  int v43; // [rsp+110h] [rbp+3Fh] BYREF

  v43 = a4;
  v12 = a8;
  UserData.Ptr = (ULONGLONG)&v43;
  v24 = &a5;
  v26 = &a6;
  v28 = &a7;
  v13 = 10;
  v14 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  if ( a8 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a8[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v31 = v16;
  v32 = 0;
  if ( !a8 )
    v12 = L"NULL";
  v30 = v12;
  v17 = a9;
  if ( a9 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a9[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v34 = v19;
  v35 = 0;
  if ( !a9 )
    v17 = L"NULL";
  v33 = v17;
  v20 = a10;
  v21 = a10 == 0LL;
  if ( a10 )
  {
    do
      ++v14;
    while ( a10[v14] );
    v13 = 2 * v14 + 2;
    v21 = a10 == 0LL;
  }
  if ( v21 )
    v20 = L"NULL";
  v37 = v13;
  v36 = v20;
  v39 = &a11;
  v38 = 0;
  v41 = &a12;
  v40 = 4LL;
  v42 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &MessageCheckDelayEvent, &W32kControlGuid, 9u, &UserData);
}
