/*
 * XREFs of VfZwQueryDefaultLocale @ 0x140786070
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDefaultLocale(char a1, __int64 a2)
{
  __int64 v4; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a2, retaddr);
  LOBYTE(v4) = a1;
  return ((__int64 (__fastcall *)(__int64, __int64))pXdvZwQueryDefaultLocale)(v4, a2);
}
