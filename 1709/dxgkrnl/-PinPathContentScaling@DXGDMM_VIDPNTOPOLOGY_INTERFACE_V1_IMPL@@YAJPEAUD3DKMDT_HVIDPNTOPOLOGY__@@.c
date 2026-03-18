/*
 * XREFs of ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00D69C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0006578 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00065A0 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A842C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a5)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rsi
  DMMVIDPNTOPOLOGY *v9; // rax
  __int64 v10; // rcx
  DMMVIDPNTOPOLOGY *v11; // r15
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DMMVIDPNPRESENTPATH *v16; // rbp
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v17; // r12d
  int v18; // eax
  __int64 v19; // rcx
  __int64 Container; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  int v32; // eax
  __int64 v33; // rax
  unsigned int v34[10]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (__int64)this;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6026);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v11 = v9;
  if ( v9 )
  {
    if ( (_DWORD)v6 == 254 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v27[3] = 254LL;
      v27[4] = v8;
      v27[5] = v7;
      v27[6] = v5;
      WdLogEvent5_WdError(v27);
      LODWORD(v5) = -1071774907;
    }
    else
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
      v16 = Path;
      if ( Path )
      {
        v17 = *((_DWORD *)Path + 28);
        v18 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v6);
        v5 = v18;
        if ( v18 < 0 )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdError(v19);
          v29[3] = v6;
          v29[4] = v8;
          v29[5] = v7;
          v29[6] = v5;
          WdLogEvent5_WdError(v29);
        }
        else
        {
          Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v11 + 160);
          v34[0] = v8;
          v34[1] = v7;
          v21 = VIDPN_MGR::FormalizeVidPnChange(
                  *(_QWORD *)(Container + 48),
                  (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
                  7,
                  a5,
                  v34);
          v5 = v21;
          if ( v21 < 0 )
          {
            if ( v21 == -1071774970 )
            {
              v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
              v30[3] = v8;
              v30[4] = v7;
              v30[5] = v6;
              WdLogEvent5_WdWarning(v30);
            }
            else
            {
              v31 = (_QWORD *)WdLogNewEntry5_WdError(v23);
              v31[3] = v6;
              v31[4] = v8;
              v31[5] = v7;
              v31[6] = v5;
              WdLogEvent5_WdError(v31);
            }
            if ( v17 == D3DKMDT_VPPS_UNPINNED )
              v32 = DMMVIDPNPRESENTPATH::UnpinContentScaling(v16);
            else
              v32 = DMMVIDPNPRESENTPATH::PinContentScaling(v16, v17);
            if ( v32 < 0 )
            {
              v33 = WdLogNewEntry5_WdAssertion(v23);
              WdLogEvent5_WdAssertion(v33);
            }
          }
          else
          {
            LODWORD(v5) = 0;
          }
        }
      }
      else
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
        v28[3] = v8;
        v28[4] = v7;
        v28[5] = v5;
        WdLogEvent5_WdWarning(v28);
        LODWORD(v5) = -1071774937;
      }
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v26 + 24) = v5;
    WdLogEvent5_WdError(v26);
    LODWORD(v5) = -1071774976;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, 6026);
  return (unsigned int)v5;
}
