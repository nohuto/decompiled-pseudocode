/*
 * XREFs of LdrProcessInitializationComplete @ 0x180088C50
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 */

unsigned int *LdrProcessInitializationComplete()
{
  unsigned int *result; // rax
  __int64 v1; // rcx
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rcx

  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v1 = *((_QWORD *)result + 18) + 554LL;
  }
  else
  {
    v1 = 2147353476LL;
  }
  if ( *(_BYTE *)v1 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v4 = *((_QWORD *)result + 18) + 555LL;
      }
      else
      {
        v4 = 2147353477LL;
      }
      if ( (*(_BYTE *)v4 & 0x20) != 0 )
      {
        LOBYTE(v3) = -1;
        LOBYTE(v2) = -1;
        result = (unsigned int *)sub_1800D62F0(5252, -1, v2, v3, 0LL, 0LL);
      }
    }
  }
  _InterlockedIncrement(&dword_18015B398);
  return result;
}
