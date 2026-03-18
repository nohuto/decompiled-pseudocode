/*
 * XREFs of ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A51E0
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00B0C0C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00B2D80 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0004FC8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B3D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0074864 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C009EDF0 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
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
  unsigned __int64 v21; // rcx
  int v22; // r8d
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // edi
  unsigned __int64 v28; // [rsp+40h] [rbp-98h]
  CVirtualAddressAllocator *v29; // [rsp+48h] [rbp-90h]
  _QWORD *v30; // [rsp+50h] [rbp-88h]
  char *v31; // [rsp+58h] [rbp-80h]
  struct VIDMM_ALLOC *v32; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-70h]
  unsigned __int64 v34; // [rsp+70h] [rbp-68h]
  _QWORD *v35; // [rsp+78h] [rbp-60h]
  char *v36; // [rsp+80h] [rbp-58h]
  char v38; // [rsp+E8h] [rbp+10h]
  char v39; // [rsp+F0h] [rbp+18h]
  __int64 v40; // [rsp+F8h] [rbp+20h]
  int v41; // [rsp+F8h] [rbp+20h]

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
    v29 = 0LL;
    v10 = 0LL;
    v7 = *(char **)v7;
    v11 = 0;
    v28 = 0LL;
    v12 = -1LL;
    v13 = (*(_BYTE *)(v8 + 41448) & 2) == 0;
    v36 = v7;
    v31 = 0LL;
    v38 = 0;
    v39 = 0;
    v40 = -1LL;
    if ( !v13 )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  *((VIDMM_PROCESS **)v9 + 1),
                                  *(_DWORD *)(*(_QWORD *)(v8 + 24) + 200LL),
                                  *((_DWORD *)a2 + 19) & 0x3F);
      v29 = VirtualAddressAllocator;
      v10 = (char *)VirtualAddressAllocator + 56;
      v31 = (char *)VirtualAddressAllocator + 56;
      if ( *((struct _KTHREAD **)VirtualAddressAllocator + 8) != KeGetCurrentThread() )
      {
        DXGPUSHLOCK::AcquireExclusive((struct CVirtualAddressAllocator *)((char *)VirtualAddressAllocator + 56));
        v38 = 1;
      }
      v4 = this;
    }
    v15 = v9 + 40;
    v16 = (_QWORD *)*((_QWORD *)v9 + 5);
    v30 = v15;
    if ( v16 != v15 )
    {
      v17 = v15;
      do
      {
        v13 = (*((_DWORD *)a2 + 19) & 0x8000000) == 0;
        v18 = (__int64 **)(v16 - 5);
        v16 = (_QWORD *)*v16;
        v35 = v16;
        if ( !v13 )
        {
          VIDMM_GLOBAL::BuildInitContextAllocation(*((ADAPTER_RENDER ***)v4 + 1), v18);
          v4 = this;
        }
        if ( (*(_BYTE *)(*((_QWORD *)v4 + 1) + 41448LL) & 2) != 0 )
        {
          if ( *((_BYTE *)v18 + 26) )
          {
            v19 = v18[16];
            if ( v19 != (__int64 *)(v18 + 16) )
            {
              v20 = v40;
              v21 = v28;
              do
              {
                v22 = *((_DWORD *)a2 + 19);
                v32 = 0LL;
                v23 = *((_QWORD *)a2 + 18);
                v34 = v21;
                v33 = v20;
                v41 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                        v29,
                        (struct VIDMM_MAPPED_VA_RANGE *)(v19 - 3),
                        v22 & 0x3F,
                        v5,
                        v23,
                        0LL,
                        0,
                        &v32);
                if ( v41 >= 0 )
                {
                  v20 = v19[9];
                  v39 = 1;
                  v21 = v19[10];
                  v11 |= 1 << ((*((_DWORD *)v19 + 10) >> 4) & 0x3F);
                  if ( v33 < v20 )
                    v20 = v33;
                  if ( v34 > v21 )
                    v21 = v34;
                  v28 = v21;
                }
                else
                {
                  v26 = WdLogNewEntry5_WdWarning(v25, v24);
                  *(_QWORD *)(v26 + 32) = v41;
                  *(_QWORD *)(v26 + 24) = v18;
                  WdLogEvent5_WdWarning(v26);
                  VidSchiMarkDeviceAsError(v18[1][4], 23);
                  v21 = v28;
                }
                v19 = (__int64 *)*v19;
              }
              while ( v19 != (__int64 *)(v18 + 16) );
              v17 = v30;
              v4 = this;
              v40 = v20;
              v16 = v35;
            }
          }
        }
      }
      while ( v16 != v17 );
      v7 = v36;
      v6 = (char *)a2 + 296;
      v10 = v31;
      v12 = v40;
    }
    if ( v38 )
    {
      *((_QWORD *)v10 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v39 )
    {
      v27 = 0;
      if ( v11 )
      {
        do
        {
          if ( (v11 & 1) != 0 )
            CVirtualAddressAllocator::FlushGpuVaTlb(v29, v27, v12, v28);
          ++v27;
          v11 >>= 1;
        }
        while ( v11 );
        v6 = (char *)a2 + 296;
      }
    }
    v4 = this;
  }
}
