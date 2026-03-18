/*
 * XREFs of ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C005ABB4
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032330 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00C1054 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C0043B04 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     EngAllocMem @ 0x1C005AC20 (EngAllocMem.c)
 */

struct PDEV *__fastcall PDEV::Allocate(size_t cjMemSize, int a2)
{
  struct PDEV *v2; // rbx
  struct PDEV *result; // rax

  if ( a2 )
    return (struct PDEV *)EngAllocMem(1u, cjMemSize, 0x76654447u);
  result = (struct PDEV *)PALLOCMEM2(cjMemSize, 0x76654447u, 1);
  v2 = result;
  if ( result )
  {
    if ( !AcquireReferenceCountedObjectHandle(1u, result, (_QWORD *)result + 443) )
    {
      Win32FreePool((__int64)v2);
      return 0LL;
    }
    return v2;
  }
  return result;
}
