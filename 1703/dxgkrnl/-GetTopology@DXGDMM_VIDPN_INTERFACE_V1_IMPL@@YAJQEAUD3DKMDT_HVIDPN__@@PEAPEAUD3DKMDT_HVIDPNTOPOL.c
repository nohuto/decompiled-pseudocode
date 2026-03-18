/*
 * XREFs of ?GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00AD2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000C45C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00E4A7C (-QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::GetTopology(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ **a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  VIDPN_MGR *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v19; // [rsp+48h] [rbp+10h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6033);
  v7 = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)a2 = 0LL;
    *a3 = 0LL;
    v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    v11 = v8;
    if ( v8 )
    {
      v12 = *(VIDPN_MGR **)(v8 + 48);
      if ( *((_QWORD *)v12 + 11) == v8 )
      {
        v18 = WdLogNewEntry5_WdError(v12, v9);
        *(_QWORD *)(v18 + 24) = v11;
        WdLogEvent5_WdError(v18);
        v7 = -1071774909;
      }
      else
      {
        v19 = 0LL;
        VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(v12, &v19);
        v14 = v11 + 96;
        *(_QWORD *)a2 = (v11 + 96) & -(__int64)(v11 != -289);
        *a3 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)v19;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v17 + 24) = this;
      WdLogEvent5_WdError(v17);
      v7 = -1071774973;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = this;
    WdLogEvent5_WdError(v16);
    v7 = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v13, 6033);
  return v7;
}
