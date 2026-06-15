/*
 * XREFs of ?CopyResourceLimits@CConstraintModel@@AEAAJPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@0@Z @ 0x180113924
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180055D1C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x180098310 (-AddTail@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FindIndex@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEBAPEAU__POSITION@@_K@Z @ 0x180113AD4 (-FindIndex@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEBAPEAU__POSITION@@_K@Z.c)
 */

__int64 __fastcall CConstraintModel::CopyResourceLimits(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 **v3; // r15
  __int64 v4; // rsi
  int v5; // edi
  unsigned __int64 v6; // r14
  unsigned __int64 i; // rbx
  __int64 Index; // rax
  ATL::CAtlException *v10; // rbx
  unsigned __int64 v11; // [rsp+20h] [rbp-48h]
  ATL::CAtlException *v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h]
  __int64 **v16; // [rsp+80h] [rbp+18h]
  unsigned __int64 v17; // [rsp+88h] [rbp+20h]

  v16 = a3;
  v15 = a2;
  v14 = a1;
  v3 = a3;
  v4 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 16);
  v11 = v6;
  for ( i = 0LL; ; ++i )
  {
    v17 = i;
    if ( i >= v6 || v5 < 0 )
      break;
    Index = ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::FindIndex(v4, i);
    if ( !Index )
      ATL::AtlThrowImpl(-2147467259);
    v14 = *(_QWORD *)(Index + 16);
    v5 = 0;
    try
    {
      ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(v3, &v14);
    }
    catch ( ATL::CAtlException *v13 )
    {
      v10 = v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        o__resetstkoflw_0();
      LODWORD(v14) = *(_DWORD *)v10;
      v3 = v16;
      v4 = v15;
      v5 = v14;
      v6 = v11;
      i = v17;
      continue;
    }
  }
  return (unsigned int)v5;
}
