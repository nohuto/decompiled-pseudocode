/*
 * XREFs of ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00C2D80
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0006688 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000733C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0045144 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00B9C9C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
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
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40[2]; // [rsp+30h] [rbp-38h] BYREF
  int v41; // [rsp+38h] [rbp-30h] BYREF
  __int64 v42; // [rsp+40h] [rbp-28h]

  v42 = 0LL;
  v5 = (__int64)this;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  v41 = 6026;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6026);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 6026);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v11 = v9;
  if ( v9 )
  {
    if ( (_DWORD)v6 == 254 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v29[3] = 254LL;
      v29[4] = v8;
      v29[5] = v7;
      v29[6] = v5;
      WdLogEvent5_WdError(v29);
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
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v19);
          v31[3] = v6;
          v31[4] = v8;
          v31[5] = v7;
          v31[6] = v5;
          WdLogEvent5_WdError(v31);
        }
        else
        {
          Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v11 + 160);
          v40[0] = v8;
          v40[1] = v7;
          v21 = VIDPN_MGR::FormalizeVidPnChange(
                  *(VIDPN_MGR **)(Container + 48),
                  (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
                  7,
                  a5,
                  v40);
          v5 = v21;
          if ( v21 < 0 )
          {
            if ( v21 == -1071774970 )
            {
              v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
              v32[3] = v8;
              v32[4] = v7;
              v32[5] = v6;
              WdLogEvent5_WdWarning(v32);
            }
            else
            {
              v36 = (_QWORD *)WdLogNewEntry5_WdError(v23);
              v36[3] = v6;
              v36[4] = v8;
              v36[5] = v7;
              v36[6] = v5;
              WdLogEvent5_WdError(v36);
            }
            if ( v17 == D3DKMDT_VPPS_UNPINNED )
              v37 = DMMVIDPNPRESENTPATH::UnpinContentScaling(v16, v33, v34, v35);
            else
              v37 = DMMVIDPNPRESENTPATH::PinContentScaling(v16, v17);
            if ( v37 < 0 )
            {
              v39 = WdLogNewEntry5_WdAssertion(v38);
              WdLogEvent5_WdAssertion(v39);
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
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
        v30[3] = v8;
        v30[4] = v7;
        v30[5] = v5;
        WdLogEvent5_WdWarning(v30);
        LODWORD(v5) = -1071774937;
      }
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v28 + 24) = v5;
    WdLogEvent5_WdError(v28);
    LODWORD(v5) = -1071774976;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v41);
  return (unsigned int)v5;
}
