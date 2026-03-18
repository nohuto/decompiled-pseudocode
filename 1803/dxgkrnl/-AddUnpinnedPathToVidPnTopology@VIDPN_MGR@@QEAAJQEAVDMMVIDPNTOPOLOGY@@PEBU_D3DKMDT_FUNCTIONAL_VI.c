/*
 * XREFs of ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0211124
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C021CE80 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00032EC (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0003318 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00B9ABC (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C021EA2C (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 VidPnSourceId; // rbp
  __int64 VidPnTargetId; // r14
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  _QWORD *v18; // rax
  struct DMMVIDPNPRESENTPATH *v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rsi
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  struct DMMVIDPNPRESENTPATH *v26; // [rsp+60h] [rbp+8h] BYREF
  struct DMMVIDPNPRESENTPATH *v27; // [rsp+68h] [rbp+10h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  VidPnSourceId = a3->VidPnSourceId;
  VidPnTargetId = a3->VidPnTargetId;
  v26 = 0LL;
  v27 = 0LL;
  v12 = DMMVIDPNTOPOLOGY::CreateNewPath(a2, a3, &v27);
  v17 = v12;
  if ( v12 >= 0 )
  {
    v19 = v27;
    *((_WORD *)v27 + 54) = *(_WORD *)&a3[1].CopyProtection.OEMCopyProtection[44];
    auto_ptr<DMMVIDPNPRESENTPATH>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v26,
      (__int64 (__fastcall ***)(_QWORD, __int64))v19);
    v20 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v26, D3DKMDT_MCC_ENFORCE, 1u);
    v22 = v20;
    LODWORD(v17) = -1071774957;
    if ( v20 == -1071774957
      || (LODWORD(v17) = -1071774920, v20 == -1071774920)
      || (LODWORD(v17) = -1071774975, v20 == -1071774975) )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21);
      v23[3] = VidPnSourceId;
      v23[4] = VidPnTargetId;
      v23[5] = a2;
      WdLogEvent5_WdDmmEvent(v23);
    }
    else if ( v20 >= 0 )
    {
      v26 = 0LL;
      LODWORD(v17) = 0;
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v24[3] = VidPnSourceId;
      v24[4] = VidPnTargetId;
      v24[5] = a2;
      v24[6] = v22;
      WdLogEvent5_WdError(v24);
      LODWORD(v17) = v22;
    }
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    v18[3] = VidPnSourceId;
    v18[4] = VidPnTargetId;
    v18[5] = v17;
  }
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v26);
  return (unsigned int)v17;
}
