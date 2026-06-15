/*
 * XREFs of ??0?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z @ 0x140038D50
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140039310 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAX.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??0CSystemAudioDeviceExclusive@@QEAA@XZ @ 0x140038E80 (--0CSystemAudioDeviceExclusive@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CSystemAudioDeviceExclusive>::CComAggObject<CSystemAudioDeviceExclusive>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceExclusive>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CSystemAudioDeviceExclusive::CSystemAudioDeviceExclusive((CSystemAudioDeviceExclusive *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioDeviceGraph'};
  v4[1] = &ATL::CComContainedObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioGraphCallback'};
  v4[2] = &ATL::CComContainedObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioProtectedOutput'};
  v4[3] = &ATL::CComContainedObject<CSystemAudioDeviceExclusive>::`vftable'{for `ISubmix'};
  v4[37] = a2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
