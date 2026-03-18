/*
 * XREFs of ?AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01F0C80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A80A8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  struct DMMVIDPNTOPOLOGY *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 Container; // rax
  int v16; // eax
  __int64 v17; // rdx
  _QWORD *v18; // rax

  v6 = (unsigned int)a3;
  v7 = (__int64)this;
  v8 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6023);
  v9 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v7);
  v11 = (struct DMMVIDPNTOPOLOGY *)v9;
  if ( v9 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer(v9 + 160);
    v16 = VIDPN_MGR::AddPathToVidPnTopology(
            *(VIDPN_MGR **)(Container + 48),
            v11,
            v8,
            v6,
            a4,
            a5,
            1u,
            D3DKMDT_MCC_ENFORCE);
    v7 = v16;
    if ( v16 >= 0 )
    {
      LODWORD(v7) = 0;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v17);
      v18[3] = v8;
      v18[4] = v6;
      v18[5] = v11;
      v18[6] = v7;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = v7;
    WdLogEvent5_WdError(v12);
    LODWORD(v7) = -1071774976;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, 6023);
  return (unsigned int)v7;
}
