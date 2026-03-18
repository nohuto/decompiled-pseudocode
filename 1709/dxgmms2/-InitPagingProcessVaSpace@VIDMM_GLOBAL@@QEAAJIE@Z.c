/*
 * XREFs of ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007B468
 * Callers:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00211F0 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00751F0 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007B108 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00018AC (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0001958 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0015F94 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C0016704 (VidSchSetPagingNodePageDirectory.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00541C4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0054380 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0054DD0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0060F60 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00728B4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0079218 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C007CCA8 (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C007CD24 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitPagingProcessVaSpace(VIDMM_GLOBAL *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  struct VIDMM_MAPPED_VA_RANGE *v4; // r13
  __int64 v5; // r12
  VIDMM_GLOBAL *v6; // rdi
  __int64 v7; // rdx
  __int64 v9; // r14
  unsigned int v10; // eax
  char v11; // r12
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int64 *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // esi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  char v26; // si
  PVOID v27; // rax
  __int64 v28; // rdx
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  int v35; // r12d
  int v36; // ecx
  __int64 *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rbx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  struct VIDMM_ALLOC *i; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int64 v54; // [rsp+78h] [rbp-61h] BYREF
  struct VIDMM_ALLOC *v55; // [rsp+80h] [rbp-59h] BYREF
  struct VIDMM_ALLOC *v56; // [rsp+88h] [rbp-51h] BYREF
  unsigned __int64 v57; // [rsp+90h] [rbp-49h] BYREF
  _DWORD v58[36]; // [rsp+A0h] [rbp-39h] BYREF
  unsigned int v59; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v60; // [rsp+148h] [rbp+6Fh] BYREF
  __int64 v61; // [rsp+158h] [rbp+7Fh]

  v3 = a2;
  v4 = 0LL;
  v5 = a2;
  v6 = this;
  v7 = *((_QWORD *)this + 5021) + 1552LL * a2;
  v61 = v7;
  LOBYTE(this) = *(_BYTE *)(v7 + 436);
  if ( ((unsigned __int8)this & 0xC) != 0xC
    && (!*(_BYTE *)(*((_QWORD *)v6 + 3) + 2256LL) || ((unsigned __int8)this & 1) == 0)
    && *(_DWORD *)(v7 + 424) != 1
    || ((unsigned __int8)this & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)(dword_1C0040338 - 1) > 0x3D )
  {
    v50 = WdLogNewEntry5_WdAssertion(this, v7);
    *(_QWORD *)(v50 + 24) = 6893LL;
    goto LABEL_65;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v6 + 8LL) )
  {
    memset(v58, 0, 0x58uLL);
    v58[0] = 118;
    v58[1] = v3;
    v29 = VIDMM_GLOBAL::QueueSystemCommandAndWait(v6, (struct _VIDMM_SYSTEM_COMMAND *)v58, 1);
    if ( v29 < 0 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v48, v47);
      *(_QWORD *)(v49 + 24) = 6908LL;
      WdLogEvent5_WdAssertion(v49);
      return (unsigned int)v29;
    }
    return 0LL;
  }
  *((_BYTE *)v6 + 40872) |= 8u;
  v9 = *((_QWORD *)v6 + v3 + 5044);
  if ( (_BYTE)a3 )
    CVirtualAddressAllocator::EvictRootPageTable(*((CVirtualAddressAllocator **)v6 + v3 + 5044), v3, 0);
  if ( *((_QWORD *)v6 + 5111) )
    goto LABEL_26;
  v10 = *((_DWORD *)v6 + 926);
  v11 = 0;
  v12 = 1LL << dword_1C0040338;
  v13 = 0LL;
  if ( v10 )
  {
    v7 = *((_QWORD *)v6 + 464);
    v14 = v10;
    do
    {
      a3 = *(_QWORD *)v7;
      if ( (*(_DWORD *)(*(_QWORD *)v7 + 80LL) & 0x1001) == 0 )
      {
        if ( *(_QWORD *)(a3 + 48) > v13 )
          v13 = *(_QWORD *)(a3 + 48);
        if ( *(_DWORD *)(a3 + 376) == 0x10000 )
          v11 = 1;
      }
      v7 += 8LL;
      --v14;
    }
    while ( v14 );
  }
  v15 = v13 >> 2;
  if ( v12 >= v15 )
    v12 = v15;
  v16 = v12;
  if ( v11 )
  {
    v17 = (*(_QWORD *)(*((_QWORD *)v6 + 5021) + 176LL) << 12) - 1LL;
    v18 = v17 + v12;
    v15 = ~v17;
    v12 = v15 & v18;
    v16 = 2 * v12;
  }
  if ( v16 > *(_QWORD *)(v9 + 16) )
  {
    *((_BYTE *)v6 + 40872) &= ~8u;
    v50 = WdLogNewEntry5_WdAssertion(v15, v7);
    *(_QWORD *)(v50 + 24) = v16;
    *(_QWORD *)(v50 + 32) = 6984LL;
LABEL_65:
    WdLogEvent5_WdAssertion(v50);
    return 3221225485LL;
  }
  v19 = (unsigned __int64 *)((char *)v6 + 40880);
  v22 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          (struct _KTHREAD **)v9,
          v16,
          a3,
          0LL,
          0LL,
          v11 != 0 ? 0x10000 : 4096,
          (unsigned __int64 *)v6 + 5110);
  if ( v22 >= 0 )
  {
    CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)v9, *v19);
    v23 = *v19;
    v4 = 0LL;
    v24 = v12 + v23;
    *((_QWORD *)v6 + 5111) = v24;
    if ( v11 )
    {
      *((_QWORD *)v6 + 5112) = v24;
      *((_QWORD *)v6 + 5113) = v24 + v12;
    }
    v25 = v12 >> 2;
    v5 = v3;
    if ( v25 > 0xFFFEFFFF )
      LODWORD(v25) = -65537;
    *((_DWORD *)v6 + 10228) = (v25 + 0xFFFF) & 0xFFFF0000;
LABEL_26:
    v26 = *(_BYTE *)(v61 + 437) & 2;
    v27 = operator new[](0x88uLL, 0x35356956u, PagedPool);
    if ( v27 )
      v4 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                             (__int64)v27,
                                             0LL,
                                             *((_QWORD *)v6 + 5110),
                                             *((_QWORD *)v6 + 5111),
                                             v3,
                                             0LL,
                                             0LL,
                                             0,
                                             0LL,
                                             0LL,
                                             0LL,
                                             0LL);
    v29 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            (CVirtualAddressAllocator *)v9,
            v4,
            v3,
            -1,
            0LL,
            0LL,
            0,
            &v55);
    if ( v29 < 0 )
    {
      v52 = WdLogNewEntry5_WdAssertion(0LL, v28);
      *(_QWORD *)(v52 + 24) = 7051LL;
    }
    else if ( v26
           && (*((_QWORD *)v4 + 12) = *((_QWORD *)v6 + 5112),
               *((_QWORD *)v4 + 13) = *((_QWORD *)v6 + 5113),
               v29 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                       (CVirtualAddressAllocator *)v9,
                       v4,
                       v3,
                       -3,
                       0LL,
                       0LL,
                       0,
                       &i),
               v29 < 0) )
    {
      v52 = WdLogNewEntry5_WdAssertion(v31, v30);
      *(_QWORD *)(v52 + 24) = 7071LL;
    }
    else
    {
      v29 = VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
              *(VIDMM_PAGE_DIRECTORY **)(32 * v5 + *(_QWORD *)(v9 + 112)),
              (struct CVirtualAddressAllocator *)v9);
      if ( v29 < 0 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v33, v32);
        *(_QWORD *)(v52 + 24) = 7081LL;
      }
      else
      {
        v34 = (unsigned __int64)*((unsigned int *)v6 + v5 + 29) >> 12;
        v35 = 0;
        for ( i = (struct VIDMM_ALLOC *)v34; ; v34 = (unsigned __int64)i )
        {
          v36 = 0;
          v37 = (__int64 *)(*((_QWORD *)v6 + v3 + 79) + 96LL);
          v38 = *v37;
          while ( (__int64 *)v38 != v37 )
          {
            if ( v35 == v36 )
              goto LABEL_36;
            v38 = *(_QWORD *)v38;
            ++v36;
          }
          v38 = 0LL;
LABEL_36:
          v39 = *(_QWORD *)(v38 + 64);
          if ( !*(_QWORD *)(v38 + 96) )
          {
            v40 = CVirtualAddressAllocator::MapVirtualAddressRange(
                    (struct VIDMM_VAD **)v9,
                    v38,
                    0LL,
                    4,
                    v34 << 12,
                    0LL,
                    *((_QWORD *)v6 + 5110),
                    *((_QWORD *)v6 + 5111),
                    0x1000u,
                    (*((_DWORD *)v6 + 8) < 0x6000u) | 2LL,
                    0LL,
                    v3,
                    0LL);
            if ( !v40 )
            {
              v29 = -1073741823;
              v52 = WdLogNewEntry5_WdAssertion(v42, v41);
              *(_QWORD *)(v52 + 24) = 7131LL;
              goto LABEL_63;
            }
            *(_QWORD *)(v38 + 96) = v40[12];
          }
          v43 = *(_QWORD *)(v39 + 128);
          FullMDL = VidMmGetFullMDL(*(struct _VIDMM_GLOBAL_ALLOC **)(v38 + 56), 0LL);
          v29 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                  (CVirtualAddressAllocator *)v9,
                  (struct VIDMM_MAPPED_VA_RANGE *)(v43 - 24),
                  v3,
                  0,
                  0LL,
                  FullMDL,
                  0,
                  &v56);
          if ( v29 < 0 )
            break;
          if ( (unsigned int)++v35 >= 2 )
          {
            CVirtualAddressAllocator::GetPageDirectoryData((CVirtualAddressAllocator *)v9, v3, &v57, &v59, &v60, &v54);
            VidSchSetPagingNodePageDirectory(*(_QWORD **)(*((_QWORD *)v6 + 2) + 512LL), v3, v59, v60, v54);
            *(_BYTE *)(v61 + 436) &= 0x9Fu;
            goto LABEL_42;
          }
        }
        v52 = WdLogNewEntry5_WdAssertion(v46, v45);
        *(_QWORD *)(v52 + 24) = 7151LL;
      }
    }
LABEL_63:
    WdLogEvent5_WdAssertion(v52);
LABEL_42:
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v4);
    *((_BYTE *)v6 + 40872) &= ~8u;
    return (unsigned int)v29;
  }
  v51 = WdLogNewEntry5_WdAssertion(v21, v20);
  *(_QWORD *)(v51 + 24) = v12;
  WdLogEvent5_WdAssertion(v51);
  *((_BYTE *)v6 + 40872) &= ~8u;
  return (unsigned int)v22;
}
