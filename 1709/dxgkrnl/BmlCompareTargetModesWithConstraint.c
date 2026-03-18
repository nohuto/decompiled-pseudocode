/*
 * XREFs of BmlCompareTargetModesWithConstraint @ 0x1C00D364C
 * Callers:
 *     BmlCompareTargetModes @ 0x1C00D4338 (BmlCompareTargetModes.c)
 * Callees:
 *     ??$DIFF@I@@YAIII@Z @ 0x1C000EE68 (--$DIFF@I@@YAIII@Z.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00D53D4 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00D5698 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00F5AE8 (BmlCompareRegionsWithPivot.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00F73E0 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1C00F8B20 (BmlDoesTargetModeSupportWireFormat.c)
 */

__int64 __fastcall BmlCompareTargetModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // eax
  char DoesTargetModeSupportWireFormat; // bl
  struct _D3DDDI_RATIONAL v16; // [rsp+20h] [rbp-38h] BYREF
  struct _D3DDDI_RATIONAL v17; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(104LL * a2 + a1 + 16);
  v7 = 0;
  if ( (*(_BYTE *)v6 & 1) == 0
    || (v7 = BmlCompareRegionsWithPivot(
               (struct _D3DKMDT_2DREGION *)(a3 + 84),
               (struct _D3DKMDT_2DREGION *)(a4 + 84),
               (struct _D3DKMDT_2DREGION *)(v6 + 44))) == 0 )
  {
    if ( (*(_BYTE *)v6 & 2) == 0
      || !*(_DWORD *)(v6 + 56)
      || !*(_DWORD *)(v6 + 52)
      || *(_DWORD *)(a3 + 92) == -2 && *(_DWORD *)(a3 + 96) == -2 )
    {
      goto LABEL_3;
    }
    if ( *(_DWORD *)(a4 + 92) == -2 && *(_DWORD *)(a4 + 96) == -2 )
      goto LABEL_3;
    DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a3 + 72), &v17);
    DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a4 + 72), &v16);
    v9 = DmmMapVSyncFromRationalToInteger(
           (const struct _D3DDDI_RATIONAL *)(v6 + 52),
           (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a3 + 120) << 29) >> 29),
           0LL);
    v10 = DmmMapVSyncFromRationalToInteger(
            &v17,
            (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a3 + 120) << 29) >> 29),
            0LL);
    v11 = DIFF<unsigned int>(v10, v9);
    v12 = DmmMapVSyncFromRationalToInteger(
            (const struct _D3DDDI_RATIONAL *)(v6 + 52),
            (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
            0LL);
    v13 = DmmMapVSyncFromRationalToInteger(
            &v16,
            (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
            0LL);
    v14 = DIFF<unsigned int>(v13, v12);
    v7 = BmlCompareValues<unsigned int>(v14, v11);
    if ( !v7 )
    {
LABEL_3:
      if ( (*(_BYTE *)v6 & 8) != 0 )
      {
        DoesTargetModeSupportWireFormat = BmlDoesTargetModeSupportWireFormat(a3, *(unsigned int *)(v6 + 204));
        if ( DoesTargetModeSupportWireFormat == (unsigned __int8)BmlDoesTargetModeSupportWireFormat(
                                                                   a4,
                                                                   *(unsigned int *)(v6 + 204)) )
        {
          return 0;
        }
        else
        {
          v7 = -1;
          if ( DoesTargetModeSupportWireFormat == 1 )
            return 1;
        }
      }
    }
  }
  return v7;
}
