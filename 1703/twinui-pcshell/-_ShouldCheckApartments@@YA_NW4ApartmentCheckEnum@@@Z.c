/*
 * XREFs of ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x180026B70
 * Callers:
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180023DD8 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

bool __fastcall _ShouldCheckApartments(int a1)
{
  bool result; // al
  int v3; // edx
  bool v4; // zf
  int v5; // eax
  WCHAR Filename[264]; // [rsp+30h] [rbp-228h] BYREF

  result = a1 == 2;
  if ( a1 != 2 )
  {
    v3 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( !`_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    {
      if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
      {
        v3 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v3;
      }
      else
      {
        v3 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      }
      v4 = v3 == 1;
      if ( v3 != 1 )
        return v4;
      if ( a1 == 1 )
      {
        v5 = IsAppCompatModeEnabled(16LL);
        v3 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
        if ( v5 )
          v3 = 2;
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v3;
      }
    }
    return v3 == 1;
  }
  return result;
}
