/*
 * XREFs of VfZwQueryInstallUILanguage @ 0x1407868E0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryInstallUILanguage(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a1, retaddr);
  return ((__int64 (__fastcall *)(__int64))pXdvZwQueryInstallUILanguage)(a1);
}
