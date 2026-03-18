/*
 * XREFs of ?RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C00A7C00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000977C (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveCopyProtection(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  DMMVIDPNTOPOLOGY *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax

  v4 = (unsigned int)a3;
  v5 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6058);
  v6 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( v6 )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(v6, v5, v4);
    if ( Path )
    {
      v12 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(Path, 1LL);
      v16 = v12;
      if ( v12 < 0 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
        v20[3] = v5;
        v20[4] = v4;
        v20[5] = this;
        v20[6] = v16;
        WdLogEvent5_WdError(v20);
      }
      else
      {
        LODWORD(v16) = 0;
      }
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
      v19[3] = v5;
      v19[4] = v4;
      v19[5] = this;
      WdLogEvent5_WdError(v19);
      LODWORD(v16) = -1071774937;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    LODWORD(v16) = -1071774976;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 6058);
  return (unsigned int)v16;
}
