/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C01883E4
 * Callers:
 *     DxgkPinDirectFlipResources @ 0x1C018B9E0 (DxgkPinDirectFlipResources.c)
 * Callees:
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000DD94 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C000DF04 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0187C60 (-InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0188048 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C01888D0 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C01898D8 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinDirectFlipResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        char a4)
{
  const struct DXGRESOURCEREFERENCE *v4; // r14
  __int64 v8; // rsi
  __int64 v9; // r12
  ADAPTER_RENDER *v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  const struct DXGALLOCATION *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 Width; // r8
  __int64 Height; // r9
  enum _D3DDDIFORMAT Format; // r10d
  _QWORD *v20; // rax
  unsigned int v21; // r15d
  __int64 v22; // rsi
  struct DXGRESOURCE **v23; // rbp
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int i; // r15d
  __int64 v31; // rbp
  unsigned int v32; // esi
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 j; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  D3DDDIFORMAT v46; // [rsp+40h] [rbp-78h]
  struct _DXGKARG_DESCRIBEALLOCATION v47; // [rsp+48h] [rbp-70h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp+8h] BYREF
  UINT v49; // [rsp+D0h] [rbp+18h]

  v4 = a3;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 128LL) - 48LL;
  v9 = (*(_DWORD *)(v8 + 4) >> 6) & 0xF;
  memset(&v47, 0, sizeof(v47));
  v10 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v47.hAllocation = *(HANDLE *)(v8 + 16);
  v12 = ADAPTER_RENDER::DdiDescribeAllocation(v10, &v47, v11);
  v15 = v12;
  if ( v12 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v16[3] = v15;
    v16[4] = this;
    v16[5] = *(_QWORD *)(v8 + 16);
    v16[6] = v8;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v15;
  }
  Width = v47.Width;
  Height = v47.Height;
  Format = v47.Format;
  Interval.LowPart = v47.Width;
  v49 = v47.Height;
  v46 = v47.Format;
  if ( (unsigned int)v9 >= *((_DWORD *)this + 452) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v47.Width, v47.Height);
    v20[3] = *(_QWORD *)v4;
LABEL_5:
    v15 = -1073741811LL;
LABEL_6:
    v20[4] = v15;
LABEL_7:
    WdLogEvent5_WdWarning(v20);
    return (unsigned int)v15;
  }
  if ( a4 && !*((_DWORD *)this + 453) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v47.Width, v47.Height);
    LODWORD(v15) = -1073741790;
    v20[3] = -1073741790LL;
    goto LABEL_7;
  }
  v21 = 0;
  v22 = 0LL;
  if ( a2 )
  {
    v23 = (struct DXGRESOURCE **)v4;
    while ( 1 )
    {
      v24 = DXGDEVICE::ValidateDirectFlipResource(
              this,
              *v23,
              v9,
              Width,
              Height,
              Format,
              *(_DWORD *)(*((_QWORD *)*v23 + 7) + 124LL));
      v15 = v24;
      if ( v24 < 0 )
        break;
      v13 = (const struct DXGALLOCATION *)*((_QWORD *)*v23 + 3);
      while ( v13 )
      {
        if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, v13) )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, Width, Height);
          v20[3] = *((_QWORD *)v4 + v22);
          goto LABEL_5;
        }
        v13 = *(const struct DXGALLOCATION **)(v27 + 64);
        ++v21;
      }
      v22 = (unsigned int)(v22 + 1);
      ++v23;
      if ( (unsigned int)v22 >= a2 )
        goto LABEL_22;
      LODWORD(Width) = Interval.LowPart;
      LODWORD(Height) = v49;
      Format = v46;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, Width, Height);
    v20[3] = *((_QWORD *)v4 + v22);
    goto LABEL_6;
  }
LABEL_22:
  v29 = v21 + *((_DWORD *)this + v9 + 322);
  if ( (unsigned int)v29 > 0x300 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v13, Width, Height);
    LODWORD(v15) = -1073741811;
    v20[3] = *((unsigned int *)this + v9 + 322);
    v20[4] = v21;
    v20[5] = 768LL;
    v20[6] = -1073741811LL;
    goto LABEL_7;
  }
  for ( i = 0; i < a2; v4 = (const struct DXGRESOURCEREFERENCE *)((char *)v4 + 8) )
  {
    if ( (int)v15 < 0 )
      break;
    v31 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
LABEL_35:
    while ( v31 )
    {
      if ( (int)v15 < 0 )
        goto LABEL_37;
      v32 = 0;
      while ( 1 )
      {
        LODWORD(v15) = VIDMM_EXPORT::VidMmPinAllocation(
                         *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
                         *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
                         *(struct _VIDMM_MULTI_ALLOC **)(v31 + 24),
                         0LL,
                         0LL);
        if ( (int)v15 >= 0 )
          break;
        Interval.QuadPart = -150LL;
        KeDelayExecutionThread(0, 0, &Interval);
        ++v32;
        LODWORD(v15) = -1071775488;
        if ( v32 >= 4 )
          goto LABEL_35;
      }
      if ( !DXGDEVICE::InsertDirectFlipAllocationToList((struct _KTHREAD **)this, v9, (struct DXGALLOCATION *)v31, v33) )
      {
        v38 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
        *(_QWORD *)(v38 + 24) = 6054LL;
        WdLogEvent5_WdAssertion(v38);
      }
      v31 = *(_QWORD *)(v31 + 64);
    }
    if ( (int)v15 >= 0 )
      goto LABEL_43;
LABEL_37:
    for ( j = *(_QWORD *)(*(_QWORD *)v4 + 24LL); j && j != v31; j = *(_QWORD *)(j + 64) )
    {
      if ( !DXGDEVICE::RemoveDirectFlipAllocationFromList(this, v9, (struct DXGALLOCATION *)j) )
      {
        v44 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
        *(_QWORD *)(v44 + 24) = 6069LL;
        WdLogEvent5_WdAssertion(v44);
      }
      VIDMM_EXPORT::VidMmUnpinAllocation(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
        *(struct _VIDMM_MULTI_ALLOC **)(j + 24));
    }
LABEL_43:
    ++i;
  }
  return (unsigned int)v15;
}
