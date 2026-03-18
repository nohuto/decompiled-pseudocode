/*
 * XREFs of TraceGreReleaseSemaphore @ 0x1C013E728
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x1C0255ED0 (NtGdiAddEmbFontToDC.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0256000 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiGetUFIPathname @ 0x1C028DE80 (NtGdiGetUFIPathname.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TraceGreReleaseSemaphore(__int64 a1, __int64 a2)
{
  return EtwTraceGreLockReleaseSemaphore(a1, a2);
}
