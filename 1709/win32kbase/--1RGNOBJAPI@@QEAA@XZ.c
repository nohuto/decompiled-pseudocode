/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004333C
 * Callers:
 *     bDeleteRegion @ 0x1C001F530 (bDeleteRegion.c)
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     GreSetRectRgn @ 0x1C00560A0 (GreSetRectRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0059C88 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCopyVisRgn @ 0x1C0059E40 (GreCopyVisRgn.c)
 *     GreGetRgnBox @ 0x1C007C160 (GreGetRgnBox.c)
 *     GreRectInRegion @ 0x1C007DAF0 (GreRectInRegion.c)
 *     GrePtInRegion @ 0x1C00851F0 (GrePtInRegion.c)
 *     GreIsValidRegion @ 0x1C0093170 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C0096E50 (NtGdiEqualRgn.c)
 *     EngDeleteRgn @ 0x1C00FC5B0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C00FC620 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C01DFC44 (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0045460 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
