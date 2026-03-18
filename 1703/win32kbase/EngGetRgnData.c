/*
 * XREFs of EngGetRgnData @ 0x1C00FC1D0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C007B630 (GreGetObjectOwner.c)
 *     GreGetRegionData @ 0x1C0091230 (GreGetRegionData.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00A09A4 (--0EngModeState@@QEAA@XZ.c)
 */

DWORD __stdcall EngGetRgnData(HANDLE hrgn, DWORD nCount, LPRGNDATA lpRgnData)
{
  DWORD result; // eax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v7);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
    result = 0;
  else
    result = GreGetRegionData((HRGN)hrgn, nCount, (__int64)lpRgnData);
  if ( v7 )
    *(_BYTE *)(v7 + 331) = 0;
  return result;
}
