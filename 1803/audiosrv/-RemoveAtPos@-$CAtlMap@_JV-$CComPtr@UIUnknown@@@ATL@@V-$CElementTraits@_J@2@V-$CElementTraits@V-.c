/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@_JV?$CComPtr@UIUnknown@@@ATL@@V?$CElementTraits@_J@2@V?$CElementTraits@V?$CComPtr@UIUnknown@@@ATL@@@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18011BDE8
 * Callers:
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@H@Z @ 0x1800FCBF8 (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@H@Z.c)
 *     _ATL::CAtlMap___int64_ATL::CComPtr_IUnknown__ATL::CElementTraits___int64__ATL::CElementTraits_ATL::CComPtr_IUnknown_____::SetAt_::_1_::catch$0 @ 0x1800FD116 (_ATL--CAtlMap___int64_ATL--CComPtr_IUnknown__ATL--CElementTraits___int64__ATL--CEle_ea_1800FD116.c)
 *     _ATL::CAtlMap_unsigned_int_ATL::CComPtr_IKsControl__ATL::CElementTraits_unsigned_int__ATL::CElementTraits_ATL::CComPtr_IKsControl_____::SetAt_::_1_::catch$0 @ 0x18011C0C2 (_ATL--CAtlMap_unsigned_int_ATL--CComPtr_IKsControl__ATL--CElementTraits_unsigned_in_ea_18011C0C2.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<__int64,ATL::CComPtr<IUnknown>,ATL::CElementTraits<__int64>,ATL::CElementTraits<ATL::CComPtr<IUnknown>>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 i; // rax

  v2 = 0LL;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) % *(_DWORD *)(a1 + 16));
  if ( a2 != *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)v4) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    for ( i = *(_QWORD *)(v2 + 16); i != a2; i = *(_QWORD *)(i + 16) )
      v2 = i;
  }
  return ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::RemoveNode(
           a1,
           a2,
           v2);
}
