/*
 * XREFs of ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0223DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0045C70 (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02212CC (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C0221C20 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0221F30 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DMMVIDEOPRESENTTARGETSET *v10; // rdi
  __int64 v11; // rax
  DMMVIDEOPRESENTTARGET *v12; // rax
  __int64 v13; // rcx
  DMMVIDEOPRESENTTARGET *v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rax
  int v20; // eax
  ReferenceCounted *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 26) == 1833172994 )
      v10 = this;
    else
      v10 = 0LL;
    if ( v10 )
    {
      v12 = (DMMVIDEOPRESENTTARGET *)operator new[](0x228uLL, 0x4E506456u, PagedPool);
      if ( v12 )
        v14 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
                v12,
                v10,
                a2->Id,
                a2->VideoOutputTechnology,
                a2->VideoOutputHpdAwareness,
                a2->MonitorOrientationAwareness,
                a2->SupportsSdtvModes);
      else
        v14 = 0LL;
      if ( v14 )
      {
        v16 = DMMVIDEOPRESENTTARGET::Initialize(v14);
        v18 = v16;
        if ( v16 >= 0 )
        {
          v20 = DMMVIDEOPRESENTTARGETSET::AddTarget(v10, v14);
          v21 = (DMMVIDEOPRESENTTARGET *)((char *)v14 + 64);
          v22 = v20;
          ReferenceCounted::Release(v21);
          if ( (int)v22 >= 0 )
          {
            return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v10, a2);
          }
          else
          {
            v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
            v27[3] = a2->Id;
            v27[4] = v10;
            v27[5] = v22;
            return (unsigned int)v22;
          }
        }
        else
        {
          v19 = WdLogNewEntry5_WdError(v17);
          *(_QWORD *)(v19 + 24) = a2->Id;
          *(_QWORD *)(v19 + 32) = v18;
          WdLogEvent5_WdError(v19);
          ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v14 + 64));
          return (unsigned int)v18;
        }
      }
      else
      {
        v15 = WdLogNewEntry5_WdLowResource(v13);
        *(_QWORD *)(v15 + 24) = v10;
        WdLogEvent5_WdLowResource(v15);
        return 3221225495LL;
      }
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v11 + 24) = this;
      WdLogEvent5_WdError(v11);
      return 3223192342LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = this;
    WdLogEvent5_WdError(v8);
    return 3223192325LL;
  }
}
