/*
 * XREFs of ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01F1050
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A881C (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnCopy(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDPN__ *const a3,
        struct D3DKMDT_HVIDPN__ **a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  const struct DMMVIDPN *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbx
  struct D3DKMDT_HVIDPN__ *v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD v26[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27; // [rsp+60h] [rbp+18h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6054);
  if ( a3 && a4 )
  {
    *(_QWORD *)a3 = 0LL;
    *a4 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      {
        v14 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v14);
      }
      if ( *((_QWORD *)this + 288) )
      {
        v17 = (const struct DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
        if ( v17 )
        {
          v19 = *(_QWORD *)(v15 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v26, v19);
          v20 = *(struct D3DKMDT_HVIDPN__ **)(v19 + 424);
          v27 = 0LL;
          v21 = VIDPN_MGR::CreateVidPnCopyForClient(v19, v17, &v27);
          v11 = v21;
          if ( v21 >= 0 )
          {
            v24 = v27;
            v27 = 0LL;
            *(_QWORD *)a3 = v24 & -(__int64)(v24 != -88);
            LODWORD(v11) = 0;
            *a4 = v20;
          }
          else
          {
            v23 = WdLogNewEntry5_WdDmmEvent(v22);
            *(_QWORD *)(v23 + 24) = v11;
            WdLogEvent5_WdDmmEvent(v23);
          }
          auto_rc<DMMVIDPN>::reset(&v27, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26[0] + 40LL));
        }
        else
        {
          v18 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v18 + 24) = a2;
          WdLogEvent5_WdError(v18);
          LODWORD(v11) = -1071774973;
        }
        goto LABEL_20;
      }
      v12 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v12 + 24) = this;
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v12);
    LODWORD(v11) = -1071775742;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = a2;
    WdLogEvent5_WdError(v8);
    LODWORD(v11) = -1073741811;
  }
LABEL_20:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 6054);
  return (unsigned int)v11;
}
