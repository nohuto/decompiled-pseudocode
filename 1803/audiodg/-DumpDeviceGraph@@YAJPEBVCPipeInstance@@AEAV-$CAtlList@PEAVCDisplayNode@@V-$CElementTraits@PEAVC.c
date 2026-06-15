/*
 * XREFs of ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x1400419D0
 * Callers:
 *     ?DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x1400416D0 (-DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@P.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x1400417B4 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002F38 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x14002FDF8 (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ??A?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@1@_K@Z @ 0x140041580 (--A-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V-$.c)
 *     ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x140042178 (-GetDisplayNode@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@.c)
 */

__int64 __fastcall DumpDeviceGraph(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 *v5; // rdx
  _QWORD **v6; // rax
  _QWORD *v7; // rax
  _QWORD *Next; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  int DisplayNode; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 v18; // r8
  ATL::CAtlException *v20; // rbx
  ATL::CAtlException *v21; // rbx
  ATL::CAtlException *v22; // rbx
  ATL::CAtlException *v23; // rbx
  ATL::CAtlException *v24; // rbx
  ATL::CAtlException *v25; // rbx
  _QWORD **v26; // [rsp+20h] [rbp-78h]
  _QWORD *v27; // [rsp+20h] [rbp-78h]
  __int64 *v28; // [rsp+28h] [rbp-70h]
  __int64 v29; // [rsp+30h] [rbp-68h] BYREF
  __int64 v30; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v31[2]; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v32; // [rsp+50h] [rbp-48h] BYREF
  ATL::CAtlException *v33; // [rsp+58h] [rbp-40h] BYREF
  ATL::CAtlException *v34; // [rsp+60h] [rbp-38h] BYREF
  ATL::CAtlException *v35; // [rsp+68h] [rbp-30h] BYREF
  ATL::CAtlException *v36; // [rsp+70h] [rbp-28h] BYREF
  ATL::CAtlException *v37; // [rsp+78h] [rbp-20h] BYREF
  int v38; // [rsp+A0h] [rbp+8h]
  int v39; // [rsp+A0h] [rbp+8h]
  int v40; // [rsp+A0h] [rbp+8h]
  int v41; // [rsp+A0h] [rbp+8h]
  int v42; // [rsp+A0h] [rbp+8h]

  v31[1] = (_QWORD *)-2LL;
  v4 = 0;
  try
  {
    v28 = *(__int64 **)(a1 + 64);
  }
  catch ( ATL::CAtlException *v32 )
  {
    v20 = v32;
    if ( *(_DWORD *)v32 == -1073741571 )
      _o__resetstkoflw();
    v38 = *(_DWORD *)v20;
    v4 = *(_DWORD *)v20;
    if ( v38 >= 0 )
      goto LABEL_3;
    return v4;
  }
LABEL_3:
  while ( 1 )
  {
    v5 = v28;
    if ( !v28 )
      return v4;
    v29 = 0LL;
    v30 = 0LL;
    try
    {
      v12 = *v28;
      v28 = (__int64 *)*v28;
      v6 = (_QWORD **)v5[2];
      v26 = v6;
    }
    catch ( ATL::CAtlException *v33 )
    {
      v21 = v33;
      if ( *(_DWORD *)v33 == -1073741571 )
        _o__resetstkoflw();
      v39 = *(_DWORD *)v21;
      v4 = *(_DWORD *)v21;
      if ( v39 < 0 )
        return v4;
      v6 = v26;
    }
    v4 = 0;
    try
    {
      v7 = *v6;
      v31[0] = v7;
    }
    catch ( ATL::CAtlException *v34 )
    {
      v22 = v34;
      if ( *(_DWORD *)v34 == -1073741571 )
        _o__resetstkoflw();
      v40 = *(_DWORD *)v22;
      goto LABEL_22;
    }
    while ( v31[0] )
    {
      v4 = 0;
      try
      {
        Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v12, v31);
        v9 = (_QWORD *)*Next;
        v27 = (_QWORD *)*Next;
      }
      catch ( ATL::CAtlException *v35 )
      {
        v23 = v35;
        if ( *(_DWORD *)v35 == -1073741571 )
          _o__resetstkoflw();
        v41 = *(_DWORD *)v23;
        v4 = *(_DWORD *)v23;
        if ( v41 < 0 )
          return v4;
        v9 = v27;
      }
      v10 = v9[3];
      if ( v10 )
      {
        DisplayNode = GetDisplayNode(a2, v10, &v29);
        v4 = DisplayNode;
        if ( DisplayNode < 0 )
          return v4;
      }
      v13 = v9[4];
      if ( v13 )
      {
        v14 = GetDisplayNode(a2, v13, &v30);
        v4 = v14;
        if ( v14 < 0 )
          return v4;
      }
      if ( v29 )
      {
        v4 = 0;
        try
        {
          v15 = (__int64 *)ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::operator[](
                             a3,
                             v9[1]);
          ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(v15, &v29, v16);
        }
        catch ( ATL::CAtlException *v36 )
        {
          v24 = v36;
          if ( *(_DWORD *)v36 == -1073741571 )
            _o__resetstkoflw();
          v42 = *(_DWORD *)v24;
          v4 = *(_DWORD *)v24;
          if ( v42 < 0 )
            return v4;
          v9 = v27;
        }
      }
      if ( v30 )
      {
        v4 = 0;
        try
        {
          v17 = (__int64 *)ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::operator[](
                             a4,
                             v9[1]);
          ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(v17, &v30, v18);
        }
        catch ( ATL::CAtlException *v37 )
        {
          v25 = v37;
          if ( *(_DWORD *)v37 == -1073741571 )
            _o__resetstkoflw();
          v40 = *(_DWORD *)v25;
LABEL_22:
          v4 = v40;
          if ( v40 < 0 )
            return v4;
        }
      }
    }
  }
}
