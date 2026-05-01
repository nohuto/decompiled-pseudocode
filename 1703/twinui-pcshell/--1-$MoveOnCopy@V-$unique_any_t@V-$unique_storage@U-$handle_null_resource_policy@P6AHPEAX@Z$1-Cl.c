/*
 * XREFs of ??1?$MoveOnCopy@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@Internal@Windows@@QEAA@XZ @ 0x18000A854
 * Callers:
 *     _CApplicationManager::UncloakWindow_::_1_::dtor$0 @ 0x180197F2B (_CApplicationManager--UncloakWindow_--_1_--dtor$0.c)
 *     _CRotationManagerSync::_CheckForInitialSuppression_::_1_::dtor$1 @ 0x1801995AB (_CRotationManagerSync--_CheckForInitialSuppression_--_1_--dtor$1.c)
 *     _IsShellInfraHostRunning_::_1_::dtor$0 @ 0x18019ECF1 (_IsShellInfraHostRunning_--_1_--dtor$0.c)
 *     __lambda_e749f471b43b5c52416cbe595e41d9dc_::operator()_::_1_::dtor$2 @ 0x18019F1F9 (__lambda_e749f471b43b5c52416cbe595e41d9dc_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

int __fastcall Windows::Internal::MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
