/*
 * XREFs of ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C00648B8
 * Callers:
 *     VidMmReserveGpuVirtualAddress @ 0x1C0013E30 (VidMmReserveGpuVirtualAddress.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0052448 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0055314 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A4A8 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C007CD24 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
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
  __int64 v17; // rcx
  int v18; // esi
  __int64 v20; // rax
  __int64 v21; // rax
  D3DGPU_VIRTUAL_ADDRESS Size; // rcx
  __int64 v23; // rax
  _QWORD *v24; // r14
  void *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  D3DGPU_VIRTUAL_ADDRESS MaximumAddress; // [rsp+20h] [rbp-78h]
  enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE ReservationType; // [rsp+30h] [rbp-68h]
  struct VIDMM_VAD_PENDING_OPERATION *DriverProtection; // [rsp+38h] [rbp-60h]
  D3DGPU_VIRTUAL_ADDRESS VirtualAddress; // [rsp+60h] [rbp-38h]
  D3DGPU_SIZE_T v32; // [rsp+68h] [rbp-30h]
  struct VIDMM_MAPPED_VA_RANGE *v33; // [rsp+A0h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 40872) & 1) == 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(this);
    WdLogEvent5_WdWarning(v20);
    return 3221225485LL;
  }
  BaseAddress = a4->BaseAddress;
  a4->PagingFenceValue = 0LL;
  if ( (BaseAddress & 0xFFF) != 0 )
  {
    v21 = WdLogNewEntry5_WdError(this, a2, a3, a4);
    Size = a4->BaseAddress;
LABEL_11:
    *(_QWORD *)(v21 + 24) = Size;
LABEL_12:
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  if ( (a4->Size & 0xFFF) != 0 )
  {
    v21 = WdLogNewEntry5_WdError(this, a2, a3, a4);
    Size = a4->Size;
    goto LABEL_11;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                              0xFFFFFFFF);
  if ( !VirtualAddressAllocator )
  {
    v21 = WdLogNewEntry5_WdError(v10, v9, v12, v13);
    *(_QWORD *)(v21 + 24) = 19435LL;
    goto LABEL_12;
  }
  MinimumAddress = a4->MinimumAddress;
  DriverProtection = (struct VIDMM_VAD_PENDING_OPERATION *)a4->DriverProtection;
  ReservationType = a4->ReservationType;
  MaximumAddress = a4->MaximumAddress;
  v33 = 0LL;
  v18 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
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
          &v33,
          1u);
  if ( v18 < 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(v17);
    WdLogEvent5_WdWarning(v23);
  }
  else
  {
    v32 = a4->Size;
    VirtualAddress = a4->VirtualAddress;
    if ( *((_QWORD *)this + 5115) )
    {
      v24 = operator new[](0x20uLL, 0x32356956u, PagedPool);
      if ( v24 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
        *((_QWORD *)this + 5118) = KeGetCurrentThread();
        if ( *((_DWORD *)this + 10232) == dword_1C004033C )
          *((_DWORD *)this + 10232) = 0;
        v25 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
        if ( v25 )
          operator delete(v25);
        *v24 = *(_QWORD *)a2;
        v24[1] = *((_QWORD *)a2 + 4);
        v24[2] = VirtualAddress;
        v24[3] = v32;
        *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v24;
        *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 16;
        *((_QWORD *)this + 5118) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( a4->Reserved0 == 1 )
    {
      v18 = VIDMM_GLOBAL::CommitVirtualAddressRange(this, VirtualAddressAllocator, a3, v33, 0, 0LL, 0LL, 0LL);
      if ( v18 < 0 )
      {
        v27 = WdLogNewEntry5_WdWarning(v26);
        WdLogEvent5_WdWarning(v27);
        CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, a4->BaseAddress);
      }
    }
  }
  return (unsigned int)v18;
}
