/*
 * XREFs of ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x1801C1DA8
 * Callers:
 *     ??$MakeAndInitialize@VPenWorkspaceScreenCaptureBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800E7570 (--$MakeAndInitialize@VPenWorkspaceScreenCaptureBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ??0CMarshaledInterface@@QEAA@XZ @ 0x1800059B0 (--0CMarshaledInterface@@QEAA@XZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x180021460 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 */

__int64 __fastcall CallerIdentity::IsProcessAppContainer(HANDLE ProcessHandle, bool *a2, bool *a3)
{
  signed int LastError; // eax
  signed int v6; // ebx
  signed int v7; // eax
  int TokenInformation; // [rsp+40h] [rbp+8h] BYREF
  DWORD ReturnLength; // [rsp+48h] [rbp+10h] BYREF
  void *TokenHandle; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0;
  CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&TokenHandle);
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
  }
  else if ( !OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
    LastError = GetLastError();
    goto LABEL_6;
  }
  LastError = 0;
LABEL_6:
  v6 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v6 = LastError;
  if ( v6 >= 0 )
  {
    TokenInformation = 0;
    if ( GetTokenInformation(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength) )
    {
      v6 = 0;
      *a2 = TokenInformation != 0;
    }
    else
    {
      v7 = GetLastError();
      v6 = (unsigned __int16)v7 | 0x80070000;
      if ( v7 <= 0 )
        v6 = v7;
      if ( v6 >= 0 )
        v6 = -2147467259;
    }
  }
  CAutoHandle<void *>::~CAutoHandle<void *>(&TokenHandle);
  return (unsigned int)v6;
}
