/*
 * XREFs of ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C009B670
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002410 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v12; // rbp
  struct D3DKMDT_HVIDPN__ *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r14
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  int v17; // edi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // r14
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // r10
  _QWORD *v37; // rax
  _QWORD *v38; // rcx

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7044);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v11 = 0;
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !this || (v12 = this, *((_DWORD *)this + 16) != 1833172997) )
    v12 = 0LL;
  if ( !v12 )
  {
    v19 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    v11 = -1071774973;
    goto LABEL_20;
  }
  if ( !a2 || (v13 = a2, *((_DWORD *)a2 + 32) != 1833173004) )
    v13 = 0LL;
  if ( !v13 )
  {
    v20 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v20 + 24) = a2;
    WdLogEvent5_WdError(v20);
    v11 = -1071774968;
    goto LABEL_20;
  }
  v14 = *((_QWORD *)v13 + 14);
  if ( !v14 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !*(_QWORD *)(v14 + 40) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v22);
  }
  v15 = *(_QWORD *)(v14 + 40);
  if ( !*(_QWORD *)(v15 + 72) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v15 + 72) == v12 )
  {
    if ( *((_QWORD *)v13 + 14) != v14 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
      v31 = *((_QWORD *)v13 + 14);
      v30[4] = v13;
      v30[5] = v14;
      goto LABEL_42;
    }
    if ( v13 == *(struct D3DKMDT_HVIDPN__ **)(v14 + 120) )
    {
      v32 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v32 + 24) = v13;
      *(_QWORD *)(v32 + 32) = *(unsigned int *)(v14 + 24);
      WdLogEvent5_WdDmmEvent(v32);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)(v14 + 120), 0LL);
      if ( *((_DWORD *)v13 + 24) != 1 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v33, v7, v9, v34);
        WdLogEvent5_WdAssertion(v35);
      }
    }
    if ( *((_DWORD *)v13 + 24) == 1
      && DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference(*(_QWORD *)(v14 + 112), (__int64)v13) )
    {
      v37 = v13 + 2;
      v7 = *((_QWORD *)v13 + 1);
      v38 = (_QWORD *)*((_QWORD *)v13 + 2);
      if ( *(struct D3DKMDT_HVIDPN__ **)(v7 + 8) != v13 + 2 || (_QWORD *)*v38 != v37 )
        __fastfail(3u);
      *v38 = v7;
      *(_QWORD *)(v7 + 8) = v38;
      *v37 = 0LL;
      *((_QWORD *)v13 + 2) = 0LL;
      --*(_QWORD *)(v36 + 32);
    }
    v16 = (void (__fastcall ***)(_QWORD, __int64))(v13 + 22);
    v17 = _InterlockedDecrement((volatile signed __int32 *)v13 + 24);
    if ( v17 )
    {
      if ( v17 >= 0 )
        goto LABEL_20;
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v16, v7);
      v31 = v17;
LABEL_42:
      v30[3] = v31;
      WdLogEvent5_WdError(v30);
      goto LABEL_20;
    }
    if ( v16 )
      (**v16)(v16, 1LL);
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    if ( !*(_QWORD *)(v14 + 40) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
      WdLogEvent5_WdAssertion(v29);
    }
    v28[3] = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v14 + 40) + 64LL);
    v28[4] = v13;
    v28[5] = v12;
    WdLogEvent5_WdError(v28);
    v11 = -1071774928;
  }
LABEL_20:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v16, &EventProfilerExit, v9, 7044);
  return v11;
}
