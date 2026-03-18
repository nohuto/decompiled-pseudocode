/*
 * XREFs of ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000D924
 * Callers:
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0006D88 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C000B190 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00BB7D4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00BCAF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C00FE2F0 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C016BC04 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C0177DBC (-DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C0183E1C (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(DXGVALIDATION *this, struct DXGADAPTER *a2)
{
  char v2; // bl
  int v5; // eax
  struct DXGPROCESS *Current; // rax

  v2 = 0;
  if ( *(_DWORD *)this )
  {
    v5 = *((_DWORD *)a2 + 75);
    if ( (v5 & 0x20) == 0 && (v5 & 4) == 0 )
    {
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        if ( !*((_BYTE *)Current + 272) && !*((_BYTE *)Current + 273) )
        {
          if ( *(_DWORD *)this == 2 )
          {
            return 1;
          }
          else if ( *(_DWORD *)this == 1 )
          {
            return *((_BYTE *)Current + 493);
          }
        }
      }
    }
  }
  return v2;
}
