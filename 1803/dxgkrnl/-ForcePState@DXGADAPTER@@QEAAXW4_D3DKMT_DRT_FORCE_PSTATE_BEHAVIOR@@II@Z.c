/*
 * XREFs of ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C01490C4
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?ForcePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x1C00337AC (-ForcePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 *     ?ForcePStateCeiling@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x1C0033818 (-ForcePStateCeiling@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 *     ?ForcePStateFloor@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x1C003388C (-ForcePStateFloor@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 */

void __fastcall DXGADAPTER::ForcePState(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // edx

  v4 = *(_QWORD *)(520LL * a3 + *(_QWORD *)(a1 + 2496) + 512);
  if ( v4 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          DXGPOWERSTATISTICSTRANSITIONENGINE::ForcePStateFloor((KSPIN_LOCK *)(v4 + 136), a4);
      }
      else
      {
        DXGPOWERSTATISTICSTRANSITIONENGINE::ForcePStateCeiling((KSPIN_LOCK *)(v4 + 136), a4);
      }
    }
    else
    {
      DXGPOWERSTATISTICSTRANSITIONENGINE::ForcePState((KSPIN_LOCK *)(v4 + 136), a4);
    }
  }
}
