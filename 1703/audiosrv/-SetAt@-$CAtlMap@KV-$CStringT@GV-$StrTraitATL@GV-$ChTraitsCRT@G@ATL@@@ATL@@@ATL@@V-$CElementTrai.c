/*
 * XREFs of ?SetAt@?$CAtlMap@KV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@K@2@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@KPEBG@Z @ 0x18009DA50
 * Callers:
 *     ?SetApplicationDefaultEndpoint@CPolicyConfig@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x18009D7B0 (-SetApplicationDefaultEndpoint@CPolicyConfig@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?GetNode@?$CAtlMap@KV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@K@2@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x18007BF88 (-GetNode@-$CAtlMap@KV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTr.c)
 *     ?CreateNode@?$CAtlMap@KV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@K@2@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@KII@Z @ 0x1800998B8 (-CreateNode@-$CAtlMap@KV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElemen.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::SetAt(
        __int64 a1,
        unsigned int a2,
        char *a3)
{
  __int64 Node; // rax
  __int64 v7; // r9
  __int64 v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  unsigned int v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v18 = -2LL;
  Node = ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::GetNode(
           a1,
           a2,
           (int *)&v17,
           (unsigned int *)&v21,
           &v19);
  v8 = Node;
  v9 = 0;
  if ( Node )
  {
    v14 = (_QWORD *)(Node + 8);
    if ( a3 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)&a3[2 * v15] );
      v9 = v15;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(v14, a3, v9, v7);
  }
  else
  {
    v10 = ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::CreateNode(
            a1,
            a2,
            v17,
            v21);
    v8 = v10;
    v21 = v10;
    try
    {
      v12 = (_QWORD *)(v10 + 8);
      if ( a3 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( *(_WORD *)&a3[2 * v13] );
        v9 = v13;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetString(v12, a3, v9, v11);
    }
    catch ( ... )
    {
      ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::RemoveAtPos(
        a1,
        v21);
      throw;
    }
  }
  return v8;
}
