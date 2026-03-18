/*
 * XREFs of VfZwDisplayString @ 0x140784BC0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140787D68 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDisplayString(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString(a1, retaddr);
  return ((__int64 (__fastcall *)(__int64))pXdvZwDisplayString)(a1);
}
