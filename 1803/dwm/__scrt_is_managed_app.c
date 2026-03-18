/*
 * XREFs of __scrt_is_managed_app @ 0x140003A70
 * Callers:
 *     __scrt_common_main_seh @ 0x140002E9C (__scrt_common_main_seh.c)
 * Callees:
 *     <none>
 */

bool _scrt_is_managed_app()
{
  HMODULE ModuleHandleW; // rcx
  bool result; // al
  char *v2; // rax

  ModuleHandleW = GetModuleHandleW(0LL);
  result = ModuleHandleW
        && *(_WORD *)ModuleHandleW == 23117
        && (v2 = (char *)ModuleHandleW + *((int *)ModuleHandleW + 15), *(_DWORD *)v2 == 17744)
        && *((_WORD *)v2 + 12) == 523
        && *((_DWORD *)v2 + 33) > 0xEu
        && *((_DWORD *)v2 + 62) != 0;
  return result;
}
