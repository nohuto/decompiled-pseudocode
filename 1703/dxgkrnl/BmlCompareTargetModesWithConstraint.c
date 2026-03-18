/*
 * XREFs of BmlCompareTargetModesWithConstraint @ 0x1C00F313C
 * Callers:
 *     BmlCompareTargetModes @ 0x1C00F406C (BmlCompareTargetModes.c)
 * Callees:
 *     ??$DIFF@I@@YAIII@Z @ 0x1C0003158 (--$DIFF@I@@YAIII@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00AB1FC (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00F300C (BmlCompareRegionsWithPivot.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00F512C (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00F5430 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall BmlCompareTargetModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  unsigned int v7; // edx
  const struct _D3DDDI_RATIONAL *v9; // rsi
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // eax
  struct _D3DDDI_RATIONAL v16; // [rsp+20h] [rbp-18h] BYREF
  struct _D3DDDI_RATIONAL v17; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(104LL * a2 + a1 + 16);
  v7 = 0;
  if ( ((*(_BYTE *)v6 & 1) == 0
     || (v7 = BmlCompareRegionsWithPivot(
                (struct _D3DKMDT_2DREGION *)(a3 + 84),
                (struct _D3DKMDT_2DREGION *)(a4 + 84),
                (struct _D3DKMDT_2DREGION *)(v6 + 44))) == 0)
    && (*(_BYTE *)v6 & 2) != 0 )
  {
    v9 = (const struct _D3DDDI_RATIONAL *)(v6 + 52);
    if ( *(_DWORD *)(v6 + 56) )
    {
      if ( v9->Numerator )
      {
        DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a3 + 72), &v17);
        DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a4 + 72), &v16);
        v10 = DmmMapVSyncFromRationalToInteger(
                (const struct _D3DDDI_RATIONAL *)(v6 + 52),
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a3 + 120) << 29) >> 29),
                0LL);
        v11 = DmmMapVSyncFromRationalToInteger(
                &v17,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a3 + 120) << 29) >> 29),
                0LL);
        v12 = DIFF<unsigned int>(v11, v10);
        v13 = DmmMapVSyncFromRationalToInteger(
                v9,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
                0LL);
        v14 = DmmMapVSyncFromRationalToInteger(
                &v16,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
                0LL);
        v15 = DIFF<unsigned int>(v14, v13);
        return (unsigned int)BmlCompareValues<unsigned int>(v15, v12);
      }
    }
  }
  return v7;
}
