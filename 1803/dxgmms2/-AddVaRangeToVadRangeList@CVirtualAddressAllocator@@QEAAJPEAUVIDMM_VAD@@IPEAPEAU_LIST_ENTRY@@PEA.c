/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005BAA8
 * Callers:
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C0059B44 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A980 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A4774 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0004DC8 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0004E74 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0004F20 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx @ 0x1C00258D4 (McTemplateK0ppxxxxxqxx.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x1C00569FC (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 *     ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0058D3C (-CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C005996C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0059A74 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 *     ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x1C00AD3F8 (-VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct _LIST_ENTRY **a4,
        struct VIDMM_MAPPED_VA_RANGE *a5)
{
  __int64 v7; // rdi
  struct _LIST_ENTRY **v9; // r15
  struct _LIST_ENTRY **v10; // rax
  struct _LIST_ENTRY *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edi
  __int64 *v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  char **v19; // rcx
  char *v20; // rax
  bool v21; // sf
  unsigned __int64 v23; // rcx
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _LIST_ENTRY *Blink; // r9
  struct _LIST_ENTRY *v26; // r12
  struct _LIST_ENTRY *v27; // r13
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rax
  struct _LIST_ENTRY *v30; // r9
  PVOID v31; // r10
  struct VIDMM_MAPPED_VA_RANGE *v32; // r15
  struct _LIST_ENTRY *v33; // r9
  __int64 v34; // r9
  __int64 v35; // rdi
  struct _LIST_ENTRY *v36; // r9
  PVOID v37; // r10
  __int64 v38; // rax
  struct _KTHREAD **v39; // rax
  struct _KTHREAD ***v40; // rcx
  struct _KTHREAD *v41; // rdx
  __int64 VidMmAllocFromOwner; // rax
  __int64 v43; // r8
  __int64 v44; // [rsp+50h] [rbp-68h]
  char v45; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v46; // [rsp+C8h] [rbp+10h]
  char v47; // [rsp+D0h] [rbp+18h]

  v47 = a3;
  v7 = a3;
  if ( this[8] == KeGetCurrentThread() )
  {
    v45 = 0;
  }
  else
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v45 = 1;
  }
  v9 = (struct _LIST_ENTRY **)((char *)a2 + 24 * v7 + 96);
  v10 = v9;
  if ( a4 )
    v10 = a4;
  v11 = *v10;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        if ( v11 == (struct _LIST_ENTRY *)v9 )
        {
          v12 = *((_QWORD *)a5 + 7);
          if ( (int)(*((_DWORD *)a5 + 16) << 28) >> 28 != 1 )
          {
            if ( (int)(*((_DWORD *)a5 + 16) << 28) >> 28 == 4 )
            {
              v12 = *(_QWORD *)(v12 + 64);
            }
            else
            {
              if ( (int)(*((_DWORD *)a5 + 16) << 28) >> 28 != 5 )
                goto LABEL_12;
              v12 = *(_QWORD *)(v12 + 16);
            }
          }
          if ( v12 )
          {
            v15 = CheckUniqueGpuVaMapping(**(struct _VIDMM_GLOBAL_ALLOC ***)v12, a5);
            if ( v15 < 0 )
            {
              v38 = WdLogNewEntry5_WdAssertion(v14, v13);
              *(_QWORD *)(v38 + 24) = 8899LL;
              WdLogEvent5_WdAssertion(v38);
LABEL_15:
              v21 = v15 < 0;
              goto LABEL_16;
            }
            v16 = (__int64 *)(v12 + 128);
            v17 = (_QWORD *)((char *)a5 + 24);
            v18 = *v16;
            if ( *(__int64 **)(*v16 + 8) != v16 )
              __fastfail(3u);
            *v17 = v18;
            *((_QWORD *)a5 + 4) = v16;
            *(_QWORD *)(v18 + 8) = v17;
            *v16 = (__int64)v17;
          }
LABEL_12:
          v19 = (char **)v9[1];
          v20 = (char *)a5 + 8;
          if ( *v19 != (char *)v9 )
            __fastfail(3u);
          *(_QWORD *)v20 = v9;
          *((_QWORD *)a5 + 2) = v19;
          *v19 = v20;
          v9[1] = (struct _LIST_ENTRY *)v20;
          ++*((_DWORD *)a2 + 19);
          if ( (*((_BYTE *)a5 + 88) & 4) != 0 )
          {
            v39 = (struct _KTHREAD **)((char *)a2 + 56);
            if ( !*((_QWORD *)a2 + 7) )
            {
              v40 = (struct _KTHREAD ***)(this + 15);
              v41 = this[15];
              if ( *((struct _KTHREAD ***)v41 + 1) != this + 15 )
                __fastfail(3u);
              *v39 = v41;
              *((_QWORD *)a2 + 8) = v40;
              *((_QWORD *)v41 + 1) = v39;
              *v40 = v39;
            }
          }
          v15 = 0;
          goto LABEL_15;
        }
        v23 = *((_QWORD *)a5 + 13);
        p_Blink = &v11[-1].Blink;
        Blink = v11[5].Blink;
        v26 = v11;
        v27 = v11;
        v11 = v11->Flink;
        if ( v23 <= (unsigned __int64)Blink )
        {
          v15 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, Blink, v26);
          v21 = v15 < 0;
LABEL_16:
          if ( v21 )
            goto LABEL_21;
LABEL_17:
          if ( a4 )
            *a4 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 1);
          if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
          {
            VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)a5 + 16) << 28) >> 28, *((_QWORD *)a5 + 7));
            LODWORD(v44) = v43;
            McTemplateK0ppxxxxxqxx(
              *((_QWORD *)a5 + 9),
              &UpdateGpuVirtualAddressRangeMapping,
              v43,
              this,
              VidMmAllocFromOwner,
              *((_QWORD *)a5 + 9),
              *((_QWORD *)a5 + 12),
              *((_QWORD *)a5 + 13),
              *((_QWORD *)a5 + 11),
              *((_QWORD *)a5 + 10),
              v44,
              *((_QWORD *)a5 + 14),
              *((_QWORD *)a5 + 15));
          }
          goto LABEL_21;
        }
        v28 = *((_QWORD *)a5 + 12);
        v29 = (unsigned __int64)p_Blink[13];
      }
      while ( v28 >= v29 );
      if ( v28 > (unsigned __int64)Blink )
        break;
      if ( v23 < v29 )
      {
        v15 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, Blink, v26);
        if ( v15 < 0 )
          goto LABEL_21;
        VidMmiLogEndVaRangeMapping(
          (struct CVirtualAddressAllocator *)this,
          (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
          (__int64)p_Blink[9],
          (__int64)p_Blink[12],
          *((_QWORD *)a5 + 13));
        if ( GetVidMmAllocFromOwner((int)(*((_DWORD *)p_Blink + 16) << 28) >> 28, (__int64)p_Blink[7]) )
          p_Blink[9] = (struct _LIST_ENTRY *)VidMmiCalculateNewOwnerOffset(
                                               (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
                                               *((_QWORD *)a5 + 13) - (_QWORD)p_Blink[12]);
        p_Blink[12] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 13);
        goto LABEL_17;
      }
      VidMmiLogEndVaRangeMapping(
        (struct CVirtualAddressAllocator *)this,
        (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
        (__int64)p_Blink[9],
        (__int64)Blink,
        (unsigned __int64)p_Blink[13]);
      CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v27, 0, 1);
    }
    if ( v23 < v29 )
      break;
    VidMmiLogEndVaRangeMapping(
      (struct CVirtualAddressAllocator *)this,
      (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
      (__int64)p_Blink[9],
      *((_QWORD *)a5 + 12),
      (unsigned __int64)p_Blink[13]);
    p_Blink[13] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 12);
  }
  v31 = operator new[](0x88uLL, 0x39346956u, PagedPool);
  if ( v31 )
    v32 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                            (__int64)v31,
                                            (__int64)a2,
                                            (__int64)p_Blink[12],
                                            *((_QWORD *)a5 + 12),
                                            v47,
                                            (__int64)p_Blink[7],
                                            (__int64)p_Blink[9],
                                            (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
                                            (__int64)p_Blink[11],
                                            (__int64)p_Blink[10],
                                            (__int64)p_Blink[15],
                                            (__int64)p_Blink[14]);
  else
    v32 = 0LL;
  if ( !v32 )
    goto LABEL_50;
  v15 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v32, v30, v27);
  if ( v15 < 0 )
    goto LABEL_51;
  v15 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, v33, v27);
  if ( v15 < 0 )
    goto LABEL_21;
  v46 = VidMmiCalculateNewOwnerOffset(
          (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
          *((_QWORD *)a5 + 12) - (_QWORD)p_Blink[12]);
  v35 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)p_Blink, *((_QWORD *)a5 + 13) - v34);
  v37 = operator new[](0x88uLL, 0x39346956u, PagedPool);
  v32 = v37
      ? (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                          (__int64)v37,
                                          (__int64)a2,
                                          *((_QWORD *)a5 + 13),
                                          (__int64)p_Blink[13],
                                          v47,
                                          (__int64)p_Blink[7],
                                          v35,
                                          (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
                                          (__int64)p_Blink[11],
                                          (__int64)p_Blink[10],
                                          (__int64)p_Blink[15],
                                          (__int64)p_Blink[14])
      : 0LL;
  if ( !v32 )
  {
LABEL_50:
    v15 = -1073741801;
    goto LABEL_21;
  }
  v15 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v32, v36, v27);
  if ( v15 >= 0 )
  {
    VidMmiLogEndVaRangeMapping(
      (struct CVirtualAddressAllocator *)this,
      (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
      v46,
      *((_QWORD *)a5 + 12),
      *((_QWORD *)a5 + 13));
    CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v26, 0, 0);
    goto LABEL_17;
  }
LABEL_51:
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v32);
LABEL_21:
  if ( v45 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v15;
}
