/*
 * XREFs of ??0CAudioSessionInstanceId@@QEAA@AEBV0@@Z @ 0x180031AF0
 * Callers:
 *     ?NewNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x180019008 (-NewNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A978 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 */

// Hidden C++ exception states: #wind=4
CAudioSessionInstanceId *__fastcall CAudioSessionInstanceId::CAudioSessionInstanceId(
        CAudioSessionInstanceId *this,
        const struct CAudioSessionInstanceId *a2)
{
  *(_QWORD *)this = ATL::CSimpleStringT<unsigned short,0>::CloneData(*(_QWORD *)a2 - 24LL) + 24;
  *((_QWORD *)this + 1) = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)a2 + 1) - 24LL) + 24;
  *((_QWORD *)this + 2) = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)a2 + 2) - 24LL) + 24;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)this + 5) = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)a2 + 5) - 24LL) + 24;
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_QWORD *)this + 7) = *((_QWORD *)a2 + 7);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_QWORD *)this + 9) = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)a2 + 9) - 24LL) + 24;
  return this;
}
