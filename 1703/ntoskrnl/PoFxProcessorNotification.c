/*
 * XREFs of PoFxProcessorNotification @ 0x140165E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PoFxProcessorNotification(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int8 (__fastcall *v4)(__int64); // rax

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v1 && (v4 = *(unsigned __int8 (__fastcall **)(__int64))(v1 + 104)) != 0LL )
    return v4(v2) == 0 ? 0xC00000BB : 0;
  else
    return 3221225474LL;
}
