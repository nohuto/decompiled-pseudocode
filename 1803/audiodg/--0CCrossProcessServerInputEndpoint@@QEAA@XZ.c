/*
 * XREFs of ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140017EE8
 * Callers:
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x14001955C (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ??0?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14002E974 (--0-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004F4A4 (--0-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ?Initialize@CFadeWindowLUT@@AEAAXXZ @ 0x140006A60 (-Initialize@CFadeWindowLUT@@AEAAXXZ.c)
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400183C0 (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessServerInputEndpoint *__fastcall CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint(
        CCrossProcessServerInputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 116) = 0;
  v2 = (char *)this + 472;
  memset_0((char *)this + 472, 0, 0x28uLL);
  v2[40] = 0;
  CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint(this);
  *(_QWORD *)this = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 48) = &CCrossProcessBaseServerEndpoint::`vftable';
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 104) = 0;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_QWORD *)this + 55) = &CCrossProcessInputEndpoint::`vftable';
  *((_QWORD *)this + 56) = this;
  *((_QWORD *)this + 57) = 3LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 16LL;
  *((_DWORD *)this + 170) = 1065353216;
  CFadeWindowLUT::Initialize((CCrossProcessServerInputEndpoint *)((char *)this + 528));
  *((_QWORD *)this + 65) = 0LL;
  return this;
}
