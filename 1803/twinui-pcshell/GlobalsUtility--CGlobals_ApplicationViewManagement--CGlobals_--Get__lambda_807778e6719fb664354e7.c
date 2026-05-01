/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___ @ 0x18013E834
 * Callers:
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18002ADA0 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800198CC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x180092E5C (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x1800F9A78 (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 */

__int64 __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___(
        __int64 a1)
{
  volatile int *v2; // rdx
  __int64 v3; // rax
  unsigned __int8 v5[4]; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+34h] [rbp-14h]
  int v7; // [rsp+38h] [rbp-10h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v8);
  if ( v8 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)v5 = 4;
    v6 = 1129590832;
    v7 = *(_DWORD *)(v3 + 256);
    ApplicationViewManagement::CPersistence::_PersistData(
      (HKEY *)(v8 + 40),
      **(const unsigned __int16 ***)a1,
      L"CloakType",
      v5,
      0xCu);
  }
  return Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v8, v2);
}
