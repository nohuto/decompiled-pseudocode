/*
 * XREFs of ?DumpDeviceGraph@CSystemAudioDeviceSharedBase@@UEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@1@Z @ 0x140038CB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     ?DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x1400416D0 (-DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@P.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceSharedBase::DumpDeviceGraph(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int128 v9; // [rsp+28h] [rbp-50h]
  __int128 v10; // [rsp+38h] [rbp-40h] BYREF

  v7 = a1;
  v10 = *(_OWORD *)(a1 + 248);
  v9 = v10;
  EtwEventActivityIdControl(4LL, &v10);
  LODWORD(v7) = DumpDeviceGraph(*(_QWORD *)(v7 + 328), a2, a3, a4, -2LL, v9, *((_QWORD *)&v9 + 1));
  EtwEventActivityIdControl(4LL, &v10);
  return (unsigned int)v7;
}
