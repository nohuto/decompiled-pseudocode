/*
 * XREFs of ?IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z @ 0x18000226C
 * Callers:
 *     CheckCachedCapability @ 0x1800012C4 (CheckCachedCapability.c)
 * Callees:
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x1800015F0 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 */

__int64 __fastcall CallerIdentity::IsCurrentProcessStronglyNamed(CallerIdentity *this, bool *a2)
{
  HANDLE CurrentProcess; // rbx
  bool *v4; // r8
  signed int LastError; // ebx
  __int64 result; // rax
  void *TokenHandle; // [rsp+38h] [rbp+10h] BYREF

  CurrentProcess = GetCurrentProcess();
  if ( CurrentProcess == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
    goto LABEL_5;
  }
  if ( OpenProcessToken(CurrentProcess, 8u, &TokenHandle) )
  {
LABEL_5:
    LastError = 0;
    goto LABEL_6;
  }
  LastError = GetLastError();
LABEL_6:
  if ( !LastError )
  {
    LastError = ARI::ProcessToken::SysAppId::IsStronglyNamed(TokenHandle, this, v4);
    if ( TokenHandle != (void *)-4LL )
      CloseHandle(TokenHandle);
  }
  result = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    return (unsigned int)LastError;
  return result;
}
