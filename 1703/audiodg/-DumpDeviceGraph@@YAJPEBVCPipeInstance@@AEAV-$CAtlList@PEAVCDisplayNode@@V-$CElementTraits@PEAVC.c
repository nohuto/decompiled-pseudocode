/*
 * XREFs of ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x140042BFC
 * Callers:
 *     ?DumpDeviceGraph@CSystemAudioDeviceSharedBase@@UEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@1@Z @ 0x14003A9E0 (-DumpDeviceGraph@CSystemAudioDeviceSharedBase@@UEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElement.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x140042B54 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 * Callees:
 *     ??A?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@1@_K@Z @ 0x140042A40 (--A-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V-$.c)
 *     ?AddHead@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDisplayNode@@@Z @ 0x140042AC0 (-AddHead@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x140043174 (-GetDisplayNode@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@.c)
 */

__int64 __fastcall DumpDeviceGraph(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  int DisplayNode; // edi
  _QWORD *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // r8
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD **)(a1 + 64);
  DisplayNode = 0;
  while ( v4 )
  {
    v9 = (_QWORD *)v4[2];
    v10 = 0LL;
    v4 = (_QWORD *)*v4;
    v11 = 0LL;
    v20 = 0LL;
    v19[0] = 0LL;
    v12 = v9[3];
    if ( v12 )
    {
      DisplayNode = GetDisplayNode(a2, v12, &v20);
      if ( DisplayNode < 0 )
        return (unsigned int)DisplayNode;
      v10 = v20;
    }
    v13 = v9[4];
    if ( v13 )
    {
      DisplayNode = GetDisplayNode(a2, v13, v19);
      if ( DisplayNode < 0 )
        return (unsigned int)DisplayNode;
      v11 = v19[0];
    }
    if ( v10 )
    {
      v14 = (__int64 *)ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::operator[](
                         a3,
                         v9[1]);
      ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead(v14, (__int64)&v20, v15);
    }
    if ( v11 )
    {
      v16 = (__int64 *)ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::operator[](
                         a4,
                         v9[1]);
      ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead(v16, (__int64)v19, v17);
    }
  }
  return (unsigned int)DisplayNode;
}
