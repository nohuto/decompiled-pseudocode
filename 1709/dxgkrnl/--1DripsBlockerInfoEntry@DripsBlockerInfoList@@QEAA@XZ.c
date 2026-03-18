/*
 * XREFs of ??1DripsBlockerInfoEntry@DripsBlockerInfoList@@QEAA@XZ @ 0x1C0027E80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

void __fastcall DripsBlockerInfoList::DripsBlockerInfoEntry::~DripsBlockerInfoEntry(
        DripsBlockerInfoList::DripsBlockerInfoEntry *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
