/*
 * XREFs of Template_dddd @ 0x18003360C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76760fd8d2347637ca4c9aed770147f6___::Run @ 0x180032D30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76760fd8d2347637ca4c9aed770147f6___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

ULONG __fastcall Template_dddd(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, __int64 a4, char a5)
{
  int v6; // [rsp+20h] [rbp-29h] BYREF
  int v7; // [rsp+28h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-19h] BYREF
  int *v9; // [rsp+40h] [rbp-9h]
  __int64 v10; // [rsp+48h] [rbp-1h]
  char *v11; // [rsp+50h] [rbp+7h]
  __int64 v12; // [rsp+58h] [rbp+Fh]
  int *v13; // [rsp+60h] [rbp+17h]
  __int64 v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+B0h] [rbp+67h] BYREF

  v15 = a3;
  UserData.Ptr = (ULONGLONG)&v15;
  v7 = 0;
  v9 = &v6;
  v11 = &a5;
  v6 = 0;
  v13 = &v7;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = 4LL;
  v12 = 4LL;
  v14 = 4LL;
  return EventWrite(Microsoft_Windows_Immersive_ShellHandle, a2, 4u, &UserData);
}
