/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x1400B5DB0
 * Callers:
 *     MiCreateMdl @ 0x1400B5D3C (MiCreateMdl.c)
 *     VslpLockPagesForTransfer @ 0x140159D24 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x140159E68 (VslpLockMdlForTransfer.c)
 *     HvlGetCoverageData @ 0x1401E96F4 (HvlGetCoverageData.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1402652D4 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     SmKmIssueVolumeIo @ 0x140273624 (SmKmIssueVolumeIo.c)
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 *     SmKmStoreFileWriteHeader @ 0x14073BCF4 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x140752930 (EtwpBuildMdlForTraceBuffer.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  unsigned __int64 StartVa; // r11
  PMDL v2; // rsi
  char *v3; // rax
  unsigned __int64 v5; // rdx
  int v6; // r9d
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 *v14; // rcx
  __int64 PteShadow; // rax
  int v16; // r9d
  unsigned __int64 v17; // r10
  __int64 v18; // rcx
  unsigned __int64 v19; // r10
  __int16 v20; // ax
  __int64 v21; // rax
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 v24; // rax
  CSHORT MdlFlags; // r8
  __int64 v26; // [rsp+20h] [rbp-78h] BYREF
  __int64 v27; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-68h]
  unsigned __int64 v29; // [rsp+38h] [rbp-60h]
  __int64 v30; // [rsp+40h] [rbp-58h]
  unsigned __int64 v31; // [rsp+48h] [rbp-50h]
  unsigned __int64 v32; // [rsp+50h] [rbp-48h]
  unsigned __int64 v33; // [rsp+58h] [rbp-40h]
  __int64 v34; // [rsp+60h] [rbp-38h]

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v2 = MemoryDescriptorList + 1;
  v3 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v3;
  v5 = -1LL;
  v6 = 0;
  v7 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = v7
     + 8
     * ((MemoryDescriptorList->ByteCount
       + 4095LL
       + (unsigned __int64)((__int64)MemoryDescriptorList->MappedSystemVa & 0xFFF)) >> 12);
  if ( v7 < v8 )
  {
    while ( v6 )
    {
      if ( v6 >= 2 )
      {
        if ( v6 == 3 )
          goto LABEL_26;
        goto LABEL_32;
      }
LABEL_36:
      v2->Next = (struct _MDL *)v5;
      MdlFlags = MemoryDescriptorList->MdlFlags;
      if ( (MdlFlags & 0x800) == 0
        && (v5 > qword_1403885E0
         || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v5 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0) )
      {
        MemoryDescriptorList->MdlFlags = MdlFlags | 0x800;
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
        goto LABEL_46;
    }
    v9 = (__int64)(v7 << 25) >> 16;
    v28 = ((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v29 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    LODWORD(v10) = 3;
    v30 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v10 = (unsigned int)(v10 - 1);
      v11 = (_QWORD *)*(&v28 + v10);
      v12 = *v11;
      if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
        LOBYTE(v12) = MiReadPteShadow(v11, *v11);
      if ( (v12 & 1) == 0 )
        break;
      if ( (v12 & 0x80u) != 0LL )
      {
        v31 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v32 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v33 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        LODWORD(v13) = 4;
        v34 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        do
        {
          v13 = (unsigned int)(v13 - 1);
          v14 = (__int64 *)*(&v31 + v13);
          PteShadow = *v14;
          if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(v14, *v14);
          v26 = PteShadow;
        }
        while ( (_DWORD)v13 && (PteShadow & 0x80u) == 0LL );
        v5 = MI_GET_PAGE_FRAME_FROM_PTE(&v26);
        if ( v16 )
        {
          v18 = 1LL;
          v19 = v17 >> 12;
          do
          {
            v20 = v19;
            v19 >>= 9;
            v21 = v18 * (v20 & 0x1FF);
            v18 <<= 9;
            v5 += v21;
            --v16;
          }
          while ( v16 );
        }
        v6 = 1;
        goto LABEL_36;
      }
    }
    while ( (_DWORD)v10 );
    if ( v9 < 0xFFFF800000000000uLL || byte_1403899D0[((v9 >> 39) & 0x1FF) - 256] != 5 )
      goto LABEL_32;
LABEL_26:
    v22 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
      v22 = MiReadPteShadow(v7, *(_QWORD *)v7);
    if ( (v22 & 0x200) == 0 )
    {
      do
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v7, v22 | 0x220, v22);
      }
      while ( v23 != v22 && (v22 & 0x200) == 0 );
    }
LABEL_32:
    v24 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
      v24 = MiReadPteShadow(v7, *(_QWORD *)v7);
    v27 = v24;
    v5 = MI_GET_PAGE_FRAME_FROM_PTE(&v27);
    goto LABEL_36;
  }
LABEL_46:
  MemoryDescriptorList->MdlFlags |= 4u;
}
