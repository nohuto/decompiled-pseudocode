/*
 * XREFs of McTemplateK0szzq @ 0x1C000ADF8
 * Callers:
 *     EtwSyscallFilterMessage @ 0x1C00090F0 (EtwSyscallFilterMessage.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0009120 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0szzq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  const wchar_t *v10; // rax
  int v11; // r9d
  __int64 v12; // rdx
  int v13; // r8d
  const wchar_t *v14; // rax
  bool v15; // zf
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-21h] BYREF
  const char *v18; // [rsp+40h] [rbp-11h]
  int v19; // [rsp+48h] [rbp-9h]
  int v20; // [rsp+4Ch] [rbp-5h]
  const wchar_t *v21; // [rsp+50h] [rbp-1h]
  int v22; // [rsp+58h] [rbp+7h]
  int v23; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v24; // [rsp+60h] [rbp+Fh]
  int v25; // [rsp+68h] [rbp+17h]
  int v26; // [rsp+6Ch] [rbp+1Bh]
  char *v27; // [rsp+70h] [rbp+1Fh]
  __int64 v28; // [rsp+78h] [rbp+27h]

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
  v19 = v9;
  v10 = a5;
  if ( !a4 )
    a4 = "NULL";
  v20 = 0;
  v18 = a4;
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
  v15 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v11 = 2 * v7 + 2;
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v14 = L"NULL";
  v25 = v11;
  v24 = v14;
  v26 = 0;
  v27 = &a7;
  v28 = 4LL;
  return McGenEventWriteKM(v7, &SyscallFilterMessage, &W32kControlGuid, 5u, &v17);
}
