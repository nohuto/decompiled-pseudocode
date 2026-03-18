/*
 * XREFs of _get_image_app_type @ 0x140004024
 * Callers:
 *     sub_1400035B0 @ 0x1400035B0 (sub_1400035B0.c)
 * Callees:
 *     RtlpImageNtHeader @ 0x140003FD0 (RtlpImageNtHeader.c)
 */

__int64 __fastcall get_image_app_type(unsigned int a1)
{
  HMODULE ModuleHandleW; // rax
  _DWORD *v3; // rax
  __int64 result; // rax
  bool v5; // zf

  ModuleHandleW = GetModuleHandleW(0LL);
  if ( !ModuleHandleW )
    return a1;
  v3 = RtlpImageNtHeader((__int64)ModuleHandleW);
  if ( !v3 )
    return a1;
  if ( *((_WORD *)v3 + 46) == 2 )
    return 2LL;
  v5 = *((_WORD *)v3 + 46) == 3;
  result = 1LL;
  if ( !v5 )
    return a1;
  return result;
}
