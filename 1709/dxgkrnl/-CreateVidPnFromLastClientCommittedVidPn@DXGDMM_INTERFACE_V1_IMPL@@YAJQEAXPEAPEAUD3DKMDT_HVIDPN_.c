/*
 * XREFs of ?CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C00E3A60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8A58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnFromLastClientCommittedVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDPN__ **a3,
        const struct _DXGDMM_VIDPN_INTERFACE **a4)
{
  DXGDMM_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  struct D3DKMDT_HVIDPN__ *v10; // rbp
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+48h] [rbp+10h] BYREF
  __int64 v22; // [rsp+58h] [rbp+20h] BYREF

  v6 = this;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6053);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v7);
        WdLogEvent5_WdAssertion(v19);
      }
      v8 = *((_QWORD *)v6 + 288);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, v9);
        v10 = *(struct D3DKMDT_HVIDPN__ **)(v9 + 424);
        v21 = 0LL;
        v11 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn((const struct DMMVIDPN **)v9, &v21);
        v6 = (DXGDMM_INTERFACE_V1_IMPL *)v11;
        if ( v11 < 0 )
        {
          v20 = WdLogNewEntry5_WdDmmEvent(v12);
          *(_QWORD *)(v20 + 24) = v6;
          WdLogEvent5_WdDmmEvent(v20);
        }
        else
        {
          v13 = v21;
          v21 = 0LL;
          *a2 = v13 & -(__int64)(v13 != -88);
          LODWORD(v6) = 0;
          *a3 = v10;
        }
        auto_rc<DMMVIDPN>::reset(&v21, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40));
        goto LABEL_11;
      }
      v18 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v18 + 24) = v6;
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v18 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v18);
    LODWORD(v6) = -1071775742;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v17 + 24) = 0LL;
    *(_QWORD *)(v17 + 32) = v6;
    WdLogEvent5_WdError(v17);
    LODWORD(v6) = -1073741811;
  }
LABEL_11:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, 6053);
  return (unsigned int)v6;
}
