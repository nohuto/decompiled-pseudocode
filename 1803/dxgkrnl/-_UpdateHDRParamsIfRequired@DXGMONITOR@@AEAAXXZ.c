/*
 * XREFs of ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C023C2C4
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C00470E8 (-EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C0238D24 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_GetColorPrimariesType@DXGMONITOR@@AEAA?AW4ColorPrimaryType@1@XZ @ 0x1C02399B4 (-_GetColorPrimariesType@DXGMONITOR@@AEAA-AW4ColorPrimaryType@1@XZ.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C023BF3C (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

void __fastcall DXGMONITOR::_UpdateHDRParamsIfRequired(DXGMONITOR *this)
{
  unsigned int ColorPrimariesType; // edi
  DXGMONITOR *v3; // rcx
  DXGMONITOR *v4; // rcx
  _DWORD *v5; // rcx

  ColorPrimariesType = DXGMONITOR::_GetColorPrimariesType(this);
  if ( !DXGMONITOR::EdidSupportsHDR(this) )
  {
    if ( !DXGMONITOR::EdidSupportsHDR(v3)
      && DXGMONITOR::EdidColorDepthMoreThanSDR(v4)
      && *((_DWORD *)this + 162) == 2
      && (unsigned int)DXGMONITOR::_GetColorPrimariesType(v5) == 2 )
    {
      if ( ColorPrimariesType <= 1 )
        DXGMONITOR::_SetColorPrimariesToBT709(this);
      if ( *((_DWORD *)this + 164) )
        return;
      *((_DWORD *)this + 164) = 4000000;
      *((_DWORD *)this + 165) = 3500000;
      *((_DWORD *)this + 168) = 4;
    }
    else
    {
      if ( !ColorPrimariesType )
        DXGMONITOR::_SetColorPrimariesToBT709(this);
      if ( *((_DWORD *)this + 164) )
        return;
      *((_DWORD *)this + 168) = 3;
      *((_DWORD *)this + 164) = 2700000;
      *((_DWORD *)this + 165) = 2700000;
    }
    *((_DWORD *)this + 163) = 5000;
    goto LABEL_19;
  }
  if ( ColorPrimariesType <= 1 )
  {
    *((_DWORD *)this + 154) = 675;
    *((_DWORD *)this + 155) = 348;
    *((_DWORD *)this + 156) = 250;
    *((_DWORD *)this + 157) = 686;
    *((_DWORD *)this + 158) = 133;
    *((_DWORD *)this + 159) = 41;
    *((_DWORD *)this + 160) = 320;
    *((_DWORD *)this + 161) = 337;
    *((_DWORD *)this + 162) = 4;
  }
  if ( !*((_DWORD *)this + 164) )
  {
    *((_DWORD *)this + 163) = 100;
    *((_DWORD *)this + 164) = 14990000;
    *((_DWORD *)this + 165) = 7990000;
    *((_DWORD *)this + 168) = 5;
LABEL_19:
    *((_BYTE *)this + 668) = 0;
  }
}
