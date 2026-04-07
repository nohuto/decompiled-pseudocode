/*
 * XREFs of ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18008D924
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180013918 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18008D9D0 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 * Callees:
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18001387C (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180023840 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180023874 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::PlaceVisuals(CPenBarrelKeyVisual *this)
{
  int v2; // r8d
  CContactManager *v3; // rcx
  unsigned int v4; // edx
  struct tagPOINT v6; // [rsp+40h] [rbp+8h] BYREF

  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 40), *((_DWORD *)this + 75) - *((_DWORD *)this + 82) / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 40), *((_DWORD *)this + 76) - *((_DWORD *)this + 83) / 2);
  v2 = *((_DWORD *)this + 77);
  v6.x = *((_DWORD *)this + 75);
  v3 = (CContactManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18);
  v4 = *((_DWORD *)this + 74);
  v6.y = *((_DWORD *)this + 76) + *((_DWORD *)this + 84) + *((_DWORD *)this + 83) / 2;
  CContactManager::PostKeystateFeedbackUpdate(v3, v4, v2, &v6, (v2 & 0x1F) != 0);
  return 0LL;
}
