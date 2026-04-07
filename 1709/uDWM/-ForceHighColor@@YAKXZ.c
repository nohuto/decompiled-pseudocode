/*
 * XREFs of ?ForceHighColor@@YAKXZ @ 0x1800340EC
 * Callers:
 *     ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180033B00 (--0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x180044D50 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

__int64 ForceHighColor(void)
{
  __int64 result; // rax

  result = dword_1800BE470;
  if ( dword_1800BE470 == -1 )
  {
    result = (unsigned int)-RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"HighColor", &dword_1800BE470);
    dword_1800BE470 = result;
  }
  return result;
}
