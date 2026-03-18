/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00554B0
 * Callers:
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C005342C (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0054380 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009E118 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00018AC (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0001958 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0001AB8 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0ppxxxxxqxx @ 0x1C0022F28 (McTemplateK0ppxxxxxqxx.c)
 *     ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0052398 (-CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0053254 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C005335C (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct _LIST_ENTRY **a4,
        struct VIDMM_MAPPED_VA_RANGE *a5)
{
  char v5; // r13
  __int64 v7; // r12
  struct _KTHREAD **v9; // rbp
  struct _LIST_ENTRY *v10; // rdi
  struct _LIST_ENTRY **v11; // rax
  struct _LIST_ENTRY *v12; // r15
  __int64 v13; // r15
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebp
  __int64 *v18; // r15
  _QWORD *v19; // rax
  __int64 v20; // rcx
  char **Blink; // rcx
  char *v22; // rax
  struct _KTHREAD **v23; // rdi
  __int64 v24; // r8
  int v25; // eax
  int v27; // eax
  int v28; // ecx
  struct _LIST_ENTRY *v29; // r9
  struct _LIST_ENTRY **p_Blink; // rax
  unsigned __int64 v31; // rcx
  struct _LIST_ENTRY *v32; // r11
  struct _LIST_ENTRY *v33; // rdx
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r8
  struct _LIST_ENTRY *v36; // r8
  struct _LIST_ENTRY *v37; // r9
  PVOID v38; // r10
  struct _LIST_ENTRY **v39; // r15
  struct VIDMM_MAPPED_VA_RANGE *v40; // rax
  struct _LIST_ENTRY *v41; // r9
  struct _LIST_ENTRY *v42; // r9
  __int64 v43; // rbp
  struct _LIST_ENTRY *v44; // r10
  PVOID v45; // r10
  struct VIDMM_MAPPED_VA_RANGE *v46; // rax
  struct _LIST_ENTRY *v47; // r9
  volatile signed __int32 *v48; // r15
  __int64 v49; // rax
  struct _KTHREAD **v50; // rsi
  struct _KTHREAD *v51; // rax
  struct _KTHREAD ***v52; // rbp
  __int64 v53; // [rsp+50h] [rbp-68h]
  struct _LIST_ENTRY *v54; // [rsp+78h] [rbp-40h]
  struct _LIST_ENTRY **P; // [rsp+C8h] [rbp+10h]
  volatile signed __int32 *Pa; // [rsp+C8h] [rbp+10h]
  struct _LIST_ENTRY *v58; // [rsp+D8h] [rbp+20h]

  v5 = 0;
  v7 = a3;
  v9 = this;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v5 = 1;
  }
  v10 = (struct _LIST_ENTRY *)((char *)a2 + 24 * v7 + 96);
  if ( a4 )
    v11 = a4;
  else
    v11 = (struct _LIST_ENTRY **)((char *)a2 + 24 * v7 + 96);
  v12 = *v11;
  if ( *v11 == v10 )
  {
LABEL_6:
    v13 = *((_QWORD *)a5 + 7);
    v14 = (int)(*((_DWORD *)a5 + 16) << 28) >> 28;
    if ( v14 != 1 )
    {
      v28 = v14 - 4;
      if ( v28 )
      {
        if ( v28 != 1 )
        {
LABEL_11:
          Blink = (char **)v10->Blink;
          v22 = (char *)a5 + 8;
          if ( *Blink != (char *)v10 )
            __fastfail(3u);
          *(_QWORD *)v22 = v10;
          *((_QWORD *)a5 + 2) = Blink;
          *Blink = v22;
          v10->Blink = (struct _LIST_ENTRY *)v22;
          ++*((_DWORD *)a2 + 19);
          if ( (*((_BYTE *)a5 + 88) & 4) != 0 )
          {
            v50 = (struct _KTHREAD **)((char *)a2 + 56);
            if ( !*v50 )
            {
              v51 = v9[15];
              v52 = (struct _KTHREAD ***)(v9 + 15);
              if ( *((struct _KTHREAD ****)v51 + 1) != v52 )
                __fastfail(3u);
              *v50 = v51;
              v50[1] = (struct _KTHREAD *)v52;
              *((_QWORD *)v51 + 1) = v50;
              *v52 = v50;
            }
          }
          v17 = 0;
LABEL_14:
          v23 = this;
LABEL_15:
          if ( a4 )
            *a4 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 1);
          v24 = *((_QWORD *)a5 + 7);
          v25 = (int)(*((_DWORD *)a5 + 16) << 28) >> 28;
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
          if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
          {
            LODWORD(v53) = *((_DWORD *)a5 + 16);
            McTemplateK0ppxxxxxqxx(
              (__int64)Blink,
              &UpdateGpuVirtualAddressRangeMapping,
              v24,
              v23,
              v24,
              *((_QWORD *)a5 + 9),
              *((_QWORD *)a5 + 12),
              *((_QWORD *)a5 + 13),
              *((_QWORD *)a5 + 11),
              *((_QWORD *)a5 + 10),
              v53,
              *((_QWORD *)a5 + 14),
              *((_QWORD *)a5 + 15));
          }
          goto LABEL_20;
        }
        v13 = *(_QWORD *)(v13 + 16);
      }
      else
      {
        v13 = *(_QWORD *)(v13 + 64);
      }
    }
    if ( v13 )
    {
      v17 = CheckUniqueGpuVaMapping(**(struct _VIDMM_GLOBAL_ALLOC ***)v13, a5);
      if ( v17 < 0 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v49 + 24) = 8757LL;
        WdLogEvent5_WdAssertion(v49);
LABEL_40:
        v23 = this;
        goto LABEL_20;
      }
      v18 = (__int64 *)(v13 + 128);
      v19 = (_QWORD *)((char *)a5 + 24);
      v20 = *v18;
      if ( *(__int64 **)(*v18 + 8) != v18 )
        __fastfail(3u);
      v9 = this;
      *v19 = v20;
      *((_QWORD *)a5 + 4) = v18;
      *(_QWORD *)(v20 + 8) = v19;
      *v18 = (__int64)v19;
    }
    goto LABEL_11;
  }
  while ( 1 )
  {
    v29 = v12[5].Blink;
    p_Blink = &v12[-1].Blink;
    v31 = *((_QWORD *)a5 + 13);
    v32 = v12;
    v54 = v12;
    v33 = v12;
    v58 = v12;
    v12 = v12->Flink;
    P = p_Blink;
    if ( v31 <= (unsigned __int64)v29 )
    {
      v17 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)v9, a2, a5, v29, v33);
      if ( v17 >= 0 )
        goto LABEL_14;
      goto LABEL_40;
    }
    v34 = *((_QWORD *)a5 + 12);
    v35 = (unsigned __int64)p_Blink[13];
    if ( v34 < v35 )
      break;
LABEL_34:
    if ( v12 == v10 )
      goto LABEL_6;
  }
  if ( v34 <= (unsigned __int64)v29 )
  {
    if ( v31 < v35 )
    {
      v17 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)v9, a2, a5, v29, v32);
      if ( v17 < 0 )
        goto LABEL_40;
      if ( GetVidMmAllocFromOwner((int)(*((_DWORD *)P + 16) << 28) >> 28, (__int64)P[7]) )
      {
        v36 = (struct _LIST_ENTRY *)(*((_QWORD *)a5 + 13) + (char *)P[9] - (char *)P[12]);
        v37 = P[15];
        P[9] = v36;
        if ( v37 )
        {
          Blink = (char **)P[14];
          P[9] = (struct _LIST_ENTRY *)((char *)Blink
                                      + (unsigned __int64)((char *)v36 - (char *)Blink) % ((_QWORD)v37 << 12));
        }
      }
      P[12] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 13);
      goto LABEL_14;
    }
    CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)v9, v33, 0, 1);
    goto LABEL_34;
  }
  if ( v31 >= v35 )
  {
    p_Blink[13] = (struct _LIST_ENTRY *)v34;
    goto LABEL_34;
  }
  v38 = operator new[](0x88uLL, 0x39346956u, PagedPool);
  if ( !v38
    || (v39 = P,
        v40 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                (__int64)v38,
                                                (__int64)a2,
                                                (__int64)P[12],
                                                *((_QWORD *)a5 + 12),
                                                v7,
                                                (__int64)P[7],
                                                (__int64)P[9],
                                                (int)(*((_DWORD *)P + 16) << 28) >> 28,
                                                (__int64)P[11],
                                                (__int64)P[10],
                                                (__int64)P[15],
                                                (__int64)P[14]),
        (Pa = (volatile signed __int32 *)v40) == 0LL) )
  {
    v17 = -1073741801;
    goto LABEL_40;
  }
  v17 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)v9, a2, v40, v41, v58);
  if ( v17 < 0 )
  {
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(Pa);
    goto LABEL_40;
  }
  v23 = this;
  v17 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, v42, v58);
  if ( v17 >= 0 )
  {
    v43 = *((_QWORD *)a5 + 13) + (char *)v39[9] - (char *)v39[12];
    v44 = v39[15];
    if ( v44 )
      v43 = (__int64)v39[14] + (unsigned __int64)(v43 - (_QWORD)v39[14]) % ((_QWORD)v44 << 12);
    v45 = operator new[](0x88uLL, 0x39346956u, PagedPool);
    if ( !v45
      || (v46 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                  (__int64)v45,
                                                  (__int64)a2,
                                                  *((_QWORD *)a5 + 13),
                                                  (__int64)v39[13],
                                                  v7,
                                                  (__int64)v39[7],
                                                  v43,
                                                  (int)(*((_DWORD *)v39 + 16) << 28) >> 28,
                                                  (__int64)v39[11],
                                                  (__int64)v39[10],
                                                  (__int64)v39[15],
                                                  (__int64)v39[14]),
          (v48 = (volatile signed __int32 *)v46) == 0LL) )
    {
      v17 = -1073741801;
      goto LABEL_20;
    }
    v17 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v46, v47, v58);
    if ( v17 < 0 )
    {
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v48);
      goto LABEL_20;
    }
    CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v54, 0, 0);
    goto LABEL_15;
  }
LABEL_20:
  if ( v5 )
  {
    v23[8] = 0LL;
    ExReleasePushLockExclusiveEx(v23 + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v17;
}
