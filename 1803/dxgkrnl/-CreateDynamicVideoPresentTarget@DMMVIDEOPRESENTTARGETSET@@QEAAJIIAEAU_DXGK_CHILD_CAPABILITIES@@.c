/*
 * XREFs of ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C022170C
 * Callers:
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C021DF64 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0045C70 (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0046060 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02212CC (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C0221C20 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::CreateDynamicVideoPresentTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        unsigned int a2,
        unsigned int a3,
        struct _DXGK_CHILD_CAPABILITIES *a4,
        char a5,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a6)
{
  __int64 v6; // rbp
  __int64 v8; // rbx
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  struct DMMVIDEOPRESENTTARGET *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  DMMVIDEOPRESENTTARGET *v42; // rax
  __int64 v43; // rcx
  DMMVIDEOPRESENTTARGET *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // r14
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  struct DMMVIDEOPRESENTTARGET **v56; // rdx
  struct DMMVIDEOPRESENTTARGET *v57; // rax

  v6 = a2;
  v8 = a3;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, a3);
  if ( !TargetById )
  {
    *(_DWORD *)a6 = 1;
    v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10);
    v13[3] = v8;
    v14 = *((_QWORD *)this + 11);
    v15 = *(_QWORD *)(v14 + 8);
    if ( !v15 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v16);
      v15 = *(_QWORD *)(v14 + 8);
    }
    v17 = *(_QWORD *)(v15 + 16);
    v13[6] = 1LL;
LABEL_5:
    v13[5] = -1073741811LL;
    v13[4] = v17;
LABEL_6:
    WdLogEvent5_WdAssertion(v13);
    return 3221225485LL;
  }
  v19 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v6);
  if ( a5 )
  {
    if ( !v19 )
    {
      *(_DWORD *)a6 = 1;
      v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL);
      v13[3] = v6;
      v21 = *((_QWORD *)this + 11);
      v22 = *(_QWORD *)(v21 + 8);
      if ( !v22 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v23);
        v22 = *(_QWORD *)(v21 + 8);
      }
      v17 = *(_QWORD *)(v22 + 16);
      v13[6] = 2LL;
      goto LABEL_5;
    }
    if ( !*((_QWORD *)v19 + 56) )
    {
      *(_DWORD *)a6 = 5;
      v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19);
      v13[3] = v6;
      v25 = *((_QWORD *)this + 11);
      v26 = *(_QWORD *)(v25 + 8);
      if ( !v26 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v27);
        v26 = *(_QWORD *)(v25 + 8);
      }
      v17 = *(_QWORD *)(v26 + 16);
      v13[6] = 3LL;
      goto LABEL_5;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(v19) )
    {
      *(_DWORD *)a6 = 6;
      v29 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v29 + 24) = v6;
LABEL_18:
      v31 = *((_QWORD *)this + 11);
      v13 = (_QWORD *)v29;
      v32 = *(_QWORD *)(v31 + 8);
      if ( !v32 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v30);
        WdLogEvent5_WdAssertion(v33);
        v32 = *(_QWORD *)(v31 + 8);
      }
      v13[4] = *(_QWORD *)(v32 + 16);
      v13[5] = -1073741811LL;
      v13[6] = 4LL;
      goto LABEL_6;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(TargetById) )
    {
      *(_DWORD *)a6 = 6;
      v29 = WdLogNewEntry5_WdAssertion(v34);
      *(_QWORD *)(v29 + 24) = v8;
      goto LABEL_18;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v35 + 72));
    v36 = *(_QWORD **)(v35 + 464);
    v37 = (_QWORD *)((char *)TargetById + 472);
    if ( *v36 != v35 + 456 )
      __fastfail(3u);
    *v37 = v35 + 456;
    *((_QWORD *)TargetById + 60) = v36;
    *v36 = v37;
    *(_QWORD *)(v35 + 464) = v37;
    *((_QWORD *)TargetById + 63) = v35;
    return 0LL;
  }
  if ( v19 )
  {
    *(_DWORD *)a6 = 3;
    v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19);
    v13[3] = v6;
    v39 = *((_QWORD *)this + 11);
    v40 = *(_QWORD *)(v39 + 8);
    if ( !v40 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v38);
      WdLogEvent5_WdAssertion(v41);
      v40 = *(_QWORD *)(v39 + 8);
    }
    v17 = *(_QWORD *)(v40 + 16);
    v13[6] = 5LL;
    goto LABEL_5;
  }
  v42 = (DMMVIDEOPRESENTTARGET *)operator new[](0x228uLL, 0x4E506456u, PagedPool);
  if ( v42 )
    v44 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
            v42,
            this,
            v6,
            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a4->Type.Other.MustBeZero,
            a4->HpdAwareness,
            a4->Type.VideoOutput.MonitorOrientationAwareness,
            a4->Type.VideoOutput.SupportsSdtvModes);
  else
    v44 = 0LL;
  if ( v44 )
  {
    v50 = DMMVIDEOPRESENTTARGET::Initialize(v44);
    v51 = v50;
    if ( v50 >= 0 )
    {
      v53 = DMMVIDEOPRESENTTARGETSET::AddTarget(this, v44);
      v51 = v53;
      if ( v53 >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)TargetById + 18);
        v56 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)TargetById + 53);
        v57 = (DMMVIDEOPRESENTTARGET *)((char *)v44 + 432);
        if ( *v56 != (struct DMMVIDEOPRESENTTARGET *)((char *)TargetById + 416) )
          __fastfail(3u);
        *(_QWORD *)v57 = (char *)TargetById + 416;
        *((_QWORD *)v44 + 55) = v56;
        *v56 = v57;
        *((_QWORD *)TargetById + 53) = v57;
        *((_QWORD *)v44 + 56) = TargetById;
        ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v44 + 64));
        return 0LL;
      }
      *(_DWORD *)a6 = -2147483646;
      ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v44 + 64));
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v54);
      v55[3] = v6;
      v55[4] = this;
      v55[5] = v51;
      WdLogEvent5_WdError(v55);
    }
    else
    {
      *(_DWORD *)a6 = -2147483647;
      v52 = WdLogNewEntry5_WdError(a6);
      *(_QWORD *)(v52 + 24) = v6;
      *(_QWORD *)(v52 + 32) = v51;
      WdLogEvent5_WdError(v52);
      ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v44 + 64));
    }
    return (unsigned int)v51;
  }
  *(_DWORD *)a6 = 0x80000000;
  v46 = WdLogNewEntry5_WdLowResource(v43);
  *(_QWORD *)(v46 + 24) = v6;
  v47 = *((_QWORD *)this + 11);
  v48 = *(_QWORD *)(v47 + 8);
  if ( !v48 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v45);
    WdLogEvent5_WdAssertion(v49);
    v48 = *(_QWORD *)(v47 + 8);
  }
  *(_QWORD *)(v46 + 32) = *(_QWORD *)(v48 + 16);
  WdLogEvent5_WdLowResource(v46);
  return 3221225495LL;
}
