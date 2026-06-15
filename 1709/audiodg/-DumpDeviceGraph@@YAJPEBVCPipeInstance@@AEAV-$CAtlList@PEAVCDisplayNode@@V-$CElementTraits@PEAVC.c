/*
 * XREFs of ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x1400435B0
 * Callers:
 *     ?DumpDeviceGraph@CSystemAudioDeviceSharedBase@@UEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@1@Z @ 0x14003A3F0 (-DumpDeviceGraph@CSystemAudioDeviceSharedBase@@UEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElement.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x140043508 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400059AC (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x140030DE0 (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ??A?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@1@_K@Z @ 0x140043420 (--A-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V-$.c)
 *     ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x140043B90 (-GetDisplayNode@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@.c)
 */

__int64 __fastcall DumpDeviceGraph(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  int DisplayNode; // edi
  _QWORD **v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  _QWORD *v12; // rcx
  _QWORD *Next; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // r8
  __int64 *v19; // rax
  __int64 v20; // r8
  __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-30h] BYREF
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD **)(a1 + 64);
  DisplayNode = 0;
  while ( v4 )
  {
    v9 = (_QWORD **)v4[2];
    v10 = 0LL;
    v4 = (_QWORD *)*v4;
    v11 = 0LL;
    v24 = 0LL;
    v22 = 0LL;
    v12 = *v9;
    v23 = v12;
    while ( v23 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)v12, &v23);
      v14 = *Next;
      v15 = *(_QWORD *)(*Next + 24LL);
      if ( v15 )
      {
        DisplayNode = GetDisplayNode(a2, v15, &v24);
        if ( DisplayNode < 0 )
          return (unsigned int)DisplayNode;
        v10 = v24;
      }
      v16 = *(_QWORD *)(v14 + 32);
      if ( v16 )
      {
        DisplayNode = GetDisplayNode(a2, v16, &v22);
        if ( DisplayNode < 0 )
          return (unsigned int)DisplayNode;
        v11 = v22;
      }
      if ( v10 )
      {
        v17 = (__int64 *)ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::operator[](
                           a3,
                           *(_QWORD *)(v14 + 8));
        ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(v17, &v24, v18);
      }
      if ( v11 )
      {
        v19 = (__int64 *)ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::operator[](
                           a4,
                           *(_QWORD *)(v14 + 8));
        ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(v19, &v22, v20);
      }
    }
  }
  return (unsigned int)DisplayNode;
}
