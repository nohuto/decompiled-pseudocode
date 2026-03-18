/*
 * XREFs of GreCreateSemaphore @ 0x1C00546C0
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     InitializeGre @ 0x1C01D521C (InitializeGre.c)
 * Callees:
 *     <none>
 */

__int64 GreCreateSemaphore()
{
  return GreCreateSemaphoreInternal(0LL);
}
