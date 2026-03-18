/*
 * XREFs of ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C005BD4C
 * Callers:
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C00593AC (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C005C08C (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00665C0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067620 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
        struct _VIDMM_GLOBAL_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        int a4)
{
  __int64 v4; // rsi
  struct VIDMM_DEVICE *v6; // r15
  unsigned __int64 v8; // rbp
  unsigned int v9; // r8d
  __int64 v10; // r11
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  struct _VIDMM_GLOBAL_ALLOC **v16; // rdi
  unsigned int v17; // edx
  __int64 v18; // rcx
  int OneAllocation; // ebp
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25[4]; // [rsp+A0h] [rbp-78h] BYREF
  int v26; // [rsp+A4h] [rbp-74h]
  int v27; // [rsp+A8h] [rbp-70h]
  struct _D3DDDI_SEGMENTPREFERENCE v28[2]; // [rsp+B0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+B8h] [rbp-60h] BYREF

  v4 = *((_QWORD *)a2 + 10);
  v6 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 12);
  v8 = a3;
  v9 = *(_DWORD *)this;
  v10 = *(_QWORD *)(v4 + 40720) + 1560LL * ((*(_DWORD *)this >> 7) & 0x1F);
  if ( (*(_BYTE *)(v4 + 41448) & 0x10) != 0 || (v11 = 0, !((__int16)v9 >> 13)) )
    v11 = 1;
  v12 = *(_QWORD *)(v4 + 24);
  v13 = v11 | 0x40;
  v26 = v13;
  v25[0] = 0;
  v14 = *(_DWORD *)(v12 + 300);
  if ( (v14 & 8) != 0 || (v14 & 0x10) != 0 )
  {
    v13 |= 4u;
    v26 = v13;
  }
  *(_QWORD *)&v28[0].0 = 0LL;
  v27 = 0;
  if ( a4 )
    LOBYTE(v15) = a4 - 1;
  else
    v15 = *(unsigned __int16 *)(v10 + 28) - *(_DWORD *)(v10 + 20);
  v16 = this + 1;
  v17 = *(_DWORD *)(v10 + 48LL * (v9 & 7) + 100);
  if ( !v17 )
    v17 = 4096;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    (VIDMM_GLOBAL *)v4,
                    v6,
                    (v9 >> 7) & 0x1F,
                    v8,
                    v8,
                    v17,
                    1 << v15,
                    0,
                    v28[0],
                    (struct _DXGK_ALLOCATIONINFOFLAGS)v13,
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
    _InterlockedIncrement(&dword_1C0047598);
    v23 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v23 + 24) = 3888LL;
    WdLogEvent5_WdLowResource(v23);
    return (unsigned int)OneAllocation;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 34) & 4) != 0 )
      *((_DWORD *)*v16 + 19) |= 0x200u;
    KeStackAttachProcess(**((PRKPROCESS **)a2 + 11), &ApcState);
    v20 = VIDMM_GLOBAL::OpenOneAllocation((VIDMM_GLOBAL *)v4, v6, *v16, 0LL, 0, 0LL, this + 2, v25);
    KeUnstackDetachProcess(&ApcState);
    if ( v20 < 0 )
    {
      _InterlockedIncrement(&dword_1C004759C);
      v24 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v24 + 24) = 3918LL;
      WdLogEvent5_WdLowResource(v24);
      return (unsigned int)v20;
    }
    else
    {
      return 0LL;
    }
  }
}
