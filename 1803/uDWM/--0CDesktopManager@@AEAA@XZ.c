/*
 * XREFs of ??0CDesktopManager@@AEAA@XZ @ 0x18003FB54
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x18003C418 (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18003ECA0 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
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
  *((_DWORD *)this + 124) = 0;
  *((_QWORD *)this + 64) = 1LL;
  *((_DWORD *)this + 123) = -12542210;
  *(_QWORD *)((char *)this + 500) = 27LL;
  *((_DWORD *)this + 127) = 73;
  *((_BYTE *)this + 520) = 0;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = 0;
  *((_DWORD *)this + 162) = 0;
  *(_QWORD *)((char *)this + 652) = 1065353216LL;
  *((_DWORD *)this + 165) = 1062836634;
  *((_DWORD *)this + 166) = 1084227584;
  *((_DWORD *)this + 167) = 1090519040;
  *((_DWORD *)this + 168) = -1065353216;
  *((_DWORD *)this + 169) = 1058642330;
  *((_DWORD *)this + 170) = 1050253722;
  *((_DWORD *)this + 171) = 10;
  *((_DWORD *)this + 172) = 1056964608;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_DWORD *)this + 184) = 0;
  *((_DWORD *)this + 41) = 2048;
  *((_DWORD *)this + 42) = 2048;
  CDesktopManager::UpdateWindowShadows(this);
  return this;
}
