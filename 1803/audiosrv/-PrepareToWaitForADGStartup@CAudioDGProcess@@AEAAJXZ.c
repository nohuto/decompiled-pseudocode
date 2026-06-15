/*
 * XREFs of ?PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18002B4B0
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18002B280 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009B080 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioDGProcess::PrepareToWaitForADGStartup(CAudioDGProcess *this)
{
  HANDLE v2; // rax
  const char *v3; // r9
  struct _SECURITY_ATTRIBUTES v5; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5.lpSecurityDescriptor = 0LL;
  v5.nLength = 24;
  v5.bInheritHandle = 1;
  v2 = CreateEventW(&v5, 1, 0, 0LL);
  *((_QWORD *)this + 14) = v2;
  if ( v2 )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x131,
             (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
             v3);
}
