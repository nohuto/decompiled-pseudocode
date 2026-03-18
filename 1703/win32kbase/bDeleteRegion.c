/*
 * XREFs of bDeleteRegion @ 0x1C0041BA0
 * Callers:
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0080354 (-vCleanupRegions@@YAXK@Z.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003E350 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C003E550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 */

_BOOL8 __fastcall bDeleteRegion(HRGN a1)
{
  BOOL v1; // ebx
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v3, a1, 0);
  v1 = 0;
  if ( v3[0] && !*(_DWORD *)(v3[0] + 32LL) )
    v1 = RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v3) != 0;
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v3);
  return v1;
}
