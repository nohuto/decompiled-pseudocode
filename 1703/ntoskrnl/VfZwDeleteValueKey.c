/*
 * XREFs of VfZwDeleteValueKey @ 0x140784A70
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140787D68 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDeleteValueKey(__int64 a1, __int64 a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString(a2, retaddr);
  return ((__int64 (__fastcall *)(__int64, __int64))pXdvZwDeleteValueKey)(a1, a2);
}
