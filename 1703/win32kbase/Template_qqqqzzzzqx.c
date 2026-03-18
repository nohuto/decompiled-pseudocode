/*
 * XREFs of Template_qqqqzzzzqx @ 0x1C00DD20C
 * Callers:
 *     EtwTraceMessageCheckDelay @ 0x1C004A880 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqqzzzzqx(
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
        const wchar_t *a11,
        char a12,
        char a13)
{
  const wchar_t *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r8d
  const wchar_t *v17; // rcx
  __int64 v18; // rdx
  int v19; // r8d
  const wchar_t *v20; // rcx
  __int64 v21; // rdx
  int v22; // r8d
  const wchar_t *v23; // rcx
  int v24; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-B1h] BYREF
  char *v27; // [rsp+48h] [rbp-A1h]
  __int64 v28; // [rsp+50h] [rbp-99h]
  char *v29; // [rsp+58h] [rbp-91h]
  __int64 v30; // [rsp+60h] [rbp-89h]
  char *v31; // [rsp+68h] [rbp-81h]
  __int64 v32; // [rsp+70h] [rbp-79h]
  const wchar_t *v33; // [rsp+78h] [rbp-71h]
  int v34; // [rsp+80h] [rbp-69h]
  int v35; // [rsp+84h] [rbp-65h]
  const wchar_t *v36; // [rsp+88h] [rbp-61h]
  int v37; // [rsp+90h] [rbp-59h]
  int v38; // [rsp+94h] [rbp-55h]
  const wchar_t *v39; // [rsp+98h] [rbp-51h]
  int v40; // [rsp+A0h] [rbp-49h]
  int v41; // [rsp+A4h] [rbp-45h]
  const wchar_t *v42; // [rsp+A8h] [rbp-41h]
  int v43; // [rsp+B0h] [rbp-39h]
  int v44; // [rsp+B4h] [rbp-35h]
  char *v45; // [rsp+B8h] [rbp-31h]
  __int64 v46; // [rsp+C0h] [rbp-29h]
  char *v47; // [rsp+C8h] [rbp-21h]
  __int64 v48; // [rsp+D0h] [rbp-19h]
  int v49; // [rsp+120h] [rbp+37h] BYREF

  v49 = a4;
  v13 = a8;
  UserData.Ptr = (ULONGLONG)&v49;
  v27 = &a5;
  v29 = &a6;
  v31 = &a7;
  v14 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
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
  v34 = v16;
  v35 = 0;
  if ( !a8 )
    v13 = L"NULL";
  v33 = v13;
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
  v37 = v19;
  v38 = 0;
  if ( !a9 )
    v17 = L"NULL";
  v36 = v17;
  v20 = a10;
  if ( a10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a10[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v40 = v22;
  v41 = 0;
  if ( !a10 )
    v20 = L"NULL";
  v39 = v20;
  v23 = a11;
  if ( a11 )
  {
    do
      ++v14;
    while ( a11[v14] );
    v24 = 2 * v14 + 2;
  }
  else
  {
    v24 = 10;
  }
  v43 = v24;
  v44 = 0;
  v45 = &a12;
  if ( !a11 )
    v23 = L"NULL";
  v46 = 4LL;
  v42 = v23;
  v47 = &a13;
  v48 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &ImmersiveMessageCheckDelayEvent, &W32kControlGuid, 0xAu, &UserData);
}
