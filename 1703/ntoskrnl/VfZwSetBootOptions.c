/*
 * XREFs of VfZwSetBootOptions @ 0x1407871F0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetBootOptions(__int64 a1, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a1, retaddr);
  return ((__int64 (__fastcall *)(__int64, _QWORD))pXdvZwSetBootOptions)(a1, a2);
}
