/*
 * XREFs of ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007E58C
 * Callers:
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007E1B8 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x1C0001114 (-Get@-$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x1C001DE40 (-Get@-$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0094290 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0094B50 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall PRESENTDODARG::SetPresentDodArg(
        PRESENTDODARG *this,
        struct DXGCONTEXT *a2,
        struct DXGALLOCATION *a3,
        int a4,
        char a5,
        const struct tagRECT *a6,
        const struct _D3DKMT_PRESENT *a7,
        const struct _DXGKARG_PRESENT *a8,
        struct COREDEVICEACCESS *a9)
{
  const struct _D3DKMT_PRESENT *v9; // r15
  D3DKMT_HANDLE hSource; // edi
  DXGDEVICE *v15; // rcx
  UINT v16; // edx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  DXGDEVICE *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdi
  D3DDDIFORMAT Format; // eax
  __int64 v27; // rcx
  const RECT *pDirtyRects; // r14
  UINT DirtyRectCount; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r12d
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rsi
  const struct _DXGKARG_PRESENT *v32; // r15
  int v33; // r12d
  unsigned int v35; // edx
  void *v36; // rax
  __int64 v37; // rcx
  unsigned int MoveRectCount; // edx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  LONG left; // r9d
  int right; // r8d
  LONG top; // r10d
  LONG bottom; // r11d
  int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rcx
  void *v49; // rax
  void *v50; // rax
  struct _D3DKMT_UNLOCK v51; // [rsp+28h] [rbp-51h] BYREF
  _DXGKARG_DESCRIBEALLOCATION v52; // [rsp+38h] [rbp-41h] BYREF
  struct _D3DKMT_LOCK v53; // [rsp+68h] [rbp-11h] BYREF

  v9 = a7;
  if ( (a7->Flags.Value & 4) != 0 )
    hSource = a7->hSource;
  else
    hSource = a7->hDestination;
  LODWORD(a7) = hSource;
  memset(&v53, 0, sizeof(v53));
  v15 = (DXGDEVICE *)*((_QWORD *)a2 + 2);
  v16 = v53.Flags.Value | 9;
  v53.Flags.Value |= 9u;
  v53.hAllocation = hSource;
  v17 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
  if ( *(int *)(v17 + 1968) >= 0x2000 || *(_BYTE *)(v17 + 2252) )
    v53.Flags.Value = v16 | 4;
  v18 = DXGDEVICE::Lock(v15, &v53, a9);
  v20 = v18;
  if ( v18 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v40[3] = v20;
    v40[4] = a2;
    v40[5] = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
    v40[6] = v53.hAllocation;
    v40[7] = a3;
    WdLogEvent5_WdError(v40);
    return (unsigned int)v20;
  }
  *((_QWORD *)this + 1) = v53.pData;
  v21 = (DXGDEVICE *)*((_QWORD *)a2 + 2);
  v51.hDevice = 0;
  v51.phAllocations = (const D3DKMT_HANDLE *)&a7;
  v51.NumAllocations = 1;
  DXGDEVICE::Unlock(v21, &v51, 0);
  memset(&v52, 0, sizeof(v52));
  v22 = *((_QWORD *)a2 + 2);
  v52.hAllocation = *(HANDLE *)(*((_QWORD *)a3 + 6) + 16LL);
  v23 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v22 + 16), &v52);
  v25 = v23;
  if ( v23 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v41[3] = v25;
    v41[4] = a2;
    v41[5] = *((unsigned int *)a3 + 4);
    v41[6] = a3;
    v41[7] = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
LABEL_37:
    WdLogEvent5_WdError(v41);
    return 3221225485LL;
  }
  Format = v52.Format;
  v27 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
  *(_DWORD *)this = v27;
  if ( Format == D3DDDIFMT_R8G8B8 )
  {
    *((_DWORD *)this + 4) = 3;
  }
  else
  {
    if ( Format <= D3DDDIFMT_R8G8B8 )
      goto LABEL_36;
    if ( Format <= D3DDDIFMT_X8R8G8B8 )
    {
LABEL_10:
      *((_DWORD *)this + 4) = 4;
      goto LABEL_11;
    }
    if ( Format == D3DDDIFMT_R5G6B5 )
    {
      *((_DWORD *)this + 4) = 2;
      goto LABEL_11;
    }
    if ( Format <= D3DDDIFMT_X4R4G4B4 )
    {
LABEL_36:
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v41[3] = -1073741811LL;
      v41[4] = v52.Format;
      goto LABEL_37;
    }
    if ( Format <= D3DDDIFMT_X8B8G8R8 )
      goto LABEL_10;
    switch ( Format )
    {
      case D3DDDIFMT_P8:
        *((_DWORD *)this + 4) = 1;
        break;
      case D3DDDIFMT_A16B16G16R16F:
        *((_DWORD *)this + 4) = 8;
        break;
      case D3DDDIFMT_A2B10G10R10_XR_BIAS:
        goto LABEL_10;
      default:
        goto LABEL_36;
    }
  }
LABEL_11:
  pDirtyRects = 0LL;
  *((_DWORD *)this + 5) = a4;
  *((_DWORD *)this + 6) = a5 & 1;
  DirtyRectCount = 0;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
  pPresentRegions = v9->pPresentRegions;
  v32 = a8;
  v33 = *(_BYTE *)&Value & 4;
  if ( v33 )
  {
    if ( pPresentRegions )
    {
      DirtyRectCount = pPresentRegions->DirtyRectCount;
      pDirtyRects = pPresentRegions->pDirtyRects;
    }
    else
    {
      a6 = 0LL;
    }
  }
  else
  {
    DirtyRectCount = a8->SubRectCnt;
    pDirtyRects = a8->pDstSubRects;
  }
  if ( a6 )
  {
    left = a6->left;
    right = a6->right;
    if ( a6->left < right )
    {
      top = a6->top;
      bottom = a6->bottom;
      if ( top < bottom && right <= (int)v52.Width && bottom <= (int)v52.Height && left >= 0 && top >= 0 )
      {
        v46 = 0;
        if ( !DirtyRectCount )
          goto LABEL_15;
        while ( left < pDirtyRects[v46].left
             || right > pDirtyRects[v46].right
             || top < pDirtyRects[v46].top
             || bottom > pDirtyRects[v46].bottom )
        {
          if ( ++v46 >= DirtyRectCount )
            goto LABEL_15;
        }
      }
    }
    a6 = 0LL;
  }
LABEL_15:
  v35 = DirtyRectCount + 1;
  if ( !a6 )
    v35 = DirtyRectCount;
  if ( v33 )
  {
    if ( !pPresentRegions || !v35 && !pPresentRegions->MoveRectCount )
    {
      *((_DWORD *)this + 10) = 1;
      *((_QWORD *)this + 6) = (char *)this + 176;
      *((_DWORD *)this + 44) = 0;
      *(_DWORD *)(*((_QWORD *)this + 6) + 4LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 6) + 8LL) = v52.Width;
      *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) = v52.Height;
      *((_DWORD *)this + 7) = 0;
      goto LABEL_27;
    }
    *((_DWORD *)this + 10) = v35;
    if ( !v35 )
    {
      *((_QWORD *)this + 6) = 0LL;
LABEL_26:
      MoveRectCount = pPresentRegions->MoveRectCount;
      *((_DWORD *)this + 7) = MoveRectCount;
      if ( !MoveRectCount )
      {
LABEL_27:
        *((_QWORD *)this + 4) = 0LL;
        return 0LL;
      }
      v49 = CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 64, MoveRectCount);
      *((_QWORD *)this + 4) = v49;
      if ( v49 )
      {
        memmove(v49, pPresentRegions->pMoveRects, 24LL * *((unsigned int *)this + 7));
        return 0LL;
      }
      v47 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v47 + 24) = this;
      v48 = *((unsigned int *)this + 7);
      goto LABEL_68;
    }
    v36 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v35);
    *((_QWORD *)this + 6) = v36;
    if ( v36 )
    {
      if ( pPresentRegions->DirtyRectCount )
        memmove(v36, pDirtyRects, 16LL * pPresentRegions->DirtyRectCount);
      if ( a6 )
        *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * pPresentRegions->DirtyRectCount) = *a6;
      goto LABEL_26;
    }
  }
  else
  {
    *((_DWORD *)this + 7) = 0;
    *((_QWORD *)this + 4) = 0LL;
    *((_DWORD *)this + 10) = v35;
    v50 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v35);
    *((_QWORD *)this + 6) = v50;
    if ( v50 )
    {
      memmove(v50, v32->pDstSubRects, 16LL * v32->SubRectCnt);
      if ( a6 )
        *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * v32->SubRectCnt) = *a6;
      return 0LL;
    }
  }
  v47 = WdLogNewEntry5_WdError(v37);
  *(_QWORD *)(v47 + 24) = this;
  v48 = *((unsigned int *)this + 10);
LABEL_68:
  *(_QWORD *)(v47 + 32) = v48;
  WdLogEvent5_WdError(v47);
  return 3221225495LL;
}
