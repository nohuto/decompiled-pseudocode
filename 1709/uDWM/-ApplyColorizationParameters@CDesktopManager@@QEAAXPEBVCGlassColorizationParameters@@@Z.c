/*
 * XREFs of ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x180016B48
 * Callers:
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180025AAC (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18003BC70 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     DwmpCalculateColorizationColor @ 0x180035FBC (DwmpCalculateColorizationColor.c)
 */

void __fastcall CDesktopManager::ApplyColorizationParameters(
        CDesktopManager *this,
        const struct CGlassColorizationParameters *a2)
{
  WPARAM wParam; // [rsp+40h] [rbp+8h] BYREF
  DWORD Info; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(wParam) = 0;
  if ( a2 != (CDesktopManager *)((char *)this + 500) )
  {
    *(_OWORD *)((char *)this + 500) = *(_OWORD *)a2;
    *(_QWORD *)((char *)this + 516) = *((_QWORD *)a2 + 2);
    *((_DWORD *)this + 131) = *((_DWORD *)a2 + 6);
  }
  if ( !*((_BYTE *)this + 24) )
    *((_DWORD *)this + 130) = 1;
  DwmpCalculateColorizationColor((char *)this + 500, &wParam);
  Info = 8;
  BroadcastSystemMessageW(0xB2u, &Info, 0x320u, (unsigned int)wParam, 1LL);
}
