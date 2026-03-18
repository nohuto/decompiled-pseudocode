/*
 * XREFs of ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C011E2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C0012CF8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0012E28 (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C011E4DC (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C011E55C (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C011E5A4 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DMMVIDEOPRESENTTARGETSET *v8; // rdi
  DMMVIDEOPRESENTTARGET *v9; // rax
  __int64 v10; // rcx
  DMMVIDEOPRESENTTARGET *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax

  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( a2 )
  {
    v8 = (struct DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v8 )
    {
      v9 = (DMMVIDEOPRESENTTARGET *)operator new(0x220uLL, 0x4E506456u, PagedPool);
      if ( v9 )
        v11 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
                v9,
                v8,
                a2->Id,
                a2->VideoOutputTechnology,
                a2->VideoOutputHpdAwareness,
                a2->MonitorOrientationAwareness,
                a2->SupportsSdtvModes);
      else
        v11 = 0LL;
      if ( v11 )
      {
        v12 = DMMVIDEOPRESENTTARGET::Initialize(v11);
        v14 = v12;
        if ( v12 < 0 )
        {
          v21 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v21 + 24) = a2->Id;
          *(_QWORD *)(v21 + 32) = v14;
          WdLogEvent5_WdError(v21);
          ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v11 + 64));
        }
        else
        {
          v14 = (int)DMMVIDEOPRESENTTARGETSET::AddTarget(v8, v11);
          ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v11 + 64));
          if ( (int)v14 >= 0 )
            return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v8, a2);
          v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
          v22[3] = a2->Id;
          v22[4] = v8;
          v22[5] = v14;
        }
        return (unsigned int)v14;
      }
      else
      {
        v20 = WdLogNewEntry5_WdLowResource(v10);
        *(_QWORD *)(v20 + 24) = v8;
        WdLogEvent5_WdLowResource(v20);
        return 3221225495LL;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v19 + 24) = this;
      WdLogEvent5_WdError(v19);
      return 3223192342LL;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v18 + 24) = 0LL;
    *(_QWORD *)(v18 + 32) = this;
    WdLogEvent5_WdError(v18);
    return 3223192325LL;
  }
}
