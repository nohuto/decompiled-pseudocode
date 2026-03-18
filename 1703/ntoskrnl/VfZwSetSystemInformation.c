/*
 * XREFs of VfZwSetSystemInformation @ 0x140787700
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetSystemInformation(unsigned int a1, __int64 a2, unsigned int a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a2, retaddr);
  return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))pXdvZwSetSystemInformation)(a1, a2, a3);
}
