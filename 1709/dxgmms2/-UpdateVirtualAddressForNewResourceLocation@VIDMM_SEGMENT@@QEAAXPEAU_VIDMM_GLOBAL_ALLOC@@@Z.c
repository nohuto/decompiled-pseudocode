/*
 * XREFs of ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009EB3C
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00A8DCC (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00AAB00 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001CCC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0052448 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0054DD0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0099C1C (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r8
  VIDMM_SEGMENT *v4; // r9
  int v5; // r12d
  char *v6; // r14
  char *v7; // rsi
  __int64 v8; // rcx
  char *v9; // rdi
  char *v10; // r13
  unsigned int v11; // ebx
  unsigned __int64 v12; // r15
  bool v13; // zf
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  _QWORD *v17; // r13
  __int64 **v18; // r15
  __int64 *v19; // r14
  unsigned __int64 v20; // rdi
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned int v25; // edi
  CVirtualAddressAllocator *v26; // [rsp+40h] [rbp-88h]
  unsigned __int64 v27; // [rsp+48h] [rbp-80h]
  _QWORD *v28; // [rsp+50h] [rbp-78h]
  char *v29; // [rsp+58h] [rbp-70h]
  struct VIDMM_ALLOC *v30; // [rsp+60h] [rbp-68h] BYREF
  _QWORD *v31; // [rsp+68h] [rbp-60h]
  char *v32; // [rsp+70h] [rbp-58h]
  char v34; // [rsp+D8h] [rbp+10h]
  char v35; // [rsp+E0h] [rbp+18h]
  __int64 v36; // [rsp+E8h] [rbp+20h]
  int v37; // [rsp+E8h] [rbp+20h]

  v2 = *((_QWORD *)a2 + 17);
  v4 = this;
  if ( (*(_DWORD *)(v2 + 80) & 0x1000) != 0 )
    v5 = 0;
  else
    v5 = *(_DWORD *)(v2 + 16) + 1;
  v6 = (char *)a2 + 296;
  v7 = (char *)*((_QWORD *)a2 + 37);
  while ( v7 != v6 )
  {
    v8 = *((_QWORD *)v4 + 1);
    v9 = v7 - 56;
    v26 = 0LL;
    v10 = 0LL;
    v7 = *(char **)v7;
    v11 = 0;
    v27 = 0LL;
    v12 = -1LL;
    v13 = (*(_BYTE *)(v8 + 40872) & 1) == 0;
    v32 = v7;
    v29 = 0LL;
    v34 = 0;
    v35 = 0;
    v36 = -1LL;
    if ( !v13 )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  *((VIDMM_PROCESS **)v9 + 1),
                                  *(_DWORD *)(*(_QWORD *)(v8 + 24) + 200LL),
                                  *((_DWORD *)a2 + 19) & 0x3F);
      v26 = VirtualAddressAllocator;
      v10 = (char *)VirtualAddressAllocator + 56;
      v29 = (char *)VirtualAddressAllocator + 56;
      if ( *((struct _KTHREAD **)VirtualAddressAllocator + 8) != KeGetCurrentThread() )
      {
        DXGPUSHLOCK::AcquireExclusive((struct CVirtualAddressAllocator *)((char *)VirtualAddressAllocator + 56));
        v34 = 1;
      }
      v4 = this;
    }
    v15 = v9 + 40;
    v16 = (_QWORD *)*((_QWORD *)v9 + 5);
    v28 = v15;
    if ( v16 != v15 )
    {
      v17 = v15;
      do
      {
        v13 = (*((_DWORD *)a2 + 19) & 0x8000000) == 0;
        v18 = (__int64 **)(v16 - 5);
        v16 = (_QWORD *)*v16;
        v31 = v16;
        if ( !v13 )
        {
          VIDMM_GLOBAL::BuildInitContextAllocation(*((ADAPTER_RENDER ***)v4 + 1), v18);
          v4 = this;
        }
        if ( (*(_BYTE *)(*((_QWORD *)v4 + 1) + 40872LL) & 1) != 0 )
        {
          if ( *((_BYTE *)v18 + 26) )
          {
            v19 = v18[16];
            if ( v19 != (__int64 *)(v18 + 16) )
            {
              v20 = v36;
              do
              {
                v21 = *((_DWORD *)a2 + 19);
                v30 = 0LL;
                v37 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                        v26,
                        (struct VIDMM_MAPPED_VA_RANGE *)(v19 - 3),
                        v21 & 0x3F,
                        v5,
                        *((_QWORD *)a2 + 18),
                        0LL,
                        0,
                        &v30);
                if ( v37 >= 0 )
                {
                  v35 = 1;
                  v24 = v27;
                  v11 |= 1 << ((*((_DWORD *)v19 + 10) >> 4) & 0x3F);
                  if ( v20 >= v19[9] )
                    v20 = v19[9];
                  if ( v27 <= v19[10] )
                    v24 = v19[10];
                  v27 = v24;
                }
                else
                {
                  v23 = WdLogNewEntry5_WdWarning(v22);
                  *(_QWORD *)(v23 + 32) = v37;
                  *(_QWORD *)(v23 + 24) = v18;
                  WdLogEvent5_WdWarning(v23);
                  VidSchiMarkDeviceAsError(v18[1][4], 23);
                }
                v19 = (__int64 *)*v19;
              }
              while ( v19 != (__int64 *)(v18 + 16) );
              v17 = v28;
              v4 = this;
              v36 = v20;
              v16 = v31;
            }
          }
        }
      }
      while ( v16 != v17 );
      v7 = v32;
      v6 = (char *)a2 + 296;
      v10 = v29;
      v12 = v36;
    }
    if ( v34 )
    {
      *((_QWORD *)v10 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v35 )
    {
      v25 = 0;
      if ( v11 )
      {
        do
        {
          if ( (v11 & 1) != 0 )
            CVirtualAddressAllocator::FlushGpuVaTlb(v26, v25, v12, v27);
          ++v25;
          v11 >>= 1;
        }
        while ( v11 );
        v6 = (char *)a2 + 296;
      }
    }
    v4 = this;
  }
}
