/*
 * XREFs of ?GetNode@?$CAtlMap@_JV?$CComPtr@UIUnknown@@@ATL@@V?$CElementTraits@_J@2@V?$CElementTraits@V?$CComPtr@UIUnknown@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@_JAEAI1AEAPEAV312@@Z @ 0x1800FC364
 * Callers:
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z @ 0x1800FCF38 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z.c)
 *     ?SetAt@?$CAtlMap@_JV?$CComPtr@UIUnknown@@@ATL@@V?$CElementTraits@_J@2@V?$CElementTraits@V?$CComPtr@UIUnknown@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@_JAEBV?$CComPtr@UIUnknown@@@2@@Z @ 0x1800FD07C (-SetAt@-$CAtlMap@_JV-$CComPtr@UIUnknown@@@ATL@@V-$CElementTraits@_J@2@V-$CElementTraits@V-$CComP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<__int64,ATL::CComPtr<IUnknown>,ATL::CElementTraits<__int64>,ATL::CElementTraits<ATL::CComPtr<IUnknown>>>::GetNode(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v6; // rdx
  __int64 result; // rax

  *a4 = a2;
  *a3 = (unsigned int)a2 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v6 = 0LL;
  *a5 = 0LL;
  result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *a3);
  if ( !result )
    return 0LL;
  while ( *(_DWORD *)(result + 24) != *a4 || *(_QWORD *)result != a2 )
  {
    v6 = result;
    result = *(_QWORD *)(result + 16);
    if ( !result )
      return 0LL;
  }
  *a5 = v6;
  return result;
}
