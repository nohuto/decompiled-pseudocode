/*
 * XREFs of ?RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@J_KHPEAX@Z @ 0x1C006BB20
 * Callers:
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005FD88 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 * Callees:
 *     McTemplateK0pptpqqx @ 0x1C0016898 (McTemplateK0pptpqqx.c)
 *     McTemplateK0pptpqxpx @ 0x1C0016958 (McTemplateK0pptpqxpx.c)
 *     McTemplateK0pptpqxpxx @ 0x1C0016A38 (McTemplateK0pptpqxpxx.c)
 *     McTemplateK0pptpqxq @ 0x1C0016B28 (McTemplateK0pptpqxq.c)
 *     McTemplateK0pptpqxqqppqqxxpqx @ 0x1C0016BE8 (McTemplateK0pptpqxqqppqqxxpqx.c)
 *     McTemplateK0pptpqxqxqxq @ 0x1C0016D94 (McTemplateK0pptpqxqxqxq.c)
 *     McTemplateK0pptpqxqxqxqqq @ 0x1C0016EAC (McTemplateK0pptpqxqxqxqqq.c)
 *     McTemplateK0pptpqxxqt @ 0x1C0016FF4 (McTemplateK0pptpqxxqt.c)
 *     McTemplateK0pptpqxxt @ 0x1C00170E4 (McTemplateK0pptpqxxt.c)
 *     McTemplateK0pptpxqqx @ 0x1C00171C4 (McTemplateK0pptpxqqx.c)
 *     McTemplateK0pptpxx @ 0x1C00172A4 (McTemplateK0pptpxx.c)
 *     McTemplateK0pptpxxpq @ 0x1C0017364 (McTemplateK0pptpxxpq.c)
 *     McTemplateK0pptpxxqqxx @ 0x1C0017444 (McTemplateK0pptpxxqqxx.c)
 *     McTemplateK0pptpxxqqxxxqqxxx @ 0x1C0017548 (McTemplateK0pptpxxqqxxxqqxxx.c)
 *     McTemplateK0pptqx @ 0x1C00176DC (McTemplateK0pptqx.c)
 */

void __fastcall VIDMM_GLOBAL::RecordPagingOperation(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4,
        int a5,
        unsigned __int64 a6,
        int a7,
        _DWORD *a8)
{
  int v10; // r14d
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 Operation; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rdx
  UINT FillPattern; // r11d
  SIZE_T TransferSize; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  void *v31; // rdx
  __int64 v32; // rdx
  _OWORD *v33; // rdx
  __int128 v34; // xmm1

  v10 = a2;
  v12 = 2LL;
  if ( !bTracingEnabled )
    goto LABEL_11;
  v13 = *((_QWORD *)this + (unsigned int)a2 + 143);
  v14 = *((_QWORD *)this + 3);
  Operation = (unsigned int)a4->Operation;
  if ( (int)Operation > 8 )
  {
    v16 = Operation - 9;
    if ( v16 )
    {
      v17 = (unsigned int)(v16 - 1);
      if ( (_DWORD)v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v23 = (unsigned int)(v18 - 1);
          if ( (_DWORD)v23 )
          {
            v26 = (unsigned int)(v23 - 1);
            if ( (_DWORD)v26 )
            {
              v27 = (unsigned int)(v26 - 2);
              if ( (_DWORD)v27 )
              {
                if ( (_DWORD)v27 == 1 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                  McTemplateK0pptpxx(
                    v27,
                    a2,
                    v13,
                    v14,
                    v13,
                    a5 == -1071775743,
                    a3,
                    a4->UpdateContextAllocation.ContextAllocation,
                    a4->Fill.FillSize);
              }
              else if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                McTemplateK0pptpqxq(
                  v27,
                  a2,
                  v13,
                  v14,
                  v13,
                  a5 == -1071775743,
                  a3,
                  a4->Transfer.TransferOffset,
                  a4->Transfer.TransferSize,
                  a4->Transfer.Source.SegmentId);
              }
            }
            else if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              McTemplateK0pptpxxpq(
                v26,
                a2,
                v13,
                v14,
                v13,
                a5 == -1071775743,
                a3,
                a4->UpdateContextAllocation.ContextAllocation,
                a4->Fill.FillSize,
                a4->Transfer.TransferSize,
                a4->Transfer.Source.SegmentId);
            }
          }
          else if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            McTemplateK0pptpqxpxx(
              v23,
              a2,
              v13,
              v14,
              v13,
              a5 == -1071775743,
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
          v19 = a4->Reserved.Reserved[20];
          FillPattern = 0;
          if ( (unsigned int)v19 < 2 )
          {
            TransferSize = a4->Transfer.TransferSize;
          }
          else if ( (_DWORD)v19 == 2 )
          {
            TransferSize = a4->MapApertureSegment.OffsetInPages;
            FillPattern = a4->Fill.FillPattern;
          }
          else
          {
            TransferSize = 0LL;
          }
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            McTemplateK0pptpqxqqppqqxxpqx(
              TransferSize,
              v19,
              v13,
              v14,
              v13,
              a5 == -1071775743,
              a3,
              a4->ReadPhysical.SegmentId,
              TransferSize,
              FillPattern,
              a4->UnmapApertureSegment.DummyPage.HighPart,
              a4->Transfer.Source.SegmentAddress.QuadPart,
              a4->UpdatePageTable.pPageTableEntries64KB,
              a4->Transfer.Destination.SegmentId,
              a4->Transfer.Destination.SegmentAddress.HighPart,
              a4->TransferVirtual.DestinationPageTable,
              a4->UpdatePageTable.AllocationOffsetInBytes,
              a4->UpdatePageTable.hProcess,
              v19,
              a4->UpdatePageTable.FirstPteVirtualAddress);
        }
      }
      else if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        McTemplateK0pptpqxpx(
          v17,
          a2,
          v13,
          v14,
          v13,
          a5 == -1071775743,
          a3,
          a4->Transfer.TransferOffset,
          a4->Transfer.TransferSize,
          a4->MapApertureSegment.OffsetInPages,
          a4->Transfer.Source.SegmentAddress.QuadPart);
      }
    }
    else if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      McTemplateK0pptpxxqqxx(
        (__int64)a8,
        a2,
        v13,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Fill.FillSize,
        a4->Transfer.TransferSize,
        a4->Transfer.Source.SegmentId,
        *a8,
        a4->Transfer.Source.SegmentAddress.QuadPart,
        *((_QWORD *)a8 + 1));
    }
    goto LABEL_11;
  }
  if ( (_DWORD)Operation == 8 )
  {
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pptpxxqqxxxqqxxx(
        (__int64)a8,
        a2,
        v13,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Fill.FillSize,
        a4->Transfer.TransferSize,
        *a8,
        a8[1],
        a4->MapApertureSegment.OffsetInPages,
        a4->Transfer.Source.SegmentAddress.QuadPart,
        a4->UnmapApertureSegment.DummyPage.QuadPart,
        a4->Transfer.Destination.SegmentAddress.LowPart,
        a4->Transfer.Destination.SegmentAddress.HighPart,
        a4->TransferVirtual.DestinationPageTable,
        *((_QWORD *)a8 + 1),
        *((_QWORD *)a8 + 2));
  }
  else if ( (_DWORD)Operation )
  {
    v24 = (unsigned int)(Operation - 1);
    if ( (_DWORD)v24 )
    {
      v25 = (unsigned int)(v24 - 1);
      if ( !(_DWORD)v25 )
      {
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          McTemplateK0pptpqqx(
            v25,
            a2,
            v13,
            v14,
            v13,
            a5 == -1071775743,
            a3,
            a4->Transfer.TransferOffset,
            a4->DiscardContent.SegmentId,
            a4->Transfer.TransferSize);
        goto LABEL_11;
      }
      v28 = (unsigned int)(v25 - 1);
      if ( (_DWORD)v28 )
      {
        v28 = (unsigned int)(v28 - 1);
        if ( (_DWORD)v28 )
        {
          v29 = (unsigned int)(v28 - 1);
          if ( (_DWORD)v29 )
          {
            v30 = (unsigned int)(v29 - 1);
            if ( (_DWORD)v30 )
            {
              if ( (_DWORD)v30 == 1 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                McTemplateK0pptpqxqxqxqqq(
                  v30,
                  a2,
                  v13,
                  v14,
                  v13,
                  a5 == -1071775743,
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
            else if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              McTemplateK0pptpqxxt(
                v30,
                a2,
                v13,
                v14,
                v13,
                a5 == -1071775743,
                a3,
                a4->Fill.FillPattern,
                a4->MapApertureSegment.OffsetInPages,
                a4->Transfer.Source.SegmentAddress.QuadPart,
                a7);
            }
          }
          else if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            McTemplateK0pptpqxxqt(
              v29,
              a2,
              v13,
              v14,
              v13,
              a5 == -1071775743,
              a3,
              a4->Fill.FillPattern,
              a4->MapApertureSegment.OffsetInPages,
              a4->Transfer.Source.SegmentAddress.QuadPart,
              a4->Transfer.Destination.SegmentAddress.LowPart,
              a7);
          }
          goto LABEL_11;
        }
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
          goto LABEL_11;
        v31 = &EventPagingOpWritePhysical;
      }
      else
      {
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
          goto LABEL_11;
        v31 = &EventPagingOpReadPhysical;
      }
      McTemplateK0pptqx(
        v28,
        (__int64)v31,
        v13,
        v14,
        v13,
        a5 == -1071775743,
        a4->ReadPhysical.SegmentId,
        a4->Fill.FillSize);
      goto LABEL_11;
    }
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pptpxqqx(
        v24,
        a2,
        v13,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Fill.FillSize,
        a4->Fill.FillPattern,
        a4->Transfer.Source.SegmentId,
        a4->Transfer.Source.SegmentAddress.QuadPart);
  }
  else if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    McTemplateK0pptpqxqxqxq(
      Operation,
      a2,
      v13,
      v14,
      v13,
      a5 == -1071775743,
      a3,
      a4->Transfer.TransferOffset,
      a4->Transfer.TransferSize,
      a4->Transfer.Source.SegmentId,
      a4->Transfer.Source.SegmentAddress.QuadPart,
      a4->Transfer.Destination.SegmentId,
      a4->Transfer.Destination.SegmentAddress.QuadPart,
      a4->Transfer.Flags.Value);
  }
LABEL_11:
  v22 = *((_QWORD *)this + 1050);
  if ( v22 )
  {
    v32 = 360LL * *((unsigned int *)this + 2102);
    if ( a3 )
    {
      *(_QWORD *)(v32 + v22 + 8) = a3;
      *(_QWORD *)(360LL * *((unsigned int *)this + 2102) + *((_QWORD *)this + 1050) + 16) = *((_QWORD *)a3 + 5);
    }
    else
    {
      *(_QWORD *)(v32 + v22 + 8) = 0LL;
      *(_QWORD *)(360LL * *((unsigned int *)this + 2102) + *((_QWORD *)this + 1050) + 16) = 0LL;
    }
    *(_DWORD *)(360LL * *((unsigned int *)this + 2102) + *((_QWORD *)this + 1050)) = v10;
    v33 = (_OWORD *)(360LL * *((unsigned int *)this + 2102) + *((_QWORD *)this + 1050) + 24LL);
    do
    {
      *v33 = *(_OWORD *)&a4->pDmaBuffer;
      v33[1] = *(_OWORD *)&a4->pDmaBufferPrivateData;
      v33[2] = *(_OWORD *)&a4->MultipassOffset;
      v33[3] = *(_OWORD *)&a4->SpecialLockTransfer.TransferOffset;
      v33[4] = *(_OWORD *)&a4->Reserved.Reserved[6];
      v33[5] = *(_OWORD *)&a4->Reserved.Reserved[10];
      v33[6] = *(_OWORD *)&a4->Reserved.Reserved[14];
      v33 += 8;
      v34 = *(_OWORD *)&a4->Reserved.Reserved[18];
      a4 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)a4 + 128);
      *(v33 - 1) = v34;
      --v12;
    }
    while ( v12 );
    *v33 = *(_OWORD *)&a4->pDmaBuffer;
    v33[1] = *(_OWORD *)&a4->pDmaBufferPrivateData;
    v33[2] = *(_OWORD *)&a4->MultipassOffset;
    v33[3] = *(_OWORD *)&a4->SpecialLockTransfer.TransferOffset;
    *(_DWORD *)(360LL * *((unsigned int *)this + 2102) + *((_QWORD *)this + 1050) + 344) = a5;
    *(_QWORD *)(360LL * (unsigned int)(*((_DWORD *)this + 2102))++ + *((_QWORD *)this + 1050) + 352) = a6;
    if ( *((_DWORD *)this + 2102) >= *((_DWORD *)this + 2098) )
    {
      *((_DWORD *)this + 2102) = 0;
      ++*((_DWORD *)this + 2103);
    }
  }
}
