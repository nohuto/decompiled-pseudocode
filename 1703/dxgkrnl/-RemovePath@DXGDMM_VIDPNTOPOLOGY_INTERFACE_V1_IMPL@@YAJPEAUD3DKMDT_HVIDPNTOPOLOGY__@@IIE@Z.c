/*
 * XREFs of ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C01D9180
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01D3910 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemovePath(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDPNTOPOLOGY *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 Container; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r9
  _QWORD *v19; // rax

  v5 = (unsigned int)a3;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6024);
  v8 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
  v11 = (struct DMMVIDPNTOPOLOGY *)v8;
  if ( v8 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer(v8 + 160);
    v16 = VIDPN_MGR::RemovePathFromVidPnTopology(*(VIDPN_MGR **)(Container + 48), v11, v7, v5, a4);
    v6 = v16;
    if ( v16 >= 0 )
    {
      LODWORD(v6) = 0;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v17, v14, v18);
      v19[3] = v7;
      v19[4] = v5;
      v19[5] = v11;
      v19[6] = v6;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v6;
    WdLogEvent5_WdError(v12);
    LODWORD(v6) = -1071774976;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 6024);
  return (unsigned int)v6;
}
