/*
 * XREFs of ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0109D10
 * Callers:
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010AB50 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010AC10 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C010B530 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010B8E0 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C010BB50 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C012FD50 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AccessProceduresStream(struct tagKE *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 (__fastcall **i)(struct tagKE *, unsigned int, int); // rdi

  v3 = a3;
  if ( a3 >= 5 )
    return 1LL;
  for ( i = &off_1C0172EF0[a3]; (unsigned int)(*i)(a1, a2, ++v3); ++i )
  {
    if ( v3 >= 5 )
      return 1LL;
  }
  return 0LL;
}
