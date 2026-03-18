/*
 * XREFs of ?RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C00E59D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0005CB8 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveCopyProtection(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  DMMVIDPNTOPOLOGY *v6; // rax
  __int64 v7; // rcx
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax

  v4 = (unsigned int)a3;
  v5 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6058);
  v6 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( v6 )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(v6, v5, v4);
    if ( Path )
    {
      v10 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(Path, D3DKMDT_VPPMT_NOPROTECTION);
      v13 = v10;
      if ( v10 < 0 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdError(v11);
        v17[3] = v5;
        v17[4] = v4;
        v17[5] = this;
        v17[6] = v13;
        WdLogEvent5_WdError(v17);
      }
      else
      {
        LODWORD(v13) = 0;
      }
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v16[3] = v5;
      v16[4] = v4;
      v16[5] = this;
      WdLogEvent5_WdError(v16);
      LODWORD(v13) = -1071774937;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    LODWORD(v13) = -1071774976;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, 6058);
  return (unsigned int)v13;
}
