/*
 * XREFs of TtmpDeleteQueue @ 0x1407111F0
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x14001ED40 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     TtmiRemoveQueueFromSession @ 0x14070F970 (TtmiRemoveQueueFromSession.c)
 *     TtmiLogQueueDestroyed @ 0x140712704 (TtmiLogQueueDestroyed.c)
 */

__int64 __fastcall TtmpDeleteQueue(__int64 a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rcx
  __int64 *v4; // rax

  TtmiRemoveQueueFromSession((_QWORD *)a1);
  ExDeleteResourceLite((PERESOURCE)(a1 + 24));
  v2 = (__int64 **)(a1 + 152);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    if ( (__int64 **)(*v2)[1] != v2 || (v4 = (__int64 *)*v3, *(__int64 **)(*v3 + 8) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = (__int64)v2;
    ExFreePoolWithTag(v3, 0x716D7454u);
  }
  return TtmiLogQueueDestroyed(a1);
}
