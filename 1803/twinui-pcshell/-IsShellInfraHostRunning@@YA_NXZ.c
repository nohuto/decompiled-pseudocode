/*
 * XREFs of ?IsShellInfraHostRunning@@YA_NXZ @ 0x1801DD138
 * Callers:
 *     ?OnDisconnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801DD8F0 (-OnDisconnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x180094148 (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessStartTime@@YA_JPEAX@Z @ 0x1801DC67C (-GetProcessStartTime@@YA_JPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool IsShellInfraHostRunning(void)
{
  bool v0; // si
  int SiHostProcessHandle; // eax
  char *v2; // rbx
  HANDLE CurrentProcess; // rax
  signed __int64 ProcessStartTime; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HANDLE hHandle; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  hHandle = 0LL;
  SiHostProcessHandle = GetSiHostProcessHandle(0x101000u, &hHandle);
  v2 = (char *)hHandle;
  if ( SiHostProcessHandle >= 0 )
  {
    if ( WaitForSingleObjectEx(hHandle, 0x3E8u, 0) )
    {
      CurrentProcess = GetCurrentProcess();
      ProcessStartTime = GetProcessStartTime(CurrentProcess);
      v0 = (__int64)GetProcessStartTime(v2) < ProcessStartTime;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      300LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)SiHostProcessHandle);
  }
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  return v0;
}
