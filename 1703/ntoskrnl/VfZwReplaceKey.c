/*
 * XREFs of VfZwReplaceKey @ 0x140787000
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140787D18 (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x140787E44 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwReplaceKey(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckObjectAttributes(a1, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvZwReplaceKey)(a1, a2, a3);
}
