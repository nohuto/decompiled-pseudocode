/*
 * XREFs of ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x180024830
 * Callers:
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18002BEC8 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18003EF50 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     DwmpCalculateColorizationColor @ 0x18003977C (DwmpCalculateColorizationColor.c)
 */

void __fastcall CDesktopManager::ApplyColorizationParameters(
        CDesktopManager *this,
        const struct CGlassColorizationParameters *a2)
{
  WPARAM wParam; // [rsp+40h] [rbp+8h] BYREF
  DWORD Info; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(wParam) = 0;
  if ( a2 != (CDesktopManager *)((char *)this + 492) )
  {
    *(_OWORD *)((char *)this + 492) = *(_OWORD *)a2;
    *(_QWORD *)((char *)this + 508) = *((_QWORD *)a2 + 2);
    *((_DWORD *)this + 129) = *((_DWORD *)a2 + 6);
  }
  if ( !*((_BYTE *)this + 25) )
    *((_DWORD *)this + 128) = 1;
  DwmpCalculateColorizationColor((char *)this + 492, &wParam);
  Info = 8;
  BroadcastSystemMessageW(0xB2u, &Info, 0x320u, (unsigned int)wParam, 1LL);
}
