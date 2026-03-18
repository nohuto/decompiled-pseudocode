/*
 * XREFs of EtwpReferenceGuidEntry @ 0x140491F18
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x140134110 (EtwGetProviderIdFromHandle.c)
 *     EtwpAddGuidEntry @ 0x14048972C (EtwpAddGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x1404901C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpAddUmRegEntry @ 0x1404915C0 (EtwpAddUmRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140491E20 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404EEC8C (EtwpUpdateGuidEnableInfo.c)
 *     EtwpGetNextGuidEntry @ 0x1404EF174 (EtwpGetNextGuidEntry.c)
 *     EtwpAddKmRegEntry @ 0x1404F0DD8 (EtwpAddKmRegEntry.c)
 *     EtwpCreateUmReplyObject @ 0x1407441E8 (EtwpCreateUmReplyObject.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall EtwpReferenceGuidEntry(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v1; // r8
  signed __int64 v2; // rax

  _m_prefetchw((const void *)(BugCheckParameter2 + 16));
  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 16), v1 + 1, v1);
    if ( v1 == v2 )
      break;
    v1 = v2;
    if ( !v2 )
      return 0;
  }
  if ( v1 < 0 )
    KeBugCheckEx(0x11Du, 9uLL, BugCheckParameter2, 0LL, 0LL);
  return 1;
}
