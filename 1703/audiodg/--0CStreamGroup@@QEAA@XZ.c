/*
 * XREFs of ??0CStreamGroup@@QEAA@XZ @ 0x1400301D8
 * Callers:
 *     ??0?$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x1400353D8 (--0-$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x1400086B0 (--0CSubmixImpl@@QEAA@XZ.c)
 *     memset @ 0x14001DC2C (memset.c)
 */

// Hidden C++ exception states: #wind=1
CStreamGroup *__fastcall CStreamGroup::CStreamGroup(CStreamGroup *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 76) = 0;
  v2 = (char *)this + 312;
  memset((char *)this + 312, 0, 0x28uLL);
  v2[40] = 0;
  CSubmixImpl::CSubmixImpl((CStreamGroup *)((char *)this + 24));
  return this;
}
