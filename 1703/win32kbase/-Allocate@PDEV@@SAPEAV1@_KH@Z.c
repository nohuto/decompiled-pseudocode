/*
 * XREFs of ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C0076DBC
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00E936C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C003F39C (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     EngAllocMem @ 0x1C0076E30 (EngAllocMem.c)
 */

struct PDEV *__fastcall PDEV::Allocate(size_t cjMemSize, int a2)
{
  struct PDEV *result; // rax
  struct PDEV *v3; // rbx

  if ( a2 )
    return (struct PDEV *)EngAllocMem(1u, cjMemSize, 0x76654447u);
  result = (struct PDEV *)PALLOCMEM2(cjMemSize, 1986348103LL, 1);
  v3 = result;
  if ( !result )
    return result;
  if ( !AcquireReferenceCountedObjectHandle(1u, result, (_QWORD *)result + 446) )
  {
    Win32FreePool((__int64)v3);
    return 0LL;
  }
  return v3;
}
