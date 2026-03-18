/*
 * XREFs of ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0068CC4
 * Callers:
 *     VidMmReserveGpuVirtualAddress @ 0x1C0004040 (VidMmReserveGpuVirtualAddress.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0004B24 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C005B914 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005ECE4 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0074864 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00AB19C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // r11
  __int64 v9; // rdx
  __int64 v10; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r9d
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r11
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  D3DGPU_VIRTUAL_ADDRESS Size; // rcx
  __int64 v25; // rax
  _QWORD *v26; // r14
  unsigned int v27; // ecx
  void *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  D3DGPU_VIRTUAL_ADDRESS MaximumAddress; // [rsp+20h] [rbp-78h]
  unsigned int v33; // [rsp+28h] [rbp-70h]
  enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE ReservationType; // [rsp+30h] [rbp-68h]
  struct VIDMM_VAD_PENDING_OPERATION *DriverProtection; // [rsp+38h] [rbp-60h]
  D3DGPU_VIRTUAL_ADDRESS VirtualAddress; // [rsp+60h] [rbp-38h]
  D3DGPU_SIZE_T v37; // [rsp+68h] [rbp-30h]
  struct VIDMM_MAPPED_VA_RANGE *v38; // [rsp+A0h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 41448) & 2) == 0 )
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
LABEL_12:
    *(_QWORD *)(v23 + 24) = Size;
LABEL_13:
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
  if ( (a4->Size & 0xFFF) != 0 )
  {
    v23 = WdLogNewEntry5_WdError(this, a2, a3, a4);
    Size = a4->Size;
    goto LABEL_12;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                              0xFFFFFFFF);
  if ( !VirtualAddressAllocator )
  {
    v23 = WdLogNewEntry5_WdError(v10, v9, v12, v13);
    *(_QWORD *)(v23 + 24) = 19616LL;
    goto LABEL_13;
  }
  if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) >= 2400
    && (*((_BYTE *)this + 41448) & 1) != 0
    && *((_DWORD *)this + 10360) >= 0x28u
    && !(v15 % (unsigned int)(4096 << *((_DWORD *)this + 10361))) )
  {
    v14 = 4096 << *((_DWORD *)this + 10361);
  }
  DriverProtection = (struct VIDMM_VAD_PENDING_OPERATION *)a4->DriverProtection;
  ReservationType = a4->ReservationType;
  v33 = v14;
  MinimumAddress = a4->MinimumAddress;
  MaximumAddress = a4->MaximumAddress;
  v38 = 0LL;
  v20 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
          VirtualAddressAllocator,
          v15,
          v16,
          MinimumAddress,
          MaximumAddress,
          v33,
          ReservationType,
          (unsigned __int64)DriverProtection,
          0,
          &a4->VirtualAddress,
          &v38,
          1u);
  if ( v20 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v19, v18);
    WdLogEvent5_WdWarning(v25);
  }
  else
  {
    v37 = a4->Size;
    VirtualAddress = a4->VirtualAddress;
    if ( *((_QWORD *)this + 5187) )
    {
      v26 = operator new[](0x20uLL, 0x32356956u, PagedPool);
      if ( v26 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)this + 41512, 0LL);
        *((_QWORD *)this + 5190) = KeGetCurrentThread();
        v27 = *((_DWORD *)this + 10376);
        if ( v27 == dword_1C004733C )
        {
          *((_DWORD *)this + 10376) = 0;
          v27 = 0;
        }
        v28 = *(void **)(*((_QWORD *)this + 5187) + 24LL * v27 + 16);
        if ( v28 )
          operator delete(v28);
        *v26 = *(_QWORD *)a2;
        v26[1] = *((_QWORD *)a2 + 4);
        v26[2] = VirtualAddress;
        v26[3] = v37;
        *(_QWORD *)(*((_QWORD *)this + 5187) + 24LL * *((unsigned int *)this + 10376)) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(*((_QWORD *)this + 5187) + 24LL * *((unsigned int *)this + 10376) + 16) = v26;
        *(_DWORD *)(*((_QWORD *)this + 5187) + 24LL * (unsigned int)(*((_DWORD *)this + 10376))++ + 8) = 16;
        *((_QWORD *)this + 5190) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 41512, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( a4->Reserved0 == 1 )
    {
      v20 = VIDMM_GLOBAL::CommitVirtualAddressRange(this, VirtualAddressAllocator, a3, v38, 0, 0LL, 0LL, 0LL);
      if ( v20 < 0 )
      {
        v31 = WdLogNewEntry5_WdWarning(v30, v29);
        WdLogEvent5_WdWarning(v31);
        CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, a4->BaseAddress);
      }
    }
  }
  return (unsigned int)v20;
}
