/*
 * XREFs of ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x140051174
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140050C38 (--0-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140050F50 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     memset @ 0x14001D9AC (memset.c)
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14005106C (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientOutputEndpoint *__fastcall CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint(
        CCrossProcessClientOutputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 118) = 0;
  v2 = (char *)this + 480;
  memset((char *)this + 480, 0, 0x28uLL);
  v2[40] = 0;
  CCrossProcessBaseClientEndpoint::CCrossProcessBaseClientEndpoint(this);
  *((_QWORD *)this + 54) = &CCrossProcessOutputEndpoint::`vftable';
  *((_QWORD *)this + 55) = this;
  *((_DWORD *)this + 112) = 3;
  *((_DWORD *)this + 113) = 0;
  *((_QWORD *)this + 57) = &CCrossProcessControl::`vftable';
  *((_QWORD *)this + 58) = this;
  *((_QWORD *)this + 66) = 0LL;
  return this;
}
