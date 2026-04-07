/*
 * XREFs of ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x1800367E8
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowData::GetNonClientCaptionFont(CWindowData *this, struct tagLOGFONTW *a2)
{
  bool v2; // zf
  CDesktopManager *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  double v9; // xmm6_8
  double v10; // xmm6_8
  double v11; // xmm0_8

  v2 = *((_DWORD *)this + 87) == 0;
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 280);
  *(_OWORD *)&a2->lfHeight = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 264);
  v6 = *(_OWORD *)((char *)v4 + 296);
  *(_OWORD *)&a2->lfWeight = v5;
  v7 = *(_OWORD *)((char *)v4 + 312);
  *(_OWORD *)&a2->lfFaceName[2] = v6;
  v8 = *(_OWORD *)((char *)v4 + 328);
  *(_OWORD *)&a2->lfFaceName[10] = v7;
  *(_QWORD *)&v7 = *((_QWORD *)v4 + 43);
  LODWORD(v4) = *((_DWORD *)v4 + 88);
  *(_OWORD *)&a2->lfFaceName[18] = v8;
  *(_QWORD *)&a2->lfFaceName[26] = v7;
  *(_DWORD *)&a2->lfFaceName[30] = (_DWORD)v4;
  if ( !v2 )
  {
    v9 = (double)*((int *)this + 82);
    v10 = v9 / (double)(int)GetDpiForSystem();
    v11 = (double)a2->lfWidth * v10;
    a2->lfHeight = (int)((double)a2->lfHeight * v10);
    a2->lfWidth = (int)v11;
  }
}
