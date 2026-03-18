/*
 * XREFs of ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00EB8BC
 * Callers:
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C00AD610 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00AE9A4 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B03E0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x1C01AB040 (DxgkConvertPathsModalityToDisplayConfig.c)
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00AEB28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00EFFA4 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C01DE52C (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C01DFA68 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::QueryTopologyClass(
        CCD_TOPOLOGY *this,
        enum CCD_TOPOLOGY_CLASS *a2,
        __int64 a3,
        __int64 a4)
{
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v6; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // esi
  unsigned int v14; // r15d
  unsigned int v15; // ebx
  __int64 v16; // r8
  unsigned int v17; // ebp
  _QWORD *v19; // rax
  _BYTE v20[104]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+10h] BYREF
  struct _LUID v22; // [rsp+A0h] [rbp+18h] BYREF

  *(_DWORD *)a2 = 0;
  CCD_BTL::Global((__int64)this, (__int64)a2, a3, a4);
  BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)v20);
  v8 = BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(&v22, &v21, v6, v7);
  v11 = v8;
  if ( v8 < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v19[3] = v11;
    v19[4] = this;
    v19[5] = *((_QWORD *)this + 8);
    v19[6] = this;
    WdLogEvent5_WdError(v19);
    return (unsigned int)v11;
  }
  else
  {
    v12 = *((_QWORD *)this + 8);
    v13 = 0;
    v14 = 0;
    v15 = *(unsigned __int16 *)(v12 + 20);
    if ( !*(_WORD *)(v12 + 20) )
      goto LABEL_17;
    while ( 1 )
    {
      v16 = 264LL * v14;
      if ( *(_DWORD *)(v16 + v12 + 64) == v22.LowPart
        && *(_DWORD *)(v16 + v12 + 68) == v22.HighPart
        && *(_DWORD *)(v16 + v12 + 76) == v21 )
      {
        break;
      }
      if ( ++v14 >= v15 )
        goto LABEL_17;
    }
    v17 = 0;
    do
    {
      if ( v17 == v14 || CCD_TOPOLOGY::IsSameCloneGroup(this, v17, v14, 0) )
        ++v13;
      ++v17;
    }
    while ( v17 < v15 );
    if ( !v13 )
    {
LABEL_17:
      *(_DWORD *)a2 = 8;
      return 0LL;
    }
    if ( v13 == 1 )
    {
      if ( v15 > 1 )
      {
        *(_DWORD *)a2 = 4;
        return 0LL;
      }
      if ( v15 == 1 )
      {
        *(_DWORD *)a2 = 1;
        return 0LL;
      }
    }
    else if ( v15 > 1 )
    {
      *(_DWORD *)a2 = 2;
      return 0LL;
    }
    return 3221225473LL;
  }
}
