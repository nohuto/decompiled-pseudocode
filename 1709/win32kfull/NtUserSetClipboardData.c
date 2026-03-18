/*
 * XREFs of NtUserSetClipboardData @ 0x1C00C5C00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _SetClipboardData @ 0x1C00C5CC8 (_SetClipboardData.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00C9068 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall NtUserSetClipboardData(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // r11
  __int64 v13; // rsi
  __int64 v14; // rax

  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x20000000) != 0 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 728LL) + 24LL) & 4;
    v7 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  if ( !v8
    && (!*(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent) + 836)
     || ((v12 = gptiCurrent, v13 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 40LL), gpqForeground)
      && (unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1)
      || v12 == *(_QWORD *)(v13 + 48)
      || (v14 = *(_QWORD *)(v13 + 80)) != 0 && *(_QWORD *)(v14 + 16) == v12)
     && (a1 == 1 || a1 == 13)) )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_QWORD *)MmUserProbeAddress;
    LOBYTE(v7) = (unsigned int)*a3 != 0;
    v7 = SetClipboardData(a1, a2, v7, HIDWORD(*a3) != 0);
  }
  else
  {
    UserSetLastError(5LL, v6);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return (int)v7;
}
