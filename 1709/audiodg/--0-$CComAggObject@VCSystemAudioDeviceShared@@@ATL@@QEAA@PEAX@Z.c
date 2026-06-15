/*
 * XREFs of ??0?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x14003BDD4
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003BFC8 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x14002FBD0 (--0CSystemAudioDeviceShared@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CSystemAudioDeviceShared>::CComAggObject<CSystemAudioDeviceShared>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceShared>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CSystemAudioDeviceShared::CSystemAudioDeviceShared((CSystemAudioDeviceShared *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioDeviceGraph'};
  v4[1] = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioGraphCallback'};
  v4[2] = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioProtectedOutput'};
  v4[3] = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmix'};
  v4[37] = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `ISaDeviceCallback'};
  v4[38] = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmixInternal'};
  v4[46] = a2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
