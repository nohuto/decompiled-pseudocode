/*
 * XREFs of ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA08C
 * Callers:
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C021A310 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0228370 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000A8EC (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00BC9A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(__int64 a1, const struct DMMVIDPN *a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rax
  DMMVIDPN *v11; // rax
  DMMVIDPN *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
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

  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v9 = 0;
  *(_QWORD *)(v8 + 24) = a2;
  v10 = *(_QWORD *)(a1 + 8);
  if ( !v10 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v20);
    v10 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(v8 + 32) = *(_QWORD *)(v10 + 16);
  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a3 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v22);
  }
  auto_rc<DMMVIDPN>::reset(a3, 0LL);
  v26 = 0LL;
  v11 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v11 )
    v12 = DMMVIDPN::DMMVIDPN(v11, a2);
  else
    v12 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v26, (__int64)v12);
  v14 = v26;
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
      v24 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v24[3] = v14;
      v24[4] = a2;
      v24[5] = *(int *)(v14 + 80);
      WdLogEvent5_WdDmmEvent(v24);
      v9 = *(_DWORD *)(v14 + 80);
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v23 + 24) = a2;
    WdLogEvent5_WdLowResource(v23);
    v9 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v26, 0LL);
  return v9;
}
