/*
 * XREFs of ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C010612C
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C00102D8 (-EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_GetColorPrimariesType@DXGMONITOR@@AEAA?AW4ColorPrimaryType@1@XZ @ 0x1C01061AC (-_GetColorPrimariesType@DXGMONITOR@@AEAA-AW4ColorPrimaryType@1@XZ.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C0108BC4 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@AEAAXXZ @ 0x1C01E86AC (-_SetColorPrimariesToBT709@DXGMONITOR@@AEAAXXZ.c)
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
      *((_DWORD *)this + 139) = 675;
      *((_DWORD *)this + 140) = 348;
      *((_DWORD *)this + 141) = 250;
      *((_DWORD *)this + 142) = 686;
      *((_DWORD *)this + 143) = 133;
      *((_DWORD *)this + 144) = 41;
      *((_DWORD *)this + 145) = 320;
      *((_DWORD *)this + 146) = 337;
      *((_DWORD *)this + 147) = 4;
    }
    if ( *((_DWORD *)this + 149) )
      return;
    *((_DWORD *)this + 149) = 5500000;
    *((_DWORD *)this + 150) = 4500000;
LABEL_8:
    *((_DWORD *)this + 148) = 5000;
    *((_BYTE *)this + 604) = 0;
    return;
  }
  if ( DXGMONITOR::EdidSupportsHDR(v3)
    || !DXGMONITOR::EdidColorDepthMoreThanSDR(v4)
    || *((_DWORD *)this + 147) != 2
    || (unsigned int)DXGMONITOR::_GetColorPrimariesType() != 2 )
  {
    if ( !ColorPrimariesType )
      DXGMONITOR::_SetColorPrimariesToBT709(this);
    if ( *((_DWORD *)this + 149) )
      return;
    *((_DWORD *)this + 149) = 2700000;
    *((_DWORD *)this + 150) = 2700000;
    goto LABEL_8;
  }
  if ( ColorPrimariesType <= 1 )
    DXGMONITOR::_SetColorPrimariesToBT709(this);
  if ( !*((_DWORD *)this + 149) )
  {
    *((_DWORD *)this + 149) = 4000000;
    *((_DWORD *)this + 150) = 3500000;
    goto LABEL_8;
  }
}
