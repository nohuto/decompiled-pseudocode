/*
 * XREFs of ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x180021EF0
 * Callers:
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18003329C (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x180043878 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     DwmpCalculateColorizationColor @ 0x180016A70 (DwmpCalculateColorizationColor.c)
 */

void __fastcall CDesktopManager::ApplyColorizationParameters(
        CDesktopManager *this,
        const struct CGlassColorizationParameters *a2)
{
  WPARAM wParam; // [rsp+40h] [rbp+8h] BYREF
  DWORD Info; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(wParam) = 0;
  if ( a2 != (CDesktopManager *)((char *)this + 452) )
  {
    *(_OWORD *)((char *)this + 452) = *(_OWORD *)a2;
    *(_QWORD *)((char *)this + 468) = *((_QWORD *)a2 + 2);
    *((_DWORD *)this + 119) = *((_DWORD *)a2 + 6);
  }
  if ( !*((_BYTE *)this + 24) )
    *((_DWORD *)this + 118) = 1;
  DwmpCalculateColorizationColor((int *)this + 113, (int *)&wParam);
  Info = 8;
  BroadcastSystemMessageW(0xB2u, &Info, 0x320u, (unsigned int)wParam, 1LL);
}
