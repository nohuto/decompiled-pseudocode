/*
 * XREFs of SetLastError_0 @ 0x18003EE5E
 * Callers:
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x18006E83C (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SetLastError_0(DWORD dwErrCode)
{
  SetLastError(dwErrCode);
}
