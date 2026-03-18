/*
 * XREFs of ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5F44
 * Callers:
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01B641C (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x1C0020D20 (-Get@-$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z.c)
 *     ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x1C0020DA4 (-Get@-$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C12EC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00C1704 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
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
  D3DKMT_HANDLE hSource; // esi
  __int64 v15; // r9
  int v16; // edx
  PERESOURCE *v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rsi
  _QWORD *v23; // rax
  DXGDEVICE *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  _QWORD *v32; // rax
  D3DDDIFORMAT Format; // eax
  __int64 v34; // rcx
  const RECT *pDirtyRects; // r14
  UINT DirtyRectCount; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r12d
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rsi
  const struct _DXGKARG_PRESENT *v39; // r15
  int v40; // r12d
  const struct tagRECT *v41; // rdi
  int left; // r9d
  int right; // r8d
  int top; // r10d
  int bottom; // r11d
  int v46; // edx
  unsigned int v47; // edx
  void *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int MoveRectCount; // edx
  void *v54; // rax
  __int64 v55; // rdx
  void *v56; // rax
  struct _D3DKMT_UNLOCK v57; // [rsp+28h] [rbp-51h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v58; // [rsp+38h] [rbp-41h] BYREF
  struct _D3DKMT_LOCK v59; // [rsp+68h] [rbp-11h] BYREF

  v9 = a7;
  if ( (a7->Flags.Value & 4) != 0 )
    hSource = a7->hSource;
  else
    hSource = a7->hDestination;
  LODWORD(a7) = hSource;
  memset(&v59, 0, sizeof(v59));
  v15 = *((_QWORD *)a2 + 2);
  v59.Flags.Value |= 9u;
  v59.hAllocation = hSource;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL)) )
    v59.Flags.Value = v16 | 4;
  v18 = DXGDEVICE::Lock(v17, &v59, a9, (__int64)v17);
  v22 = v18;
  if ( v18 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v23[3] = v22;
    v23[4] = a2;
    v23[5] = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
    v23[6] = v59.hAllocation;
    v23[7] = a3;
    WdLogEvent5_WdError(v23);
    return (unsigned int)v22;
  }
  *((_QWORD *)this + 1) = v59.pData;
  v25 = (DXGDEVICE *)*((_QWORD *)a2 + 2);
  v57.hDevice = 0;
  v57.phAllocations = (const D3DKMT_HANDLE *)&a7;
  v57.NumAllocations = 1;
  DXGDEVICE::Unlock(v25, &v57, 0LL, v21);
  memset(&v58, 0, sizeof(v58));
  v26 = *((_QWORD *)a2 + 2);
  v58.hAllocation = *(HANDLE *)(*((_QWORD *)a3 + 6) + 16LL);
  v28 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v26 + 16), &v58, v27);
  v31 = v28;
  if ( v28 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
    v32[3] = v31;
    v32[4] = a2;
    v32[5] = *((unsigned int *)a3 + 4);
    v32[6] = a3;
    v32[7] = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
LABEL_10:
    WdLogEvent5_WdError(v32);
    return 3221225485LL;
  }
  Format = v58.Format;
  v34 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
  *(_DWORD *)this = v34;
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
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v34, v29);
    v32[3] = -1073741811LL;
    v32[4] = v58.Format;
    goto LABEL_10;
  }
  *((_DWORD *)this + 4) = 3;
LABEL_26:
  pDirtyRects = 0LL;
  *((_DWORD *)this + 5) = a4;
  *((_DWORD *)this + 6) = a5 & 1;
  DirtyRectCount = 0;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
  pPresentRegions = v9->pPresentRegions;
  v39 = a8;
  v40 = *(_BYTE *)&Value & 4;
  if ( v40 )
  {
    if ( !pPresentRegions )
    {
      v41 = 0LL;
      goto LABEL_32;
    }
    DirtyRectCount = pPresentRegions->DirtyRectCount;
    pDirtyRects = pPresentRegions->pDirtyRects;
  }
  else
  {
    DirtyRectCount = a8->SubRectCnt;
    pDirtyRects = a8->pDstSubRects;
  }
  v41 = a6;
LABEL_32:
  if ( !v41 )
    goto LABEL_47;
  left = v41->left;
  right = v41->right;
  if ( v41->left < right )
  {
    top = v41->top;
    bottom = v41->bottom;
    if ( top < bottom && right <= (int)v58.Width && bottom <= (int)v58.Height && left >= 0 && top >= 0 )
    {
      v46 = 0;
      if ( !DirtyRectCount )
        goto LABEL_47;
      while ( left < pDirtyRects[v46].left
           || right > pDirtyRects[v46].right
           || top < pDirtyRects[v46].top
           || bottom > pDirtyRects[v46].bottom )
      {
        if ( ++v46 >= DirtyRectCount )
          goto LABEL_47;
      }
    }
  }
  v41 = 0LL;
LABEL_47:
  v47 = DirtyRectCount + 1;
  if ( !v41 )
    v47 = DirtyRectCount;
  if ( v40 )
  {
    if ( pPresentRegions && (v47 || pPresentRegions->MoveRectCount) )
    {
      *((_DWORD *)this + 10) = v47;
      if ( v47 )
      {
        v48 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v47);
        *((_QWORD *)this + 6) = v48;
        if ( !v48 )
        {
LABEL_55:
          v51 = WdLogNewEntry5_WdError(v50, v49);
          *(_QWORD *)(v51 + 24) = this;
          v52 = *((unsigned int *)this + 10);
LABEL_56:
          *(_QWORD *)(v51 + 32) = v52;
          WdLogEvent5_WdError(v51);
          return 3221225495LL;
        }
        if ( pPresentRegions->DirtyRectCount )
          memmove(v48, pDirtyRects, 16LL * pPresentRegions->DirtyRectCount);
        if ( v41 )
          *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * pPresentRegions->DirtyRectCount) = *v41;
      }
      else
      {
        *((_QWORD *)this + 6) = 0LL;
      }
      MoveRectCount = pPresentRegions->MoveRectCount;
      *((_DWORD *)this + 7) = MoveRectCount;
      if ( MoveRectCount )
      {
        v54 = CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 64, MoveRectCount);
        *((_QWORD *)this + 4) = v54;
        if ( !v54 )
        {
          v51 = WdLogNewEntry5_WdError(0LL, v55);
          *(_QWORD *)(v51 + 24) = this;
          v52 = *((unsigned int *)this + 7);
          goto LABEL_56;
        }
        memmove(v54, pPresentRegions->pMoveRects, 24LL * *((unsigned int *)this + 7));
        return 0LL;
      }
    }
    else
    {
      *((_DWORD *)this + 10) = 1;
      *((_QWORD *)this + 6) = (char *)this + 176;
      *((_DWORD *)this + 44) = 0;
      *(_DWORD *)(*((_QWORD *)this + 6) + 4LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 6) + 8LL) = v58.Width;
      *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) = v58.Height;
      *((_DWORD *)this + 7) = 0;
    }
    *((_QWORD *)this + 4) = 0LL;
    return 0LL;
  }
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = v47;
  v56 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v47);
  *((_QWORD *)this + 6) = v56;
  if ( !v56 )
    goto LABEL_55;
  memmove(v56, v39->pDstSubRects, 16LL * v39->SubRectCnt);
  if ( v41 )
    *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * v39->SubRectCnt) = *v41;
  return 0LL;
}
