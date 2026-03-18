/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0051460
 * Callers:
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C00518A8 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0052860 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0095F3C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002550 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00025FC (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_ppxxxxxqxx @ 0x1C0021014 (Template_ppxxxxxqxx.c)
 *     ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00506F4 (-CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C00516D0 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C00517D8 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct _LIST_ENTRY *a4,
        struct _LIST_ENTRY **a5)
{
  char v5; // r12
  struct _LIST_ENTRY *v6; // r15
  __int64 v7; // rbp
  char *v10; // rbx
  struct _LIST_ENTRY *v11; // rax
  struct _LIST_ENTRY *Flink; // rdi
  struct VIDMM_MAPPED_VA_RANGE *v13; // rsi
  struct _LIST_ENTRY *v14; // rbp
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edi
  struct _LIST_ENTRY *v19; // rbp
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *v21; // rcx
  __int64 v22; // rcx
  char **v23; // rax
  __int64 v24; // r8
  int v25; // eax
  int v27; // eax
  int v28; // ecx
  unsigned __int64 Blink; // r10
  unsigned __int64 *p_Blink; // rax
  unsigned __int64 v31; // rcx
  struct _LIST_ENTRY *v32; // r11
  struct _LIST_ENTRY *v33; // rdx
  unsigned __int64 v34; // r8
  _QWORD *v35; // r8
  __int64 v36; // r9
  struct _LIST_ENTRY *v37; // r9
  int v38; // ebp
  int v39; // edi
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // r11
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // rdx
  struct _LIST_ENTRY *v46; // r9
  struct _LIST_ENTRY *v47; // r9
  unsigned __int64 *v48; // rdi
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rcx
  int v52; // ebx
  unsigned __int64 v53; // r10
  unsigned __int64 v54; // r11
  unsigned __int64 v55; // r9
  struct _LIST_ENTRY *v56; // rax
  struct _LIST_ENTRY *v57; // r9
  __int64 v58; // rax
  __int64 *v59; // r14
  __int64 **v60; // rax
  struct _LIST_ENTRY *v61; // [rsp+70h] [rbp-48h]
  _QWORD *P; // [rsp+C0h] [rbp+8h]
  char *Pa; // [rsp+C0h] [rbp+8h]
  unsigned __int64 *v64; // [rsp+C8h] [rbp+10h]
  _QWORD *v65; // [rsp+C8h] [rbp+10h]
  struct _LIST_ENTRY *v66; // [rsp+D8h] [rbp+20h]

  v5 = 0;
  v6 = a4;
  v7 = a3;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v5 = 1;
  }
  v10 = (char *)a2 + 24 * v7 + 96;
  if ( v6 )
    v11 = v6;
  else
    v11 = (struct _LIST_ENTRY *)((char *)a2 + 24 * v7 + 96);
  Flink = v11->Flink;
  v13 = (struct VIDMM_MAPPED_VA_RANGE *)a5;
  if ( (char *)v11->Flink == v10 )
  {
LABEL_6:
    v14 = a5[7];
    v15 = (int)(*((_DWORD *)a5 + 16) << 28) >> 28;
    if ( v15 != 1 )
    {
      v28 = v15 - 4;
      if ( v28 )
      {
        if ( v28 != 1 )
          goto LABEL_11;
        v14 = v14[1].Flink;
      }
      else
      {
        v14 = v14[4].Flink;
      }
    }
    if ( v14 )
    {
      v18 = CheckUniqueGpuVaMapping((struct _VIDMM_GLOBAL_ALLOC *)v14->Flink->Flink, (struct VIDMM_MAPPED_VA_RANGE *)a5);
      if ( v18 < 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v17, v16);
        *(_QWORD *)(v58 + 24) = 8739LL;
        WdLogEvent5_WdAssertion(v58);
        goto LABEL_19;
      }
      v19 = v14 + 8;
      v20 = (struct _LIST_ENTRY *)(a5 + 3);
      v21 = v19->Flink;
      if ( v19->Flink->Blink != v19 )
        __fastfail(3u);
      v20->Flink = v21;
      a5[4] = v19;
      v21->Blink = v20;
      v19->Flink = v20;
    }
LABEL_11:
    v22 = *((_QWORD *)v10 + 1);
    v23 = (char **)(a5 + 1);
    if ( *(char **)v22 != v10 )
      __fastfail(3u);
    *v23 = v10;
    a5[2] = (struct _LIST_ENTRY *)v22;
    *(_QWORD *)v22 = v23;
    *((_QWORD *)v10 + 1) = v23;
    ++*((_DWORD *)a2 + 19);
    if ( ((_BYTE)a5[11] & 4) != 0 )
    {
      v59 = (__int64 *)((char *)a2 + 56);
      if ( !*v59 )
      {
        v22 = (__int64)this[15];
        v60 = (__int64 **)(this + 15);
        if ( *(struct _KTHREAD ***)(v22 + 8) != this + 15 )
          __fastfail(3u);
        *v59 = v22;
        v59[1] = (__int64)v60;
        *(_QWORD *)(v22 + 8) = v59;
        *v60 = v59;
      }
    }
    v18 = 0;
    goto LABEL_14;
  }
  while ( 1 )
  {
    Blink = (unsigned __int64)Flink[5].Blink;
    p_Blink = (unsigned __int64 *)&Flink[-1].Blink;
    v31 = (unsigned __int64)a5[13];
    v32 = Flink;
    v61 = Flink;
    v33 = Flink;
    v66 = Flink;
    Flink = Flink->Flink;
    v64 = p_Blink;
    if ( v31 <= Blink )
    {
      v18 = CVirtualAddressAllocator::AddVaRangeToVad(
              (CVirtualAddressAllocator *)this,
              a2,
              (struct VIDMM_MAPPED_VA_RANGE *)a5,
              a4,
              v33);
      if ( v18 >= 0 )
        goto LABEL_14;
      goto LABEL_19;
    }
    a4 = a5[12];
    v34 = p_Blink[13];
    if ( (unsigned __int64)a4 < v34 )
      break;
LABEL_33:
    if ( Flink == (struct _LIST_ENTRY *)v10 )
      goto LABEL_6;
  }
  if ( (unsigned __int64)a4 <= Blink )
  {
    if ( v31 < v34 )
    {
      v18 = CVirtualAddressAllocator::AddVaRangeToVad(
              (CVirtualAddressAllocator *)this,
              a2,
              (struct VIDMM_MAPPED_VA_RANGE *)a5,
              a4,
              v32);
      if ( v18 < 0 )
        goto LABEL_19;
      if ( GetVidMmAllocFromOwner((int)(*((_DWORD *)v64 + 16) << 28) >> 28, v64[7]) )
      {
        v22 = (__int64)a5[13] - v35[12];
        v35[9] += v22;
        v36 = v35[15];
        if ( v36 )
          v35[9] = v35[14] + (v35[9] - v35[14]) % (unsigned __int64)(v36 << 12);
      }
      v35[12] = a5[13];
      goto LABEL_14;
    }
    CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v33, 0, 1u);
    goto LABEL_33;
  }
  if ( v31 >= v34 )
  {
    p_Blink[13] = (unsigned __int64)a4;
    goto LABEL_33;
  }
  P = operator new[](0x88uLL, 0x39346956u, PagedPool);
  if ( !P )
    goto LABEL_58;
  v37 = a5[12];
  v38 = 16 * (v7 & 0x3F);
  v39 = *((_DWORD *)v64 + 16);
  v40 = v64[11];
  v41 = v64[9];
  v42 = v64[14];
  v43 = v64[15];
  v44 = v64[10];
  v45 = v64[12];
  P[7] = v64[7];
  *P = a2;
  *((_DWORD *)P + 16) = 0;
  P[9] = v41;
  P[11] = v40;
  P[12] = v45;
  P[10] = v44;
  P[13] = v37;
  P[14] = v42;
  P[15] = v43;
  *((_DWORD *)P + 32) = 1;
  *((_DWORD *)P + 16) = v38 | (v39 << 28 >> 28) & 0xF | P[8] & 0xFFFFFC00;
  memset(P + 1, 0, 0x30uLL);
  v13 = (struct VIDMM_MAPPED_VA_RANGE *)a5;
  v18 = CVirtualAddressAllocator::AddVaRangeToVad(
          (CVirtualAddressAllocator *)this,
          a2,
          (struct VIDMM_MAPPED_VA_RANGE *)P,
          v46,
          v66);
  if ( v18 < 0 )
  {
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)P);
    goto LABEL_19;
  }
  v18 = CVirtualAddressAllocator::AddVaRangeToVad(
          (CVirtualAddressAllocator *)this,
          a2,
          (struct VIDMM_MAPPED_VA_RANGE *)a5,
          v47,
          v66);
  if ( v18 < 0 )
    goto LABEL_19;
  v48 = v64;
  v49 = v64[15];
  Pa = (char *)a5[13] + v64[9] - v64[12];
  if ( v49 )
    Pa = (char *)(v64[14] + ((unsigned __int64)a5[13] + v64[9] - v64[12] - v64[14]) % (v49 << 12));
  v65 = operator new[](0x88uLL, 0x39346956u, PagedPool);
  if ( !v65 )
  {
LABEL_58:
    v18 = -1073741801;
    goto LABEL_19;
  }
  v50 = v48[10];
  v51 = v48[11];
  v52 = *((_DWORD *)v48 + 16);
  v53 = v48[14];
  v54 = v48[15];
  v55 = v48[13];
  v56 = a5[13];
  v65[7] = v48[7];
  *((_DWORD *)v65 + 16) = 0;
  v65[12] = v56;
  LODWORD(v56) = *((_DWORD *)v65 + 16);
  v65[9] = Pa;
  v65[10] = v50;
  v65[11] = v51;
  *v65 = a2;
  v65[13] = v55;
  v65[14] = v53;
  v65[15] = v54;
  *((_DWORD *)v65 + 32) = 1;
  *((_DWORD *)v65 + 16) = v38 | (unsigned int)v56 & 0xFFFFFC00 | (v52 << 28 >> 28) & 0xF;
  memset(v65 + 1, 0, 0x30uLL);
  v18 = CVirtualAddressAllocator::AddVaRangeToVad(
          (CVirtualAddressAllocator *)this,
          a2,
          (struct VIDMM_MAPPED_VA_RANGE *)v65,
          v57,
          v66);
  if ( v18 < 0 )
  {
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v65);
    goto LABEL_19;
  }
  CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v61, 0, 0);
LABEL_14:
  if ( v6 )
    v6->Flink = (struct _LIST_ENTRY *)*((_QWORD *)v13 + 1);
  v24 = *((_QWORD *)v13 + 7);
  v25 = (int)(*((_DWORD *)v13 + 16) << 28) >> 28;
  if ( v25 != 1 )
  {
    v27 = v25 - 4;
    if ( v27 )
    {
      if ( v27 == 1 )
        v24 = *(_QWORD *)(v24 + 16);
      else
        v24 = 0LL;
    }
    else
    {
      v24 = *(_QWORD *)(v24 + 64);
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
    Template_ppxxxxxqxx(
      v22,
      &UpdateGpuVirtualAddressRangeMapping,
      v24,
      this,
      v24,
      *((_QWORD *)v13 + 9),
      *((_QWORD *)v13 + 12),
      *((_QWORD *)v13 + 13),
      *((_QWORD *)v13 + 11),
      *((_QWORD *)v13 + 10),
      *((_DWORD *)v13 + 16),
      *((_QWORD *)v13 + 14),
      *((_QWORD *)v13 + 15));
LABEL_19:
  if ( v5 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v18;
}
