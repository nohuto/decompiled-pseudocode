/*
 * XREFs of ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800919F8
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18008B3E4 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18008BFA8 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x18008CFB0 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x180091970 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 * Callees:
 *     ?Hide@CVisual@@QEAAXXZ @ 0x180025868 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x1800258A8 (-Unhide@CVisual@@QEAAXXZ.c)
 *     McTemplateU0d @ 0x180073CC4 (McTemplateU0d.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::UpdateBarrelAlpha(CPenBarrelKeyVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 340) && (*((_BYTE *)this + 308) & 0x20) != 0 )
  {
    if ( *((_BYTE *)this + 341) )
    {
      CVisual::Unhide(*((CVisual **)this + 40));
      *((_BYTE *)this + 341) = 0;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0d(v2, &UdwmPenBarrel_Start, *((_DWORD *)this + 74));
      *((_BYTE *)this + 342) = 1;
    }
  }
  else if ( !*((_BYTE *)this + 341) )
  {
    CVisual::Hide(*((CVisual **)this + 40));
    *((_BYTE *)this + 341) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0d(v3, &UdwmPenBarrel_Stop, *((_DWORD *)this + 74));
    *((_BYTE *)this + 342) = 0;
  }
  return 0LL;
}
