/*
 * XREFs of ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x1800900F0
 * Callers:
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x18008FFB0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

bool __fastcall _ShouldCheckApartments(int a1)
{
  bool v2; // bl
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  WCHAR Filename[264]; // [rsp+30h] [rbp-228h] BYREF

  v2 = a1 == 2;
  if ( a1 != 2 )
  {
    v4 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    v2 = 1;
    if ( !`_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    {
      if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
      {
        v5 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v5;
      }
      else
      {
        v5 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      }
      if ( v5 != 1 )
        return 0;
      if ( a1 != 1 )
        return v2;
      v6 = IsAppCompatModeEnabled(16LL);
      v4 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      if ( v6 )
        v4 = 2;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v4;
    }
    if ( v4 == 1 )
      return v2;
    return 0;
  }
  return v2;
}
