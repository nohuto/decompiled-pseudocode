/*
 * XREFs of CiTaskDump @ 0x1C000C444
 * Callers:
 *     CiConfigInitializeFromRegistry @ 0x1C000CA58 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     WPP_SF_P @ 0x1C0002208 (WPP_SF_P.c)
 *     WPP_SF_S @ 0x1C000225C (WPP_SF_S.c)
 *     WPP_SF_d @ 0x1C00022D8 (WPP_SF_d.c)
 */

__int64 __fastcall CiTaskDump(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_S((__int64)WPP_GLOBAL_Control->AttachedDevice, a2, a3, *((const wchar_t **)a1 + 3));
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xCu,
      (__int64)&WPP_b16952c3df223b48f0e350525c9a1e30_Traceguids,
      *((_DWORD *)a1 + 1));
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xDu,
      (__int64)&WPP_b16952c3df223b48f0e350525c9a1e30_Traceguids,
      *a1);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xEu,
      (__int64)&WPP_b16952c3df223b48f0e350525c9a1e30_Traceguids,
      a1[1]);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xFu,
      (__int64)&WPP_b16952c3df223b48f0e350525c9a1e30_Traceguids,
      (a1[3] >> 2) & 1);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x10u,
      (__int64)&WPP_b16952c3df223b48f0e350525c9a1e30_Traceguids,
      (a1[3] >> 4) & 7);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    WPP_SF_P((__int64)WPP_GLOBAL_Control->AttachedDevice, a2, a3, *((_QWORD *)a1 + 4));
  result = HIDWORD(WPP_GLOBAL_Control->Timer);
  if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    return WPP_SF_d(
             (__int64)WPP_GLOBAL_Control->AttachedDevice,
             0x12u,
             (__int64)&WPP_b16952c3df223b48f0e350525c9a1e30_Traceguids,
             (a1[3] >> 1) & 1);
  return result;
}
