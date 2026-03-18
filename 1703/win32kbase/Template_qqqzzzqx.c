/*
 * XREFs of Template_qqqzzzqx @ 0x1C00DD524
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C004A470 (EtwTraceInputProcessDelay.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqzzzqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10,
        char a11)
{
  const wchar_t *v11; // rcx
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // r9d
  const wchar_t *v16; // rcx
  __int64 v17; // rdx
  int v18; // r9d
  const wchar_t *v19; // rcx
  bool v20; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-81h] BYREF
  char *v23; // [rsp+40h] [rbp-71h]
  __int64 v24; // [rsp+48h] [rbp-69h]
  char *v25; // [rsp+50h] [rbp-61h]
  __int64 v26; // [rsp+58h] [rbp-59h]
  const wchar_t *v27; // [rsp+60h] [rbp-51h]
  int v28; // [rsp+68h] [rbp-49h]
  int v29; // [rsp+6Ch] [rbp-45h]
  const wchar_t *v30; // [rsp+70h] [rbp-41h]
  int v31; // [rsp+78h] [rbp-39h]
  int v32; // [rsp+7Ch] [rbp-35h]
  const wchar_t *v33; // [rsp+80h] [rbp-31h]
  int v34; // [rsp+88h] [rbp-29h]
  int v35; // [rsp+8Ch] [rbp-25h]
  char *v36; // [rsp+90h] [rbp-21h]
  __int64 v37; // [rsp+98h] [rbp-19h]
  char *v38; // [rsp+A0h] [rbp-11h]
  __int64 v39; // [rsp+A8h] [rbp-9h]
  int v40; // [rsp+F8h] [rbp+47h] BYREF

  v40 = a4;
  v11 = a7;
  UserData.Ptr = (ULONGLONG)&v40;
  v23 = &a5;
  v25 = &a6;
  v12 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v13 = 10;
  v24 = 4LL;
  v26 = 4LL;
  if ( a7 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a7[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v28 = v15;
  v29 = 0;
  if ( !a7 )
    v11 = L"NULL";
  v27 = v11;
  v16 = a8;
  if ( a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a8[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v31 = v18;
  v32 = 0;
  if ( !a8 )
    v16 = L"NULL";
  v30 = v16;
  v19 = a9;
  v20 = a9 == 0LL;
  if ( a9 )
  {
    do
      ++v12;
    while ( a9[v12] );
    v13 = 2 * v12 + 2;
    v20 = a9 == 0LL;
  }
  if ( v20 )
    v19 = L"NULL";
  v34 = v13;
  v33 = v19;
  v36 = &a10;
  v35 = 0;
  v38 = &a11;
  v37 = 4LL;
  v39 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &InputProcessDelayEvent, &W32kControlGuid, 8u, &UserData);
}
