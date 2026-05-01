/*
 * XREFs of ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1801C2E60
 * Callers:
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x1801C2DE0 (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 * Callees:
 *     ??0CMarshaledInterface@@QEAA@XZ @ 0x1800059B0 (--0CMarshaledInterface@@QEAA@XZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x180021460 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1801C2EEC (-GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetPackageSidFromProcessHandle(HANDLE ProcessHandle, _QWORD *a2, void **a3)
{
  void **v5; // r8
  signed int LastError; // eax
  signed int PackageSidFromProcessToken; // ebx
  void *TokenHandle; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
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
  PackageSidFromProcessToken = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    PackageSidFromProcessToken = LastError;
  if ( PackageSidFromProcessToken >= 0 )
    PackageSidFromProcessToken = CallerIdentity::GetPackageSidFromProcessToken(TokenHandle, a2, v5);
  CAutoHandle<void *>::~CAutoHandle<void *>(&TokenHandle);
  return (unsigned int)PackageSidFromProcessToken;
}
