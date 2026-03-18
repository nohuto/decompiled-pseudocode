/*
 * XREFs of TraceGreAcquireSemaphoreEx @ 0x1C024A52C
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x1C0255ED0 (NtGdiAddEmbFontToDC.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0256000 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiGetUFIPathname @ 0x1C028DE80 (NtGdiGetUFIPathname.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TraceGreAcquireSemaphoreEx(__int64 a1, __int64 a2, __int64 a3)
{
  return EtwTraceGreLockAcquireSemaphoreExclusive(a1, a2, a3);
}
