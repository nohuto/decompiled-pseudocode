/*
 * XREFs of ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007E874
 * Callers:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C0023B2C (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007E714 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A3464 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0004DC8 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0004E74 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0023A18 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     VidSchCreateHwQueue @ 0x1C0032270 (VidSchCreateHwQueue.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056034 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C005A7D4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A980 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B3D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0065330 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C006B3BC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C009E620 (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00AB19C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00AB7C4 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C00BE024 (VidSchSetPagingNodePageDirectory.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitPagingProcessVaSpace(VIDMM_GLOBAL *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  VIDMM_GLOBAL *v4; // rdi
  struct VIDMM_MAPPED_VA_RANGE *v5; // r13
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int HwQueue; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // r10
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int64 *v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  char v32; // si
  PVOID v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // edx
  unsigned __int64 v41; // r8
  int v42; // ecx
  __int64 *v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rbx
  _DWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // [rsp+70h] [rbp-90h]
  struct VIDMM_ALLOC *v56; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v57; // [rsp+80h] [rbp-80h] BYREF
  struct VIDMM_ALLOC *v58; // [rsp+88h] [rbp-78h] BYREF
  struct VIDMM_ALLOC *v59; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v60; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v61[6]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v62[36]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v63; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v64; // [rsp+178h] [rbp+78h]
  unsigned int v65; // [rsp+188h] [rbp+88h] BYREF

  v3 = a2;
  v4 = this;
  v5 = 0LL;
  v6 = *((_QWORD *)this + 5090) + 1560LL * a2;
  v55 = v6;
  LOBYTE(this) = *(_BYTE *)(v6 + 436);
  if ( ((unsigned __int8)this & 0xC) != 0xC
    && (!*(_BYTE *)(*((_QWORD *)v4 + 3) + 2400LL) || ((unsigned __int8)this & 1) == 0)
    && *(_DWORD *)(v6 + 424) != 1
    || ((unsigned __int8)this & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)(dword_1C0047338 - 1) > 0x3D )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, v6);
    *(_QWORD *)(v25 + 24) = 6904LL;
    goto LABEL_69;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v4 + 8LL) )
  {
    memset(v62, 0, 0x58uLL);
    v62[0] = 118;
    v62[1] = v3;
    HwQueue = VIDMM_GLOBAL::QueueSystemCommandAndWait(v4, (struct _VIDMM_SYSTEM_COMMAND *)v62, 1);
    if ( HwQueue < 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v11 + 24) = 6919LL;
      WdLogEvent5_WdAssertion(v11);
      return (unsigned int)HwQueue;
    }
    return 0LL;
  }
  *((_BYTE *)v4 + 41448) |= 0x10u;
  v13 = *((_QWORD *)v4 + v3 + 5116);
  if ( (_BYTE)a3 )
    CVirtualAddressAllocator::EvictRootPageTable(*((CVirtualAddressAllocator **)v4 + v3 + 5116), v3, 0);
  if ( *((_QWORD *)v4 + 5183) )
    goto LABEL_38;
  v14 = (unsigned int)dword_1C0047338;
  v15 = *((_DWORD *)v4 + 926);
  v16 = 0LL;
  v17 = 1LL << dword_1C0047338;
  LOBYTE(a3) = 0;
  LOBYTE(v64) = 0;
  if ( v15 )
  {
    v14 = *((_QWORD *)v4 + 464);
    v18 = v15;
    do
    {
      v19 = *(_QWORD *)v14;
      if ( (*(_DWORD *)(*(_QWORD *)v14 + 80LL) & 0x1001) == 0 )
      {
        v20 = *(_QWORD *)(v19 + 48);
        if ( v20 <= v16 )
          v20 = v16;
        v16 = v20;
        if ( *(_DWORD *)(v19 + 376) == 0x10000 )
          LOBYTE(a3) = 1;
      }
      v14 += 8LL;
      --v18;
    }
    while ( v18 );
    LOBYTE(v64) = a3;
  }
  v21 = v16 >> 2;
  if ( v17 < v21 )
    v21 = 1LL << dword_1C0047338;
  v22 = v21;
  if ( (_BYTE)a3 )
  {
    v23 = (*(_QWORD *)(*((_QWORD *)v4 + 5090) + 176LL) << 12) - 1LL;
    v24 = v21 + v23;
    v14 = ~v23;
    v22 = v14 & v24;
    v21 = 2 * v22;
  }
  if ( v21 <= *(_QWORD *)(v13 + 16) )
  {
    v26 = (unsigned __int64 *)((char *)v4 + 41456);
    HwQueue = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                (struct _KTHREAD **)v13,
                v21,
                a3,
                0LL,
                0LL,
                (_BYTE)a3 != 0 ? 0x10000 : 4096,
                (unsigned __int64 *)v4 + 5182);
    if ( HwQueue < 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v28, v27);
      *(_QWORD *)(v12 + 24) = v22;
      WdLogEvent5_WdAssertion(v12);
LABEL_12:
      *((_BYTE *)v4 + 41448) &= ~0x10u;
      return (unsigned int)HwQueue;
    }
    CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)v13, *v26);
    v29 = *v26;
    v5 = 0LL;
    v30 = v22 + v29;
    *((_QWORD *)v4 + 5183) = v30;
    if ( (_BYTE)v64 )
    {
      *((_QWORD *)v4 + 5184) = v30;
      *((_QWORD *)v4 + 5185) = v30 + v22;
    }
    v31 = v22 >> 2;
    if ( v31 > 0xFFFEFFFF )
      LODWORD(v31) = -65537;
    *((_DWORD *)v4 + 10372) = (v31 + 0xFFFF) & 0xFFFF0000;
LABEL_38:
    v32 = *(_BYTE *)(v55 + 437) & 2;
    v33 = operator new[](0x88uLL, 0x35356956u, PagedPool);
    if ( v33 )
      v5 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                             (__int64)v33,
                                             0LL,
                                             *((_QWORD *)v4 + 5182),
                                             *((_QWORD *)v4 + 5183),
                                             v3,
                                             0LL,
                                             0LL,
                                             0,
                                             0LL,
                                             0LL,
                                             0LL,
                                             0LL);
    HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                (CVirtualAddressAllocator *)v13,
                v5,
                v3,
                -1,
                0LL,
                0LL,
                0,
                &v58);
    if ( HwQueue >= 0 )
    {
      if ( v32
        && (*((_QWORD *)v5 + 12) = *((_QWORD *)v4 + 5184),
            *((_QWORD *)v5 + 13) = *((_QWORD *)v4 + 5185),
            HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                        (CVirtualAddressAllocator *)v13,
                        v5,
                        v3,
                        -3,
                        0LL,
                        0LL,
                        0,
                        &v56),
            HwQueue < 0) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v37, v36);
        *(_QWORD *)(v35 + 24) = 7082LL;
      }
      else
      {
        HwQueue = VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
                    *(VIDMM_PAGE_DIRECTORY **)(32 * v3 + *(_QWORD *)(v13 + 112)),
                    (struct CVirtualAddressAllocator *)v13);
        if ( HwQueue >= 0 )
        {
          v40 = 0;
          v41 = (unsigned __int64)*((unsigned int *)v4 + v3 + 29) >> 12;
          v56 = (struct VIDMM_ALLOC *)v41;
          v64 = 0;
          while ( 1 )
          {
            v42 = 0;
            v43 = (__int64 *)(*((_QWORD *)v4 + v3 + 79) + 96LL);
            v44 = *v43;
            while ( (__int64 *)v44 != v43 )
            {
              if ( v40 == v42 )
                goto LABEL_53;
              v44 = *(_QWORD *)v44;
              ++v42;
            }
            v44 = 0LL;
LABEL_53:
            v45 = *(_QWORD *)(v44 + 64);
            if ( !*(_QWORD *)(v44 + 96) )
            {
              v46 = CVirtualAddressAllocator::MapVirtualAddressRange(
                      (struct VIDMM_VAD **)v13,
                      v44,
                      0LL,
                      4,
                      v41 << 12,
                      0LL,
                      *((_QWORD *)v4 + 5182),
                      *((_QWORD *)v4 + 5183),
                      0x1000u,
                      (*((_DWORD *)v4 + 8) < 0x6000u) + 2LL,
                      0LL,
                      v3,
                      0LL);
              if ( !v46 )
              {
                HwQueue = -1073741823;
                v35 = WdLogNewEntry5_WdAssertion(v48, v47);
                *(_QWORD *)(v35 + 24) = 7142LL;
                goto LABEL_66;
              }
              *(_QWORD *)(v44 + 96) = *((_QWORD *)v46 + 12);
            }
            v49 = *(_QWORD *)(v45 + 128);
            FullMDL = VidMmGetFullMDL(*(struct _VIDMM_GLOBAL_ALLOC **)(v44 + 56), 0LL);
            HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                        (CVirtualAddressAllocator *)v13,
                        (struct VIDMM_MAPPED_VA_RANGE *)(v49 - 24),
                        v3,
                        0,
                        0LL,
                        FullMDL,
                        0,
                        &v59);
            if ( HwQueue < 0 )
            {
              v35 = WdLogNewEntry5_WdAssertion(v52, v51);
              *(_QWORD *)(v35 + 24) = 7162LL;
              goto LABEL_66;
            }
            v40 = v64 + 1;
            v64 = v40;
            if ( v40 >= 2 )
              break;
            v41 = (unsigned __int64)v56;
          }
          v53 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 528LL);
          if ( !*(_BYTE *)(v53 + 54) )
          {
LABEL_64:
            CVirtualAddressAllocator::GetPageDirectoryData((CVirtualAddressAllocator *)v13, v3, &v60, &v65, &v63, &v57);
            VidSchSetPagingNodePageDirectory(*(_QWORD *)(*((_QWORD *)v4 + 2) + 528LL), v3, v65, v63, v57);
            *(_BYTE *)(v55 + 436) &= 0x9Fu;
            goto LABEL_67;
          }
          HwQueue = VIDMM_GLOBAL::MapGpuVA(
                      v4,
                      *((struct VIDMM_DEVICE **)v4 + 5113),
                      0LL,
                      (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)v4 + v3 + 746) + 48LL),
                      (unsigned __int64 *)v4 + v3 + 810,
                      1 << v3,
                      1);
          if ( HwQueue >= 0 )
          {
            memset(v61, 0, sizeof(v61));
            v54 = *(_QWORD *)(v53 + 248);
            v61[5] = *((_QWORD *)v4 + v3 + 810);
            HwQueue = VidSchCreateHwQueue(
                        0LL,
                        *(_QWORD *)(v54 + 8 * v3),
                        (__int64)v61,
                        (char **)(*(_QWORD *)(v53 + 256) + 8 * v3));
            if ( HwQueue >= 0 )
            {
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 528LL) + 256LL) + 8 * v3) + 40LL) = *((_QWORD *)v4 + v3 + 746);
              goto LABEL_64;
            }
          }
          goto LABEL_67;
        }
        v35 = WdLogNewEntry5_WdAssertion(v39, v38);
        *(_QWORD *)(v35 + 24) = 7092LL;
      }
    }
    else
    {
      v35 = WdLogNewEntry5_WdAssertion(0LL, v34);
      *(_QWORD *)(v35 + 24) = 7062LL;
    }
LABEL_66:
    WdLogEvent5_WdAssertion(v35);
LABEL_67:
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v5);
    goto LABEL_12;
  }
  *((_BYTE *)v4 + 41448) &= ~0x10u;
  v25 = WdLogNewEntry5_WdAssertion(v14, v17);
  *(_QWORD *)(v25 + 24) = v21;
  *(_QWORD *)(v25 + 32) = 6995LL;
LABEL_69:
  WdLogEvent5_WdAssertion(v25);
  return 3221225485LL;
}
