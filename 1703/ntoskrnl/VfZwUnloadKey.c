/*
 * XREFs of VfZwUnloadKey @ 0x140787A80
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140787D18 (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwUnloadKey(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckObjectAttributes(a1, retaddr);
  return ((__int64 (__fastcall *)(__int64))pXdvZwUnloadKey)(a1);
}
