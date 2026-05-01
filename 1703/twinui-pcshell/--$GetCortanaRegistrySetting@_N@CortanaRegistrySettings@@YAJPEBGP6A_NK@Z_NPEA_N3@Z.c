/*
 * XREFs of ??$GetCortanaRegistrySetting@_N@CortanaRegistrySettings@@YAJPEBGP6A_NK@Z_NPEA_N3@Z @ 0x18009E2C0
 * Callers:
 *     CortanaHelpers::IsCortanaInAmbientMode @ 0x1800C2284 (CortanaHelpers--IsCortanaInAmbientMode.c)
 *     _lambda_3b055fef70a16d7474f5e228489e7e4c_::operator() @ 0x1800D3900 (_lambda_3b055fef70a16d7474f5e228489e7e4c_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaRegistrySettings::GetCortanaRegistrySetting<bool>(
        LPCWSTR lpValue,
        __int64 a2,
        bool a3,
        bool *a4)
{
  LSTATUS ValueW; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+5Ch] [rbp+14h]
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = HIDWORD(a2);
  v11 = 0;
  *a4 = a3;
  v9 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
             lpValue,
             0x10u,
             0LL,
             &v11,
             &v9);
  if ( !ValueW )
  {
    *a4 = v11 != 0;
    return 0LL;
  }
  if ( ValueW == 2 || ValueW == 1168 )
    return 0LL;
  v7 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v7 = ValueW;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x76,
    (__int64)"internal\\onecoreuapshell\\inc\\cortanaregistrysettings.h",
    (const char *)v7);
  return v7;
}
