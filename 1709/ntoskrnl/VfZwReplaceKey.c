/*
 * XREFs of VfZwReplaceKey @ 0x1407C9430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1407CA17C (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x1407CA2AC (ViZwShouldCheck.c)
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
