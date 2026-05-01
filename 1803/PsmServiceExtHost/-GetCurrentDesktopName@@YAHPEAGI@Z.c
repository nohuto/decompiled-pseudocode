/*
 * XREFs of ?GetCurrentDesktopName@@YAHPEAGI@Z @ 0x18006E4D0
 * Callers:
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x18006E540 (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 * Callees:
 *     GetCurrentThreadId_0 @ 0x18003EE16 (GetCurrentThreadId_0.c)
 *     IsGetThreadDesktopPresent @ 0x18003F79C (IsGetThreadDesktopPresent.c)
 */

__int64 __fastcall GetCurrentDesktopName(_WORD *pvInfo, DWORD a2)
{
  unsigned int v2; // ebx
  DWORD CurrentThreadId_0; // eax
  HDESK ThreadDesktop; // rax
  DWORD nLengthNeeded; // [rsp+48h] [rbp+10h] BYREF

  nLengthNeeded = a2;
  v2 = 0;
  if ( pvInfo )
  {
    *pvInfo = 0;
    if ( IsGetThreadDesktopPresent() )
    {
      if ( IsGetThreadDesktopPresent() )
      {
        CurrentThreadId_0 = GetCurrentThreadId_0();
        ThreadDesktop = GetThreadDesktop(CurrentThreadId_0);
        if ( ThreadDesktop )
          LOBYTE(v2) = GetUserObjectInformationW(ThreadDesktop, 2, pvInfo, 0x208u, &nLengthNeeded);
      }
    }
  }
  return v2;
}
