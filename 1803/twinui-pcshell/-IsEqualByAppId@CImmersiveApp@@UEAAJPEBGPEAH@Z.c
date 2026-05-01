/*
 * XREFs of ?IsEqualByAppId@CImmersiveApp@@UEAAJPEBGPEAH@Z @ 0x18004CDA0
 * Callers:
 *     ?IsEqualByAppUserModelId@CWinRTApplicationView@@UEAAJPEBGPEAH@Z @ 0x18001C280 (-IsEqualByAppUserModelId@CWinRTApplicationView@@UEAAJPEBGPEAH@Z.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18006FD14 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     ??$FindEx@VCImmersiveAppFinderByAppId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByAppId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800703F0 (--$FindEx@VCImmersiveAppFinderByAppId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::IsEqualByAppId(LPCWCH *this, const unsigned __int16 *a2, int *a3)
{
  BOOL v4; // ecx
  __int64 result; // rax

  v4 = CompareStringOrdinal(a2, -1, this[57], -1, 1) == 2;
  result = 0LL;
  *a3 = v4;
  return result;
}
