/*
 * XREFs of ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01DAEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0002828 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E0C04 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E0DB8 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1350 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 VidPnTargetId; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DMMVIDPNTOPOLOGY *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  struct DMMVIDPNPRESENTPATH *v20; // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbp
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  struct DMMVIDPNPRESENTPATH *v37; // [rsp+48h] [rbp+10h] BYREF
  struct DMMVIDPNPRESENTPATH *v38; // [rsp+50h] [rbp+18h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7041);
  if ( a2 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v10[3] = a2->VidPnSourceId;
    v10[4] = a2->VidPnTargetId;
    v10[5] = a2;
    v10[6] = this;
    v15 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v15 )
    {
      if ( a2->Content == D3DKMDT_VPPC_UNINITIALIZED )
      {
        v17 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
        *(_QWORD *)(v17 + 24) = a2;
        WdLogEvent5_WdWarning(v17);
        a2->Content = D3DKMDT_VPPC_NOTSPECIFIED;
      }
      if ( a2->CopyProtection.CopyProtectionType == D3DKMDT_VPPMT_UNINITIALIZED )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
        v18[3] = a2->VidPnSourceId;
        v18[4] = a2->VidPnTargetId;
        v18[5] = this;
        WdLogEvent5_WdWarning(v18);
        memset(a2->CopyProtection.OEMCopyProtection, 0, sizeof(a2->CopyProtection.OEMCopyProtection));
        a2->CopyProtection.CopyProtectionSupport = 0;
        *(_DWORD *)&a2->CopyProtection.CopyProtectionSupport |= 1u;
        a2->CopyProtection.APSTriggerBits = 0;
        a2->CopyProtection.CopyProtectionType = D3DKMDT_VPPMT_NOPROTECTION;
      }
      if ( a2->GammaRamp.Type != D3DDDI_GAMMARAMP_DEFAULT || a2->GammaRamp.DataSize || a2->GammaRamp.Data.pRgb256x3x16 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
        v19[3] = a2->GammaRamp.Type;
        v19[4] = a2->VidPnSourceId;
        v19[5] = a2->VidPnTargetId;
        v19[6] = this;
        WdLogEvent5_WdWarning(v19);
        a2->GammaRamp.DataSize = 0LL;
        a2->GammaRamp.Data.pRgb256x3x16 = 0LL;
        a2->GammaRamp.Type = D3DDDI_GAMMARAMP_DEFAULT;
      }
      v20 = 0LL;
      v37 = 0LL;
      v38 = 0LL;
      v21 = DMMVIDPNTOPOLOGY::CreateNewPath(v15, a2, &v37, v14);
      v26 = v21;
      LODWORD(v9) = -1071774970;
      if ( v21 == -1071774970 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
        v27[3] = a2->VidPnSourceId;
        v27[4] = a2->VidPnTargetId;
        v27[5] = -1071774970LL;
        WdLogEvent5_WdError(v27);
      }
      else if ( v21 >= 0 )
      {
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(
          (__int64 (__fastcall ****)(_QWORD, __int64))&v38,
          (__int64 (__fastcall ***)(_QWORD, __int64))v37);
        v20 = v38;
        v30 = DMMVIDPNTOPOLOGY::AddPath(v15, v38, 2LL, v29);
        v9 = v30;
        if ( v30 >= 0 )
        {
          v20 = 0LL;
          LODWORD(v9) = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v15, a2);
        }
        else
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32, v31, v33, v34);
          v35[3] = a2->VidPnSourceId;
          v35[4] = a2->VidPnTargetId;
          v35[5] = v15;
          v35[6] = v9;
          WdLogEvent5_WdDmmEvent(v35);
        }
      }
      else
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
        LODWORD(v9) = v26;
        v28[3] = a2->VidPnSourceId;
        VidPnTargetId = a2->VidPnTargetId;
        v28[4] = VidPnTargetId;
        v28[5] = v26;
      }
      if ( v20 )
        (**(void (__fastcall ***)(struct DMMVIDPNPRESENTPATH *, __int64))v20)(v20, 1LL);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v16 + 24) = this;
      WdLogEvent5_WdError(v16);
      LODWORD(v9) = -1071774976;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = this;
    WdLogEvent5_WdError(v6);
    LODWORD(v9) = -1071774951;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(VidPnTargetId, &EventProfilerExit, v8, 7041);
  return (unsigned int)v9;
}
