/*
 * XREFs of ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005837C
 * Callers:
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059FF8 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C005A190 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A34C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A4A0 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A544 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005A814 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005AE04 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00924C8 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C0093F30 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00958F4 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C0095E44 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 * Callees:
 *     Template_pptpqqx @ 0x1C0014AC0 (Template_pptpqqx.c)
 *     Template_pptpqxpx @ 0x1C0014B94 (Template_pptpqxpx.c)
 *     Template_pptpqxpxx @ 0x1C0014C60 (Template_pptpqxpxx.c)
 *     Template_pptpqxq @ 0x1C0014D58 (Template_pptpqxq.c)
 *     Template_pptpqxqqppqqxxpqx @ 0x1C0014E2C (Template_pptpqxqqppqqxxpqx.c)
 *     Template_pptpqxqxqxq @ 0x1C0014FDC (Template_pptpqxqxqxq.c)
 *     Template_pptpqxqxqxqqq @ 0x1C00150F8 (Template_pptpqxqxqxqqq.c)
 *     Template_pptpqxxqt @ 0x1C0015248 (Template_pptpqxxqt.c)
 *     Template_pptpqxxt @ 0x1C0015340 (Template_pptpqxxt.c)
 *     Template_pptpxqqx @ 0x1C0015410 (Template_pptpxqqx.c)
 *     Template_pptpxxpq @ 0x1C00154E0 (Template_pptpxxpq.c)
 *     Template_pptpxxqqxx @ 0x1C00155AC (Template_pptpxxqqxx.c)
 *     Template_pptpxxqqxxxqqxxx @ 0x1C00156B8 (Template_pptpxxqqxxxqqxxx.c)
 *     Template_pptqx @ 0x1C0015854 (Template_pptqx.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        signed __int64 this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  unsigned __int64 v8; // r13
  __int64 v9; // r8
  signed __int64 v11; // rsi
  int v12; // r12d
  __int64 v13; // r14
  int v14; // r12d
  __int64 v15; // rbx
  _OWORD *v16; // rdx
  unsigned int v17; // r15d
  unsigned int v19; // ebx
  _QWORD *v20; // rax
  unsigned int v21; // ebx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r9
  _BOOL8 v26; // rdx
  int v27; // ecx
  DXGK_PAGETABLEUPDATEMODE UpdateMode; // r10d
  UINT FillPattern; // r11d
  __int64 v30; // rcx
  struct _DXGKARG_BUILDPAGINGBUFFER *v31; // rax
  __int128 v32; // xmm1
  __int64 v33; // rbx
  _QWORD *v34; // rax
  int v35; // [rsp+E0h] [rbp+8h]
  unsigned int v36; // [rsp+E8h] [rbp+10h]

  v36 = a2;
  v8 = -1LL;
  v9 = (unsigned int)a2;
  v11 = this;
  v12 = 0;
  if ( !a3 || (**((_DWORD **)a3 + 65) & 0x10000000) == 0 )
  {
    v13 = (unsigned int)a2;
    this = (unsigned int)(LODWORD(a4->pDmaBuffer) - *(_DWORD *)(this + 8LL * (unsigned int)a2 + 2680));
    v14 = LODWORD(a4->pDmaBufferPrivateData) - *(_DWORD *)(v11 + 8LL * (unsigned int)a2 + 3192);
    v35 = this;
    if ( (_DWORD)this || v14 )
    {
      if ( !*(_DWORD *)(v11 + 4LL * (unsigned int)a2 + 4620) )
      {
        *(_DWORD *)(v11 + 4LL * (unsigned int)a2 + 4620) = 1;
        ++*(_QWORD *)(v11 + 8LL * (unsigned int)a2 + 4880);
      }
      v8 = *(_QWORD *)(v11 + 8LL * (unsigned int)a2 + 4880);
      if ( a3 )
      {
        if ( *((_QWORD *)a3 + 22) > v8 )
        {
          v19 = *((_DWORD *)a3 + 19) & 0x3F;
          v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, (unsigned int)a2);
          v20[3] = 270LL;
          v20[4] = 31LL;
          v20[5] = a3;
          v20[6] = v19;
          v20[7] = v8;
          WdLogEvent5_WdCriticalError(v20);
        }
        *((_QWORD *)a3 + 22) = v8;
        if ( *(_DWORD *)(v11 + 8) == 206 )
        {
          if ( *((_QWORD *)a3 + 21) > v8 )
          {
            v21 = *((_DWORD *)a3 + 19) & 0x3F;
            v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v9);
            v22[3] = 270LL;
            v22[4] = 31LL;
            v22[5] = a3;
            v22[6] = v21;
            v22[7] = v8;
            WdLogEvent5_WdCriticalError(v22);
          }
          *((_QWORD *)a3 + 21) = v8;
        }
      }
    }
    *(_DWORD *)(v11 + 4 * v13 + 1656) += v35;
    if ( *(_DWORD *)(v11 + 4 * v13 + 1656) > *(_DWORD *)(v11 + 4 * v13 + 116) )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v9);
      v23[3] = 270LL;
      v23[4] = 18LL;
      v23[5] = 0LL;
      v23[6] = 0LL;
      v23[7] = 0LL;
      WdLogEvent5_WdCriticalError(v23);
    }
    *(_DWORD *)(v11 + 4 * v13 + 2168) += v14;
    if ( *(_DWORD *)(v11 + 4 * v13 + 2168) > *(_DWORD *)(v11 + 4 * v13 + 372) )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v9);
      v24[3] = 270LL;
      v24[4] = 19LL;
      v24[5] = 0LL;
      v24[6] = 0LL;
      v24[7] = 0LL;
      WdLogEvent5_WdCriticalError(v24);
    }
    v9 = v36;
    v12 = v35;
  }
  v15 = 2LL;
  if ( bTracingEnabled )
  {
    this = (unsigned int)a4->Operation;
    v25 = *(_QWORD *)(v11 + 24);
    v26 = a5 == -1071775743;
    v9 = *(_QWORD *)(v11 + 8LL * (unsigned int)v9 + 1144);
    if ( (int)this > 7 )
    {
      this = (unsigned int)(this - 8);
      if ( (_DWORD)this )
      {
        this = (unsigned int)(this - 1);
        if ( (_DWORD)this )
        {
          this = (unsigned int)(this - 1);
          if ( (_DWORD)this )
          {
            v27 = this - 1;
            if ( v27 )
            {
              this = (unsigned int)(v27 - 1);
              if ( (_DWORD)this )
              {
                this = (unsigned int)(this - 1);
                if ( (_DWORD)this )
                {
                  if ( (_DWORD)this == 2 && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                    Template_pptpqxq(
                      this,
                      v26,
                      v9,
                      v25,
                      v9,
                      v26,
                      a3,
                      a4->Transfer.TransferOffset,
                      a4->Transfer.TransferSize,
                      a4->Transfer.Source.SegmentId);
                }
                else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                {
                  Template_pptpxxpq(
                    this,
                    v26,
                    v9,
                    v25,
                    v9,
                    v26,
                    a3,
                    a4->UpdateContextAllocation.ContextAllocation,
                    a4->Fill.FillSize,
                    a4->Transfer.TransferSize,
                    a4->Transfer.Source.SegmentId);
                }
              }
              else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                Template_pptpqxpxx(
                  this,
                  v26,
                  v9,
                  v25,
                  v9,
                  v26,
                  a3,
                  a4->ReadPhysical.SegmentId,
                  a4->Fill.FillSize,
                  a4->Transfer.TransferSize,
                  a4->MapApertureSegment.OffsetInPages,
                  a4->Transfer.Source.SegmentAddress.QuadPart);
              }
            }
            else
            {
              UpdateMode = a4->UpdatePageTable.UpdateMode;
              FillPattern = 0;
              if ( (unsigned int)UpdateMode < DXGK_PAGETABLEUPDATE_GPU_PHYSICAL )
              {
                this = a4->DiscardContent.SegmentAddress.QuadPart;
              }
              else if ( UpdateMode == DXGK_PAGETABLEUPDATE_GPU_PHYSICAL )
              {
                this = a4->MapApertureSegment.OffsetInPages;
                FillPattern = a4->Fill.FillPattern;
              }
              else
              {
                this = 0LL;
              }
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                Template_pptpqxqqppqqxxpqx(
                  this,
                  v26,
                  v9,
                  v25,
                  v9,
                  v26,
                  a3,
                  a4->ReadPhysical.SegmentId,
                  this,
                  FillPattern,
                  a4->UnmapApertureSegment.DummyPage.HighPart,
                  a4->Transfer.Source.SegmentAddress.QuadPart,
                  a4->UpdatePageTable.pPageTableEntries64KB,
                  a4->Transfer.Destination.SegmentId,
                  a4->Transfer.Destination.SegmentAddress.HighPart,
                  a4->TransferVirtual.DestinationPageTable,
                  a4->UpdatePageTable.AllocationOffsetInBytes,
                  a4->UpdatePageTable.hProcess,
                  a4->Reserved.Reserved[20],
                  a4->UpdatePageTable.FirstPteVirtualAddress);
            }
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            Template_pptpqxpx(
              this,
              v26,
              v9,
              v25,
              v9,
              v26,
              a3,
              a4->Transfer.TransferOffset,
              a4->Transfer.TransferSize,
              a4->MapApertureSegment.OffsetInPages,
              a4->Transfer.Source.SegmentAddress.QuadPart);
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          Template_pptpxxqqxx(
            (__int64)a7,
            v26,
            v9,
            v25,
            v9,
            v26,
            a3,
            a4->Fill.FillSize,
            a4->Transfer.TransferSize,
            a4->Transfer.Source.SegmentId,
            *a7,
            a4->Transfer.Source.SegmentAddress.QuadPart,
            *((_QWORD *)a7 + 1));
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        Template_pptpxxqqxxxqqxxx(
          (__int64)a7,
          v26,
          v9,
          v25,
          v9,
          v26,
          a3,
          a4->Fill.FillSize,
          a4->Transfer.TransferSize,
          *a7,
          a7[1],
          a4->MapApertureSegment.OffsetInPages,
          a4->Transfer.Source.SegmentAddress.QuadPart,
          a4->UnmapApertureSegment.DummyPage.QuadPart,
          a4->Transfer.Destination.SegmentAddress.LowPart,
          a4->Transfer.Destination.SegmentAddress.HighPart,
          a4->TransferVirtual.DestinationPageTable,
          *((_QWORD *)a7 + 1),
          *((_QWORD *)a7 + 2));
      }
    }
    else if ( (_DWORD)this == 7 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        Template_pptpqxqxqxqqq(
          this,
          v26,
          v9,
          v25,
          v9,
          v26,
          a3,
          a4->Transfer.TransferOffset,
          a4->Transfer.TransferSize,
          a4->Transfer.Source.SegmentId,
          a4->Transfer.Source.SegmentAddress.QuadPart,
          a4->Transfer.Destination.SegmentId,
          a4->Transfer.Destination.SegmentAddress.QuadPart,
          a4->Transfer.Flags.Value,
          a4->Transfer.MdlOffset,
          a4->SpecialLockTransfer.SwizzlingRangeData);
    }
    else if ( (_DWORD)this )
    {
      this = (unsigned int)(this - 1);
      if ( (_DWORD)this )
      {
        this = (unsigned int)(this - 1);
        if ( (_DWORD)this )
        {
          this = (unsigned int)(this - 1);
          if ( (_DWORD)this )
          {
            this = (unsigned int)(this - 1);
            if ( (_DWORD)this )
            {
              this = (unsigned int)(this - 1);
              if ( (_DWORD)this )
              {
                if ( (_DWORD)this == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                  Template_pptpqxxt(
                    this,
                    v26,
                    v9,
                    v25,
                    v9,
                    v26,
                    a3,
                    a4->Fill.FillPattern,
                    a4->MapApertureSegment.OffsetInPages,
                    a4->Transfer.Source.SegmentAddress.QuadPart,
                    a6);
              }
              else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                Template_pptpqxxqt(
                  this,
                  v26,
                  v9,
                  v25,
                  v9,
                  v26,
                  a3,
                  a4->Fill.FillPattern,
                  a4->MapApertureSegment.OffsetInPages,
                  a4->Transfer.Source.SegmentAddress.QuadPart,
                  a4->Transfer.Destination.SegmentAddress.LowPart,
                  a6);
              }
            }
            else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              Template_pptqx(
                this,
                &EventPagingOpWritePhysical,
                v9,
                v25,
                v9,
                v26,
                a4->ReadPhysical.SegmentId,
                a4->Fill.FillSize);
            }
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            Template_pptqx(
              this,
              &EventPagingOpReadPhysical,
              v9,
              v25,
              v9,
              v26,
              a4->ReadPhysical.SegmentId,
              a4->Fill.FillSize);
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          Template_pptpqqx(
            this,
            v26,
            v9,
            v25,
            v9,
            v26,
            a3,
            a4->Transfer.TransferOffset,
            a4->DiscardContent.SegmentId,
            a4->Transfer.TransferSize);
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        Template_pptpxqqx(
          this,
          v26,
          v9,
          v25,
          v9,
          v26,
          a3,
          a4->Fill.FillSize,
          a4->Fill.FillPattern,
          a4->Transfer.Source.SegmentId,
          a4->Transfer.Source.SegmentAddress.QuadPart);
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      Template_pptpqxqxqxq(
        this,
        v26,
        v9,
        v25,
        v9,
        v26,
        a3,
        a4->Transfer.TransferOffset,
        a4->Transfer.TransferSize,
        a4->Transfer.Source.SegmentId,
        a4->Transfer.Source.SegmentAddress.QuadPart,
        a4->Transfer.Destination.SegmentId,
        a4->Transfer.Destination.SegmentAddress.QuadPart,
        a4->Transfer.Flags.Value);
    }
  }
  v16 = *(_OWORD **)(v11 + 7824);
  if ( v16 )
  {
    v30 = 360LL * *(unsigned int *)(v11 + 7832);
    if ( a3 )
    {
      *(_QWORD *)((char *)v16 + v30 + 8) = a3;
      *(_QWORD *)(360LL * *(unsigned int *)(v11 + 7832) + *(_QWORD *)(v11 + 7824) + 16) = *((_QWORD *)a3 + 5);
    }
    else
    {
      *(_QWORD *)((char *)v16 + v30 + 8) = 0LL;
      *(_QWORD *)(360LL * *(unsigned int *)(v11 + 7832) + *(_QWORD *)(v11 + 7824) + 16) = 0LL;
    }
    v17 = v36;
    *(_DWORD *)(360LL * *(unsigned int *)(v11 + 7832) + *(_QWORD *)(v11 + 7824)) = v36;
    v31 = a4;
    v16 = (_OWORD *)(360LL * *(unsigned int *)(v11 + 7832) + *(_QWORD *)(v11 + 7824) + 24LL);
    do
    {
      *v16 = *(_OWORD *)&v31->pDmaBuffer;
      v16[1] = *(_OWORD *)&v31->pDmaBufferPrivateData;
      v16[2] = *(_OWORD *)&v31->MultipassOffset;
      v16[3] = *(_OWORD *)&v31->SpecialLockTransfer.TransferOffset;
      v16[4] = *(_OWORD *)&v31->Reserved.Reserved[6];
      v16[5] = *(_OWORD *)&v31->Reserved.Reserved[10];
      v16[6] = *(_OWORD *)&v31->Reserved.Reserved[14];
      v16 += 8;
      v32 = *(_OWORD *)&v31->Reserved.Reserved[18];
      v31 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v31 + 128);
      *(v16 - 1) = v32;
      --v15;
    }
    while ( v15 );
    *v16 = *(_OWORD *)&v31->pDmaBuffer;
    v16[1] = *(_OWORD *)&v31->pDmaBufferPrivateData;
    v16[2] = *(_OWORD *)&v31->MultipassOffset;
    v16[3] = *(_OWORD *)&v31->SpecialLockTransfer.TransferOffset;
    *(_DWORD *)(360LL * *(unsigned int *)(v11 + 7832) + *(_QWORD *)(v11 + 7824) + 344) = a5;
    this = 360LL * *(unsigned int *)(v11 + 7832);
    *(_QWORD *)(this + *(_QWORD *)(v11 + 7824) + 352) = v8;
    if ( ++*(_DWORD *)(v11 + 7832) >= *(_DWORD *)(v11 + 7816) )
    {
      ++*(_DWORD *)(v11 + 7836);
      *(_DWORD *)(v11 + 7832) = 0;
    }
  }
  else
  {
    v17 = v36;
  }
  if ( a5 < 0 )
  {
    if ( a5 == -1071775743 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(this);
      VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)v11, v17, 1u, 0LL, 0LL, 1, 0);
    }
    else
    {
      v33 = *(_QWORD *)(v11 + 24);
      v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v16, v9);
      v34[3] = 270LL;
      v34[4] = 11LL;
      v34[5] = a4;
      v34[6] = a5;
      v34[7] = v33;
      WdLogEvent5_WdCriticalError(v34);
    }
  }
  return v12 != 0;
}
