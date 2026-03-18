/*
 * XREFs of bConvertFontRes @ 0x1C0234348
 * Callers:
 *     bBmfdLoadFont @ 0x1C0233F80 (bBmfdLoadFont.c)
 *     bLoadNtFon @ 0x1C023575C (bLoadNtFon.c)
 * Callees:
 *     bBMFDIFIMETRICS @ 0x1C0233E2C (bBMFDIFIMETRICS.c)
 *     bVerifyResource @ 0x1C023461C (bVerifyResource.c)
 *     vAlignHdrData @ 0x1C02349C4 (vAlignHdrData.c)
 *     vBmfdFill_IFIMETRICS @ 0x1C0234B0C (vBmfdFill_IFIMETRICS.c)
 *     vCheckOffsetTable @ 0x1C02350F0 (vCheckOffsetTable.c)
 *     vDefFace @ 0x1C02360A4 (vDefFace.c)
 *     pcpComputeGlyphset @ 0x1C02B8298 (pcpComputeGlyphset.c)
 */

__int64 __fastcall bConvertFontRes(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rax
  HSEMAPHORE v12; // rcx

  v4 = a4 + 36;
  v9 = 0;
  vAlignHdrData(a4 + 36, a3);
  if ( (unsigned int)bVerifyResource(v4, a3) && (unsigned int)bBMFDIFIMETRICS(a1, a2, v4, a3, 0LL) )
  {
    vCheckOffsetTable(v4, a3);
    vDefFace(a4, a3);
    EngAcquireSemaphore(ghsemBMFD);
    LOBYTE(v10) = *(_BYTE *)(*a3 + 85LL);
    v11 = pcpComputeGlyphset(&gpcpGlyphsets, *(unsigned __int8 *)(a4 + 40), *(unsigned __int8 *)(a4 + 41), v10);
    v12 = ghsemBMFD;
    *(_QWORD *)(a4 + 72) = v11;
    EngReleaseSemaphore(v12);
    if ( *(_QWORD *)(a4 + 72) )
    {
      vBmfdFill_IFIMETRICS(a4, a3);
      return **(_DWORD **)(a4 + 80) != 0;
    }
    else
    {
      EngSetLastError(8u);
    }
  }
  return v9;
}
