/*
 * XREFs of NtGdiDdDDISetHwProtectionTeardownRecovery @ 0x1C00F1B20
 * Callers:
 *     <none>
 * Callees:
 *     DCompositionForceRender @ 0x1C013EB50 (DCompositionForceRender.c)
 */

__int64 __fastcall NtGdiDdDDISetHwProtectionTeardownRecovery(CTouchProcessor *a1)
{
  if ( a1 >= W32UserProbeAddress )
    a1 = W32UserProbeAddress;
  return DCompositionForceRender(0LL, 1LL, HIDWORD(*(_QWORD *)a1) == 0, 0LL);
}
