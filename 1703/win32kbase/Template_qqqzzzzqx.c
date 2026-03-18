/*
 * XREFs of Template_qqqzzzzqx @ 0x1C00DD694
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C004A470 (EtwTraceInputProcessDelay.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqzzzzqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10,
        char a11,
        char a12)
{
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rdx
  int v16; // r9d
  const wchar_t *v17; // rcx
  __int64 v18; // rdx
  int v19; // r9d
  const wchar_t *v20; // rcx
  __int64 v21; // rdx
  int v22; // r9d
  const wchar_t *v23; // rcx
  bool v24; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-99h] BYREF
  char *v27; // [rsp+40h] [rbp-89h]
  __int64 v28; // [rsp+48h] [rbp-81h]
  char *v29; // [rsp+50h] [rbp-79h]
  __int64 v30; // [rsp+58h] [rbp-71h]
  const wchar_t *v31; // [rsp+60h] [rbp-69h]
  int v32; // [rsp+68h] [rbp-61h]
  int v33; // [rsp+6Ch] [rbp-5Dh]
  const wchar_t *v34; // [rsp+70h] [rbp-59h]
  int v35; // [rsp+78h] [rbp-51h]
  int v36; // [rsp+7Ch] [rbp-4Dh]
  const wchar_t *v37; // [rsp+80h] [rbp-49h]
  int v38; // [rsp+88h] [rbp-41h]
  int v39; // [rsp+8Ch] [rbp-3Dh]
  const wchar_t *v40; // [rsp+90h] [rbp-39h]
  int v41; // [rsp+98h] [rbp-31h]
  int v42; // [rsp+9Ch] [rbp-2Dh]
  char *v43; // [rsp+A0h] [rbp-29h]
  __int64 v44; // [rsp+A8h] [rbp-21h]
  char *v45; // [rsp+B0h] [rbp-19h]
  __int64 v46; // [rsp+B8h] [rbp-11h]
  int v47; // [rsp+108h] [rbp+3Fh] BYREF

  v47 = a4;
  v12 = a7;
  UserData.Ptr = (ULONGLONG)&v47;
  v27 = &a5;
  v29 = &a6;
  v13 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v14 = 10;
  v28 = 4LL;
  v30 = 4LL;
  if ( a7 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a7[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v32 = v16;
  v33 = 0;
  if ( !a7 )
    v12 = L"NULL";
  v31 = v12;
  v17 = a8;
  if ( a8 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a8[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v35 = v19;
  v36 = 0;
  if ( !a8 )
    v17 = L"NULL";
  v34 = v17;
  v20 = a9;
  if ( a9 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a9[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v38 = v22;
  v39 = 0;
  if ( !a9 )
    v20 = L"NULL";
  v37 = v20;
  v23 = a10;
  v24 = a10 == 0LL;
  if ( a10 )
  {
    do
      ++v13;
    while ( a10[v13] );
    v14 = 2 * v13 + 2;
    v24 = a10 == 0LL;
  }
  if ( v24 )
    v23 = L"NULL";
  v41 = v14;
  v40 = v23;
  v43 = &a11;
  v42 = 0;
  v45 = &a12;
  v44 = 4LL;
  v46 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &ImmersiveInputProcessDelayEvent, &W32kControlGuid, 9u, &UserData);
}
