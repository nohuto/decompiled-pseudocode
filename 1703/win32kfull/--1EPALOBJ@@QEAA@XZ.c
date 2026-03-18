/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C0071AC4
 * Callers:
 *     GreDereferenceObject @ 0x1C001C23C (GreDereferenceObject.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0045988 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0071290 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     GreSelectRedirectionBitmap @ 0x1C00716C0 (GreSelectRedirectionBitmap.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009DAEC (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     GreReferenceObject @ 0x1C0105B20 (GreReferenceObject.c)
 *     NtGdiEngDeleteSurface @ 0x1C01172C0 (NtGdiEngDeleteSurface.c)
 *     GreCreateHalftonePalette @ 0x1C0295A94 (GreCreateHalftonePalette.c)
 *     NtGdiResizePalette @ 0x1C02962A0 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
