/*
 * XREFs of ?DumpDeviceGraph@CSystemAudioDeviceSharedBase@@UEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@1@Z @ 0x14003A3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400059AC (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x1400435B0 (-DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceSharedBase::DumpDeviceGraph(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  _QWORD *Next; // rax
  _QWORD *v13[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v14; // [rsp+30h] [rbp-58h]
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF

  v13[1] = (_QWORD *)-2LL;
  v14 = *(_OWORD *)(a1 + 248);
  v15 = v14;
  EtwEventActivityIdControl(4LL, &v15);
  v9 = *(_QWORD *)(a1 + 328);
  v10 = 0;
  v13[0] = *(_QWORD **)(v9 + 136);
  if ( v13[0] )
  {
    do
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v8, v13);
      v10 = DumpDeviceGraph(*Next, a2, a3, a4);
    }
    while ( v10 >= 0 && v13[0] );
  }
  EtwEventActivityIdControl(4LL, &v15);
  return (unsigned int)v10;
}
