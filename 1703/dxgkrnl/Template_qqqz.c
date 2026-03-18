/*
 * XREFs of Template_qqqz @ 0x1C0041340
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C003EF40 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004025C (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01C7A04 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqz(
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
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  char *v13; // [rsp+40h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp-9h]
  char *v15; // [rsp+50h] [rbp-1h]
  __int64 v16; // [rsp+58h] [rbp+7h]
  const wchar_t *v17; // [rsp+60h] [rbp+Fh]
  int v18; // [rsp+68h] [rbp+17h]
  int v19; // [rsp+6Ch] [rbp+1Bh]
  int v20; // [rsp+B8h] [rbp+67h] BYREF

  v20 = a4;
  v7 = a7;
  UserData.Ptr = (ULONGLONG)&v20;
  *(_QWORD *)&UserData.Size = 4LL;
  v13 = &a5;
  v15 = &a6;
  v14 = 4LL;
  v16 = 4LL;
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
  v18 = v10;
  v19 = 0;
  if ( !a7 )
    v7 = L"NULL";
  v17 = v7;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 4u, &UserData);
}
