/*
 * XREFs of PfFbLogEntryComplete @ 0x14008BB44
 * Callers:
 *     PfLogDeleteHelper @ 0x14008B66C (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x14008B980 (PfLogEvent.c)
 *     PfFileInfoNotify @ 0x14008D1A0 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __fastcall PfFbLogEntryComplete(PSLIST_ENTRY ListEntry, __int64 a2, __int64 a3)
{
  _SLIST_ENTRY *Next; // rbx
  _SLIST_ENTRY *v4; // rdx
  char *v5; // rdx

  Next = ListEntry[1].Next;
  if ( (_DWORD)a3
    && (++*((_DWORD *)&ListEntry[2].Next + 2),
        v4 = ListEntry[2].Next,
        *((_QWORD *)&ListEntry[1].Next + 1) += (unsigned int)a3,
        v5 = (char *)v4 - *((_QWORD *)&ListEntry[1].Next + 1),
        (__int64)v5 < SLODWORD(Next[5].Next)) )
  {
    ((void (__fastcall *)(PSLIST_ENTRY, char *, __int64, PSLIST_ENTRY))Next[6].Next)(ListEntry, v5, a3, ListEntry);
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], ListEntry);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)Next);
  }
}
