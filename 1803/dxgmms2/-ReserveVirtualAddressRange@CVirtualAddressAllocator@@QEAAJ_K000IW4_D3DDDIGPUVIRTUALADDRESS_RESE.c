/*
 * XREFs of ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C005B914
 * Callers:
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0068CC4 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C0068E10 (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0004CD4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C0059B44 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0059EA0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005A1A8 (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00AB19C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::ReserveVirtualAddressRange(
        CVirtualAddressAllocator *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE a7,
        unsigned __int64 a8,
        unsigned __int8 a9,
        unsigned __int64 *a10,
        struct VIDMM_MAPPED_VA_RANGE **a11,
        unsigned __int8 a12)
{
  unsigned __int8 v12; // bl
  struct VIDMM_MAPPED_VA_RANGE **v17; // r14
  struct _RTL_AVL_TREE *v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct VIDMM_VAD *v23; // rbx
  unsigned int v24; // esi
  __int64 v25; // rdx
  enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE v26; // ecx
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE v28; // rax
  struct VIDMM_MAPPED_VA_RANGE *ReservedVaRange; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE v32[32]; // [rsp+50h] [rbp-38h] BYREF
  struct VIDMM_VAD *v33; // [rsp+90h] [rbp+8h] BYREF

  v12 = a12;
  if ( a12 && (*(_DWORD *)(*((_QWORD *)this + 11) + 88LL) & 2) != 0 )
    v12 = *(_BYTE *)(*((_QWORD *)this + 10) + 40673LL) != 0 ? a12 : 0;
  v33 = 0LL;
  v17 = a11;
  if ( a11 )
    *a11 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v32, (struct _KTHREAD **)this + 7);
  v19 = CVirtualAddressAllocator::AllocateVirtualAddressRange(this, v18, a2, a3, a4, a5, a6, &v33, v12);
  v23 = v33;
  v24 = v19;
  if ( v19 >= 0 )
  {
    CVirtualAddressAllocator::InsertVadToReservedList(this, v33, v22);
    v26 = a7;
    if ( a7 == D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT )
    {
LABEL_6:
      *((_DWORD *)v23 + 18) ^= (*((_DWORD *)v23 + 18) ^ (a9 << 11)) & 0x800;
      *a10 = *((_QWORD *)v23 + 3);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
      return 0LL;
    }
    if ( (unsigned int)a7 > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
    {
      v31 = WdLogNewEntry5_WdWarning((unsigned int)a7, v25);
      WdLogEvent5_WdWarning(v31);
      v24 = -1073741811;
      goto LABEL_16;
    }
    *((_DWORD *)v23 + 18) = *((_DWORD *)v23 + 18) & 0xFFFFFFF0 | 2;
    v28.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)5LL;
    if ( v26 != D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
      v28.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)8LL;
    ReservedVaRange = CVirtualAddressAllocator::CreateReservedVaRange(
                        this,
                        v23,
                        8LL,
                        *((_QWORD *)v23 + 3),
                        *((_QWORD *)v23 + 4) - *((_QWORD *)v23 + 3),
                        v28,
                        a8);
    if ( ReservedVaRange )
    {
      *v17 = ReservedVaRange;
      goto LABEL_6;
    }
    v24 = -1073741801;
  }
  v30 = WdLogNewEntry5_WdWarning(v21, v20);
  WdLogEvent5_WdWarning(v30);
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  if ( v23 )
    CVirtualAddressAllocator::FreeVirtualAddressRange(this, *((_QWORD *)v23 + 3));
  return v24;
}
