/*
 * XREFs of ??0CAudioDeviceGraph@@QEAA@XZ @ 0x14000D660
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14001B080 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 *     ??0?$CComAggObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z @ 0x140031774 (--0-$CComAggObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x140014A94 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     memset @ 0x14001D9AC (memset.c)
 */

// Hidden C++ exception states: #wind=5
CAudioDeviceGraph *__fastcall CAudioDeviceGraph::CAudioDeviceGraph(CAudioDeviceGraph *this)
{
  *((_DWORD *)this + 6) = 0;
  memset((char *)this + 32, 0, 0x28uLL);
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 10;
  ATL::CCriticalSection::CCriticalSection((CAudioDeviceGraph *)((char *)this + 184));
  *((_DWORD *)this + 56) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioDeviceGraph *)((char *)this + 232));
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((GUID *)this + 21) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 90) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  return this;
}
