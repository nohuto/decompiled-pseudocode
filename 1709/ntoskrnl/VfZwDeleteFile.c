/*
 * XREFs of VfZwDeleteFile @ 0x1407C6DE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1407CA17C (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x1407CA2AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDeleteFile(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckObjectAttributes(a1, retaddr);
  return ((__int64 (__fastcall *)(__int64))pXdvZwDeleteFile)(a1);
}
