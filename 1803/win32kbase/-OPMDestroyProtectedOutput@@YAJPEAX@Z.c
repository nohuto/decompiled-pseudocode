/*
 * XREFs of ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C00C5FD8
 * Callers:
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C00C6450 (NtGdiDestroyOPMProtectedOutput.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00D3C00 (DrvCreatePhysicalMonitorObjects.c)
 * Callees:
 *     ?DestroyProtectedOutput@COPM@@QEAAJPEAX@Z @ 0x1C00C5794 (-DestroyProtectedOutput@COPM@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall OPMDestroyProtectedOutput(COPM *a1)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = COPM::DestroyProtectedOutput(a1, a1);
  v2 = 0;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
