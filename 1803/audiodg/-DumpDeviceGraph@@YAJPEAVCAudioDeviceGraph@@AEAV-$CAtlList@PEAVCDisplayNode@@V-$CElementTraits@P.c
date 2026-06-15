/*
 * XREFs of ?DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x1400416D0
 * Callers:
 *     ?DumpDeviceGraph@CSystemAudioDeviceSharedBase@@UEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@1@Z @ 0x140038CB0 (-DumpDeviceGraph@CSystemAudioDeviceSharedBase@@UEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElement.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002F38 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x1400419D0 (-DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVC.c)
 */

__int64 __fastcall DumpDeviceGraph(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v8; // kr00_8
  ATL::CAtlException *v9; // rbx
  __int64 v10; // kr10_8
  ATL::CAtlException *v11; // rbx
  _QWORD *v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  ATL::CAtlException *v15; // [rsp+38h] [rbp-20h] BYREF
  ATL::CAtlException *v16; // [rsp+40h] [rbp-18h] BYREF
  int v17; // [rsp+60h] [rbp+8h]
  int v18; // [rsp+60h] [rbp+8h]

  v14 = -2LL;
  v5 = 0;
  try
  {
    v12 = *(_QWORD **)(a1 + 168);
  }
  catch ( ATL::CAtlException *v15 )
  {
    v8 = v4;
    v9 = v15;
    if ( *(_DWORD *)v15 == -1073741571 )
      _o__resetstkoflw();
    v17 = *(_DWORD *)v9;
    v4 = v8;
    v5 = v17;
    if ( v17 >= 0 )
      goto LABEL_3;
    return v5;
  }
LABEL_3:
  while ( v12 )
  {
    try
    {
      v6 = *ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(a1, &v12);
      v13 = v6;
    }
    catch ( ATL::CAtlException *v16 )
    {
      v10 = v4;
      v11 = v16;
      if ( *(_DWORD *)v16 == -1073741571 )
        _o__resetstkoflw();
      v18 = *(_DWORD *)v11;
      v4 = v10;
      v5 = v18;
      if ( v18 < 0 )
        return v5;
      v6 = v13;
    }
    v5 = DumpDeviceGraph(v6, a2, a3, a4);
    if ( (v5 & 0x80000000) != 0 )
      return v5;
  }
  return v5;
}
