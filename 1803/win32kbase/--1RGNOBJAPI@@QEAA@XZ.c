/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0023E80
 * Callers:
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C00313E4 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreOffsetRgn @ 0x1C00347B0 (GreOffsetRgn.c)
 *     GreGetRgnBox @ 0x1C005FE50 (GreGetRgnBox.c)
 *     GreRectInRegion @ 0x1C0060A30 (GreRectInRegion.c)
 *     GreCopyVisRgn @ 0x1C0063650 (GreCopyVisRgn.c)
 *     GrePtInRegion @ 0x1C00646D0 (GrePtInRegion.c)
 *     GreIsValidRegion @ 0x1C006AA30 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C006DD20 (NtGdiEqualRgn.c)
 *     EngDeleteRgn @ 0x1C00D9380 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C00D93F0 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C01F40E8 (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0020A90 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
