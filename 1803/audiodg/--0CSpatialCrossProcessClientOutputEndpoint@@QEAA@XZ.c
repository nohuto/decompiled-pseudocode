/*
 * XREFs of ??0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x140057C84
 * Callers:
 *     ??0?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140057754 (--0-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140057930 (--0-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     ??0CSpatialCrossProcessClientEndpoint@@QEAA@XZ @ 0x140057BF4 (--0CSpatialCrossProcessClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSpatialCrossProcessClientOutputEndpoint *__fastcall CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint(
        CSpatialCrossProcessClientOutputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 248) = 0;
  v2 = (char *)this + 1000;
  memset_0((char *)this + 1000, 0, 0x28uLL);
  v2[40] = 0;
  CSpatialCrossProcessClientEndpoint::CSpatialCrossProcessClientEndpoint(this);
  *((_QWORD *)this + 122) = &CSpatialCrossProcessControl::`vftable';
  *((_QWORD *)this + 123) = this;
  *((_QWORD *)this + 131) = 0LL;
  *((_DWORD *)this + 264) = 0;
  *((_DWORD *)this + 265) = 0;
  *((_DWORD *)this + 266) = 0;
  *((_DWORD *)this + 267) = 0;
  *((_BYTE *)this + 1072) = 0;
  return this;
}
