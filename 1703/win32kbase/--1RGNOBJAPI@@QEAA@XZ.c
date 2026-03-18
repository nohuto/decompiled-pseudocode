/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003E350
 * Callers:
 *     GreCopyVisRgn @ 0x1C0028A30 (GreCopyVisRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002BD78 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x1C00400D0 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x1C0040BF0 (GreSetRectRgn.c)
 *     GreGetRgnBox @ 0x1C0041B20 (GreGetRgnBox.c)
 *     bDeleteRegion @ 0x1C0041BA0 (bDeleteRegion.c)
 *     GreRectInRegion @ 0x1C00421D0 (GreRectInRegion.c)
 *     GrePtInRegion @ 0x1C007E800 (GrePtInRegion.c)
 *     GreIsValidRegion @ 0x1C008C620 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C008F240 (NtGdiEqualRgn.c)
 *     GreGetRegionData @ 0x1C0091230 (GreGetRegionData.c)
 *     EngDeleteRgn @ 0x1C00FC050 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C00FC0C0 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C01D521C (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003C4E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
