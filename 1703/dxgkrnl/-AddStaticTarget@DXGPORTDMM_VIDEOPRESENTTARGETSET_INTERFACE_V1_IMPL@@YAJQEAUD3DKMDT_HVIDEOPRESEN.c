/*
 * XREFs of ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C011E580
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C0011CA4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0011D6C (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C011E77C (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C011E7FC (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C011E844 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTTARGETSET *v11; // rdi
  DMMVIDEOPRESENTTARGET *v12; // rax
  __int64 v13; // rcx
  DMMVIDEOPRESENTTARGET *v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rax

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( a2 )
  {
    v11 = (struct DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      v12 = (DMMVIDEOPRESENTTARGET *)operator new(0x208uLL, 0x4E506456u, PagedPool);
      if ( v12 )
        v14 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
                v12,
                v11,
                a2->Id,
                (unsigned int)a2->VideoOutputTechnology,
                a2->VideoOutputHpdAwareness,
                a2->MonitorOrientationAwareness,
                a2->SupportsSdtvModes);
      else
        v14 = 0LL;
      if ( v14 )
      {
        v15 = DMMVIDEOPRESENTTARGET::Initialize(v14);
        v18 = v15;
        if ( v15 < 0 )
        {
          v28 = WdLogNewEntry5_WdError(v17, v16);
          *(_QWORD *)(v28 + 24) = a2->Id;
          *(_QWORD *)(v28 + 32) = v18;
          WdLogEvent5_WdError(v28);
          ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v14 + 64), v29);
        }
        else
        {
          v18 = (int)DMMVIDEOPRESENTTARGETSET::AddTarget(v11, v14);
          ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v14 + 64), v19);
          if ( (int)v18 >= 0 )
            return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v11, a2);
          v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
          v30[3] = a2->Id;
          v30[4] = v11;
          v30[5] = v18;
        }
        return (unsigned int)v18;
      }
      else
      {
        v27 = WdLogNewEntry5_WdLowResource(v13);
        *(_QWORD *)(v27 + 24) = v11;
        WdLogEvent5_WdLowResource(v27);
        return 3221225495LL;
      }
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v26 + 24) = this;
      WdLogEvent5_WdError(v26);
      return 3223192342LL;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v25 + 24) = 0LL;
    *(_QWORD *)(v25 + 32) = this;
    WdLogEvent5_WdError(v25);
    return 3223192325LL;
  }
}
