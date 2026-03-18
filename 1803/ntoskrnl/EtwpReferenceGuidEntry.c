/*
 * XREFs of EtwpReferenceGuidEntry @ 0x1405908C8
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x140169D24 (EtwGetProviderIdFromHandle.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14058CED4 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x14058E46C (EtwpAddGuidEntry.c)
 *     EtwpGetNextGuidEntry @ 0x14058F080 (EtwpGetNextGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405907D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddUmRegEntry @ 0x1405909C0 (EtwpAddUmRegEntry.c)
 *     EtwpCreateUmReplyObject @ 0x1405C3160 (EtwpCreateUmReplyObject.c)
 *     EtwpAddKmRegEntry @ 0x140602220 (EtwpAddKmRegEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
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
