/*
 * XREFs of ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A881C
 * Callers:
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8A58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01F1050 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01FA7C4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000E490 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00A50B0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(__int64 a1, const struct DMMVIDPN *a2, __int64 *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  DMMVIDPN *PoolWithTag; // rax
  DMMVIDPN *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v8 + 24) = a2;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v20);
  }
  v9 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v8 + 32) = *(_QWORD *)(v9 + 16);
  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a3 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v22);
  }
  auto_rc<DMMVIDPN>::reset(a3, 0LL);
  v26 = 0LL;
  PoolWithTag = (DMMVIDPN *)ExAllocatePoolWithTag(PagedPool, 0x140uLL, 0x4E506456u);
  if ( PoolWithTag )
    v11 = DMMVIDPN::DMMVIDPN(PoolWithTag, a2);
  else
    v11 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v26, (__int64)v11);
  v13 = v26;
  if ( v26 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v26 + 72))(v26 + 72) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 40) + 8LL) != CurrentThread )
      {
        v19 = WdLogNewEntry5_WdAssertion(CurrentThread);
        WdLogEvent5_WdAssertion(v19);
      }
      v16 = v26;
      if ( Set<DMMVIDPN>::Add(a1 + 96, v26) != 1 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v17);
        WdLogEvent5_WdAssertion(v25);
      }
      v26 = 0LL;
      auto_rc<DMMVIDPN>::reset(a3, v16);
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v14);
      v24[3] = v13;
      v24[4] = a2;
      v24[5] = *(int *)(v13 + 80);
      WdLogEvent5_WdDmmEvent(v24);
      v6 = *(_DWORD *)(v13 + 80);
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v23 + 24) = a2;
    WdLogEvent5_WdLowResource(v23);
    v6 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v26, 0LL);
  return v6;
}
