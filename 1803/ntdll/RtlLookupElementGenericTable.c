/*
 * XREFs of RtlLookupElementGenericTable @ 0x1800668E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180066960 (RtlSplay.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlLookupElementGenericTable(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  int v6; // eax

  v2 = *a1;
  v5 = 0LL;
  while ( v2 )
  {
    v6 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))a1[5])(a1, a2, v2 + 40);
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        *a1 = RtlSplay(v2);
        return v2 + 40;
      }
      v2 = *(_QWORD *)(v2 + 16);
    }
    else
    {
      v2 = *(_QWORD *)(v2 + 8);
    }
  }
  return v5;
}
