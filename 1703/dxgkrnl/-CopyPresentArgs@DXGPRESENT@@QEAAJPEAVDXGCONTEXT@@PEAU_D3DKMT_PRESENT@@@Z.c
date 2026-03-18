/*
 * XREFs of ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C0091410
 * Callers:
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C002027C (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkPresent @ 0x1C008FA90 (DxgkPresent.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C01A0F1C (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall DXGPRESENT::CopyPresentArgs(DXGPRESENT *this, struct DXGCONTEXT *a2, struct _D3DKMT_PRESENT *a3)
{
  _OWORD *p_DirtyRectCount; // rdx
  __int64 v7; // rcx
  ULONG64 v8; // r8
  __int64 v9; // r9
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  unsigned __int64 SubRectCnt; // r12
  unsigned int v12; // esi
  RECT *v13; // r14
  const RECT *pSrcSubRects; // rdx
  D3DKMT_PRESENT_RGNS *v15; // r12
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r13
  unsigned int v18; // r14d
  struct _D3DKMT_MOVE_RECT *v19; // r11
  char *v20; // r13
  char *v21; // rdx
  ULONG64 v22; // rcx
  ULONG64 v23; // rdx
  __int64 v24; // r11
  unsigned __int64 v26; // rax
  int v27; // ecx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // ecx
  unsigned __int64 v32; // rax
  UINT v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rax
  UINT DirtyRectCount; // [rsp+20h] [rbp-68h]
  struct _D3DKMT_MOVE_RECT *v37; // [rsp+38h] [rbp-50h]
  unsigned __int8 v38; // [rsp+A8h] [rbp+20h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
    v7 = 1LL;
  else
    LOBYTE(v7) = 0;
  v38 = v7;
  if ( (a3->Flags.Value & 0x400000) != 0 )
  {
    if ( (_BYTE)v7 )
    {
      p_DirtyRectCount = &a3->pPresentRegions->DirtyRectCount;
      v8 = MmUserProbeAddress;
      if ( (unsigned __int64)p_DirtyRectCount >= MmUserProbeAddress )
        p_DirtyRectCount = (_OWORD *)MmUserProbeAddress;
      *(_OWORD *)((char *)this + 440) = *p_DirtyRectCount;
      *(_OWORD *)((char *)this + 456) = p_DirtyRectCount[1];
    }
    else
    {
      pPresentRegions = a3->pPresentRegions;
      *(_OWORD *)((char *)this + 440) = *(_OWORD *)&pPresentRegions->DirtyRectCount;
      *(_OWORD *)((char *)this + 456) = *(_OWORD *)&pPresentRegions->MoveRectCount;
    }
  }
  if ( a3->pSrcSubRects )
  {
    SubRectCnt = a3->SubRectCnt;
    v12 = SubRectCnt;
    if ( 16 * SubRectCnt > 0xFFFFFFFF )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v7, p_DirtyRectCount);
      v29[3] = -1073741675LL;
      v29[4] = a2;
      v29[5] = a3->SubRectCnt;
      v29[6] = 16LL;
      WdLogEvent5_WdError(v29);
      return 3221225621LL;
    }
    v13 = (RECT *)((char *)this + 472);
    if ( (unsigned int)SubRectCnt > 0x10 )
    {
      if ( (unsigned int)SubRectCnt > *((_DWORD *)this + 184) )
      {
        operator delete[](*((void **)this + 91));
        v26 = 16 * SubRectCnt;
        if ( !is_mul_ok(SubRectCnt, 0x10uLL) )
          v26 = -1LL;
        v13 = (RECT *)operator new(v26, 0x4B677844u, PagedPool);
        *((_QWORD *)this + 91) = v13;
        v27 = 0;
        if ( v13 )
          v27 = SubRectCnt;
        *((_DWORD *)this + 184) = v27;
        v7 = v38;
      }
      else
      {
        v13 = (RECT *)*((_QWORD *)this + 91);
      }
    }
    if ( !v13 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdLowResource(v7);
      v28[3] = -1073741801LL;
      v28[4] = a2;
      v28[5] = a3->SubRectCnt;
      WdLogEvent5_WdLowResource(v28);
      return 3221225495LL;
    }
    pSrcSubRects = a3->pSrcSubRects;
    if ( (_BYTE)v7 && (&pSrcSubRects[v12] < pSrcSubRects || (unsigned __int64)&pSrcSubRects[v12] > MmUserProbeAddress) )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v13, pSrcSubRects, v12 * 16);
    a3->pSrcSubRects = v13;
    v7 = v38;
  }
  if ( (a3->Flags.Value & 0x400000) == 0 )
  {
    a3->pPresentRegions = 0LL;
    return 0LL;
  }
  v15 = (D3DKMT_PRESENT_RGNS *)((char *)this + 440);
  v16 = 16LL * *((unsigned int *)this + 110);
  if ( v16 > 0xFFFFFFFF )
  {
    v35 = WdLogNewEntry5_WdWarning(v7, p_DirtyRectCount, v8, v9);
    *(_QWORD *)(v35 + 24) = 9655LL;
    goto LABEL_75;
  }
  v17 = *((unsigned int *)this + 114);
  v18 = 24 * v17;
  if ( 24 * v17 > 0xFFFFFFFF )
  {
    v35 = WdLogNewEntry5_WdWarning(v7, p_DirtyRectCount, v8, v9);
    *(_QWORD *)(v35 + 24) = 9663LL;
    goto LABEL_75;
  }
  if ( v18 + (unsigned int)v16 < v18 )
  {
    v35 = WdLogNewEntry5_WdWarning(v7, p_DirtyRectCount, v8, v9);
    *(_QWORD *)(v35 + 24) = 9671LL;
LABEL_75:
    WdLogEvent5_WdWarning(v35);
    return 3221225621LL;
  }
  if ( !(v18 + (_DWORD)v16) )
  {
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 56) = 0LL;
LABEL_43:
    a3->pPresentRegions = v15;
    return 0LL;
  }
  v19 = (struct _D3DKMT_MOVE_RECT *)((char *)this + 744);
  v37 = (struct _D3DKMT_MOVE_RECT *)((char *)this + 744);
  if ( (unsigned int)v17 > 4 )
  {
    if ( (unsigned int)v17 > *((_DWORD *)this + 212) )
    {
      operator delete[](*((void **)this + 105));
      v30 = 24 * v17;
      if ( !is_mul_ok(v17, 0x18uLL) )
        v30 = -1LL;
      v19 = (struct _D3DKMT_MOVE_RECT *)operator new(v30, 0x4B677844u, PagedPool);
      v37 = v19;
      *((_QWORD *)this + 105) = v19;
      v31 = 0;
      if ( v19 )
        v31 = v17;
      *((_DWORD *)this + 212) = v31;
      v7 = v38;
    }
    else
    {
      v19 = (struct _D3DKMT_MOVE_RECT *)*((_QWORD *)this + 105);
      v37 = v19;
    }
  }
  DirtyRectCount = v15->DirtyRectCount;
  v20 = (char *)this + 856;
  if ( v15->DirtyRectCount > 0x10 )
  {
    if ( v15->DirtyRectCount > *((_DWORD *)this + 280) )
    {
      operator delete[](*((void **)this + 139));
      v32 = 16LL * DirtyRectCount;
      if ( !is_mul_ok(DirtyRectCount, 0x10uLL) )
        v32 = -1LL;
      v20 = (char *)operator new(v32, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 139) = v20;
      v33 = 0;
      if ( v20 )
        v33 = DirtyRectCount;
      *((_DWORD *)this + 280) = v33;
      v7 = v38;
      v19 = v37;
    }
    else
    {
      v20 = (char *)*((_QWORD *)this + 139);
    }
  }
  if ( v19 && v20 )
  {
    if ( v15->DirtyRectCount )
    {
      v21 = (char *)*((_QWORD *)this + 56);
      if ( (_BYTE)v7
        && (&v21[(unsigned int)v16] < v21 || (unsigned __int64)&v21[(unsigned int)v16] > MmUserProbeAddress) )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v20, v21, (unsigned int)v16);
      *((_QWORD *)this + 56) = v20;
      v19 = v37;
    }
    else
    {
      *((_QWORD *)this + 56) = 0LL;
    }
    if ( *((_DWORD *)this + 114) )
    {
      if ( v38 )
      {
        if ( v18 )
        {
          v22 = *((_QWORD *)this + 58);
          v23 = v22 + v18;
          if ( v23 > MmUserProbeAddress || v23 < v22 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(
        *((_DWORD *)this + 114),
        *((const struct _D3DKMT_MOVE_RECT **)this + 58),
        v19);
      *((_QWORD *)this + 58) = v24;
    }
    else
    {
      *((_QWORD *)this + 58) = 0LL;
    }
    goto LABEL_43;
  }
  v34 = WdLogNewEntry5_WdLowResource(v7);
  *(_QWORD *)(v34 + 24) = 9684LL;
  WdLogEvent5_WdLowResource(v34);
  return 3221225495LL;
}
