/*
 * XREFs of ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x18006B7BC
 * Callers:
 *     _lambda_de3f4501c60332f424e3ead36a7d18c4_::operator() @ 0x180071554 (_lambda_de3f4501c60332f424e3ead36a7d18c4_--operator().c)
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18007FCC0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 */

__int64 __fastcall CSingleViewShellExperience::LaunchCore(
        CSingleViewShellExperience *this,
        HSTRING *a2,
        const unsigned __int16 *a3)
{
  int v3; // edi
  PCWSTR StringRawBuffer; // rax
  unsigned int v6; // esi
  int v7; // eax

  v3 = *((_DWORD *)this + 33);
  StringRawBuffer = WindowsGetStringRawBuffer(*a2, 0LL);
  v6 = 0;
  v7 = ActivateApplicationForExperienceWithPropertySet(
         StringRawBuffer,
         a3,
         (unsigned __int64)L"ShellExperience" & -(__int64)((v3 & 2) != 0));
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v6;
}
