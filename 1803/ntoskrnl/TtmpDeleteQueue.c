/*
 * XREFs of TtmpDeleteQueue @ 0x140774A80
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     TtmiRemoveQueueFromSession @ 0x1407731E0 (TtmiRemoveQueueFromSession.c)
 *     TtmiLogQueueDestroyed @ 0x140776728 (TtmiLogQueueDestroyed.c)
 */

__int64 __fastcall TtmpDeleteQueue(__int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  TtmiRemoveQueueFromSession((_QWORD *)a1);
  ExDeleteResourceLite((PERESOURCE)(a1 + 24));
  v2 = (_QWORD **)(a1 + 152);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    ExFreePoolWithTag(v3, 0x716D7454u);
  }
  return TtmiLogQueueDestroyed(a1);
}
