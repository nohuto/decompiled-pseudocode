/*
 * XREFs of ??0?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z @ 0x140038E0C
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140039450 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??0CSystemAudioDeviceExclusive@@QEAA@XZ @ 0x140038E80 (--0CSystemAudioDeviceExclusive@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceExclusive *__fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::CComObject<CSystemAudioDeviceExclusive>(
        CSystemAudioDeviceExclusive *a1)
{
  CSystemAudioDeviceExclusive::CSystemAudioDeviceExclusive(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)a1 + 3) = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `ISubmix'};
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
