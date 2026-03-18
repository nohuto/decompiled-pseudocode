/*
 * XREFs of BmlUnPinPartialPathModalityOnPath @ 0x1C01DF5A4
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C00F24D8 (BmlPinNextBestTargetMode.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1C01DF4FC (BmlUnPinAllPathsPartialModalityFromSource.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?QueryDxgDmmVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00E4A14 (-QueryDxgDmmVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERF.c)
 *     ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00E4A7C (-QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z.c)
 */

__int64 __fastcall BmlUnPinPartialPathModalityOnPath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  VIDPN_MGR *v18; // r15
  __int64 v19; // r8
  __int64 v20; // r9
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v21; // r13
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r12d
  _QWORD *v26; // rax
  __int64 v27; // r9
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rbp
  bool v31; // zf
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // ebp
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v39; // [rsp+70h] [rbp+8h] BYREF
  struct _DXGDMM_VIDPNTARGETMODESET_INTERFACE *v40; // [rsp+78h] [rbp+10h] BYREF
  __int64 v41; // [rsp+88h] [rbp+20h] BYREF

  v4 = (unsigned int)a3;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = v4;
  v10 = 104 * v4;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(v10 + a1 + 16) + 24LL),
           *(_DWORD *)(*(_QWORD *)(v10 + a1 + 16) + 28LL));
  if ( Path )
  {
    v18 = *(VIDPN_MGR **)(a2 + 48);
    VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(v18, &v39, v14, v15);
    v21 = v39;
    if ( (*((_DWORD *)Path + 29) == 254
       || (v22 = a2 + 96,
           LOBYTE(v22) = 1,
           v25 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))v39 + 11))(
                   (a2 + 96) & -(__int64)(a2 != -289),
                   *(unsigned int *)(*(_QWORD *)(v10 + a1 + 16) + 24LL),
                   *(unsigned int *)(*(_QWORD *)(v10 + a1 + 16) + 28LL),
                   v22),
           v25 >= 0))
      && (*((_DWORD *)Path + 28) == 254
       || (v27 = a2 + 96,
           LOBYTE(v27) = 1,
           v25 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))v21 + 9))(
                   (a2 + 96) & -(__int64)(a2 != -289),
                   *(unsigned int *)(*(_QWORD *)(v10 + a1 + 16) + 24LL),
                   *(unsigned int *)(*(_QWORD *)(v10 + a1 + 16) + 28LL),
                   v27),
           v25 >= 0)) )
    {
      v28 = *((_QWORD *)Path + 12);
      v29 = *(_QWORD *)(v28 + 104);
      if ( v29 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v29 + 96));
        v30 = *(_QWORD *)(v28 + 104);
      }
      else
      {
        v30 = 0LL;
      }
      v31 = *(_QWORD *)(v30 + 144) == 0LL;
      v41 = v30;
      if ( v31
        || (VIDPN_MGR::QueryDxgDmmVidPnTargetModeSetInterface(v18, &v40, v19, v20),
            LOBYTE(v32) = 1,
            v35 = (*((__int64 (__fastcall **)(__int64, __int64))v40 + 7))(v30 & -(__int64)(v30 != -137), v32),
            v35 >= 0) )
      {
        v35 = 0;
      }
      else
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v36, v37);
        v38[3] = v9;
        v38[4] = a2;
        v38[5] = *(unsigned int *)(*(_QWORD *)(v10 + a1 + 16) + 24LL);
        v38[6] = *(unsigned int *)(*(_QWORD *)(v10 + a1 + 16) + 28LL);
        WdLogEvent5_WdWarning(v38);
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v41, 0LL);
      return (unsigned int)v35;
    }
    else
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v19, v20);
      v26[3] = v9;
      v26[4] = a2;
      v26[5] = *(unsigned int *)(*(_QWORD *)(v10 + a1 + 16) + 24LL);
      v26[6] = *(unsigned int *)(*(_QWORD *)(v10 + a1 + 16) + 28LL);
      WdLogEvent5_WdWarning(v26);
      return (unsigned int)v25;
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v14, v15);
    v16[3] = v9;
    v16[4] = a2;
    v16[5] = *(unsigned int *)(*(_QWORD *)(v10 + a1 + 16) + 24LL);
    v16[6] = *(unsigned int *)(*(_QWORD *)(v10 + a1 + 16) + 28LL);
    WdLogEvent5_WdWarning(v16);
    return 3223192345LL;
  }
}
