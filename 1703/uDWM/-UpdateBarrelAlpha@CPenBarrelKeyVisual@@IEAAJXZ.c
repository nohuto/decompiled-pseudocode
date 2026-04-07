/*
 * XREFs of ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800173E8
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18000DB08 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180013918 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x180070414 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18008D9D0 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 * Callees:
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180023778 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x1800237B0 (-Hide@CVisual@@QEAAXXZ.c)
 *     Template_q @ 0x18007FA50 (Template_q.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::UpdateBarrelAlpha(CVisual **this)
{
  __int64 v2; // rcx
  __int64 v4; // rcx

  if ( *((_BYTE *)this + 340) && (*((_BYTE *)this + 308) & 0x20) != 0 )
  {
    if ( *((_BYTE *)this + 341) )
    {
      CVisual::Unhide(this[40]);
      *((_BYTE *)this + 341) = 0;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(v2, &UdwmPenBarrel_Start, *((unsigned int *)this + 74));
      *((_BYTE *)this + 342) = 1;
    }
  }
  else if ( !*((_BYTE *)this + 341) )
  {
    CVisual::Hide(this[40]);
    *((_BYTE *)this + 341) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_q(v4, &UdwmPenBarrel_Stop, *((unsigned int *)this + 74));
    *((_BYTE *)this + 342) = 0;
  }
  return 0LL;
}
