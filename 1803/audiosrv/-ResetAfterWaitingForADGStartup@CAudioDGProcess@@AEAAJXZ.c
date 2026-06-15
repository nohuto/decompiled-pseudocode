/*
 * XREFs of ?ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180107AD4
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18002B280 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDGProcess::ResetAfterWaitingForADGStartup(HANDLE *this)
{
  const char *v2; // r9
  HANDLE v4; // rcx
  char *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this[14]) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x176,
             (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
             v2);
  v4 = this[11];
  if ( v4 )
  {
    WaitForSingleObjectEx(v4, 0xFFFFFFFF, 0);
    v5 = (char *)this[11];
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v5);
      this[11] = 0LL;
    }
    *((_DWORD *)this + 24) = 0;
  }
  return 0LL;
}
