/*
 * XREFs of VfZwOpenDirectoryObject @ 0x1407854D0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140787D18 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenDirectoryObject(__int64 a1, unsigned int a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64))pXdvZwOpenDirectoryObject)(a1, a2, a3);
}
