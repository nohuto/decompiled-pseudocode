/*
 * XREFs of ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01DC278
 * Callers:
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01D9334 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0011D6C (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00452BC (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C011E77C (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C011E844 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::CreateDynamicVideoPresentTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        unsigned int a2,
        __int64 a3,
        struct _DXGK_CHILD_CAPABILITIES *a4,
        char a5,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a6)
{
  __int64 v6; // rsi
  __int64 v8; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  struct DMMVIDEOPRESENTTARGET *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  _QWORD *v56; // rdx
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rbx
  __int64 v63; // rax
  DMMVIDEOPRESENTTARGET *v64; // rax
  __int64 v65; // rcx
  DMMVIDEOPRESENTTARGET *v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdi
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rbx
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r14
  __int64 v79; // rax
  __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rcx
  _QWORD *v85; // rax
  struct DMMVIDEOPRESENTTARGET **v86; // rdx
  struct DMMVIDEOPRESENTTARGET *v87; // rax

  v6 = a2;
  v8 = (unsigned int)a3;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, (unsigned int)a3, a3, (__int64)a4);
  if ( !TargetById )
  {
    *(_DWORD *)a6 = 1;
    v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11, v10, v13, v14);
    v17[3] = v8;
    v20 = *((_QWORD *)this + 11);
    if ( !*(_QWORD *)(v20 + 8) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
      WdLogEvent5_WdAssertion(v21);
    }
    v22 = *(_QWORD *)(*(_QWORD *)(v20 + 8) + 16LL);
    v17[6] = 1LL;
LABEL_5:
    v17[5] = -1073741811LL;
    v17[4] = v22;
LABEL_6:
    WdLogEvent5_WdAssertion(v17);
    return 3221225485LL;
  }
  v24 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, (unsigned int)v6, v13, v14);
  if ( a5 )
  {
    if ( !v24 )
    {
      *(_DWORD *)a6 = 1;
      v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
      v17[3] = v6;
      v33 = *((_QWORD *)this + 11);
      if ( !*(_QWORD *)(v33 + 8) )
      {
        v34 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
        WdLogEvent5_WdAssertion(v34);
      }
      v22 = *(_QWORD *)(*(_QWORD *)(v33 + 8) + 16LL);
      v17[6] = 2LL;
      goto LABEL_5;
    }
    if ( !*((_QWORD *)v24 + 56) )
    {
      *(_DWORD *)a6 = 5;
      v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v26, v25, 0LL, v28);
      v17[3] = v6;
      v39 = *((_QWORD *)this + 11);
      if ( !*(_QWORD *)(v39 + 8) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
        WdLogEvent5_WdAssertion(v40);
      }
      v22 = *(_QWORD *)(*(_QWORD *)(v39 + 8) + 16LL);
      v17[6] = 3LL;
      goto LABEL_5;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(v24) )
    {
      *(_DWORD *)a6 = 6;
      v45 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
      *(_QWORD *)(v45 + 24) = v6;
LABEL_18:
      v50 = *((_QWORD *)this + 11);
      v17 = (_QWORD *)v45;
      if ( !*(_QWORD *)(v50 + 8) )
      {
        v51 = WdLogNewEntry5_WdAssertion(v47, v46, v48, v49);
        WdLogEvent5_WdAssertion(v51);
      }
      v17[4] = *(_QWORD *)(*(_QWORD *)(v50 + 8) + 16LL);
      v17[5] = -1073741811LL;
      v17[6] = 4LL;
      goto LABEL_6;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(TargetById) )
    {
      *(_DWORD *)a6 = 6;
      v45 = WdLogNewEntry5_WdAssertion(v53, v52, v54, v55);
      *(_QWORD *)(v45 + 24) = v8;
      goto LABEL_18;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v54 + 72));
    v56 = *(_QWORD **)(v54 + 464);
    v57 = (_QWORD *)((char *)TargetById + 472);
    if ( *v56 != v54 + 456 )
      __fastfail(3u);
    *v57 = v54 + 456;
    *((_QWORD *)TargetById + 60) = v56;
    *v56 = v57;
    *(_QWORD *)(v54 + 464) = v57;
    *((_QWORD *)TargetById + 63) = v54;
    return 0LL;
  }
  if ( v24 )
  {
    *(_DWORD *)a6 = 3;
    v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
    v17[3] = v6;
    v62 = *((_QWORD *)this + 11);
    if ( !*(_QWORD *)(v62 + 8) )
    {
      v63 = WdLogNewEntry5_WdAssertion(v59, v58, v60, v61);
      WdLogEvent5_WdAssertion(v63);
    }
    v22 = *(_QWORD *)(*(_QWORD *)(v62 + 8) + 16LL);
    v17[6] = 5LL;
    goto LABEL_5;
  }
  v64 = (DMMVIDEOPRESENTTARGET *)operator new(0x208uLL, 0x4E506456u, PagedPool);
  if ( v64 )
    v66 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
            v64,
            this,
            (unsigned int)v6,
            a4->Type.Other.MustBeZero,
            a4->HpdAwareness,
            a4->Type.VideoOutput.MonitorOrientationAwareness,
            a4->Type.VideoOutput.SupportsSdtvModes);
  else
    v66 = 0LL;
  if ( v66 )
  {
    v74 = DMMVIDEOPRESENTTARGET::Initialize(v66);
    v78 = v74;
    if ( v74 >= 0 )
    {
      v81 = DMMVIDEOPRESENTTARGETSET::AddTarget(this, v66, v76, v77);
      v78 = v81;
      if ( v81 >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)TargetById + 18);
        v86 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)TargetById + 53);
        v87 = (DMMVIDEOPRESENTTARGET *)((char *)v66 + 432);
        if ( *v86 != (struct DMMVIDEOPRESENTTARGET *)((char *)TargetById + 416) )
          __fastfail(3u);
        *(_QWORD *)v87 = (char *)TargetById + 416;
        *((_QWORD *)v66 + 55) = v86;
        *v86 = v87;
        *((_QWORD *)TargetById + 53) = v87;
        *((_QWORD *)v66 + 56) = TargetById;
        ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v66 + 64), (__int64)v86);
        return 0LL;
      }
      *(_DWORD *)a6 = -2147483646;
      ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v66 + 64), v82);
      v85 = (_QWORD *)WdLogNewEntry5_WdError(v84, v83);
      v85[3] = v6;
      v85[4] = this;
      v85[5] = v78;
      WdLogEvent5_WdError(v85);
    }
    else
    {
      *(_DWORD *)a6 = -2147483647;
      v79 = WdLogNewEntry5_WdError(a6, v75);
      *(_QWORD *)(v79 + 24) = v6;
      *(_QWORD *)(v79 + 32) = v78;
      WdLogEvent5_WdError(v79);
      ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v66 + 64), v80);
    }
    return (unsigned int)v78;
  }
  *(_DWORD *)a6 = 0x80000000;
  v69 = WdLogNewEntry5_WdLowResource(v65);
  *(_QWORD *)(v69 + 24) = v6;
  v72 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v72 + 8) )
  {
    v73 = WdLogNewEntry5_WdAssertion(v68, v67, v70, v71);
    WdLogEvent5_WdAssertion(v73);
  }
  *(_QWORD *)(v69 + 32) = *(_QWORD *)(*(_QWORD *)(v72 + 8) + 16LL);
  WdLogEvent5_WdLowResource(v69);
  return 3221225495LL;
}
