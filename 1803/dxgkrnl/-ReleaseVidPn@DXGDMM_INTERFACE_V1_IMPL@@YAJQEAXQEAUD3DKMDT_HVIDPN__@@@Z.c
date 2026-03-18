/*
 * XREFs of ?ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00C7760
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::ReleaseVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDPN__ *const a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-18h] BYREF
  __int64 v21; // [rsp+28h] [rbp-10h]
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v21 = 0LL;
  v20 = 6055;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6055);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 6055);
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v17);
    }
    v8 = *((_QWORD *)this + 307);
    if ( v8 )
    {
      v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v8 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v22, v11);
        if ( *(_QWORD *)(v10 + 48) == v11 )
        {
          ReferenceCounted::Release((ReferenceCounted *)(v10 + 24));
        }
        else
        {
          v19 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v19 + 24) = v10;
          *(_QWORD *)(v19 + 32) = v11;
          WdLogEvent5_WdError(v19);
        }
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40));
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v18 + 24) = a2;
        WdLogEvent5_WdError(v18);
        v3 = -1071774973;
      }
      goto LABEL_10;
    }
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = this;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v16 + 24) = 0LL;
  }
  WdLogEvent5_WdError(v16);
  v3 = -1071775742;
LABEL_10:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v20);
  return v3;
}
