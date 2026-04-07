/*
 * XREFs of ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18003EF50
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180024928 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x180024830 (-ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x1800395D0 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::SetupColorization(CDesktopManager *this)
{
  char *v1; // rdi
  unsigned int v3; // ecx
  unsigned int v4; // eax
  int v5; // eax
  int v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  int v8; // [rsp+38h] [rbp-31h] BYREF
  int v9; // [rsp+3Ch] [rbp-2Dh] BYREF
  _QWORD v10[14]; // [rsp+40h] [rbp-29h] BYREF

  v1 = (char *)this + 492;
  *((_DWORD *)this + 124) = 0;
  *((_DWORD *)this + 126) = 0;
  *((_DWORD *)this + 129) = 0;
  *((_DWORD *)this + 123) = -12542210;
  *((_DWORD *)this + 125) = 27;
  *((_DWORD *)this + 127) = 73;
  *((_DWORD *)this + 128) = 1;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPolicy(2u) )
    goto LABEL_14;
  v10[1] = v1;
  v10[0] = L"ColorizationColor";
  v10[2] = L"ColorizationColorBalance";
  v10[3] = (char *)this + 500;
  v10[4] = L"ColorizationAfterglow";
  v10[5] = (char *)this + 496;
  v10[6] = L"ColorizationAfterglowBalance";
  v10[7] = (char *)this + 504;
  v10[8] = L"ColorizationBlurBalance";
  v10[9] = (char *)this + 508;
  v10[10] = L"EnableWindowColorization";
  v10[11] = (char *)this + 512;
  v10[12] = L"ColorizationGlassAttribute";
  v10[13] = (char *)this + 516;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 7)
                                                                + 32LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
         0LL,
         v10,
         7LL) < 0 )
  {
LABEL_14:
    if ( (unsigned __int8)CDesktopManager::CheckAnyPolicy(4u) )
    {
      v9 = 0;
      (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 7))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
        L"DefaultColorizationColorAlpha",
        &v9);
      v6 = 0;
      (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 7))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
        L"DefaultColorizationColorRed",
        &v6);
      v7 = 0;
      (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 7))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
        L"DefaultColorizationColorGreen",
        &v7);
      v8 = 0;
      (***((void (__fastcall ****)(_QWORD, const wchar_t *, int *))CDesktopManager::s_pDesktopManagerInstance + 7))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
        L"DefaultColorizationColorBlue",
        &v8);
      *((_DWORD *)v1 + 1) = 0;
      *((_DWORD *)v1 + 3) = 0;
      *((_DWORD *)v1 + 6) = 0;
      v3 = 100 * v9;
      v4 = v6 | 0xFFFFFF00;
      *(_DWORD *)v1 = -12542210;
      v5 = v8 | ((v7 | (v4 << 8)) << 8);
      *((_DWORD *)v1 + 2) = 27;
      *((_DWORD *)v1 + 4) = 73;
      *((_DWORD *)v1 + 5) = 1;
      *(_DWORD *)v1 = v5;
      *((_DWORD *)this + 125) = v3 / 0xFF;
      *((_DWORD *)this + 127) = 100 - v3 / 0xFF;
    }
  }
  if ( *((_DWORD *)this + 125) > 0x64u )
    *((_DWORD *)this + 125) = 27;
  if ( *((_DWORD *)this + 126) > 0x64u )
    *((_DWORD *)this + 126) = 0;
  if ( *((_DWORD *)this + 127) > 0x64u )
    *((_DWORD *)this + 127) = 73;
  CDesktopManager::ApplyColorizationParameters(this, (const struct CGlassColorizationParameters *)v1);
}
