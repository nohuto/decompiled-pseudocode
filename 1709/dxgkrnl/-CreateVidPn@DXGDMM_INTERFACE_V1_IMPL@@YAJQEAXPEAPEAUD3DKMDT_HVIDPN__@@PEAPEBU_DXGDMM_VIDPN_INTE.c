/*
 * XREFs of ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01F0EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8950 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
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
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  struct VIDPN_MGR *v14; // rbx
  struct D3DKMDT_HVIDPN__ *v15; // rbp
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v21; // [rsp+48h] [rbp+10h] BYREF
  __int64 v22; // [rsp+58h] [rbp+20h] BYREF

  v6 = this;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6052);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
      {
        v12 = WdLogNewEntry5_WdAssertion(v11);
        WdLogEvent5_WdAssertion(v12);
      }
      v13 = *((_QWORD *)v6 + 288);
      if ( v13 )
      {
        v14 = *(struct VIDPN_MGR **)(v13 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, (__int64)v14);
        v15 = (struct D3DKMDT_HVIDPN__ *)*((_QWORD *)v14 + 53);
        v21 = 0LL;
        v16 = VIDPN_MGR::CreateClientVidPn(v14, &v21);
        v6 = (DXGDMM_INTERFACE_V1_IMPL *)v16;
        if ( v16 >= 0 )
        {
          v19 = v21;
          v21 = 0LL;
          *a2 = v19 & -(__int64)(v19 != -88);
          LODWORD(v6) = 0;
          *a3 = v15;
        }
        else
        {
          v18 = WdLogNewEntry5_WdDmmEvent(v17);
          *(_QWORD *)(v18 + 24) = v6;
          WdLogEvent5_WdDmmEvent(v18);
        }
        auto_rc<DMMVIDPN>::reset(&v21, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40));
        goto LABEL_18;
      }
      v10 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v10 + 24) = v6;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v10 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v10);
    LODWORD(v6) = -1071775742;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = v6;
    WdLogEvent5_WdError(v7);
    LODWORD(v6) = -1073741811;
  }
LABEL_18:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, 6052);
  return (unsigned int)v6;
}
