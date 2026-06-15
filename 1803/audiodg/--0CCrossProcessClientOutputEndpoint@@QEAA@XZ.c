/*
 * XREFs of ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x14004F8F4
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004F3B8 (--0-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004F6D0 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14004F7EC (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientOutputEndpoint *__fastcall CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint(
        CCrossProcessClientOutputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 118) = 0;
  v2 = (char *)this + 480;
  memset_0((char *)this + 480, 0, 0x28uLL);
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
