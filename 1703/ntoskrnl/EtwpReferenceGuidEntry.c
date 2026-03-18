/*
 * XREFs of EtwpReferenceGuidEntry @ 0x140480DC8
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x14003DD38 (EtwGetProviderIdFromHandle.c)
 *     EtwpCreateUmReplyObject @ 0x14043FEB4 (EtwpCreateUmReplyObject.c)
 *     EtwpFindGuidEntryByGuid @ 0x140480CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddUmRegEntry @ 0x140480F40 (EtwpAddUmRegEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     EtwpAddKmRegEntry @ 0x1405523C0 (EtwpAddKmRegEntry.c)
 *     EtwpGetNextGuidEntry @ 0x140552724 (EtwpGetNextGuidEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140554260 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x140554888 (EtwpAddGuidEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
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
