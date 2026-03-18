/*
 * XREFs of ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01D7DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000C45C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C00E4AB0 (-QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4B80 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  const struct DMMVIDPN *v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  VIDPN_MGR *v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _DXGDMM_VIDPN_INTERFACE *v39; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v40[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v41; // [rsp+60h] [rbp+18h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6054);
  if ( a3 && a4 )
  {
    *(_QWORD *)a3 = 0LL;
    *a4 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      {
        v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
        WdLogEvent5_WdAssertion(v17);
      }
      if ( *((_QWORD *)this + 285) )
      {
        v20 = (const struct DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
        if ( v20 )
        {
          v24 = *(VIDPN_MGR **)(v18 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v40, (__int64)v24, v21, v22);
          v39 = 0LL;
          VIDPN_MGR::QueryDxgDmmVidPnInterface(v24, &v39, v25, v26);
          v41 = 0LL;
          v28 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v24, v20, &v41, v27);
          v11 = v28;
          if ( v28 >= 0 )
          {
            v34 = v41;
            v41 = 0LL;
            *(_QWORD *)a3 = v34 & -(__int64)(v34 != -88);
            LODWORD(v11) = 0;
            *a4 = (struct D3DKMDT_HVIDPN__ *)v39;
          }
          else
          {
            v33 = WdLogNewEntry5_WdDmmEvent(v30, v29, v31, v32);
            *(_QWORD *)(v33 + 24) = v11;
            WdLogEvent5_WdDmmEvent(v33);
          }
          auto_rc<DMMVIDPN>::reset(&v41, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v40[0] + 40LL), v35, v36, v37);
        }
        else
        {
          v23 = WdLogNewEntry5_WdError(v19, v18);
          *(_QWORD *)(v23 + 24) = a2;
          WdLogEvent5_WdError(v23);
          LODWORD(v11) = -1071774973;
        }
        goto LABEL_20;
      }
      v12 = WdLogNewEntry5_WdError(v14, 0LL);
      *(_QWORD *)(v12 + 24) = this;
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v12);
    LODWORD(v11) = -1071775742;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = a2;
    WdLogEvent5_WdError(v8);
    LODWORD(v11) = -1073741811;
  }
LABEL_20:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 6054);
  return (unsigned int)v11;
}
