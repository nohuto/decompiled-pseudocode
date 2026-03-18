/*
 * XREFs of _MapDesktopObject @ 0x1C001AB90
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C001B650 (GetDesktopView.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall MapDesktopObject(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 DesktopView; // rax

  LOBYTE(a2) = -1;
  gbValidateHandleForIL = 0;
  v2 = (_DWORD *)HMValidateHandle(a1, a2);
  v5 = v2;
  if ( v2
    && (v6 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v2,
        (*(_BYTE *)(v6 + 25) & 0x40) == 0)
    && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4, v3),
        (DesktopView = GetDesktopView(CurrentProcessWin32Process, *((_QWORD *)v5 + 3))) != 0) )
  {
    return *(_QWORD *)v6 + *(_QWORD *)(DesktopView + 16);
  }
  else
  {
    return 0LL;
  }
}
