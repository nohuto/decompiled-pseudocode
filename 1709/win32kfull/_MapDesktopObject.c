/*
 * XREFs of _MapDesktopObject @ 0x1C009CD70
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C008E7D0 (GetDesktopView.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall MapDesktopObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *DesktopView; // rax

  LOBYTE(a2) = -1;
  gbValidateHandleForIL = 0;
  v4 = (_DWORD *)HMValidateHandle(a1, a2, a3, a4);
  v6 = v4;
  if ( v4
    && (v7 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v4,
        (*(_BYTE *)(v7 + 25) & 0x40) == 0)
    && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5),
        (DesktopView = GetDesktopView(CurrentProcessWin32Process, *((_QWORD *)v6 + 3))) != 0LL) )
  {
    return *(_QWORD *)v7 + DesktopView[2];
  }
  else
  {
    return 0LL;
  }
}
