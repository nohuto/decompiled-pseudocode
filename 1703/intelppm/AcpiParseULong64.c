/*
 * XREFs of AcpiParseULong64 @ 0x1C002A280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0004B80 (memmove.c)
 */

__int64 __fastcall AcpiParseULong64(__int64 a1, _QWORD *a2, unsigned int a3)
{
  if ( a3 < 8 )
    return 3221225485LL;
  if ( *(_WORD *)(a1 + 2) <= 8u )
  {
    *a2 = 0LL;
    memmove(a2, (const void *)(a1 + 4), *(unsigned __int16 *)(a1 + 2));
    return 0LL;
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x46u,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    return 3222536200LL;
  }
}
