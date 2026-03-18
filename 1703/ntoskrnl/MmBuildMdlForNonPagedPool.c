/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x14005A730
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140057744 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     MiCreateMdl @ 0x14005C370 (MiCreateMdl.c)
 *     HvlGetCoverageData @ 0x1401E4A10 (HvlGetCoverageData.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     SmKmIssueVolumeIo @ 0x14024DE44 (SmKmIssueVolumeIo.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 *     SmKmStoreFileWriteHeader @ 0x1407039F0 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407137E0 (EtwpBuildMdlForTraceBuffer.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  unsigned __int64 StartVa; // r11
  PMDL v2; // rsi
  char *v3; // rax
  unsigned __int64 v5; // rdx
  int v6; // r9d
  unsigned __int64 v7; // r11
  volatile signed __int64 *v8; // rbp
  int v9; // r10d
  char v10; // al
  unsigned __int64 v11; // r9
  int v12; // r10d
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  int v15; // r10d
  __int64 v16; // rcx
  unsigned __int64 v17; // r9
  __int16 v18; // ax
  __int64 v19; // rax
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  CSHORT MdlFlags; // r8
  __int64 v23; // [rsp+20h] [rbp-78h] BYREF
  __int64 v24; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-68h]
  unsigned __int64 v26; // [rsp+38h] [rbp-60h]
  __int64 v27; // [rsp+40h] [rbp-58h]
  unsigned __int64 v28; // [rsp+48h] [rbp-50h]
  unsigned __int64 v29; // [rsp+50h] [rbp-48h]
  unsigned __int64 v30; // [rsp+58h] [rbp-40h]
  __int64 v31; // [rsp+60h] [rbp-38h]

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v2 = MemoryDescriptorList + 1;
  v3 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v3;
  v5 = -1LL;
  v6 = 0;
  v7 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = (volatile signed __int64 *)(v7
                                 + 8
                                 * ((MemoryDescriptorList->ByteCount
                                   + 4095LL
                                   + (unsigned __int64)((__int64)MemoryDescriptorList->MappedSystemVa & 0xFFF)) >> 12));
  if ( v7 < (unsigned __int64)v8 )
  {
    while ( v6 )
    {
      if ( v6 < 2 )
        goto LABEL_24;
      if ( v6 == 3 )
        goto LABEL_20;
LABEL_23:
      v24 = MI_READ_PTE_LOCK_FREE(v7);
      v5 = MI_GET_PAGE_FRAME_FROM_PTE(&v24);
LABEL_24:
      v2->Next = (struct _MDL *)v5;
      MdlFlags = MemoryDescriptorList->MdlFlags;
      if ( (MdlFlags & 0x800) == 0
        && (v5 > qword_14036C290
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
      if ( v7 >= (unsigned __int64)v8 )
        goto LABEL_34;
    }
    v25 = (((unsigned __int64)((__int64)(v7 << 25) >> 16) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v26 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = 3;
    v27 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v10 = MI_READ_PTE_LOCK_FREE(*(&v25 + (unsigned int)(v9 - 1)));
      if ( (v10 & 1) == 0 )
        break;
      if ( v10 < 0 )
      {
        v28 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v29 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v30 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v12 = 4;
        v31 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        do
        {
          v13 = MI_READ_PTE_LOCK_FREE(*(&v28 + (unsigned int)(v12 - 1)));
          v23 = v13;
        }
        while ( v12 && (v13 & 0x80u) == 0LL );
        v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v23) >> 12) & 0xFFFFFFFFFLL;
        if ( v15 )
        {
          v16 = 1LL;
          v17 = v14 >> 12;
          do
          {
            v18 = v17;
            v17 >>= 9;
            v19 = v16 * (v18 & 0x1FF);
            v16 <<= 9;
            v5 += v19;
            --v15;
          }
          while ( v15 );
        }
        v6 = 1;
        goto LABEL_24;
      }
    }
    while ( v9 );
    if ( v11 < 0xFFFF800000000000uLL || byte_14036D700[((v11 >> 39) & 0x1FF) - 256] != 5 )
      goto LABEL_23;
LABEL_20:
    v20 = MI_READ_PTE_LOCK_FREE(v7);
    if ( (v20 & 0x200) == 0 )
    {
      do
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange64((volatile signed __int64 *)v7, v20 | 0x220, v20);
      }
      while ( v21 != v20 && (v20 & 0x200) == 0 );
    }
    goto LABEL_23;
  }
LABEL_34:
  MemoryDescriptorList->MdlFlags |= 4u;
}
