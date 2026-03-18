/*
 * XREFs of AMLIEvalPkgDataElement @ 0x1C000D7EC
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C000D438 (LinkNodeCrackPrt.c)
 *     ACPIFanFSTCallback @ 0x1C004D8C0 (ACPIFanFSTCallback.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0086720 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIThermalBuildConstraints @ 0x1C0092604 (ACPIThermalBuildConstraints.c)
 * Callees:
 *     DupObjData @ 0x1C00078C0 (DupObjData.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     GetObjectTypeName @ 0x1C005D4E0 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 */

__int64 __fastcall AMLIEvalPkgDataElement(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v5; // rbx
  _DWORD *v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int ObjectTypeName; // eax

  dword_1C00797B8 = 0;
  v5 = a2;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v10, v9, v11);
  }
  memset(a3, 0, 0x28uLL);
  if ( (gDebugger & 8) != 0 )
    PrintDebugMessage(49, (unsigned int)KeGetCurrentThread(), a1, v5, 0LL);
  if ( *(_WORD *)(a1 + 2) == 4 )
  {
    v6 = *(_DWORD **)(a1 + 32);
    if ( (unsigned int)v5 >= *v6 )
    {
      return (unsigned int)-1072431100;
    }
    else
    {
      v7 = DupObjData(gpheapGlobal, (__int64)a3, (__int64)&v6[8 * v5 + 2 + 2 * v5]);
      if ( v7 == 32772 )
        return 259;
    }
  }
  else
  {
    v7 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
    PrintDebugMessage(50, ObjectTypeName, 0, 0, 0LL);
  }
  return v7;
}
