/*
 * XREFs of AMLIEvalPkgDataElement @ 0x1C0043638
 * Callers:
 *     ACPIFanFSTCallback @ 0x1C0023CF0 (ACPIFanFSTCallback.c)
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 *     ACPIThermalBuildConstraints @ 0x1C0088E6C (ACPIThermalBuildConstraints.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008B638 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C008B9B8 (ACPIProcessPhysicalDeviceLocationPackage.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0046D68 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1C0048460 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     EvalPackageElement @ 0x1C0049FE0 (EvalPackageElement.c)
 */

__int64 __fastcall AMLIEvalPkgDataElement(__int64 a1, unsigned int a2, void *a3)
{
  unsigned int v6; // ebx
  int ObjectTypeName; // eax

  dword_1C00677B8 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  memset(a3, 0, 0x28uLL);
  if ( (gDebugger & 8) != 0 )
    PrintDebugMessage(49, (unsigned int)KeGetCurrentThread(), a1, a2, 0LL);
  if ( *(_WORD *)(a1 + 2) == 4 )
  {
    v6 = EvalPackageElement(*(_QWORD *)(a1 + 32), a2, a3);
    if ( v6 == 32772 )
      return 259;
  }
  else
  {
    v6 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
    PrintDebugMessage(50, ObjectTypeName, 0, 0, 0LL);
  }
  return v6;
}
