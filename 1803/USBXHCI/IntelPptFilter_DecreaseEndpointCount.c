/*
 * XREFs of IntelPptFilter_DecreaseEndpointCount @ 0x1C005F07C
 * Callers:
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C005F1D0 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C005F27C (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall IntelPptFilter_DecreaseEndpointCount(__int64 a1, int a2)
{
  __int64 result; // rax
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  v6 = *(_DWORD *)(a1 + 48) - a2;
  v5 = *(_DWORD *)(a1 + 48);
  result = WPP_RECORDER_SF_dd(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
             4u,
             0x10u,
             0xCu,
             (__int64)&WPP_f8c97ca0289731c416fcfd765f0cb280_Traceguids,
             v5,
             v6);
  *(_DWORD *)(a1 + 48) -= a2;
  return result;
}
