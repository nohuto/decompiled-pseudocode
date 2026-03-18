/*
 * XREFs of CiTaskDump @ 0x1C000D8D0
 * Callers:
 *     CiConfigInitializeFromRegistry @ 0x1C000D670 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     WPP_SF_d @ 0x1C00048B4 (WPP_SF_d.c)
 *     WPP_SF_P @ 0x1C00049E4 (WPP_SF_P.c)
 *     WPP_SF_S @ 0x1C0004A38 (WPP_SF_S.c)
 */

__int64 __fastcall CiTaskDump(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v4; // rcx
  __int64 result; // rax

  v4 = WPP_GLOBAL_Control;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_S((__int64)WPP_GLOBAL_Control->AttachedDevice, a2, a3, *((const wchar_t **)a1 + 3));
    v4 = WPP_GLOBAL_Control;
  }
  if ( (HIDWORD(v4->Timer) & 1) != 0 && BYTE1(v4->Timer) >= 5u )
  {
    WPP_SF_d(
      (__int64)v4->AttachedDevice,
      0xCu,
      (__int64)&WPP_f6cc88b4b7f1381c20a7522460412b96_Traceguids,
      *((_DWORD *)a1 + 1));
    v4 = WPP_GLOBAL_Control;
  }
  if ( (HIDWORD(v4->Timer) & 1) != 0 && BYTE1(v4->Timer) >= 5u )
  {
    WPP_SF_d((__int64)v4->AttachedDevice, 0xDu, (__int64)&WPP_f6cc88b4b7f1381c20a7522460412b96_Traceguids, *a1);
    v4 = WPP_GLOBAL_Control;
  }
  if ( (HIDWORD(v4->Timer) & 1) != 0 && BYTE1(v4->Timer) >= 5u )
  {
    WPP_SF_d((__int64)v4->AttachedDevice, 0xEu, (__int64)&WPP_f6cc88b4b7f1381c20a7522460412b96_Traceguids, a1[1]);
    v4 = WPP_GLOBAL_Control;
  }
  if ( (HIDWORD(v4->Timer) & 1) != 0 && BYTE1(v4->Timer) >= 5u )
  {
    WPP_SF_d(
      (__int64)v4->AttachedDevice,
      0xFu,
      (__int64)&WPP_f6cc88b4b7f1381c20a7522460412b96_Traceguids,
      (a1[3] >> 2) & 1);
    v4 = WPP_GLOBAL_Control;
  }
  if ( (HIDWORD(v4->Timer) & 1) != 0 && BYTE1(v4->Timer) >= 5u )
  {
    WPP_SF_d(
      (__int64)v4->AttachedDevice,
      0x10u,
      (__int64)&WPP_f6cc88b4b7f1381c20a7522460412b96_Traceguids,
      (a1[3] >> 4) & 7);
    v4 = WPP_GLOBAL_Control;
  }
  if ( (HIDWORD(v4->Timer) & 1) != 0 && BYTE1(v4->Timer) >= 5u )
  {
    WPP_SF_P((__int64)v4->AttachedDevice, a2, a3, *((_QWORD *)a1 + 4));
    v4 = WPP_GLOBAL_Control;
  }
  result = HIDWORD(v4->Timer);
  if ( (result & 1) != 0 && BYTE1(v4->Timer) >= 5u )
    return WPP_SF_d(
             (__int64)v4->AttachedDevice,
             0x12u,
             (__int64)&WPP_f6cc88b4b7f1381c20a7522460412b96_Traceguids,
             (a1[3] >> 1) & 1);
  return result;
}
