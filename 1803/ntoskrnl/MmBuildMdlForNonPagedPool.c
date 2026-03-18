/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x1400948D0
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1400917BC (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     MiCreateMdl @ 0x140097F84 (MiCreateMdl.c)
 *     VslpLockPagesForTransfer @ 0x14015CF58 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x14015D09C (VslpLockMdlForTransfer.c)
 *     HvlGetCoverageData @ 0x140226864 (HvlGetCoverageData.c)
 *     SmKmIssueVolumeIo @ 0x1402A73DC (SmKmIssueVolumeIo.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 *     HvlUpdateMicrocode @ 0x140717DD0 (HvlUpdateMicrocode.c)
 *     SmKmStoreFileWriteHeader @ 0x14079ECF8 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407B96CC (EtwpBuildMdlForTraceBuffer.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  unsigned __int64 StartVa; // r8
  PMDL v2; // r12
  char *v3; // r9
  PMDL v4; // r11
  unsigned __int64 v5; // rdx
  int v6; // r10d
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r13
  signed __int64 v9; // rdx
  bool v10; // zf
  signed __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // r10d
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  __int64 i; // rcx
  __int16 v23; // ax
  __int64 v24; // rax
  int v25; // r10d
  CSHORT MdlFlags; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  char v32; // r8
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r9
  unsigned __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // r9
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r8
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  _QWORD v48[4]; // [rsp+18h] [rbp-80h]
  _QWORD v49[5]; // [rsp+38h] [rbp-60h]
  unsigned __int64 v50; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v51; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int64 v52; // [rsp+B0h] [rbp+18h]

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v2 = MemoryDescriptorList + 1;
  v3 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  v4 = MemoryDescriptorList;
  MemoryDescriptorList->MappedSystemVa = v3;
  v5 = -1LL;
  v6 = 0;
  v7 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = v7 + 8 * ((((unsigned __int16)v3 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  v52 = v8;
  if ( v7 < v8 )
  {
    while ( v6 )
    {
      if ( v6 >= 2 )
      {
        if ( v6 == 3 )
        {
LABEL_5:
          v9 = *(_QWORD *)v7;
          if ( v7 >= 0xFFFFF6FB7DBED000uLL
            && v7 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x1800000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v9 & 1) != 0
            && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
          {
            v39 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v39 )
            {
              v40 = *(_QWORD *)(v39 + 8 * ((v7 >> 3) & 0x1FF));
              v41 = v9 | 0x20;
              if ( (v40 & 0x20) == 0 )
                v41 = *(_QWORD *)v7;
              v9 = v41;
              if ( (v40 & 0x42) != 0 )
                v9 = v41 | 0x42;
            }
          }
          if ( (v9 & 0x200) == 0 )
          {
            do
            {
              v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v7, v9 | 0x220, v9);
              v10 = v9 == v11;
              v9 = v11;
            }
            while ( !v10 && (v11 & 0x200) == 0 );
          }
        }
LABEL_8:
        v12 = *(_QWORD *)v7;
        if ( v7 >= 0xFFFFF6FB7DBED000uLL
          && v7 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v12 & 1) != 0
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v42 )
          {
            v43 = *(_QWORD *)(v42 + 8 * ((v7 >> 3) & 0x1FF));
            v44 = v12 | 0x20;
            if ( (v43 & 0x20) == 0 )
              v44 = *(_QWORD *)v7;
            v12 = v44;
            if ( (v43 & 0x42) != 0 )
              v12 = v44 | 0x42;
          }
        }
        v51 = v12;
        if ( (unsigned __int64)&v51 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v51 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v12 & 1) != 0
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          v45 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v45 )
          {
            v46 = *(_QWORD *)(v45 + 8 * (((unsigned __int64)&v51 >> 3) & 0x1FF));
            v47 = v12 | 0x20;
            if ( (v46 & 0x20) == 0 )
              v47 = v12;
            v12 = v47;
            if ( (v46 & 0x42) != 0 )
              v12 = v47 | 0x42;
          }
        }
        v5 = (v12 >> 12) & 0xFFFFFFFFFLL;
      }
LABEL_28:
      v2->Next = (struct _MDL *)v5;
      MdlFlags = v4->MdlFlags;
      if ( (MdlFlags & 0x800) == 0
        && (v5 > qword_1403CB780
         || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v5 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0) )
      {
        MdlFlags |= 0x800u;
        v4->MdlFlags = MdlFlags;
      }
      v2 = (PMDL)((char *)v2 + 8);
      v7 += 8LL;
      if ( (v7 & 0xFFF) != 0 )
      {
        if ( v6 == 1 )
          ++v5;
      }
      else
      {
        v6 = 0;
      }
      if ( v7 >= v8 )
        goto LABEL_36;
    }
    v13 = 4;
    v14 = 4LL;
    v15 = (__int64)(v7 << 25) >> 16;
    v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v48[1] = v16;
    v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v48[2] = v17;
    v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v48[3] = v18;
    v49[0] = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      v19 = v48[v14--];
      --v13;
      v20 = *(_QWORD *)v19;
      if ( v19 >= 0xFFFFF6FB7DBED000uLL
        && v19 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v20 & 1) == 0 )
          goto LABEL_17;
        if ( (v20 & 0x20) == 0 || (v20 & 0x42) == 0 )
        {
          v30 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v30 )
          {
            v31 = *(_QWORD *)(v30 + 8 * ((v19 >> 3) & 0x1FF));
            v32 = v20 | 0x20;
            if ( (v31 & 0x20) == 0 )
              v32 = v20;
            LOBYTE(v20) = v32;
            if ( (v31 & 0x42) != 0 )
              LOBYTE(v20) = v32 | 0x42;
          }
        }
      }
      if ( (v20 & 1) == 0 )
        goto LABEL_17;
      if ( (v20 & 0x80u) != 0LL )
        break;
      if ( v14 == 1 )
        goto LABEL_17;
    }
    if ( v13 )
    {
      v27 = 4LL;
      v49[1] = v16;
      v25 = 4;
      v49[2] = v17;
      v49[3] = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v49[4] = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v28 = v49[v27--];
        --v25;
        v29 = *(_QWORD *)v28;
        if ( v28 >= 0xFFFFF6FB7DBED000uLL
          && v28 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v29 & 1) != 0
          && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
        {
          v33 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 8 * ((v28 >> 3) & 0x1FF));
            v35 = v29 | 0x20;
            if ( (v34 & 0x20) == 0 )
              v35 = v29;
            v29 = v35;
            if ( (v34 & 0x42) != 0 )
              v29 = v35 | 0x42;
          }
        }
        v50 = v29;
      }
      while ( v27 && (v29 & 0x80u) == 0LL );
      v8 = v52;
      if ( (unsigned __int64)&v50 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v50 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v36 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 8 * (((unsigned __int64)&v50 >> 3) & 0x1FF));
          v38 = v29 | 0x20;
          if ( (v37 & 0x20) == 0 )
            v38 = v29;
          v29 = v38;
          if ( (v37 & 0x42) != 0 )
            v29 = v38 | 0x42;
        }
      }
      v5 = (v29 >> 12) & 0xFFFFFFFFFLL;
      if ( v27 )
      {
        v21 = v15 >> 12;
        for ( i = 1LL; v25; --v25 )
        {
          v23 = v21;
          v21 >>= 9;
          v24 = i * (v23 & 0x1FF);
          i <<= 9;
          v5 += v24;
        }
      }
      v6 = 1;
      goto LABEL_28;
    }
LABEL_17:
    if ( (unsigned int)MiGetSystemRegionType(v15) == 5 )
    {
      v6 = 3;
      goto LABEL_5;
    }
    v6 = 2;
    goto LABEL_8;
  }
  MdlFlags = MemoryDescriptorList->MdlFlags;
LABEL_36:
  v4->MdlFlags = MdlFlags | 4;
}
