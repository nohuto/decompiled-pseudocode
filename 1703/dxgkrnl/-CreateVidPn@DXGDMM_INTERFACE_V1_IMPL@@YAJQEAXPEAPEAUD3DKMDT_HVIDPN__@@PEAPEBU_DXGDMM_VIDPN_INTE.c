/*
 * XREFs of ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01D7C00
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C00E4AB0 (-QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4CB4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDPN__ **a3,
        const struct _DXGDMM_VIDPN_INTERFACE **a4)
{
  DXGDMM_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  VIDPN_MGR *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  struct _DXGDMM_VIDPN_INTERFACE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD v34[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v35; // [rsp+48h] [rbp+10h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v36; // [rsp+58h] [rbp+20h] BYREF

  v6 = this;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6052);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
        WdLogEvent5_WdAssertion(v15);
      }
      v16 = *((_QWORD *)v6 + 285);
      if ( v16 )
      {
        v17 = *(VIDPN_MGR **)(v16 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v34, (__int64)v17, v13, v14);
        v36 = 0LL;
        VIDPN_MGR::QueryDxgDmmVidPnInterface(v17, &v36, v18, v19);
        v35 = 0LL;
        v22 = VIDPN_MGR::CreateClientVidPn(v17, &v35, v20, v21);
        v6 = (DXGDMM_INTERFACE_V1_IMPL *)v22;
        if ( v22 >= 0 )
        {
          v28 = v35;
          v35 = 0LL;
          v29 = v36;
          *a2 = v28 & -(__int64)(v28 != -88);
          LODWORD(v6) = 0;
          *a3 = (struct D3DKMDT_HVIDPN__ *)v29;
        }
        else
        {
          v27 = WdLogNewEntry5_WdDmmEvent(v24, v23, v25, v26);
          *(_QWORD *)(v27 + 24) = v6;
          WdLogEvent5_WdDmmEvent(v27);
        }
        auto_rc<DMMVIDPN>::reset(&v35, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v34[0] + 40LL), v30, v31, v32);
        goto LABEL_18;
      }
      v10 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v10 + 24) = v6;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v10 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v10);
    LODWORD(v6) = -1071775742;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = v6;
    WdLogEvent5_WdError(v7);
    LODWORD(v6) = -1073741811;
  }
LABEL_18:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerExit, v9, 6052);
  return (unsigned int)v6;
}
