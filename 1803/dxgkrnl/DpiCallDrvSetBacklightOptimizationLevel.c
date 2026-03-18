/*
 * XREFs of DpiCallDrvSetBacklightOptimizationLevel @ 0x1C0201DDC
 * Callers:
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C0200B74 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C0201910 (-DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq @ 0x1C00278B8 (McTemplateK0pqqq.c)
 */

__int64 __fastcall DpiCallDrvSetBacklightOptimizationLevel(_QWORD *Arg0, __int64 a2, unsigned int a3)
{
  unsigned int Arg1; // ebp
  unsigned int Arg3; // eax
  struct _MCGEN_TRACE_CONTEXT *v7; // rcx
  const GUID *v8; // r8
  unsigned int v9; // ebx

  Arg1 = *(_DWORD *)(Arg0[8] + 4188LL);
  Arg3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a2 + 72))(*(_QWORD *)(a2 + 8), a3);
  v9 = Arg3;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqq(v7, &EventBacklightOptimizationLevel, v8, Arg0, Arg1, a3, Arg3);
  return v9;
}
