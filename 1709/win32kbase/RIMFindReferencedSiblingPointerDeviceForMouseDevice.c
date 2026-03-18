/*
 * XREFs of RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C01074D8
 * Callers:
 *     RIMApplyPTPConfigRemedy @ 0x1C00A5FA0 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     RIMIsParentCommon @ 0x1C000A3BC (RIMIsParentCommon.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

void __fastcall RIMFindReferencedSiblingPointerDeviceForMouseDevice(__int64 a1, _QWORD *a2)
{
  __int64 *i; // rbx
  __int64 v5; // rdx

  *a2 = 0LL;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    if ( *(_BYTE *)(((unsigned __int64)(i + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64)) + 0x30) == 2
      && (*(_DWORD *)(((unsigned __int64)(i + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64))
                    + 0xB8) & 0x200) == 0 )
    {
      v5 = (unsigned __int64)(i + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64);
      if ( (unsigned int)RIMIsParentCommon(
                           a1,
                           v5,
                           *(_QWORD *)(v5 + 456),
                           *(_WORD *)(*(_QWORD *)(v5 + 456) + 110LL),
                           *(_WORD *)(*(_QWORD *)(v5 + 456) + 112LL)) )
      {
        ObReferenceObjectByPointer(i - 2, 3u, ExRawInputManagerObjectType, 0);
        *a2 = i - 2;
        break;
      }
    }
  }
  qword_1C0193AE8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
