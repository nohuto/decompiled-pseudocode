/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___ @ 0x180081628
 * Callers:
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x18007E35C (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18007888C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x180081560 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x180084620 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  const unsigned __int16 **v4; // rax
  __int64 v5; // rdx
  _DWORD v6[2]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  result = (__int64)GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v9);
  v3 = v9;
  if ( !v9 )
    return result;
  v4 = *(const unsigned __int16 ***)a1;
  v7 = 0;
  if ( ApplicationViewManagement::CPersistence::_ReadPersistedData(
         (ApplicationViewManagement::CPersistence *)(v9 + 48),
         *v4,
         L"CloakType",
         v6,
         0xCu) >= 0 )
  {
    if ( v6[0] != 4 )
    {
      v5 = 61LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
        (const char *)0x8007000DLL);
      goto LABEL_9;
    }
    if ( v6[1] != 1129590832 )
    {
      v5 = 62LL;
      goto LABEL_5;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 240LL) = v7 & 3;
    ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
      *(const WCHAR ***)a1,
      (int *)(*(_QWORD *)(a1 + 8) + 240LL));
  }
LABEL_9:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 44), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 72LL))(v9, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return result;
}
