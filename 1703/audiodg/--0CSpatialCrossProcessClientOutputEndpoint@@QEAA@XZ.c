/*
 * XREFs of ??0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x1400578F4
 * Callers:
 *     ??0?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400573D4 (--0-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400575B0 (--0-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 *     ??0CSpatialCrossProcessClientEndpoint@@QEAA@XZ @ 0x140057864 (--0CSpatialCrossProcessClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSpatialCrossProcessClientOutputEndpoint *__fastcall CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint(
        CSpatialCrossProcessClientOutputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 246) = 0;
  v2 = (char *)this + 992;
  memset((char *)this + 992, 0, 0x28uLL);
  v2[40] = 0;
  CSpatialCrossProcessClientEndpoint::CSpatialCrossProcessClientEndpoint(this);
  *((_QWORD *)this + 121) = &CSpatialCrossProcessControl::`vftable';
  *((_QWORD *)this + 122) = this;
  *((_QWORD *)this + 130) = 0LL;
  *((_DWORD *)this + 262) = 0;
  *((_DWORD *)this + 263) = 0;
  *((_DWORD *)this + 264) = 0;
  *((_DWORD *)this + 265) = 0;
  *((_BYTE *)this + 1064) = 0;
  return this;
}
