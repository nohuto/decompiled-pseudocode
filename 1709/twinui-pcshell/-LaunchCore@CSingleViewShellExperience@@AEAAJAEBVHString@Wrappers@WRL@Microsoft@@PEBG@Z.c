/*
 * XREFs of ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x1801CFFE8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___::Run @ 0x1801D4700 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___--Run.c)
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1801DDD24 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 */

__int64 __fastcall CSingleViewShellExperience::LaunchCore(
        CSingleViewShellExperience *this,
        HSTRING *a2,
        const unsigned __int16 *a3)
{
  int v4; // edi
  PCWSTR StringRawBuffer; // rax
  int v6; // eax
  unsigned int v7; // ecx

  v4 = *((_DWORD *)this + 33) & 2;
  StringRawBuffer = WindowsGetStringRawBuffer(*a2, 0LL);
  v6 = ActivateApplicationForExperienceWithPropertySet(
         StringRawBuffer,
         a3,
         (unsigned __int64)L"ShellExperience" & -(__int64)(v4 != 0));
  v7 = 0;
  if ( v6 < 0 )
    return (unsigned int)v6;
  return v7;
}
