/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0032890
 * Callers:
 *     EngHTBlt @ 0x1C0030E00 (EngHTBlt.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C0031E6C (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C003202C (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00AC7FC (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00ACB80 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     GreCreateHalftonePalette @ 0x1C0295A94 (GreCreateHalftonePalette.c)
 * Callees:
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C010CE1C (HT_DestroyDeviceHalftoneInfo.c)
 */

void *__fastcall PDEVOBJ::pDevHTInfo(PDEVOBJ *this)
{
  __int64 *ThreadWin32Thread; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdi

  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    return *(void **)(*(_QWORD *)this + 1520LL);
  v3 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread || !*(_DWORD *)(v3 + 104) && !*(_DWORD *)(v3 + 108) )
    return *(void **)(*(_QWORD *)this + 1520LL);
  if ( !PDEVOBJ::bAllowShareAccess(this) )
    return *(void **)(*(_QWORD *)this + 1520LL);
  if ( *(_DWORD *)(v3 + 296) != gcModeChanges )
  {
    v4 = *(_QWORD **)(v3 + 288);
    if ( v4 )
    {
      bDeletePalette(*v4, 0LL, 0LL);
      HT_DestroyDeviceHalftoneInfo(v4);
      *(_QWORD *)(v3 + 288) = 0LL;
    }
  }
  return *(void **)(v3 + 288);
}
