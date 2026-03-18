/*
 * XREFs of ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00EFD50
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000B5A0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v9; // rbp
  struct D3DKMDT_HVIDPN__ *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r14
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // r14
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r10
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rdx

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7044);
  v5 = WdLogNewEntry5_WdTrace(this, a2);
  v8 = 0;
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( !this || (v9 = this, *((_DWORD *)this + 16) != 1833172997) )
    v9 = 0LL;
  if ( !v9 )
  {
    v16 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    v8 = -1071774973;
    goto LABEL_20;
  }
  if ( !a2 || (v10 = a2, *((_DWORD *)a2 + 32) != 1833173004) )
    v10 = 0LL;
  if ( !v10 )
  {
    v17 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v17 + 24) = a2;
    WdLogEvent5_WdError(v17);
    v8 = -1071774968;
    goto LABEL_20;
  }
  v11 = *((_QWORD *)v10 + 14);
  if ( !v11 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !*(_QWORD *)(v11 + 40) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v19);
  }
  v12 = *(_QWORD *)(v11 + 40);
  if ( !*(_QWORD *)(v12 + 72) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v12 + 72) == v9 )
  {
    if ( *((_QWORD *)v10 + 14) != v11 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v6);
      v25 = *((_QWORD *)v10 + 14);
      v24[4] = v10;
      v24[5] = v11;
      goto LABEL_42;
    }
    if ( v10 == *(struct D3DKMDT_HVIDPN__ **)(v11 + 120) )
    {
      v26 = WdLogNewEntry5_WdDmmEvent(v6);
      *(_QWORD *)(v26 + 24) = v10;
      *(_QWORD *)(v26 + 32) = *(unsigned int *)(v11 + 24);
      WdLogEvent5_WdDmmEvent(v26);
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)(v11 + 120), 0LL);
      if ( *((_DWORD *)v10 + 24) != 1 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v28);
      }
    }
    if ( *((_DWORD *)v10 + 24) == 1
      && DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
           *(_QWORD *)(v11 + 112),
           (__int64)v10) )
    {
      v30 = v10 + 2;
      v31 = *((_QWORD *)v10 + 1);
      if ( *(struct D3DKMDT_HVIDPN__ **)(v31 + 8) != v10 + 2
        || (v32 = (_QWORD *)*((_QWORD *)v10 + 2), (_QWORD *)*v32 != v30) )
      {
        __fastfail(3u);
      }
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      *v30 = 0LL;
      *((_QWORD *)v10 + 2) = 0LL;
      --*(_QWORD *)(v29 + 32);
    }
    v13 = (void (__fastcall ***)(_QWORD, __int64))(v10 + 22);
    v14 = _InterlockedDecrement((volatile signed __int32 *)v10 + 24);
    if ( v14 )
    {
      if ( v14 >= 0 )
        goto LABEL_20;
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v25 = v14;
LABEL_42:
      v24[3] = v25;
      WdLogEvent5_WdError(v24);
      goto LABEL_20;
    }
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  else
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    if ( !*(_QWORD *)(v11 + 40) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v23);
    }
    v22[3] = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v11 + 40) + 64LL);
    v22[4] = v10;
    v22[5] = v9;
    WdLogEvent5_WdError(v22);
    v8 = -1071774928;
  }
LABEL_20:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v13, &EventProfilerExit, v7, 7044);
  return v8;
}
