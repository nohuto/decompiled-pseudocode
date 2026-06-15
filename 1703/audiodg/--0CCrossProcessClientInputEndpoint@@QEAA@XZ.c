/*
 * XREFs of ??0CCrossProcessClientInputEndpoint@@QEAA@XZ @ 0x14004FEA4
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004F91C (--0-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004FC7C (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14004FE3C (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientInputEndpoint *__fastcall CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint(
        CCrossProcessClientInputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 118) = 0;
  v2 = (char *)this + 480;
  memset((char *)this + 480, 0, 0x28uLL);
  v2[40] = 0;
  CCrossProcessBaseClientEndpoint::CCrossProcessBaseClientEndpoint(this);
  *((_QWORD *)this + 54) = &CCrossProcessInputEndpoint::`vftable';
  *((_QWORD *)this + 55) = this;
  *((_DWORD *)this + 112) = 3;
  *((_DWORD *)this + 113) = 0;
  *((_QWORD *)this + 57) = &CCrossProcessControl::`vftable';
  *((_QWORD *)this + 58) = this;
  return this;
}
