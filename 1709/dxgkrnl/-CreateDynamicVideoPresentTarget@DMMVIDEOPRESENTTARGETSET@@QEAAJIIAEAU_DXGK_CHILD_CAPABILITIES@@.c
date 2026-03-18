/*
 * XREFs of ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01F4BA0
 * Callers:
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01F24F4 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0012E28 (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00360B8 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C011E4DC (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C011E5A4 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::CreateDynamicVideoPresentTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        unsigned int a2,
        unsigned int a3,
        struct _DXGK_CHILD_CAPABILITIES *a4,
        char a5,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a6)
{
  __int64 v6; // rsi
  __int64 v8; // r14
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rbp
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  struct DMMVIDEOPRESENTTARGET *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  DMMVIDEOPRESENTTARGET *v38; // rax
  __int64 v39; // rcx
  DMMVIDEOPRESENTTARGET *v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // r14
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  struct DMMVIDEOPRESENTTARGET **v51; // rdx
  struct DMMVIDEOPRESENTTARGET *v52; // rax

  v6 = a2;
  v8 = a3;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, a3);
  if ( !TargetById )
  {
    *(_DWORD *)a6 = 1;
    v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10);
    v13[3] = v8;
    v14 = *((_QWORD *)this + 11);
    if ( !*(_QWORD *)(v14 + 8) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL);
    v13[6] = 1LL;
LABEL_5:
    v13[5] = -1073741811LL;
    v13[4] = v16;
LABEL_6:
    WdLogEvent5_WdAssertion(v13);
    return 3221225485LL;
  }
  v18 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v6);
  if ( a5 )
  {
    if ( !v18 )
    {
      *(_DWORD *)a6 = 1;
      v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19);
      v13[3] = v6;
      v21 = *((_QWORD *)this + 11);
      if ( !*(_QWORD *)(v21 + 8) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v22);
      }
      v16 = *(_QWORD *)(*(_QWORD *)(v21 + 8) + 16LL);
      v13[6] = 2LL;
      goto LABEL_5;
    }
    if ( !*((_QWORD *)v18 + 56) )
    {
      *(_DWORD *)a6 = 5;
      v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19);
      v13[3] = v6;
      v24 = *((_QWORD *)this + 11);
      if ( !*(_QWORD *)(v24 + 8) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v25);
      }
      v16 = *(_QWORD *)(*(_QWORD *)(v24 + 8) + 16LL);
      v13[6] = 3LL;
      goto LABEL_5;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(v18) )
    {
      *(_DWORD *)a6 = 6;
      v27 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v27 + 24) = v6;
LABEL_18:
      v29 = *((_QWORD *)this + 11);
      v13 = (_QWORD *)v27;
      if ( !*(_QWORD *)(v29 + 8) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v30);
      }
      v13[4] = *(_QWORD *)(*(_QWORD *)(v29 + 8) + 16LL);
      v13[5] = -1073741811LL;
      v13[6] = 4LL;
      goto LABEL_6;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(TargetById) )
    {
      *(_DWORD *)a6 = 6;
      v27 = WdLogNewEntry5_WdAssertion(v31);
      *(_QWORD *)(v27 + 24) = v8;
      goto LABEL_18;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v32 + 72));
    v33 = *(_QWORD **)(v32 + 464);
    v34 = (_QWORD *)((char *)TargetById + 472);
    if ( *v33 != v32 + 456 )
      __fastfail(3u);
    *v34 = v32 + 456;
    *((_QWORD *)TargetById + 60) = v33;
    *v33 = v34;
    *(_QWORD *)(v32 + 464) = v34;
    *((_QWORD *)TargetById + 63) = v32;
    return 0LL;
  }
  if ( v18 )
  {
    *(_DWORD *)a6 = 3;
    v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19);
    v13[3] = v6;
    v36 = *((_QWORD *)this + 11);
    if ( !*(_QWORD *)(v36 + 8) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v35);
      WdLogEvent5_WdAssertion(v37);
    }
    v16 = *(_QWORD *)(*(_QWORD *)(v36 + 8) + 16LL);
    v13[6] = 5LL;
    goto LABEL_5;
  }
  v38 = (DMMVIDEOPRESENTTARGET *)operator new(0x220uLL, 0x4E506456u, PagedPool);
  if ( v38 )
    v40 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
            v38,
            this,
            v6,
            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a4->Type.Other.MustBeZero,
            a4->HpdAwareness,
            a4->Type.VideoOutput.MonitorOrientationAwareness,
            a4->Type.VideoOutput.SupportsSdtvModes);
  else
    v40 = 0LL;
  if ( v40 )
  {
    v45 = DMMVIDEOPRESENTTARGET::Initialize(v40);
    v46 = v45;
    if ( v45 >= 0 )
    {
      v48 = DMMVIDEOPRESENTTARGETSET::AddTarget(this, v40);
      v46 = v48;
      if ( v48 >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)TargetById + 18);
        v51 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)TargetById + 53);
        v52 = (DMMVIDEOPRESENTTARGET *)((char *)v40 + 432);
        if ( *v51 != (struct DMMVIDEOPRESENTTARGET *)((char *)TargetById + 416) )
          __fastfail(3u);
        *(_QWORD *)v52 = (char *)TargetById + 416;
        *((_QWORD *)v40 + 55) = v51;
        *v51 = v52;
        *((_QWORD *)TargetById + 53) = v52;
        *((_QWORD *)v40 + 56) = TargetById;
        ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v40 + 64));
        return 0LL;
      }
      *(_DWORD *)a6 = -2147483646;
      ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v40 + 64));
      v50 = (_QWORD *)WdLogNewEntry5_WdError(v49);
      v50[3] = v6;
      v50[4] = this;
      v50[5] = v46;
      WdLogEvent5_WdError(v50);
    }
    else
    {
      *(_DWORD *)a6 = -2147483647;
      v47 = WdLogNewEntry5_WdError(a6);
      *(_QWORD *)(v47 + 24) = v6;
      *(_QWORD *)(v47 + 32) = v46;
      WdLogEvent5_WdError(v47);
      ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v40 + 64));
    }
    return (unsigned int)v46;
  }
  *(_DWORD *)a6 = 0x80000000;
  v42 = WdLogNewEntry5_WdLowResource(v39);
  *(_QWORD *)(v42 + 24) = v6;
  v43 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v43 + 8) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v41);
    WdLogEvent5_WdAssertion(v44);
  }
  *(_QWORD *)(v42 + 32) = *(_QWORD *)(*(_QWORD *)(v43 + 8) + 16LL);
  WdLogEvent5_WdLowResource(v42);
  return 3221225495LL;
}
