/*
 * XREFs of ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D64FC
 * Callers:
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01D69C0 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x1C002474C (-Get@-$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z.c)
 *     ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x1C00247D8 (-Get@-$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8760 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E9030 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall PRESENTDODARG::SetPresentDodArg(
        PRESENTDODARG *this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        struct DXGALLOCATION *a4,
        unsigned int a5,
        char a6,
        const struct tagRECT *a7,
        const struct _D3DKMT_PRESENT *a8,
        const struct _DXGKARG_PRESENT *a9,
        struct COREDEVICEACCESS *a10)
{
  const struct _D3DKMT_PRESENT *v10; // rdi
  __int64 v12; // r12
  D3DKMT_HANDLE hSource; // r15d
  __int64 v16; // r9
  int v17; // edx
  PERESOURCE *v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r15
  _QWORD *v22; // rax
  DXGDEVICE *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r15
  _QWORD *v30; // rax
  D3DDDIFORMAT Format; // eax
  const RECT *pDirtyRects; // r14
  const struct _DXGKARG_PRESENT *v33; // r15
  unsigned int DirtyRectCount; // ecx
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rsi
  int v36; // r12d
  const struct tagRECT *v37; // rdi
  int left; // r9d
  int right; // r8d
  int top; // r10d
  int bottom; // r11d
  int v42; // edx
  unsigned int v43; // edx
  void *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned int MoveRectCount; // edx
  void *v49; // rax
  void *v50; // rax
  struct _D3DKMT_UNLOCK v51; // [rsp+28h] [rbp-59h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v52; // [rsp+38h] [rbp-49h] BYREF
  struct _D3DKMT_LOCK v53; // [rsp+68h] [rbp-19h] BYREF

  v10 = a8;
  v12 = a3;
  if ( (a8->Flags.Value & 4) != 0 )
    hSource = a8->hSource;
  else
    hSource = a8->hDestination;
  LODWORD(a8) = hSource;
  memset(&v53, 0, sizeof(v53));
  v16 = *((_QWORD *)a2 + 2);
  v53.Flags.Value |= 9u;
  v53.hAllocation = hSource;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL)) )
    v53.Flags.Value = v17 | 4;
  v19 = DXGDEVICE::Lock(v18, &v53, a10);
  v21 = v19;
  if ( v19 < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v22[3] = v21;
    v22[4] = a2;
    v22[5] = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
    v22[6] = v53.hAllocation;
    v22[7] = a4;
    WdLogEvent5_WdError(v22);
    return (unsigned int)v21;
  }
  *((_QWORD *)this + 1) = v53.pData;
  v24 = (DXGDEVICE *)*((_QWORD *)a2 + 2);
  v51.hDevice = 0;
  v51.phAllocations = (const D3DKMT_HANDLE *)&a8;
  v51.NumAllocations = 1;
  DXGDEVICE::Unlock(v24, &v51, 0LL);
  memset(&v52, 0, sizeof(v52));
  v25 = *((_QWORD *)a2 + 2);
  v52.hAllocation = *(HANDLE *)(*((_QWORD *)a4 + 6) + 16LL);
  v27 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v25 + 16), &v52, v26);
  v29 = v27;
  if ( v27 < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v30[3] = v29;
    v30[4] = a2;
    v30[5] = *((unsigned int *)a4 + 4);
    v30[6] = a4;
    v30[7] = v12;
LABEL_10:
    WdLogEvent5_WdError(v30);
    return 3221225485LL;
  }
  Format = v52.Format;
  *(_DWORD *)this = v12;
  if ( Format != D3DDDIFMT_R8G8B8 )
  {
    if ( Format > D3DDDIFMT_R8G8B8 )
    {
      if ( Format <= D3DDDIFMT_X8R8G8B8 )
      {
LABEL_24:
        *((_DWORD *)this + 4) = 4;
        goto LABEL_26;
      }
      if ( Format == D3DDDIFMT_R5G6B5 )
      {
        *((_DWORD *)this + 4) = 2;
        goto LABEL_26;
      }
      if ( Format > D3DDDIFMT_X4R4G4B4 )
      {
        if ( Format > D3DDDIFMT_X8B8G8R8 )
        {
          if ( Format == D3DDDIFMT_P8 )
          {
            *((_DWORD *)this + 4) = 1;
            goto LABEL_26;
          }
          if ( Format == D3DDDIFMT_A16B16G16R16F )
          {
            *((_DWORD *)this + 4) = 8;
            goto LABEL_26;
          }
          if ( Format != D3DDDIFMT_A2B10G10R10_XR_BIAS )
            goto LABEL_20;
        }
        goto LABEL_24;
      }
    }
LABEL_20:
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v30[3] = -1073741811LL;
    v30[4] = v52.Format;
    goto LABEL_10;
  }
  *((_DWORD *)this + 4) = 3;
LABEL_26:
  pDirtyRects = 0LL;
  v33 = a9;
  DirtyRectCount = 0;
  *((_DWORD *)this + 5) = a5;
  *((_DWORD *)this + 6) = a6 & 1;
  pPresentRegions = v10->pPresentRegions;
  v36 = v10->Flags.Value & 4;
  if ( v36 )
  {
    if ( !pPresentRegions )
    {
      v37 = 0LL;
      goto LABEL_32;
    }
    DirtyRectCount = pPresentRegions->DirtyRectCount;
    pDirtyRects = pPresentRegions->pDirtyRects;
  }
  else
  {
    DirtyRectCount = v33->SubRectCnt;
    pDirtyRects = v33->pDstSubRects;
  }
  v37 = a7;
LABEL_32:
  if ( !v37 )
    goto LABEL_47;
  left = v37->left;
  right = v37->right;
  if ( v37->left < right )
  {
    top = v37->top;
    bottom = v37->bottom;
    if ( top < bottom && right <= (int)v52.Width && bottom <= (int)v52.Height && left >= 0 && top >= 0 )
    {
      v42 = 0;
      if ( !DirtyRectCount )
        goto LABEL_47;
      while ( left < pDirtyRects[v42].left
           || right > pDirtyRects[v42].right
           || top < pDirtyRects[v42].top
           || bottom > pDirtyRects[v42].bottom )
      {
        if ( ++v42 >= DirtyRectCount )
          goto LABEL_47;
      }
    }
  }
  v37 = 0LL;
LABEL_47:
  v43 = DirtyRectCount + 1;
  if ( !v37 )
    v43 = DirtyRectCount;
  if ( v36 )
  {
    if ( pPresentRegions && (v43 || pPresentRegions->MoveRectCount) )
    {
      *((_DWORD *)this + 10) = v43;
      if ( v43 )
      {
        v44 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v43);
        *((_QWORD *)this + 6) = v44;
        if ( !v44 )
        {
LABEL_55:
          v46 = WdLogNewEntry5_WdError(v45);
          *(_QWORD *)(v46 + 24) = this;
          v47 = *((unsigned int *)this + 10);
LABEL_56:
          *(_QWORD *)(v46 + 32) = v47;
          WdLogEvent5_WdError(v46);
          return 3221225495LL;
        }
        if ( pPresentRegions->DirtyRectCount )
          memmove(v44, pDirtyRects, 16LL * pPresentRegions->DirtyRectCount);
        if ( v37 )
          *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * pPresentRegions->DirtyRectCount) = *v37;
      }
      else
      {
        *((_QWORD *)this + 6) = 0LL;
      }
      MoveRectCount = pPresentRegions->MoveRectCount;
      *((_DWORD *)this + 7) = MoveRectCount;
      if ( MoveRectCount )
      {
        v49 = CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 64, MoveRectCount);
        *((_QWORD *)this + 4) = v49;
        if ( !v49 )
        {
          v46 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v46 + 24) = this;
          v47 = *((unsigned int *)this + 7);
          goto LABEL_56;
        }
        memmove(v49, pPresentRegions->pMoveRects, 24LL * *((unsigned int *)this + 7));
        return 0LL;
      }
    }
    else
    {
      *((_DWORD *)this + 10) = 1;
      *((_QWORD *)this + 6) = (char *)this + 176;
      *((_DWORD *)this + 44) = 0;
      *(_DWORD *)(*((_QWORD *)this + 6) + 4LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 6) + 8LL) = v52.Width;
      *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) = v52.Height;
      *((_DWORD *)this + 7) = 0;
    }
    *((_QWORD *)this + 4) = 0LL;
    return 0LL;
  }
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = v43;
  v50 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v43);
  *((_QWORD *)this + 6) = v50;
  if ( !v50 )
    goto LABEL_55;
  memmove(v50, v33->pDstSubRects, 16LL * v33->SubRectCnt);
  if ( v37 )
    *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * v33->SubRectCnt) = *v37;
  return 0LL;
}
