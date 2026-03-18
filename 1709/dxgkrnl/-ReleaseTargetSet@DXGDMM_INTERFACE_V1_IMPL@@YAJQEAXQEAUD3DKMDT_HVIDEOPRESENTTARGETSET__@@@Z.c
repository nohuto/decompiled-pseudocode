/*
 * XREFs of ?ReleaseTargetSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C01F2000
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C0012CF8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::ReleaseTargetSet(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6051);
  v5 = 0;
  if ( !this )
  {
    v6 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_10:
    WdLogEvent5_WdError(v6);
    v5 = -1071775742;
    goto LABEL_14;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !*((_QWORD *)this + 288) )
  {
    v6 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v6 + 24) = this;
    goto LABEL_10;
  }
  v11 = ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle(a2);
  if ( v11 )
  {
    ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = a2;
    WdLogEvent5_WdError(v13);
    v5 = -1071774954;
  }
LABEL_14:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 6051);
  return v5;
}
