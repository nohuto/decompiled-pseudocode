/*
 * XREFs of NtGdiDdDDISetHwProtectionTeardownRecovery @ 0x1C00F4820
 * Callers:
 *     <none>
 * Callees:
 *     DCompositionForceRender @ 0x1C013DFB0 (DCompositionForceRender.c)
 */

__int64 __fastcall NtGdiDdDDISetHwProtectionTeardownRecovery(_QWORD *a1)
{
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_QWORD *)MmUserProbeAddress;
  return DCompositionForceRender(0LL, 1LL, HIDWORD(*a1) == 0, 0LL);
}
