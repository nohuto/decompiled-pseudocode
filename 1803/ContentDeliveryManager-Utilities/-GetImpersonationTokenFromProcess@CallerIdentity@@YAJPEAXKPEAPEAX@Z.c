/*
 * XREFs of ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x1800589D0
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180058480 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CallerIdentity::GetImpersonationTokenFromProcess(
        CallerIdentity *this,
        void *a2,
        void **a3,
        void **a4)
{
  signed int v5; // eax
  signed int v6; // ebx
  signed int LastError; // eax
  char *v8; // rcx
  HANDLE hExistingToken; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  hExistingToken = 0LL;
  if ( OpenProcessToken(this, 0xEu, &hExistingToken) )
  {
    if ( DuplicateTokenEx(hExistingToken, 0xCu, 0LL, SecurityImpersonation, TokenImpersonation, a3) )
    {
      v6 = 0;
    }
    else
    {
      LastError = GetLastError();
      v6 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v6 = LastError;
      if ( v6 >= 0 )
        v6 = -2147467259;
    }
  }
  else
  {
    v5 = GetLastError();
    v6 = (unsigned __int16)v5 | 0x80070000;
    if ( v5 <= 0 )
      v6 = v5;
    if ( v6 >= 0 )
      v6 = -2147467259;
  }
  v8 = (char *)hExistingToken;
  hExistingToken = 0LL;
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
  return (unsigned int)v6;
}
