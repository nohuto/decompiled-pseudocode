/*
 * XREFs of ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C00615C8
 * Callers:
 *     VidMmReserveGpuVirtualAddress @ 0x1C0012C80 (VidMmReserveGpuVirtualAddress.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C004D9A0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C00512C8 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0057614 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C0075568 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r11
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // r13
  __int64 v22; // rax
  __int64 v23; // rax
  D3DGPU_VIRTUAL_ADDRESS Size; // rcx
  __int64 v25; // rax
  _QWORD *v26; // r15
  void *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  D3DGPU_VIRTUAL_ADDRESS MaximumAddress; // [rsp+20h] [rbp-78h]
  enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE ReservationType; // [rsp+30h] [rbp-68h]
  struct VIDMM_VAD_PENDING_OPERATION *DriverProtection; // [rsp+38h] [rbp-60h]
  D3DGPU_VIRTUAL_ADDRESS VirtualAddress; // [rsp+60h] [rbp-38h]
  D3DGPU_SIZE_T v35; // [rsp+68h] [rbp-30h]
  struct VIDMM_MAPPED_VA_RANGE *v36; // [rsp+A0h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 40872) & 1) == 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(this, a2);
    WdLogEvent5_WdWarning(v22);
    return 3221225485LL;
  }
  BaseAddress = a4->BaseAddress;
  a4->PagingFenceValue = 0LL;
  if ( (BaseAddress & 0xFFF) != 0 )
  {
    v23 = WdLogNewEntry5_WdError(this, a2, a3, a4);
    Size = a4->BaseAddress;
LABEL_11:
    *(_QWORD *)(v23 + 24) = Size;
LABEL_12:
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
  if ( (a4->Size & 0xFFF) != 0 )
  {
    v23 = WdLogNewEntry5_WdError(this, a2, a3, a4);
    Size = a4->Size;
    goto LABEL_11;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                              0xFFFFFFFF);
  if ( !VirtualAddressAllocator )
  {
    v23 = WdLogNewEntry5_WdError(v10, v9, v12, v13);
    *(_QWORD *)(v23 + 24) = 18892LL;
    goto LABEL_12;
  }
  MinimumAddress = a4->MinimumAddress;
  DriverProtection = (struct VIDMM_VAD_PENDING_OPERATION *)a4->DriverProtection;
  ReservationType = a4->ReservationType;
  MaximumAddress = a4->MaximumAddress;
  v36 = 0LL;
  v19 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
          VirtualAddressAllocator,
          v15,
          v14,
          MinimumAddress,
          MaximumAddress,
          0x10000u,
          ReservationType,
          (unsigned __int64)DriverProtection,
          0,
          &a4->VirtualAddress,
          &v36,
          1u);
  if ( v19 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v18, v17);
    WdLogEvent5_WdWarning(v25);
  }
  else
  {
    v20 = *(_QWORD *)a2;
    v35 = a4->Size;
    VirtualAddress = a4->VirtualAddress;
    if ( *((_QWORD *)this + 5115) )
    {
      v26 = operator new[](0x18uLL, 0x32356956u, PagedPool);
      if ( v26 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
        *((_QWORD *)this + 5118) = KeGetCurrentThread();
        if ( *((_DWORD *)this + 10232) == dword_1C003C304 )
          *((_DWORD *)this + 10232) = 0;
        v27 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
        if ( v27 )
          operator delete(v27);
        v26[1] = VirtualAddress;
        v26[2] = v35;
        *v26 = v20;
        *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v26;
        *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 16;
        *((_QWORD *)this + 5118) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( a4->Reserved0 == 1 )
    {
      v19 = VIDMM_GLOBAL::CommitVirtualAddressRange(this, VirtualAddressAllocator, a3, v36, 0, 0LL, 0LL, 0LL);
      if ( v19 < 0 )
      {
        v30 = WdLogNewEntry5_WdWarning(v29, v28);
        WdLogEvent5_WdWarning(v30);
        CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, a4->BaseAddress);
      }
    }
  }
  return (unsigned int)v19;
}
