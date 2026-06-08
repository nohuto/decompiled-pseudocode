/*
 * XREFs of GetCpuIdInfo @ 0x1C000C8E0
 * Callers:
 *     IsACountMCountSupported @ 0x1C00011CC (IsACountMCountSupported.c)
 *     ValidatePStateCapability @ 0x1C0001270 (ValidatePStateCapability.c)
 *     InitMonitorMWaitSupport @ 0x1C001A200 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C001A2B4 (IsMonitorMWaitSupported.c)
 *     InitDriver @ 0x1C0031008 (InitDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCpuIdInfo(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
