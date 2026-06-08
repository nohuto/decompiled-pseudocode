/*
 * XREFs of AcpiParseRegister @ 0x1C001AE10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall AcpiParseRegister(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v4; // r9

  if ( a3 < 0xC )
    return 3221225485LL;
  if ( *(_WORD *)(a1 + 2) >= 0xFu )
  {
    if ( *(_BYTE *)(a1 + 4) == 0x82 && *(_WORD *)(a1 + 5) >= 0xCu )
    {
      *(_BYTE *)a2 = *(_BYTE *)(a1 + 7);
      *(_BYTE *)(a2 + 1) = *(_BYTE *)(a1 + 8);
      *(_BYTE *)(a2 + 2) = *(_BYTE *)(a1 + 9);
      *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 11);
      *(_BYTE *)(a2 + 3) = *(_BYTE *)(a1 + 10);
      return 0LL;
    }
    v4 = 72;
  }
  else
  {
    v4 = 71;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    v4,
    (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
  return 3222536200LL;
}
