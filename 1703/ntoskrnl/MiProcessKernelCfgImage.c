/*
 * XREFs of MiProcessKernelCfgImage @ 0x14006BEA0
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x1404B13E8 (MiProcessLoadConfigForDriver.c)
 *     MiInitializeKernelCfg @ 0x14082694C (MiInitializeKernelCfg.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14008BA30 (RtlImageNtHeaderEx.c)
 *     MiMarkKernelImageCfgBits @ 0x1405858D8 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1406BD5A0 (MiProcessKernelCfgAddressTakenImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1406BD5E4 (MiProcessKernelCfgImageLoadConfig.c)
 */

__int64 __fastcall MiProcessKernelCfgImage(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  PIMAGE_NT_HEADERS NtHeader; // [rsp+48h] [rbp+20h] BYREF

  if ( (MiFlags & 0x80000) == 0 )
    return 0LL;
  RtlImageNtHeaderEx(1u, *(PVOID *)(a1 + 48), 0LL, &NtHeader);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000) == 0 )
  {
    result = MiMarkKernelImageCfgBits(a1, NtHeader);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 104) |= 0x2000u;
  }
  if ( !a3 )
    return MiProcessKernelCfgImageLoadConfig(a1, a3);
  if ( (a2 & 8) != 0 )
    return MiProcessKernelCfgImageLoadConfig(a1, a3);
  result = MiProcessKernelCfgAddressTakenImports(a1);
  if ( (int)result >= 0 )
    return MiProcessKernelCfgImageLoadConfig(a1, a3);
  return result;
}
