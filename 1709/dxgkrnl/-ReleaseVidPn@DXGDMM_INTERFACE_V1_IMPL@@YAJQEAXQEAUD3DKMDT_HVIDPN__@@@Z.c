/*
 * XREFs of ?ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00E3B60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::ReleaseVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDPN__ *const a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6055);
  v5 = 0;
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v16);
    }
    v7 = *((_QWORD *)this + 288);
    if ( v7 )
    {
      v9 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v7 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v19, v10);
        if ( *(_QWORD *)(v9 + 48) == v10 )
        {
          ReferenceCounted::Release((ReferenceCounted *)(v9 + 24));
        }
        else
        {
          v18 = WdLogNewEntry5_WdError(v11);
          *(_QWORD *)(v18 + 24) = v9;
          *(_QWORD *)(v18 + 32) = v10;
          WdLogEvent5_WdError(v18);
        }
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40));
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v17 + 24) = a2;
        WdLogEvent5_WdError(v17);
        v5 = -1071774973;
      }
      goto LABEL_10;
    }
    v15 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v15 + 24) = this;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v15 + 24) = 0LL;
  }
  WdLogEvent5_WdError(v15);
  v5 = -1071775742;
LABEL_10:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, 6055);
  return v5;
}
