/*
 * XREFs of ?IsTopLevelAppWindow@CDwmWinSqm@@QEAA_NPEAVCWindowData@@@Z @ 0x180086354
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034190 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDwmWinSqm::IsTopLevelAppWindow(CDwmWinSqm *this, struct CWindowData *a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*((_QWORD *)a2 + 5)
    || *((HWND *)a2 + 5) == GetDesktopWindow()
    || (*((_DWORD *)a2 + 26) & 0x40000) == 0 && (*((_DWORD *)a2 + 26) & 0x8000080) != 0 )
  {
    return 0;
  }
  if ( *((_QWORD *)a2 + 50)
    && *((_QWORD *)a2 + 4)
    && (*((_DWORD *)a2 + 25) & 0x10000000) != 0
    && ((*((_DWORD *)a2 + 26) & 0x40000) != 0 || !*((_QWORD *)a2 + 68)) )
  {
    return 1;
  }
  return v2;
}
