/*
 * XREFs of ?RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@J_KHPEAX@Z @ 0x1C0067218
 * Callers:
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005B470 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 * Callees:
 *     McTemplateK0pptpqqx @ 0x1C0016FA8 (McTemplateK0pptpqqx.c)
 *     McTemplateK0pptpqxpx @ 0x1C0017068 (McTemplateK0pptpqxpx.c)
 *     McTemplateK0pptpqxpxx @ 0x1C0017148 (McTemplateK0pptpqxpxx.c)
 *     McTemplateK0pptpqxq @ 0x1C0017238 (McTemplateK0pptpqxq.c)
 *     McTemplateK0pptpqxqqppqqxxpqx @ 0x1C00172F8 (McTemplateK0pptpqxqqppqqxxpqx.c)
 *     McTemplateK0pptpqxqxqxq @ 0x1C00174A4 (McTemplateK0pptpqxqxqxq.c)
 *     McTemplateK0pptpqxqxqxqqq @ 0x1C00175BC (McTemplateK0pptpqxqxqxqqq.c)
 *     McTemplateK0pptpqxxqt @ 0x1C0017704 (McTemplateK0pptpqxxqt.c)
 *     McTemplateK0pptpqxxt @ 0x1C00177F4 (McTemplateK0pptpqxxt.c)
 *     McTemplateK0pptpxqqx @ 0x1C00178D4 (McTemplateK0pptpxqqx.c)
 *     McTemplateK0pptpxxpq @ 0x1C00179B4 (McTemplateK0pptpxxpq.c)
 *     McTemplateK0pptpxxqqxx @ 0x1C0017A94 (McTemplateK0pptpxxqqxx.c)
 *     McTemplateK0pptpxxqqxxxqqxxx @ 0x1C0017B98 (McTemplateK0pptpxxqqxxxqqxxx.c)
 *     McTemplateK0pptqx @ 0x1C0017D2C (McTemplateK0pptqx.c)
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
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rdx
  UINT FillPattern; // r11d
  SIZE_T TransferSize; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  void *v30; // rdx
  __int64 v31; // rcx
  _OWORD *v32; // rdx
  __int128 v33; // xmm1

  v10 = a2;
  v12 = 2LL;
  if ( !bTracingEnabled )
    goto LABEL_12;
  v13 = *((_QWORD *)this + (unsigned int)a2 + 143);
  v14 = *((_QWORD *)this + 3);
  Operation = (unsigned int)a4->Operation;
  if ( (int)Operation > 7 )
  {
    v16 = Operation - 8;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = (unsigned int)(v17 - 1);
        if ( (_DWORD)v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v24 = (unsigned int)(v19 - 1);
            if ( (_DWORD)v24 )
            {
              v27 = (unsigned int)(v24 - 1);
              if ( (_DWORD)v27 )
              {
                if ( (_DWORD)v27 == 2 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
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
              else if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                McTemplateK0pptpxxpq(
                  v27,
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
                v24,
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
            v20 = a4->Reserved.Reserved[20];
            FillPattern = 0;
            if ( (unsigned int)v20 < 2 )
            {
              TransferSize = a4->Transfer.TransferSize;
            }
            else if ( (_DWORD)v20 == 2 )
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
                v20,
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
                v20,
                a4->UpdatePageTable.FirstPteVirtualAddress);
          }
        }
        else if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          McTemplateK0pptpqxpx(
            v18,
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
    }
    else if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
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
    goto LABEL_12;
  }
  if ( (_DWORD)Operation == 7 )
  {
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pptpqxqxqxqqq(
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
        a4->Transfer.Flags.Value,
        a4->Transfer.MdlOffset,
        a4->SpecialLockTransfer.SwizzlingRangeData);
  }
  else if ( (_DWORD)Operation )
  {
    v25 = (unsigned int)(Operation - 1);
    if ( (_DWORD)v25 )
    {
      v26 = (unsigned int)(v25 - 1);
      if ( !(_DWORD)v26 )
      {
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          McTemplateK0pptpqqx(
            v26,
            a2,
            v13,
            v14,
            v13,
            a5 == -1071775743,
            a3,
            a4->Transfer.TransferOffset,
            a4->DiscardContent.SegmentId,
            a4->Transfer.TransferSize);
        goto LABEL_12;
      }
      v28 = (unsigned int)(v26 - 1);
      if ( (_DWORD)v28 )
      {
        v28 = (unsigned int)(v28 - 1);
        if ( (_DWORD)v28 )
        {
          v29 = (unsigned int)(v28 - 1);
          if ( (_DWORD)v29 )
          {
            if ( (_DWORD)v29 == 1 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              McTemplateK0pptpqxxt(
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
                a7);
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
          goto LABEL_12;
        }
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
          goto LABEL_12;
        v30 = &EventPagingOpWritePhysical;
      }
      else
      {
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
          goto LABEL_12;
        v30 = &EventPagingOpReadPhysical;
      }
      McTemplateK0pptqx(
        v28,
        (__int64)v30,
        v13,
        v14,
        v13,
        a5 == -1071775743,
        a4->ReadPhysical.SegmentId,
        a4->Fill.FillSize);
      goto LABEL_12;
    }
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pptpxqqx(
        v25,
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
LABEL_12:
  v23 = *((_QWORD *)this + 978);
  if ( v23 )
  {
    v31 = 360LL * *((unsigned int *)this + 1958);
    if ( a3 )
    {
      *(_QWORD *)(v31 + v23 + 8) = a3;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 16) = *((_QWORD *)a3 + 5);
    }
    else
    {
      *(_QWORD *)(v31 + v23 + 8) = 0LL;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 16) = 0LL;
    }
    *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978)) = v10;
    v32 = (_OWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 24LL);
    do
    {
      *v32 = *(_OWORD *)&a4->pDmaBuffer;
      v32[1] = *(_OWORD *)&a4->pDmaBufferPrivateData;
      v32[2] = *(_OWORD *)&a4->MultipassOffset;
      v32[3] = *(_OWORD *)&a4->SpecialLockTransfer.TransferOffset;
      v32[4] = *(_OWORD *)&a4->Reserved.Reserved[6];
      v32[5] = *(_OWORD *)&a4->Reserved.Reserved[10];
      v32[6] = *(_OWORD *)&a4->Reserved.Reserved[14];
      v32 += 8;
      v33 = *(_OWORD *)&a4->Reserved.Reserved[18];
      a4 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)a4 + 128);
      *(v32 - 1) = v33;
      --v12;
    }
    while ( v12 );
    *v32 = *(_OWORD *)&a4->pDmaBuffer;
    v32[1] = *(_OWORD *)&a4->pDmaBufferPrivateData;
    v32[2] = *(_OWORD *)&a4->MultipassOffset;
    v32[3] = *(_OWORD *)&a4->SpecialLockTransfer.TransferOffset;
    *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 344) = a5;
    *(_QWORD *)(360LL * (unsigned int)(*((_DWORD *)this + 1958))++ + *((_QWORD *)this + 978) + 352) = a6;
    if ( *((_DWORD *)this + 1958) >= *((_DWORD *)this + 1954) )
    {
      *((_DWORD *)this + 1958) = 0;
      ++*((_DWORD *)this + 1959);
    }
  }
}
