/*
 * XREFs of ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00A5D4C
 * Callers:
 *     ?VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z @ 0x1C0023100 (-VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056034 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A980 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B3D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0065330 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C00A467C (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00AB19C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
        VIDMM_GLOBAL *this,
        const struct _DXGKARGCB_UPDATECONTEXTALLOCATION *a2,
        char a3)
{
  int v3; // ebx
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v9; // rdi
  __int64 v10; // rbp
  struct VIDMM_VAD **v11; // r12
  __int64 v12; // rax
  D3DGPU_VIRTUAL_ADDRESS *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v16; // rsi
  __int64 v17; // rax
  D3DGPU_VIRTUAL_ADDRESS v18; // r13
  int v19; // eax
  struct _MDL *FullMDL; // r9
  unsigned __int64 v21; // rdx
  _QWORD v22[12]; // [rsp+70h] [rbp-88h] BYREF
  struct VIDMM_ALLOC *v23; // [rsp+118h] [rbp+20h] BYREF

  v3 = 0;
  v6 = *((_QWORD *)a2->hAllocation + 3);
  if ( a3 )
  {
    v9 = **(_QWORD **)v6;
    v10 = *(_QWORD *)(v9 + 136);
    v11 = (struct VIDMM_VAD **)*((_QWORD *)this + (*(_DWORD *)(v9 + 76) & 0x3F) + 5116);
    if ( (*(_DWORD *)(v6 + 28) & 3) == 2 )
    {
      v13 = (D3DGPU_VIRTUAL_ADDRESS *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                        v11,
                                        v6,
                                        0LL,
                                        1,
                                        *(_QWORD *)(v9 + 16),
                                        0LL,
                                        0LL,
                                        0LL,
                                        *(_DWORD *)(v9 + 32),
                                        1LL,
                                        0LL,
                                        *(_DWORD *)(v9 + 76) & 0x3F,
                                        0LL);
      v16 = (struct VIDMM_MAPPED_VA_RANGE *)v13;
      if ( v13 )
      {
        v18 = v13[12];
        v19 = *(_DWORD *)(v10 + 80);
        if ( (v19 & 0x1001) != 0 )
        {
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v9, 0LL);
          v19 = *(_DWORD *)(v10 + 80);
        }
        else
        {
          FullMDL = 0LL;
        }
        v21 = 0LL;
        if ( (v19 & 0x1001) == 0 )
        {
          v21 = *(_QWORD *)(v9 + 144);
          if ( (v19 & 0x1000) == 0 )
            v3 = *(_DWORD *)(v10 + 16) + 1;
        }
        CVirtualAddressAllocator::CommitVirtualAddressRange(
          (CVirtualAddressAllocator *)v11,
          v16,
          *(_DWORD *)(v9 + 76) & 0x3F,
          v3,
          v21,
          FullMDL,
          1u,
          &v23);
        VIDMM_GLOBAL::UpdateContextAllocation(
          (ADAPTER_RENDER **)this,
          v18,
          *(struct _VIDMM_GLOBAL_ALLOC **)(v9 + 16),
          (SIZE_T)a2->pPrivateDriverData,
          a2->PrivateDriverDataSize);
        CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)v11, v18);
        return 0LL;
      }
      else
      {
        v17 = WdLogNewEntry5_WdAssertion(v15, v14);
        *(_QWORD *)(v17 + 24) = 22592LL;
        WdLogEvent5_WdAssertion(v17);
        return 3221225473LL;
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdAssertion(*(unsigned int *)(v9 + 76), a2);
      *(_QWORD *)(v12 + 24) = 22571LL;
      WdLogEvent5_WdAssertion(v12);
      return 3221225485LL;
    }
  }
  else
  {
    memset(v22, 0, 0x58uLL);
    v7 = *(__int64 **)v6;
    LODWORD(v22[0]) = 117;
    v22[5] = a2;
    HIDWORD(v22[0]) = *(_DWORD *)(*v7 + 76) & 0x3F;
    return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v22, 1);
  }
}
