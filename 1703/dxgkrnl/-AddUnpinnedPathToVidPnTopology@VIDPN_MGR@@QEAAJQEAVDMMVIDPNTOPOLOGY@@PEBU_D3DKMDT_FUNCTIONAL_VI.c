/*
 * XREFs of ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E3E84
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0002828 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1350 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00E4468 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 */

__int64 __fastcall VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 VidPnSourceId; // r15
  __int64 VidPnTargetId; // r12
  struct DMMVIDPNPRESENTPATH *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  struct DMMVIDPNPRESENTPATH *v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbp
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  struct DMMVIDPNPRESENTPATH *v31; // [rsp+60h] [rbp+8h] BYREF
  struct DMMVIDPNPRESENTPATH *v32; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != CurrentThread )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, a2, a3, CurrentThread);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !a2 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2, a3, CurrentThread);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !a3 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2, a3, CurrentThread);
    WdLogEvent5_WdAssertion(v27);
  }
  VidPnSourceId = a3->VidPnSourceId;
  VidPnTargetId = a3->VidPnTargetId;
  v10 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v11 = DMMVIDPNTOPOLOGY::CreateNewPath(a2, a3, &v31, (__int64)CurrentThread);
  v16 = v11;
  if ( v11 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v28[3] = VidPnSourceId;
    v28[4] = VidPnTargetId;
    v28[5] = v16;
  }
  else
  {
    v17 = v31;
    *((_WORD *)v31 + 54) = *(_WORD *)&a3[1].CopyProtection.OEMCopyProtection[44];
    auto_ptr<DMMVIDPNPRESENTPATH>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v32,
      (__int64 (__fastcall ***)(_QWORD, __int64))v17);
    v10 = v32;
    v18 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v32, D3DKMDT_MCC_ENFORCE, 1u);
    v23 = v18;
    LODWORD(v16) = -1071774957;
    if ( v18 == -1071774957
      || (LODWORD(v16) = -1071774920, v18 == -1071774920)
      || (LODWORD(v16) = -1071774975, v18 == -1071774975) )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v20, v19, v21, v22);
      v29[3] = VidPnSourceId;
      v29[4] = VidPnTargetId;
      v29[5] = a2;
      WdLogEvent5_WdDmmEvent(v29);
    }
    else if ( v18 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
      v30[3] = VidPnSourceId;
      v30[4] = VidPnTargetId;
      v30[5] = a2;
      v30[6] = v23;
      WdLogEvent5_WdError(v30);
      LODWORD(v16) = v23;
    }
    else
    {
      v10 = 0LL;
      LODWORD(v16) = 0;
    }
  }
  if ( v10 )
    (**(void (__fastcall ***)(struct DMMVIDPNPRESENTPATH *, __int64))v10)(v10, 1LL);
  return (unsigned int)v16;
}
