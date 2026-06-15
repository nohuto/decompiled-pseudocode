/*
 * XREFs of ??0?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z @ 0x14003AC40
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003B340 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@SAJPEAXAEBU_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??0CSystemAudioDeviceOffload@@QEAA@XZ @ 0x14003ACDC (--0CSystemAudioDeviceOffload@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceOffload *__fastcall ATL::CComObject<CSystemAudioDeviceOffload>::CComObject<CSystemAudioDeviceOffload>(
        CSystemAudioDeviceOffload *a1)
{
  CSystemAudioDeviceOffload::CSystemAudioDeviceOffload(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)a1 + 3) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `ISubmix'};
  *((_QWORD *)a1 + 37) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioVolume'};
  *((_QWORD *)a1 + 38) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)a1 + 39) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioMeter'};
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
