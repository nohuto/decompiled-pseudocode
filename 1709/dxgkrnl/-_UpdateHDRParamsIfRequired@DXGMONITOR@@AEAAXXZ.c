/*
 * XREFs of ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C01086C8
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C00121E8 (-EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_GetColorPrimariesType@DXGMONITOR@@AEAA?AW4ColorPrimaryType@1@XZ @ 0x1C0108748 (-_GetColorPrimariesType@DXGMONITOR@@AEAA-AW4ColorPrimaryType@1@XZ.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C010BAEC (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C010BB10 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

void __fastcall DXGMONITOR::_UpdateHDRParamsIfRequired(DXGMONITOR *this)
{
  unsigned int ColorPrimariesType; // edi
  DXGMONITOR *v3; // rcx
  DXGMONITOR *v4; // rcx

  ColorPrimariesType = DXGMONITOR::_GetColorPrimariesType();
  if ( DXGMONITOR::EdidSupportsHDR(this) )
  {
    if ( ColorPrimariesType <= 1 )
    {
      *((_DWORD *)this + 149) = 675;
      *((_DWORD *)this + 150) = 348;
      *((_DWORD *)this + 151) = 250;
      *((_DWORD *)this + 152) = 686;
      *((_DWORD *)this + 153) = 133;
      *((_DWORD *)this + 154) = 41;
      *((_DWORD *)this + 155) = 320;
      *((_DWORD *)this + 156) = 337;
      *((_DWORD *)this + 157) = 4;
    }
    if ( !*((_DWORD *)this + 159) )
    {
      *((_DWORD *)this + 158) = 100;
      *((_DWORD *)this + 159) = 14990000;
      *((_DWORD *)this + 160) = 7990000;
      goto LABEL_9;
    }
  }
  else if ( !DXGMONITOR::EdidSupportsHDR(v3)
         && DXGMONITOR::EdidColorDepthMoreThanSDR(v4)
         && *((_DWORD *)this + 157) == 2
         && (unsigned int)DXGMONITOR::_GetColorPrimariesType() == 2 )
  {
    if ( ColorPrimariesType <= 1 )
      DXGMONITOR::_SetColorPrimariesToBT709(this);
    if ( !*((_DWORD *)this + 159) )
    {
      *((_DWORD *)this + 159) = 4000000;
      *((_DWORD *)this + 160) = 3500000;
      goto LABEL_8;
    }
  }
  else
  {
    if ( !ColorPrimariesType )
      DXGMONITOR::_SetColorPrimariesToBT709(this);
    if ( !*((_DWORD *)this + 159) )
    {
      *((_DWORD *)this + 159) = 2700000;
      *((_DWORD *)this + 160) = 2700000;
LABEL_8:
      *((_DWORD *)this + 158) = 5000;
LABEL_9:
      *((_BYTE *)this + 648) = 0;
    }
  }
}
