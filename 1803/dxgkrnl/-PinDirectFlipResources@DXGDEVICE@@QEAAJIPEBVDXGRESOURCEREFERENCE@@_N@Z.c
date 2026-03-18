/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C010B640
 * Callers:
 *     DxgkPinDirectFlipResources @ 0x1C0110740 (DxgkPinDirectFlipResources.c)
 * Callees:
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00188A4 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002C3D4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C010B07C (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C010B0CC (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C010B1C8 (-InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C010B534 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
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
  int v11; // eax
  const struct DXGALLOCATION *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 Width; // r8
  UINT Height; // r9d
  enum _D3DDDIFORMAT Format; // r10d
  unsigned int v18; // r15d
  __int64 v19; // rsi
  struct DXGRESOURCE **v20; // rbp
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int i; // r15d
  __int64 v28; // rbp
  unsigned int v29; // esi
  __int64 v30; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 j; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  D3DDDIFORMAT v38; // [rsp+40h] [rbp-78h]
  struct _DXGKARG_DESCRIBEALLOCATION v39; // [rsp+48h] [rbp-70h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp+8h] BYREF
  UINT v41; // [rsp+D0h] [rbp+18h]

  v4 = a3;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 128LL) - 48LL;
  v9 = (*(_DWORD *)(v8 + 4) >> 6) & 0xF;
  memset(&v39, 0, sizeof(v39));
  v10 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v39.hAllocation = *(HANDLE *)(v8 + 16);
  v11 = ADAPTER_RENDER::DdiDescribeAllocation(v10, &v39);
  v14 = v11;
  if ( v11 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v32[3] = v14;
    v32[4] = this;
    v32[5] = *(_QWORD *)(v8 + 16);
    v32[6] = v8;
    WdLogEvent5_WdError(v32);
  }
  else
  {
    Width = v39.Width;
    Height = v39.Height;
    Format = v39.Format;
    Interval.LowPart = v39.Width;
    v41 = v39.Height;
    v38 = v39.Format;
    if ( (unsigned int)v9 >= *((_DWORD *)this + 424) )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v39.Width);
      v33[3] = *(_QWORD *)v4;
LABEL_30:
      v14 = -1073741811LL;
LABEL_32:
      v33[4] = v14;
LABEL_34:
      WdLogEvent5_WdWarning(v33);
      return (unsigned int)v14;
    }
    if ( a4 && !*((_DWORD *)this + 425) )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v39.Width);
      LODWORD(v14) = -1073741790;
      v33[3] = -1073741790LL;
      goto LABEL_34;
    }
    v18 = 0;
    v19 = 0LL;
    if ( a2 )
    {
      v20 = (struct DXGRESOURCE **)v4;
      while ( 1 )
      {
        v21 = DXGDEVICE::ValidateDirectFlipResource(
                this,
                *v20,
                v9,
                Width,
                Height,
                Format,
                *(_DWORD *)(*((_QWORD *)*v20 + 7) + 124LL));
        v14 = v21;
        if ( v21 < 0 )
          break;
        v12 = (const struct DXGALLOCATION *)*((_QWORD *)*v20 + 3);
        while ( v12 )
        {
          if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, v12) )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, Width);
            v33[3] = *((_QWORD *)v4 + v19);
            goto LABEL_30;
          }
          v12 = *(const struct DXGALLOCATION **)(v24 + 64);
          ++v18;
        }
        v19 = (unsigned int)(v19 + 1);
        ++v20;
        if ( (unsigned int)v19 >= a2 )
          goto LABEL_12;
        LODWORD(Width) = Interval.LowPart;
        Height = v41;
        Format = v38;
      }
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, Width);
      v33[3] = *((_QWORD *)v4 + v19);
      goto LABEL_32;
    }
LABEL_12:
    v26 = v18 + *((_DWORD *)this + v9 + 326);
    if ( (unsigned int)v26 > 0x300 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v12, Width);
      LODWORD(v14) = -1073741811;
      v33[3] = *((unsigned int *)this + v9 + 326);
      v33[4] = v18;
      v33[5] = 768LL;
      v33[6] = -1073741811LL;
      goto LABEL_34;
    }
    for ( i = 0; i < a2; v4 = (const struct DXGRESOURCEREFERENCE *)((char *)v4 + 8) )
    {
      if ( (int)v14 < 0 )
        break;
      v28 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
LABEL_16:
      while ( v28 )
      {
        if ( (int)v14 < 0 )
          goto LABEL_39;
        v29 = 0;
        while ( 1 )
        {
          LODWORD(v14) = VIDMM_EXPORT::VidMmPinAllocation(
                           *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                           *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                           *(struct _VIDMM_MULTI_ALLOC **)(v28 + 24),
                           0LL,
                           0LL);
          if ( (int)v14 >= 0 )
            break;
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
          ++v29;
          LODWORD(v14) = -1071775488;
          if ( v29 >= 4 )
            goto LABEL_16;
        }
        if ( !DXGDEVICE::InsertDirectFlipAllocationToList((struct _KTHREAD **)this, v9, (struct DXGALLOCATION *)v28) )
        {
          v34 = WdLogNewEntry5_WdAssertion(v30);
          *(_QWORD *)(v34 + 24) = 6296LL;
          WdLogEvent5_WdAssertion(v34);
        }
        v28 = *(_QWORD *)(v28 + 64);
      }
      if ( (int)v14 >= 0 )
        goto LABEL_24;
LABEL_39:
      for ( j = *(_QWORD *)(*(_QWORD *)v4 + 24LL); j && j != v28; j = *(_QWORD *)(j + 64) )
      {
        if ( !DXGDEVICE::RemoveDirectFlipAllocationFromList((struct _KTHREAD **)this, v9, (struct DXGALLOCATION *)j) )
        {
          v37 = WdLogNewEntry5_WdAssertion(v36);
          *(_QWORD *)(v37 + 24) = 6311LL;
          WdLogEvent5_WdAssertion(v37);
        }
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
          *(struct _VIDMM_MULTI_ALLOC **)(j + 24));
      }
LABEL_24:
      ++i;
    }
  }
  return (unsigned int)v14;
}
