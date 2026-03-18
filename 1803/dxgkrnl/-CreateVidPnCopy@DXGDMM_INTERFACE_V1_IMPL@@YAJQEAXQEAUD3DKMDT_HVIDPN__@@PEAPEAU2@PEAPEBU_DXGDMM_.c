/*
 * XREFs of ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C021A310
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA08C (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnCopy(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDPN__ *const a3,
        struct D3DKMDT_HVIDPN__ **a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  const struct DMMVIDPN *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rbx
  struct D3DKMDT_HVIDPN__ *v19; // rdi
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // [rsp+20h] [rbp-20h] BYREF
  int v29; // [rsp+28h] [rbp-18h] BYREF
  __int64 v30; // [rsp+30h] [rbp-10h]
  __int64 v31; // [rsp+70h] [rbp+30h] BYREF

  v30 = 0LL;
  v29 = 6054;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6054);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 6054);
  if ( a3 && a4 )
  {
    *(_QWORD *)a3 = 0LL;
    *a4 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      {
        v13 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v13);
      }
      if ( *((_QWORD *)this + 307) )
      {
        v16 = (const struct DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
        if ( v16 )
        {
          v18 = *(_QWORD *)(v14 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v28, v18);
          v19 = *(struct D3DKMDT_HVIDPN__ **)(v18 + 424);
          v31 = 0LL;
          v21 = VIDPN_MGR::CreateVidPnCopyForClient(v18, v16, &v31, v20);
          v10 = v21;
          if ( v21 >= 0 )
          {
            v24 = v31;
            v31 = 0LL;
            *(_QWORD *)a3 = v24 & -(__int64)(v24 != -88);
            LODWORD(v10) = 0;
            *a4 = v19;
          }
          else
          {
            v23 = WdLogNewEntry5_WdDmmEvent(v22);
            *(_QWORD *)(v23 + 24) = v10;
            WdLogEvent5_WdDmmEvent(v23);
          }
          auto_rc<DMMVIDPN>::reset(&v31, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40));
        }
        else
        {
          v17 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v17 + 24) = a2;
          WdLogEvent5_WdError(v17);
          LODWORD(v10) = -1071774973;
        }
        goto LABEL_20;
      }
      v11 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v11 + 24) = this;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v11 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v11);
    LODWORD(v10) = -1071775742;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = a2;
    WdLogEvent5_WdError(v9);
    LODWORD(v10) = -1073741811;
  }
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v29);
  return (unsigned int)v10;
}
