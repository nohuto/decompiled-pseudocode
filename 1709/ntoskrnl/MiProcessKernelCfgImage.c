/*
 * XREFs of MiProcessKernelCfgImage @ 0x1400F9950
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x140542FB0 (MiProcessLoadConfigForDriver.c)
 *     MiInitializeKernelCfg @ 0x1408580E8 (MiInitializeKernelCfg.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1400AE3E0 (RtlImageNtHeaderEx.c)
 *     MiMarkKernelImageCfgBits @ 0x14059EF50 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1406EA380 (MiProcessKernelCfgAddressTakenImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1406EA3C4 (MiProcessKernelCfgImageLoadConfig.c)
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
