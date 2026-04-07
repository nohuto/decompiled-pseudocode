/*
 * XREFs of ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x180011A8C
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18000D234 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E800 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180027F6C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 */

char __fastcall CWindowData::IsSimpleClientArea(CWindowData *this)
{
  char v1; // di

  v1 = 0;
  if ( (*((_BYTE *)this + 593) & 0x10) == 0
    && (*((_BYTE *)this + 595) & 0x40) == 0
    && !*((_DWORD *)this + 126)
    && (!*((_QWORD *)this + 46)
     || *((HWND *)this + 5) == CWindowList::GetShellWindowForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                                 *((_QWORD *)this + 15))) )
  {
    return 1;
  }
  return v1;
}
