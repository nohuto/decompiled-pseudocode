/*
 * XREFs of ?LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z @ 0x140043420
 * Callers:
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x140043308 (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDisplayNode@@@Z @ 0x140042AC0 (-AddHead@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 */

__int64 __fastcall CDisplayNode::LinkToLeftDisplayNode(CDisplayNode *this, struct CDisplayNode *a2, __int64 a3)
{
  struct CDisplayNode *v3; // rsi
  CDisplayNode *v4; // rdi
  unsigned int v5; // ebx
  __int64 result; // rax
  ATL::CAtlException *v8; // rbx
  __int64 v9; // r8
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-30h] BYREF
  ATL::CAtlException *v12; // [rsp+30h] [rbp-28h] BYREF
  CDisplayNode *v13; // [rsp+60h] [rbp+8h] BYREF
  struct CDisplayNode *v14; // [rsp+68h] [rbp+10h] BYREF
  int v15; // [rsp+70h] [rbp+18h]

  v14 = a2;
  v13 = this;
  v3 = a2;
  v4 = this;
  try
  {
    ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead((__int64 *)this + 1, (__int64)&v14, a3);
  }
  catch ( ATL::CAtlException *v11 )
  {
    v8 = v11;
    if ( *(_DWORD *)v11 == -1073741571 )
      _o__resetstkoflw();
    v15 = *(_DWORD *)v8;
    v5 = v15;
    if ( v15 >= 0 )
    {
      v4 = v13;
      v3 = v14;
      goto LABEL_4;
    }
LABEL_5:
    result = v5;
  }
LABEL_4:
  v5 = 0;
  try
  {
    v13 = v4;
    ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead((__int64 *)v3 + 7, (__int64)&v13, v9);
  }
  catch ( ATL::CAtlException *v12 )
  {
    v10 = v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    v5 = *(_DWORD *)v10;
    goto LABEL_5;
  }
  goto LABEL_5;
}
