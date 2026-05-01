/*
 * XREFs of ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x1801C1A14
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1801C30C4 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 * Callees:
 *     ??0CMarshaledInterface@@QEAA@XZ @ 0x1800059B0 (--0CMarshaledInterface@@QEAA@XZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x180021460 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 */

__int64 __fastcall CallerIdentity::GetImpersonationTokenFromProcess(
        CallerIdentity *this,
        void *a2,
        void **a3,
        void **a4)
{
  HANDLE v5; // r9
  signed int v6; // eax
  signed int v7; // ebx
  signed int LastError; // eax
  void *TokenHandle; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&TokenHandle);
  if ( OpenProcessToken(v5, 0xEu, &TokenHandle) )
  {
    if ( DuplicateTokenEx(TokenHandle, 0xCu, 0LL, SecurityImpersonation, TokenImpersonation, a3) )
    {
      v7 = 0;
    }
    else
    {
      LastError = GetLastError();
      v7 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v7 = LastError;
      if ( v7 >= 0 )
        v7 = -2147467259;
    }
  }
  else
  {
    v6 = GetLastError();
    v7 = (unsigned __int16)v6 | 0x80070000;
    if ( v6 <= 0 )
      v7 = v6;
    if ( v7 >= 0 )
      v7 = -2147467259;
  }
  CAutoHandle<void *>::~CAutoHandle<void *>(&TokenHandle);
  return (unsigned int)v7;
}
