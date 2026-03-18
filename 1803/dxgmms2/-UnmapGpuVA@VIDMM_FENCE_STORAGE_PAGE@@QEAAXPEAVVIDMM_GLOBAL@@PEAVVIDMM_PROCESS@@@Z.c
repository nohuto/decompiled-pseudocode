/*
 * XREFs of ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0077CE0
 * Callers:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C006B484 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C0069298 (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0073EE0 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0074864 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C00781B4 (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00A2E6C (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::UnmapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_PROCESS *a3)
{
  char *v6; // r14
  VIDMM_FENCE_STORAGE_PAGE *v7; // rax
  VIDMM_FENCE_STORAGE_PAGE *v8; // r15
  _QWORD *v9; // rax
  _DWORD *v10; // rbx
  _QWORD *v11; // rsi
  VIDMM_PROCESS *v12; // r9
  D3DGPU_VIRTUAL_ADDRESS v14; // rax
  __int64 v15; // r12
  unsigned int v16; // edx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  VIDMM_FENCE_STORAGE_PAGE *v20; // rcx
  unsigned int v21; // edx
  bool v22; // r8
  _D3DKMT_FREEGPUVIRTUALADDRESS v23; // [rsp+28h] [rbp-49h] BYREF
  _QWORD v24[12]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v25; // [rsp+E0h] [rbp+6Fh]

  if ( (*((_BYTE *)a2 + 41448) & 2) != 0 )
  {
    v6 = (char *)this + 72;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    *((_QWORD *)v6 + 1) = KeGetCurrentThread();
    v7 = (VIDMM_FENCE_STORAGE_PAGE *)*((_QWORD *)this + 7);
    while ( v7 != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56) )
    {
      v8 = v7;
      v7 = *(VIDMM_FENCE_STORAGE_PAGE **)v7;
      if ( a2 == *((struct VIDMM_GLOBAL **)v8 + 6) )
      {
        v9 = (_QWORD *)*((_QWORD *)v8 + 4);
        while ( v9 != (_QWORD *)((char *)v8 + 32) )
        {
          v10 = v9 - 4;
          v11 = v9;
          v12 = (VIDMM_PROCESS *)*(v9 - 1);
          v9 = (_QWORD *)*v9;
          if ( a3 == v12 )
          {
            if ( v10[12]-- == 1 )
            {
              if ( *((_BYTE *)v10 + 16) )
              {
                if ( !*((_BYTE *)v10 + 17) )
                {
                  v14 = *(_QWORD *)v10;
                  v15 = *((_QWORD *)a2 + 3);
                  v25 = *(_QWORD *)v10;
                  if ( a3 == *((struct VIDMM_PROCESS **)a2 + 5112) )
                  {
                    memset(v24, 0, 0x58uLL);
                    v21 = *(_DWORD *)(v15 + 200);
                    v24[6] = v25;
                    LODWORD(v24[0]) = 120;
                    v24[7] = 1LL;
                    v24[5] = VIDMM_PROCESS::GetVirtualAddressAllocator(a3, v21, 0);
                    LOBYTE(v24[8]) = 1;
                    VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v24, v22);
                  }
                  else
                  {
                    v16 = *(_DWORD *)(v15 + 200);
                    *(_QWORD *)&v23.hAdapter = 0LL;
                    v23.BaseAddress = v14;
                    v23.Size = 4096LL;
                    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(v12, v16, 0);
                    VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(
                      a2,
                      *((struct VIDMM_PROCESS **)VirtualAddressAllocator + 11),
                      &v23,
                      1);
                  }
                }
                VIDMM_PROCESS::CloseAdapter(*((VIDMM_PROCESS **)v10 + 3), a2);
              }
              v18 = *v11;
              if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v19 = (_QWORD *)v11[1], (_QWORD *)*v19 != v11) )
                __fastfail(3u);
              *v19 = v18;
              *(_QWORD *)(v18 + 8) = v19;
              ExFreePoolWithTag(v10, 0);
              VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v20, v8);
            }
            goto LABEL_9;
          }
        }
        break;
      }
    }
LABEL_9:
    *((_QWORD *)v6 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
}
