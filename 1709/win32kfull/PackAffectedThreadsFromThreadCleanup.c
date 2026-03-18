/*
 * XREFs of PackAffectedThreadsFromThreadCleanup @ 0x1C00C9730
 * Callers:
 *     <none>
 * Callees:
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00C9610 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00C976C (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 */

void __fastcall PackAffectedThreadsFromThreadCleanup(const struct tagTHREADINFO *a1)
{
  struct PTI_LIST *v1; // rax
  __int64 v2; // rcx

  v1 = InAffectedThreadList(a1);
  if ( v1 )
    *((_QWORD *)v1 + 2) = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 408) + 384LL) > 1u )
    PackAffectedThreadList((const struct tagTHREADINFO *)v2, 0LL);
}
