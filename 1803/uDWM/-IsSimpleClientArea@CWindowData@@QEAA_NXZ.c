/*
 * XREFs of ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x1800158C0
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002E97C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002FFB4 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x1800273A8 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 */

char __fastcall CWindowData::IsSimpleClientArea(CWindowData *this)
{
  char v1; // di

  v1 = 0;
  if ( (*((_BYTE *)this + 593) & 0x10) == 0
    && (*((_BYTE *)this + 595) & 0x20) == 0
    && !*((_DWORD *)this + 126)
    && (!*((_QWORD *)this + 45)
     || *((HWND *)this + 5) == CWindowList::GetShellWindowForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                                 *((_QWORD *)this + 15))) )
  {
    return 1;
  }
  return v1;
}
