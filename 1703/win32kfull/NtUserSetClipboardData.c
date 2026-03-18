/*
 * XREFs of NtUserSetClipboardData @ 0x1C00AEF20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _SetClipboardData @ 0x1C00AEFE8 (_SetClipboardData.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00B4624 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall NtUserSetClipboardData(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // r11
  __int64 v15; // rsi
  __int64 v16; // rax

  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 720LL) + 24LL) & 4;
    v7 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  if ( !v8
    && (!*(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent, v6) + 828)
     || ((v14 = gptiCurrent, v15 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 40LL), gpqForeground)
      && (unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1)
      || v14 == *(_QWORD *)(v15 + 48)
      || (v16 = *(_QWORD *)(v15 + 80)) != 0 && *(_QWORD *)(v16 + 16) == v14)
     && (a1 == 1 || a1 == 13)) )
  {
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (_QWORD *)W32UserProbeAddress;
    LOBYTE(v7) = (unsigned int)*a3 != 0;
    v7 = SetClipboardData(a1, a2, v7, HIDWORD(*a3) != 0);
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return (int)v7;
}
