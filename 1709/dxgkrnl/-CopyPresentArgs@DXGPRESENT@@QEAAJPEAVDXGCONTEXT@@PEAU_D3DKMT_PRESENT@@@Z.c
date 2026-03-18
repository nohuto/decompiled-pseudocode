/*
 * XREFs of ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C00BEAA0
 * Callers:
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C001D59C (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkPresent @ 0x1C00BD0B0 (DxgkPresent.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C01B7EC4 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall DXGPRESENT::CopyPresentArgs(DXGPRESENT *this, struct DXGCONTEXT *a2, struct _D3DKMT_PRESENT *a3)
{
  ULONG64 v6; // rdx
  ULONG64 pPresentRegions; // rcx
  bool v8; // di
  __int64 v9; // r8
  D3DKMT_PRESENT_RGNS *v10; // rax
  unsigned __int64 SubRectCnt; // r12
  unsigned int v12; // esi
  RECT *v13; // r14
  const RECT *pSrcSubRects; // rdx
  __int64 v15; // rcx
  D3DKMT_PRESENT_RGNS *v16; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r13
  unsigned int v19; // r12d
  struct _D3DKMT_MOVE_RECT *v20; // r11
  char *v21; // r13
  char *v22; // rdx
  ULONG64 v23; // rcx
  ULONG64 v24; // rdx
  __int64 v25; // r11
  _QWORD *v27; // rax
  SIZE_T v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  SIZE_T v31; // rax
  SIZE_T v32; // rax
  __int64 v33; // rax
  UINT DirtyRectCount; // [rsp+20h] [rbp-58h]
  struct _D3DKMT_MOVE_RECT *v35; // [rsp+30h] [rbp-48h]

  v8 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  if ( (a3->Flags.Value & 0x400000) != 0 )
  {
    if ( v8 )
    {
      pPresentRegions = (ULONG64)a3->pPresentRegions;
      v6 = MmUserProbeAddress;
      if ( pPresentRegions >= MmUserProbeAddress )
        pPresentRegions = MmUserProbeAddress;
      *((_OWORD *)this + 28) = *(_OWORD *)pPresentRegions;
      *((_OWORD *)this + 29) = *(_OWORD *)(pPresentRegions + 16);
    }
    else
    {
      v10 = a3->pPresentRegions;
      *((_OWORD *)this + 28) = *(_OWORD *)&v10->DirtyRectCount;
      *((_OWORD *)this + 29) = *(_OWORD *)&v10->MoveRectCount;
    }
  }
  if ( a3->pSrcSubRects )
  {
    SubRectCnt = a3->SubRectCnt;
    v12 = SubRectCnt;
    if ( 16 * SubRectCnt > 0xFFFFFFFF )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(pPresentRegions);
      v27[3] = -1073741675LL;
      v27[4] = a2;
      v27[5] = a3->SubRectCnt;
      v27[6] = 16LL;
      WdLogEvent5_WdError(v27);
      return 3221225621LL;
    }
    v13 = (RECT *)((char *)this + 480);
    if ( (unsigned int)SubRectCnt > 0x10 )
    {
      if ( (unsigned int)SubRectCnt > *((_DWORD *)this + 186) )
      {
        operator delete(*((void **)this + 92));
        v28 = 16 * SubRectCnt;
        if ( !is_mul_ok(SubRectCnt, 0x10uLL) )
          v28 = -1LL;
        v13 = (RECT *)operator new(v28, 0x4B677844u, PagedPool);
        *((_QWORD *)this + 92) = v13;
        pPresentRegions = 0LL;
        if ( v13 )
          pPresentRegions = (unsigned int)SubRectCnt;
        *((_DWORD *)this + 186) = pPresentRegions;
      }
      else
      {
        v13 = (RECT *)*((_QWORD *)this + 92);
      }
    }
    if ( !v13 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdLowResource(pPresentRegions);
      v29[3] = -1073741801LL;
      v29[4] = a2;
      v29[5] = a3->SubRectCnt;
      WdLogEvent5_WdLowResource(v29);
      return 3221225495LL;
    }
    pSrcSubRects = a3->pSrcSubRects;
    if ( v8 && (&pSrcSubRects[v12] < pSrcSubRects || (unsigned __int64)&pSrcSubRects[v12] > MmUserProbeAddress) )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v13, pSrcSubRects, v12 * 16);
    a3->pSrcSubRects = v13;
    v15 = 0xFFFFFFFFLL;
  }
  else
  {
    v15 = 0xFFFFFFFFLL;
  }
  if ( (a3->Flags.Value & 0x400000) == 0 )
  {
    a3->pPresentRegions = 0LL;
    return 0LL;
  }
  v16 = (D3DKMT_PRESENT_RGNS *)((char *)this + 448);
  v17 = 16LL * *((unsigned int *)this + 112);
  if ( v17 > 0xFFFFFFFF )
  {
    v30 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v6, v9);
    *(_QWORD *)(v30 + 24) = 10459LL;
LABEL_73:
    WdLogEvent5_WdWarning(v30);
    return 3221225621LL;
  }
  v18 = *((unsigned int *)this + 116);
  v19 = 24 * v18;
  if ( 24 * v18 > 0xFFFFFFFF )
  {
    v30 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v6, v9);
    *(_QWORD *)(v30 + 24) = 10467LL;
    goto LABEL_73;
  }
  if ( v19 + (unsigned int)v17 < v19 )
  {
    v30 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v6, v9);
    *(_QWORD *)(v30 + 24) = 10475LL;
    goto LABEL_73;
  }
  if ( !(v19 + (_DWORD)v17) )
  {
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 57) = 0LL;
LABEL_41:
    a3->pPresentRegions = v16;
    return 0LL;
  }
  v20 = (struct _D3DKMT_MOVE_RECT *)((char *)this + 752);
  v35 = (struct _D3DKMT_MOVE_RECT *)((char *)this + 752);
  if ( (unsigned int)v18 > 4 )
  {
    if ( (unsigned int)v18 > *((_DWORD *)this + 214) )
    {
      operator delete(*((void **)this + 106));
      v31 = 24 * v18;
      if ( !is_mul_ok(v18, 0x18uLL) )
        v31 = -1LL;
      v20 = (struct _D3DKMT_MOVE_RECT *)operator new(v31, 0x4B677844u, PagedPool);
      v35 = v20;
      *((_QWORD *)this + 106) = v20;
      v15 = 0LL;
      if ( v20 )
        v15 = (unsigned int)v18;
      *((_DWORD *)this + 214) = v15;
    }
    else
    {
      v20 = (struct _D3DKMT_MOVE_RECT *)*((_QWORD *)this + 106);
      v35 = v20;
    }
  }
  DirtyRectCount = v16->DirtyRectCount;
  v21 = (char *)this + 864;
  if ( v16->DirtyRectCount > 0x10 )
  {
    v15 = (__int64)this + 1128;
    if ( v16->DirtyRectCount > *((_DWORD *)this + 282) )
    {
      operator delete(*((void **)this + 140));
      v32 = 16LL * DirtyRectCount;
      if ( !is_mul_ok(DirtyRectCount, 0x10uLL) )
        v32 = -1LL;
      v21 = (char *)operator new(v32, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 140) = v21;
      v15 = 0LL;
      if ( v21 )
        v15 = DirtyRectCount;
      *((_DWORD *)this + 282) = v15;
      v20 = v35;
    }
    else
    {
      v21 = (char *)*((_QWORD *)this + 140);
    }
  }
  if ( v20 && v21 )
  {
    if ( v16->DirtyRectCount )
    {
      v22 = (char *)*((_QWORD *)this + 57);
      if ( v8 && (&v22[(unsigned int)v17] < v22 || (unsigned __int64)&v22[(unsigned int)v17] > MmUserProbeAddress) )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v21, v22, (unsigned int)v17);
      *((_QWORD *)this + 57) = v21;
      v20 = v35;
    }
    else
    {
      *((_QWORD *)this + 57) = 0LL;
    }
    if ( *((_DWORD *)this + 116) )
    {
      if ( v8 )
      {
        if ( v19 )
        {
          v23 = *((_QWORD *)this + 59);
          v24 = v23 + v19;
          if ( v24 > MmUserProbeAddress || v24 < v23 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(
        *((_DWORD *)this + 116),
        *((const struct _D3DKMT_MOVE_RECT **)this + 59),
        v20);
      *((_QWORD *)this + 59) = v25;
    }
    else
    {
      *((_QWORD *)this + 59) = 0LL;
    }
    goto LABEL_41;
  }
  v33 = WdLogNewEntry5_WdLowResource(v15);
  *(_QWORD *)(v33 + 24) = 10488LL;
  WdLogEvent5_WdLowResource(v33);
  return 3221225495LL;
}
