/*
 * XREFs of ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00749C4
 * Callers:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001F194 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006F274 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00748D8 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002550 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0013C9C (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C001400C (VidSchSetPagingNodePageDirectory.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00526A4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0052860 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053290 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C005E1C0 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006D1A0 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0072D64 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C00754EC (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C0075568 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitPagingProcessVaSpace(VIDMM_GLOBAL *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  VIDMM_GLOBAL *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  CVirtualAddressAllocator *v11; // r15
  unsigned int v12; // eax
  char v13; // r14
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 *v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // esi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  char v27; // r14
  _QWORD *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  int v36; // r13d
  int v37; // ecx
  __int64 *v38; // rax
  __int64 v39; // r14
  __int64 v40; // rbx
  struct _LIST_ENTRY **v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 i; // [rsp+70h] [rbp-69h]
  unsigned __int64 v53; // [rsp+78h] [rbp-61h] BYREF
  struct VIDMM_ALLOC *v54; // [rsp+80h] [rbp-59h] BYREF
  struct VIDMM_ALLOC *v55; // [rsp+88h] [rbp-51h] BYREF
  struct VIDMM_ALLOC *v56; // [rsp+90h] [rbp-49h] BYREF
  unsigned __int64 v57; // [rsp+98h] [rbp-41h] BYREF
  _DWORD v58[36]; // [rsp+A0h] [rbp-39h] BYREF
  unsigned int v59; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v60; // [rsp+148h] [rbp+6Fh] BYREF
  __int64 v61; // [rsp+158h] [rbp+7Fh]

  v3 = a2;
  v4 = this;
  v5 = a2;
  v6 = *((_QWORD *)this + 5021) + 472LL * a2;
  v61 = v6;
  LOBYTE(this) = *(_BYTE *)(v6 + 436);
  if ( ((unsigned __int8)this & 0xC) != 0xC
    && (!*(_BYTE *)(*((_QWORD *)v4 + 3) + 2232LL) || ((unsigned __int8)this & 1) == 0)
    && *(_DWORD *)(v6 + 424) != 1
    || ((unsigned __int8)this & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)(dword_1C003C300 - 1) > 0x3D )
  {
    v49 = WdLogNewEntry5_WdAssertion(this, v6);
    *(_QWORD *)(v49 + 24) = 6892LL;
    goto LABEL_66;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v4 + 8LL) )
  {
    memset(v58, 0, 0x58uLL);
    v58[0] = 118;
    v58[1] = v3;
    v9 = VIDMM_GLOBAL::QueueSystemCommandAndWait(v4, (struct _VIDMM_SYSTEM_COMMAND *)v58, 1);
    if ( v9 >= 0 )
      return 0LL;
    v48 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v48 + 24) = 6907LL;
    WdLogEvent5_WdAssertion(v48);
    return (unsigned int)v9;
  }
  *((_BYTE *)v4 + 40872) |= 8u;
  v11 = (CVirtualAddressAllocator *)*((_QWORD *)v4 + v3 + 5044);
  if ( (_BYTE)a3 )
    CVirtualAddressAllocator::EvictRootPageTable(*((CVirtualAddressAllocator **)v4 + v3 + 5044), v3, 0);
  if ( *((_QWORD *)v4 + 5111) )
  {
LABEL_27:
    v27 = *(_BYTE *)(v61 + 437) & 2;
    v28 = operator new[](0x88uLL, 0x35356956u, PagedPool);
    if ( v28 )
    {
      v29 = *((_QWORD *)v4 + 5110);
      v28[13] = *((_QWORD *)v4 + 5111);
      v28[12] = v29;
      *((_DWORD *)v28 + 16) = 0;
      *v28 = 0LL;
      v28[7] = 0LL;
      v28[9] = 0LL;
      v28[10] = 0LL;
      v28[11] = 0LL;
      v28[14] = 0LL;
      v28[15] = 0LL;
      *((_DWORD *)v28 + 32) = 1;
      *((_DWORD *)v28 + 16) = v28[8] & 0xFFFFFC00 | (16 * (v3 & 0x3F));
      memset(v28 + 1, 0, 0x30uLL);
    }
    else
    {
      v28 = 0LL;
    }
    v9 = CVirtualAddressAllocator::CommitVirtualAddressRange(
           v11,
           (struct VIDMM_MAPPED_VA_RANGE *)v28,
           v3,
           -1,
           0LL,
           0LL,
           0,
           &v54);
    if ( v9 < 0 )
    {
      v51 = WdLogNewEntry5_WdAssertion(0LL, v30);
      *(_QWORD *)(v51 + 24) = 7050LL;
    }
    else if ( v27
           && (v28[12] = *((_QWORD *)v4 + 5112),
               v28[13] = *((_QWORD *)v4 + 5113),
               v9 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                      v11,
                      (struct VIDMM_MAPPED_VA_RANGE *)v28,
                      v3,
                      -3,
                      0LL,
                      0LL,
                      0,
                      &v55),
               v9 < 0) )
    {
      v51 = WdLogNewEntry5_WdAssertion(v32, v31);
      *(_QWORD *)(v51 + 24) = 7070LL;
    }
    else
    {
      v9 = VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
             *(VIDMM_PAGE_DIRECTORY **)(32 * v5 + *((_QWORD *)v11 + 14)),
             v11);
      if ( v9 < 0 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v34, v33);
        *(_QWORD *)(v51 + 24) = 7080LL;
      }
      else
      {
        v35 = (unsigned __int64)*((unsigned int *)v4 + v5 + 29) >> 12;
        v36 = 0;
        for ( i = v35; ; v35 = i )
        {
          v37 = 0;
          v38 = (__int64 *)(*((_QWORD *)v4 + v3 + 79) + 96LL);
          v39 = *v38;
          while ( (__int64 *)v39 != v38 )
          {
            if ( v36 == v37 )
              goto LABEL_37;
            v39 = *(_QWORD *)v39;
            ++v37;
          }
          v39 = 0LL;
LABEL_37:
          v40 = *(_QWORD *)(v39 + 64);
          if ( !*(_QWORD *)(v39 + 96) )
          {
            v41 = CVirtualAddressAllocator::MapVirtualAddressRange(
                    (__int64)v11,
                    v39,
                    0LL,
                    4,
                    v35 << 12,
                    0LL,
                    *((_QWORD *)v4 + 5110),
                    *((_QWORD *)v4 + 5111),
                    0x1000u,
                    (struct _LIST_ENTRY *)((*((_DWORD *)v4 + 8) < 0x6000u) | 2LL),
                    0LL,
                    v3,
                    0LL);
            if ( !v41 )
            {
              v9 = -1073741823;
              v51 = WdLogNewEntry5_WdAssertion(v43, v42);
              *(_QWORD *)(v51 + 24) = 7130LL;
              goto LABEL_64;
            }
            *(_QWORD *)(v39 + 96) = v41[12];
          }
          v44 = *(_QWORD *)(v40 + 128);
          FullMDL = VidMmGetFullMDL(*(struct _VIDMM_GLOBAL_ALLOC **)(v39 + 56), 0LL);
          v9 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 v11,
                 (struct VIDMM_MAPPED_VA_RANGE *)(v44 - 24),
                 v3,
                 0,
                 0LL,
                 FullMDL,
                 0,
                 &v56);
          if ( v9 < 0 )
            break;
          if ( (unsigned int)++v36 >= 2 )
          {
            CVirtualAddressAllocator::GetPageDirectoryData(v11, v3, &v57, &v59, &v60, &v53);
            VidSchSetPagingNodePageDirectory(*(_QWORD **)(*((_QWORD *)v4 + 2) + 416LL), v3, v59, v60, v53);
            *(_BYTE *)(v61 + 436) &= 0x9Fu;
            goto LABEL_43;
          }
        }
        v51 = WdLogNewEntry5_WdAssertion(v47, v46);
        *(_QWORD *)(v51 + 24) = 7150LL;
      }
    }
LABEL_64:
    WdLogEvent5_WdAssertion(v51);
LABEL_43:
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v28);
    *((_BYTE *)v4 + 40872) &= ~8u;
    return (unsigned int)v9;
  }
  v12 = *((_DWORD *)v4 + 926);
  v13 = 0;
  v14 = 1LL << dword_1C003C300;
  v15 = 0LL;
  if ( v12 )
  {
    v6 = *((_QWORD *)v4 + 464);
    v16 = v12;
    do
    {
      a3 = *(_QWORD *)v6;
      if ( (*(_DWORD *)(*(_QWORD *)v6 + 80LL) & 0x1001) == 0 )
      {
        if ( *(_QWORD *)(a3 + 48) > v15 )
          v15 = *(_QWORD *)(a3 + 48);
        if ( *(_DWORD *)(a3 + 400) == 0x10000 )
          v13 = 1;
      }
      v6 += 8LL;
      --v16;
    }
    while ( v16 );
  }
  v17 = v15 >> 2;
  if ( v14 >= v17 )
    v14 = v17;
  v18 = v14;
  if ( v13 )
  {
    v19 = (*(_QWORD *)(*((_QWORD *)v4 + 5021) + 176LL) << 12) - 1LL;
    v20 = v19 + v14;
    v17 = ~v19;
    v14 = v17 & v20;
    v18 = 2 * v14;
  }
  if ( v18 > *((_QWORD *)v11 + 2) )
  {
    *((_BYTE *)v4 + 40872) &= ~8u;
    v49 = WdLogNewEntry5_WdAssertion(v17, v6);
    *(_QWORD *)(v49 + 24) = v18;
    *(_QWORD *)(v49 + 32) = 6983LL;
LABEL_66:
    WdLogEvent5_WdAssertion(v49);
    return 3221225485LL;
  }
  v21 = (unsigned __int64 *)((char *)v4 + 40880);
  v24 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          (struct _KTHREAD **)v11,
          v18,
          a3,
          0LL,
          0LL,
          v13 != 0 ? 0x10000 : 4096,
          (unsigned __int64 *)v4 + 5110);
  if ( v24 >= 0 )
  {
    CVirtualAddressAllocator::FreeVirtualAddressRange(v11, *v21);
    v25 = v14 + *v21;
    *((_QWORD *)v4 + 5111) = v25;
    if ( v13 )
    {
      *((_QWORD *)v4 + 5112) = v25;
      *((_QWORD *)v4 + 5113) = v25 + v14;
    }
    v26 = v14 >> 2;
    v5 = v3;
    if ( v26 > 0xFFFEFFFF )
      LODWORD(v26) = -65537;
    *((_DWORD *)v4 + 10228) = (v26 + 0xFFFF) & 0xFFFF0000;
    goto LABEL_27;
  }
  v50 = WdLogNewEntry5_WdAssertion(v23, v22);
  *(_QWORD *)(v50 + 24) = v14;
  WdLogEvent5_WdAssertion(v50);
  *((_BYTE *)v4 + 40872) &= ~8u;
  return (unsigned int)v24;
}
