/*
 * XREFs of IopEnumerateEnvironmentVariablesSysEnv @ 0x1406BC660
 * Callers:
 *     <none>
 * Callees:
 *     IopIssueSystemEnvironmentRequest @ 0x1406BCE54 (IopIssueSystemEnvironmentRequest.c)
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesSysEnv(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        PVOID a5,
        ULONG *a6)
{
  __int64 result; // rax
  ULONG *v7; // rbx
  __int64 v8[3]; // [rsp+50h] [rbp-18h] BYREF
  char InputBuffer; // [rsp+80h] [rbp+18h] BYREF

  if ( a3 == 1 )
  {
    InputBuffer = 0;
  }
  else
  {
    if ( a3 != 2 )
      return 3221225485LL;
    InputBuffer = 1;
  }
  v7 = a6;
  result = IopIssueSystemEnvironmentRequest(0x52000Cu, &InputBuffer, 1u, a5, *a6, (__int64)v8);
  if ( (_DWORD)result == -1073741789 )
    *v7 = v8[0];
  return result;
}
