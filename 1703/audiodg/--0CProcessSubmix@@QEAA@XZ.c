/*
 * XREFs of ??0CProcessSubmix@@QEAA@XZ @ 0x1400302E0
 * Callers:
 *     ??0?$CComAggObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z @ 0x140045698 (--0-$CComAggObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x1400086B0 (--0CSubmixImpl@@QEAA@XZ.c)
 *     memset @ 0x14001DC2C (memset.c)
 */

// Hidden C++ exception states: #wind=1
CProcessSubmix *__fastcall CProcessSubmix::CProcessSubmix(CProcessSubmix *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 74) = 0;
  v2 = (char *)this + 304;
  memset((char *)this + 304, 0, 0x28uLL);
  v2[40] = 0;
  CSubmixImpl::CSubmixImpl((CProcessSubmix *)((char *)this + 16));
  return this;
}
