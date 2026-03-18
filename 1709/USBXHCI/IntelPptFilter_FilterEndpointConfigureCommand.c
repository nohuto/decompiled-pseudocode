/*
 * XREFs of IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C006127C
 * Callers:
 *     IntelPptFilter_FilterCommand @ 0x1C00610E0 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C00611D0 (IntelPptFilter_FilterCommandCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     IntelPptFilter_CheckAndIncreaseEndpointCount @ 0x1C006101C (IntelPptFilter_CheckAndIncreaseEndpointCount.c)
 *     IntelPptFilter_DecreaseEndpointCount @ 0x1C006107C (IntelPptFilter_DecreaseEndpointCount.c)
 */

__int64 __fastcall IntelPptFilter_FilterEndpointConfigureCommand(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v5; // rcx
  unsigned int v6; // edi
  unsigned __int8 v7; // r10
  unsigned int i; // r9d
  unsigned int v9; // ecx
  unsigned __int8 j; // dl
  int v11; // ebx
  bool v12; // sf
  int v13; // ebx

  v5 = *(_DWORD **)(a2 + 72);
  v6 = 1;
  v7 = 0;
  for ( i = *v5 & 0xFFFFFFFC; i; i &= i - 1 )
    ++v7;
  v9 = v5[1] & 0xFFFFFFFC;
  for ( j = 0; v9; v9 &= v9 - 1 )
    ++j;
  v11 = j - v7;
  v12 = v11 < 0;
  if ( v11 <= 0 )
    goto LABEL_10;
  if ( a3 )
  {
    v12 = v11 < 0;
LABEL_10:
    if ( v12 && a3 == 1 )
    {
      v13 = v7 - j;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        0x10u,
        0x10u,
        (__int64)&WPP_67c7445f99ae30086f9893c21d85c536_Traceguids,
        v13);
      IntelPptFilter_DecreaseEndpointCount(a1, v13);
    }
    return 4;
  }
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    0x10u,
    0xEu,
    (__int64)&WPP_67c7445f99ae30086f9893c21d85c536_Traceguids,
    j - v7);
  if ( IntelPptFilter_CheckAndIncreaseEndpointCount(a1, v11) )
    return 4;
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    3u,
    0x10u,
    0xFu,
    (__int64)&WPP_67c7445f99ae30086f9893c21d85c536_Traceguids);
  *(_BYTE *)(a2 + 60) = 7;
  return v6;
}
