/*
 * XREFs of McTemplateK0qqqz @ 0x1C0031E7C
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002FAC0 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0030D64 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01E1B64 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C000D744 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqz(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rcx
  __int64 v9; // rax
  int v10; // edx
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-21h] BYREF
  int *v13; // [rsp+40h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp-9h]
  char *v15; // [rsp+50h] [rbp-1h]
  __int64 v16; // [rsp+58h] [rbp+7h]
  char *v17; // [rsp+60h] [rbp+Fh]
  __int64 v18; // [rsp+68h] [rbp+17h]
  const wchar_t *v19; // [rsp+70h] [rbp+1Fh]
  int v20; // [rsp+78h] [rbp+27h]
  int v21; // [rsp+7Ch] [rbp+2Bh]
  int v22; // [rsp+B8h] [rbp+67h] BYREF

  v22 = a4;
  v7 = a7;
  v13 = &v22;
  v14 = 4LL;
  v15 = &a5;
  v17 = &a6;
  v16 = 4LL;
  v18 = 4LL;
  if ( a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a7[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v20 = v10;
  v21 = 0;
  if ( !a7 )
    v7 = L"NULL";
  v19 = v7;
  return McGenEventWriteKM(&DxgkControlGuid_Context, a2, (__int64)a2, 5u, &v12);
}
