/*
 * XREFs of ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C0018B5C
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0080F98 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0082154 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C008E468 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

DirectComposition::CApplicationChannel *__fastcall DirectComposition::CApplicationChannel::CApplicationChannel(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CConnection *a2,
        char a3,
        int a4)
{
  char v6; // al
  char v7; // al

  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  v6 = *((_BYTE *)this + 48) & 0xFE;
  *((_DWORD *)this + 2) = 1;
  v7 = a3 | v6;
  *((_QWORD *)this + 5) = a2;
  *((_BYTE *)this + 48) = v7;
  if ( (v7 & 1) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)a2);
  *((_QWORD *)this + 2) = PsGetCurrentProcess();
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  *((_BYTE *)this + 72) = a3;
  *((_QWORD *)this + 7) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  *((_QWORD *)this + 12) = 8LL;
  *((_QWORD *)this + 15) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  *((_BYTE *)this + 136) = a3;
  *((_QWORD *)this + 20) = 8LL;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 280),
    (PRTL_GENERIC_COMPARE_ROUTINE)DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::AllocateTableEntry,
    (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
    0LL);
  *((_BYTE *)this + 504) = a3;
  *((_QWORD *)this + 66) = 8LL;
  *((_QWORD *)this + 61) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  *((_QWORD *)this + 70) = (char *)this + 552;
  *((_QWORD *)this + 69) = (char *)this + 552;
  *((_QWORD *)this + 72) = (char *)this + 568;
  *((_QWORD *)this + 71) = (char *)this + 568;
  *((_QWORD *)this + 74) = (char *)this + 584;
  *((_QWORD *)this + 73) = (char *)this + 584;
  *((_QWORD *)this + 76) = (char *)this + 600;
  *((_QWORD *)this + 75) = (char *)this + 600;
  *((_BYTE *)this + 648) = a3;
  *((_QWORD *)this + 79) = (char *)this + 624;
  *((_QWORD *)this + 78) = (char *)this + 624;
  *((_DWORD *)this + 182) = a4;
  InitializeSListHead((PSLIST_HEADER)this + 13);
  *((_QWORD *)this + 45) = (char *)this + 352;
  *((_QWORD *)this + 44) = (char *)this + 352;
  *((_QWORD *)this + 34) = (char *)this + 264;
  *((_QWORD *)this + 33) = (char *)this + 264;
  return this;
}
