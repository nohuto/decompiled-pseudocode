/*
 * XREFs of ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4B80
 * Callers:
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01D7DA0 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01E070C (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C00020A8 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00DEC70 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(__int64 a1, const struct DMMVIDPN *a2, __int64 *a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  DMMVIDPN *v14; // rax
  DMMVIDPN *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v10 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v10 + 24) = a2;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
    WdLogEvent5_WdAssertion(v30);
  }
  v13 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v10 + 32) = *(_QWORD *)(v13 + 16);
  if ( !a2 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v13, v8, v11, v12);
    WdLogEvent5_WdAssertion(v31);
  }
  if ( !a3 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v13, v8, v11, v12);
    WdLogEvent5_WdAssertion(v32);
  }
  auto_rc<DMMVIDPN>::reset(a3, 0LL);
  v36 = 0LL;
  v14 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v14 )
    v15 = DMMVIDPN::DMMVIDPN(v14, a2);
  else
    v15 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v36, (__int64)v15);
  v17 = v36;
  if ( v36 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v36 + 72))(v36 + 72) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 40) + 8LL) != CurrentThread )
      {
        v29 = WdLogNewEntry5_WdAssertion(CurrentThread, v18, v20, v21);
        WdLogEvent5_WdAssertion(v29);
      }
      v23 = v36;
      if ( Set<DMMVIDPN>::Add(a1 + 96, v36) != 1 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v35);
      }
      v36 = 0LL;
      auto_rc<DMMVIDPN>::reset(a3, v23);
    }
    else
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19, v18, v20, v21);
      v34[3] = v17;
      v34[4] = a2;
      v34[5] = *(int *)(v17 + 80);
      WdLogEvent5_WdDmmEvent(v34);
      v7 = *(_DWORD *)(v17 + 80);
    }
  }
  else
  {
    v33 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v33 + 24) = a2;
    WdLogEvent5_WdLowResource(v33);
    v7 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v36, 0LL);
  return v7;
}
