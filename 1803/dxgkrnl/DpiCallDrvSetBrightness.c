/*
 * XREFs of DpiCallDrvSetBrightness @ 0x1C0201E5C
 * Callers:
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C0200B74 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C0201370 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq @ 0x1C00278B8 (McTemplateK0pqqq.c)
 */

__int64 __fastcall DpiCallDrvSetBrightness(_QWORD *Arg0, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r9
  unsigned __int8 v6; // bp
  __int64 (__fastcall *v7)(_QWORD, __int64); // rax
  unsigned int Arg3; // eax
  const GUID *v9; // r8
  unsigned int v10; // ebx

  v3 = a2;
  v6 = *(_BYTE *)(Arg0[8] + 4192LL);
  v7 = *(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 40);
  LOBYTE(a2) = a3;
  Arg3 = v7(*(_QWORD *)(v3 + 8), a2);
  v10 = Arg3;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqq((PMCGEN_TRACE_CONTEXT)a3, &EventBrightness, v9, Arg0, v6, a3, Arg3);
  return v10;
}
