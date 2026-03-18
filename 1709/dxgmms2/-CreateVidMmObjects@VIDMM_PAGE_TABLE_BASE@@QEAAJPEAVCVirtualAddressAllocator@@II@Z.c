/*
 * XREFs of ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C00571E8
 * Callers:
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0055794 (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0057B4C (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00622B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00632F0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
        struct _VIDMM_GLOBAL_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        int a4)
{
  __int64 v4; // rdi
  struct VIDMM_DEVICE *v6; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // r11
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  struct _VIDMM_GLOBAL_ALLOC **v17; // rsi
  unsigned int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int OneAllocation; // ebp
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int8 v28[4]; // [rsp+A0h] [rbp-78h] BYREF
  int v29; // [rsp+A4h] [rbp-74h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-70h] BYREF

  v4 = *((_QWORD *)a2 + 10);
  v6 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 12);
  v8 = a3;
  v9 = *(unsigned int *)this;
  v10 = *(_QWORD *)(v4 + 40168);
  v11 = v10 + 1552LL * ((*(_DWORD *)this >> 7) & 0x1F);
  if ( (*(_BYTE *)(v4 + 40872) & 8) != 0 )
    v12 = 0;
  else
    v12 = (__int16)v9 >> 13;
  v13 = *(_QWORD *)(v4 + 24);
  v28[0] = 0;
  v14 = 65 - (v12 != 0);
  v15 = *(_DWORD *)(v13 + 300);
  if ( (v15 & 8) != 0 || (v15 & 0x10) != 0 )
    v14 |= 4u;
  v29 = 0;
  if ( a4 )
    LOBYTE(v16) = a4 - 1;
  else
    v16 = *(unsigned __int16 *)(1552 * ((v9 >> 7) & 0x1F) + v10 + 28)
        - *(_DWORD *)(1552 * ((v9 >> 7) & 0x1F) + v10 + 20);
  v17 = this + 1;
  v18 = *(_DWORD *)(v11 + 48 * (v9 & 7) + 100);
  if ( !v18 )
    v18 = 4096;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    (VIDMM_GLOBAL *)v4,
                    v6,
                    ((unsigned int)v9 >> 7) & 0x1F,
                    v8,
                    v8,
                    v18,
                    1 << v16,
                    0,
                    0,
                    (struct _DXGK_ALLOCATIONINFOFLAGS)v14,
                    0LL,
                    0LL,
                    0LL,
                    0xA0000000,
                    0,
                    0LL,
                    1u,
                    0LL,
                    this + 1);
  if ( OneAllocation < 0 )
  {
    _InterlockedIncrement(&dword_1C0040598);
    v26 = WdLogNewEntry5_WdLowResource(v20, v19);
    *(_QWORD *)(v26 + 24) = 3877LL;
    WdLogEvent5_WdLowResource(v26);
    return (unsigned int)OneAllocation;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 34) & 4) != 0 )
      *((_DWORD *)*v17 + 19) |= 0x200u;
    KeStackAttachProcess(**((PRKPROCESS **)a2 + 11), &ApcState);
    v22 = VIDMM_GLOBAL::OpenOneAllocation((VIDMM_GLOBAL *)v4, v6, *v17, 0LL, 0, 0LL, this + 2, v28);
    KeUnstackDetachProcess(&ApcState);
    if ( v22 < 0 )
    {
      _InterlockedIncrement(&dword_1C004059C);
      v27 = WdLogNewEntry5_WdLowResource(v24, v23);
      *(_QWORD *)(v27 + 24) = 3907LL;
      WdLogEvent5_WdLowResource(v27);
      return (unsigned int)v22;
    }
    else
    {
      return 0LL;
    }
  }
}
