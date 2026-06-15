/*
 * XREFs of ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x1400417B4
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140007B00 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002F38 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x1400419D0 (-DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVC.c)
 */

__int64 __fastcall DumpDeviceGraph(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  int v15; // eax
  ATL::CAtlException *v17; // rbx
  ATL::CAtlException *v18; // rbx
  ATL::CAtlException *v19; // rbx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h]
  ATL::CAtlException *v23; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v24; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v25; // [rsp+48h] [rbp-30h] BYREF
  int v26; // [rsp+80h] [rbp+8h]
  int v27; // [rsp+80h] [rbp+8h]

  v22 = -2LL;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  try
  {
    v8 = a1[29];
  }
  catch ( ... )
  {
    LODWORD(v10) = -2147418113;
    return (unsigned int)v10;
  }
  if ( v8 )
  {
    v9 = DumpDeviceGraph(v8, a2, a3, a4);
    LODWORD(v10) = v9;
    if ( v9 < 0 )
      return (unsigned int)v10;
  }
  v11 = a1[3];
  if ( v11 )
  {
    v12 = DumpDeviceGraph(v11, v6, v5, v4);
    LODWORD(v10) = v12;
    if ( v12 < 0 )
      return (unsigned int)v10;
  }
  v10 = 0LL;
  try
  {
    v20 = (_QWORD *)a1[4];
  }
  catch ( ATL::CAtlException *v23 )
  {
    v17 = v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _o__resetstkoflw();
    v26 = *(_DWORD *)v17;
    v10 = (unsigned int)v26;
    if ( v26 >= 0 )
    {
      v4 = a4;
      v5 = a3;
      v6 = a2;
      goto LABEL_9;
    }
    return (unsigned int)v10;
  }
LABEL_9:
  while ( v20 )
  {
    try
    {
      v13 = (_QWORD *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v10, &v20);
      v21 = v13;
    }
    catch ( ATL::CAtlException *v24 )
    {
      v18 = v24;
      if ( *(_DWORD *)v24 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v10) = *(_DWORD *)v18;
      if ( *(int *)v18 < 0 )
        return (unsigned int)v10;
      v4 = a4;
      v5 = a3;
      v6 = a2;
      v13 = v21;
    }
    v10 = 0LL;
    try
    {
      v14 = (_QWORD *)*v13;
      v21 = v14;
    }
    catch ( ATL::CAtlException *v25 )
    {
      v19 = v25;
      if ( *(_DWORD *)v25 == -1073741571 )
        _o__resetstkoflw();
      v27 = *(_DWORD *)v19;
      v10 = (unsigned int)v27;
      if ( v27 < 0 )
        return (unsigned int)v10;
      v4 = a4;
      v5 = a3;
      v6 = a2;
      v14 = v21;
    }
    if ( v14 )
    {
      v15 = DumpDeviceGraph(v14, v6, v5, v4);
      v10 = (unsigned int)v15;
      if ( v15 < 0 )
        return (unsigned int)v10;
    }
  }
  return (unsigned int)v10;
}
