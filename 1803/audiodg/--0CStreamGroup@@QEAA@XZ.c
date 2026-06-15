/*
 * XREFs of ??0CStreamGroup@@QEAA@XZ @ 0x14002EE14
 * Callers:
 *     ??0?$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x140033AD8 (--0-$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x1400065C8 (--0CSubmixImpl@@QEAA@XZ.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CStreamGroup *__fastcall CStreamGroup::CStreamGroup(CStreamGroup *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 76) = 0;
  v2 = (char *)this + 312;
  memset_0((char *)this + 312, 0, 0x28uLL);
  v2[40] = 0;
  CSubmixImpl::CSubmixImpl((CStreamGroup *)((char *)this + 24));
  return this;
}
