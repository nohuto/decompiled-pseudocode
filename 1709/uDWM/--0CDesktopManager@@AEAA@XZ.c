/*
 * XREFs of ??0CDesktopManager@@AEAA@XZ @ 0x18003C74C
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x180038D08 (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18003B6A0 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 */

CDesktopManager *__fastcall CDesktopManager::CDesktopManager(CDesktopManager *this)
{
  CDesktopManager::s_pDesktopManagerInstance = this;
  *(_QWORD *)this = &CDesktopManager::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 126) = 0;
  *((_QWORD *)this + 65) = 1LL;
  *((_DWORD *)this + 125) = -12542210;
  *(_QWORD *)((char *)this + 508) = 27LL;
  *((_DWORD *)this + 129) = 73;
  *((_BYTE *)this + 528) = 0;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_DWORD *)this + 142) = 0;
  *((_DWORD *)this + 164) = 0;
  *(_QWORD *)((char *)this + 660) = 1065353216LL;
  *((_DWORD *)this + 167) = 1062836634;
  *((_DWORD *)this + 168) = 1084227584;
  *((_DWORD *)this + 169) = 1090519040;
  *((_DWORD *)this + 170) = -1065353216;
  *((_DWORD *)this + 171) = 1058642330;
  *((_DWORD *)this + 172) = 1050253722;
  *((_DWORD *)this + 173) = 10;
  *((_DWORD *)this + 174) = 1056964608;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_DWORD *)this + 186) = 0;
  *((_DWORD *)this + 41) = 2048;
  *((_DWORD *)this + 42) = 2048;
  CDesktopManager::UpdateWindowShadows(this);
  return this;
}
