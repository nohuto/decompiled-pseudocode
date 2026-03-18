/*
 * XREFs of ??1DripsBlockerInfoEntry@DripsBlockerInfoList@@QEAA@XZ @ 0x1C00326D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DripsBlockerInfoList::DripsBlockerInfoEntry::~DripsBlockerInfoEntry(
        DripsBlockerInfoList::DripsBlockerInfoEntry *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)this + 1) = 0LL;
  }
}
