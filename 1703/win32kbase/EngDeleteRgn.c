/*
 * XREFs of EngDeleteRgn @ 0x1C00FC050
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000E890 (NtOpenCompositionSurfaceDirtyRegion.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003E350 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C003E550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreGetObjectOwner @ 0x1C007B630 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00A09A4 (--0EngModeState@@QEAA@XZ.c)
 */

void __stdcall EngDeleteRgn(HANDLE hrgn)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  EngModeState::EngModeState((EngModeState *)&v3);
  if ( !(unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v2, (HRGN)hrgn, 1);
    if ( v2[0] )
      RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v2);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v2);
  }
  if ( v3 )
    *(_BYTE *)(v3 + 331) = 0;
}
