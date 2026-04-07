/*
 * XREFs of ??0CDesktopManager@@AEAA@XZ @ 0x1800442E8
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x18004A1F8 (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18004349C (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 */

CDesktopManager *__fastcall CDesktopManager::CDesktopManager(CDesktopManager *this)
{
  CDesktopManager::s_pDesktopManagerInstance = this;
  *(_QWORD *)this = &CDesktopManager::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 114) = 0;
  *((_QWORD *)this + 59) = 1LL;
  *((_DWORD *)this + 113) = -12542210;
  *(_QWORD *)((char *)this + 460) = 27LL;
  *((_DWORD *)this + 117) = 73;
  *((_BYTE *)this + 480) = 0;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_DWORD *)this + 152) = 0;
  *(_QWORD *)((char *)this + 612) = 1065353216LL;
  *((_DWORD *)this + 155) = 1062836634;
  *((_DWORD *)this + 156) = 1084227584;
  *((_DWORD *)this + 157) = 1090519040;
  *((_DWORD *)this + 158) = -1065353216;
  *((_DWORD *)this + 159) = 1058642330;
  *((_DWORD *)this + 160) = 1050253722;
  *((_DWORD *)this + 161) = 10;
  *((_DWORD *)this + 162) = 1056964608;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_DWORD *)this + 174) = 0;
  *((_DWORD *)this + 34) = 2048;
  *((_DWORD *)this + 35) = 2048;
  CDesktopManager::UpdateWindowShadows(this);
  return this;
}
