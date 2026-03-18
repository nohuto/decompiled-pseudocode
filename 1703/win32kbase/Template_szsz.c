/*
 * XREFs of Template_szsz @ 0x1C00FD2A4
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1C0004250 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_szsz(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const wchar_t *a5,
        const char *a6,
        const wchar_t *a7)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  ULONG v9; // eax
  const wchar_t *v10; // rdx
  int v11; // r9d
  __int64 v12; // rax
  int v13; // r8d
  const char *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  const wchar_t *v17; // rax
  bool v18; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  const wchar_t *v21; // [rsp+40h] [rbp-11h]
  int v22; // [rsp+48h] [rbp-9h]
  int v23; // [rsp+4Ch] [rbp-5h]
  const char *v24; // [rsp+50h] [rbp-1h]
  int v25; // [rsp+58h] [rbp+7h]
  int v26; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v27; // [rsp+60h] [rbp+Fh]
  int v28; // [rsp+68h] [rbp+17h]
  int v29; // [rsp+6Ch] [rbp+1Bh]

  v7 = -1LL;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5;
  }
  v10 = a5;
  UserData.Size = v9;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = "NULL";
  UserData.Ptr = (ULONGLONG)a4;
  v11 = 10;
  if ( a5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a5[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v22 = v13;
  v23 = 0;
  if ( !a5 )
    v10 = L"NULL";
  v21 = v10;
  v14 = a6;
  if ( a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a6[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v16 = 5;
  }
  v25 = v16;
  v17 = a7;
  if ( !a6 )
    v14 = "NULL";
  v26 = 0;
  v24 = v14;
  v18 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v7;
    while ( a7[v7] );
    v11 = 2 * v7 + 2;
    v18 = a7 == 0LL;
  }
  if ( v18 )
    v17 = L"NULL";
  v28 = v11;
  v27 = v17;
  v29 = 0;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &TrappedAppContainerRenderEvent, &W32kControlGuid, 4u, &UserData);
}
