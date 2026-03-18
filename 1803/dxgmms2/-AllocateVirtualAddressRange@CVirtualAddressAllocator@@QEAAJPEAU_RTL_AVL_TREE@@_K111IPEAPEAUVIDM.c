/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0059EA0
 * Callers:
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C005A7D4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A980 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C005B914 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pqxx @ 0x1C00259D0 (McTemplateK0pqxx.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C00598B8 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005A24C (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005A290 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C005A338 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C006D298 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AllocateVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct _RTL_AVL_TREE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct VIDMM_VAD **a8,
        unsigned __int8 a9)
{
  unsigned __int8 v9; // r15
  unsigned __int64 v11; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r13d
  unsigned __int64 v16; // rbp
  unsigned int v17; // esi
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int8 v20; // r12
  struct VIDMM_VAD *NodeInFreeList; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct VIDMM_VAD *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rdx
  unsigned __int64 v27; // rbp
  struct VIDMM_VAD *Vad; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  struct VIDMM_VAD **v31; // rsi
  __int64 v32; // rcx
  __int64 **v33; // rdx
  __int64 *v34; // rax
  __int64 v36; // rcx
  struct VIDMM_VAD *v37; // r14
  unsigned __int64 v38; // rdx
  struct VIDMM_VAD *v39; // r15
  __int64 v40; // rcx
  __int64 *v41; // rbx
  __int64 v42; // rax
  _QWORD *v43; // r14
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD v54[15]; // [rsp+40h] [rbp-78h] BYREF

  v9 = a9;
  v11 = a3;
  if ( a9 )
  {
    v13 = *((_QWORD *)this + 11);
    if ( !v13 || (*(_DWORD *)(v13 + 88) & 2) != 0 && !*(_BYTE *)(*((_QWORD *)this + 10) + 40673LL) )
      v9 = 0;
  }
  v14 = *((_QWORD *)this + 10);
  if ( v14 )
    v15 = *(_DWORD *)(v14 + 6992);
  else
    v15 = 1;
  v16 = a3 + a4;
  if ( a3 + a4 <= a4 )
  {
    v46 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v46 + 24) = 827LL;
    WdLogEvent5_WdAssertion(v46);
    return 3221225485LL;
  }
  if ( !a7 || (v17 = a7 - 1, ((a7 - 1) & a7) != 0) )
  {
    v53 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v53 + 24) = 833LL;
    WdLogEvent5_WdAssertion(v53);
    return 3221225485LL;
  }
  else
  {
    memset(v54, 0, 0x48uLL);
    v54[5] = v17;
    v54[6] = ~(unsigned __int64)v17;
    if ( ((a7 - 1) & (unsigned int)a4) != 0 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v17, v18);
      *(_QWORD *)(v47 + 24) = 843LL;
      WdLogEvent5_WdAssertion(v47);
      return 3221225485LL;
    }
    v54[0] = a4;
    v19 = a6;
    v54[1] = v16;
    v54[2] = a5;
    if ( !a6 )
      v19 = *((_QWORD *)this + 2);
    v20 = 0;
    v54[3] = v19;
    v54[4] = v11;
    if ( v9 && dword_1C0047408 && v16 != *((_QWORD *)this + 2) )
    {
      v48 = v11 + 4096;
      if ( v11 + 4096 < v11 || v16 + 4096 < v16 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v48, v18);
        *(_QWORD *)(v49 + 24) = 865LL;
        WdLogEvent5_WdAssertion(v49);
      }
      else
      {
        v11 += 4096LL;
        v54[4] = v48;
        v54[1] = v16 + 4096;
        v20 = 1;
      }
    }
    if ( a5 < v19 && v19 - a5 >= v11 )
    {
      NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(this, v54);
      v24 = NodeInFreeList;
      if ( !NodeInFreeList )
      {
        v50 = WdLogNewEntry5_WdWarning(v23, v22);
        WdLogEvent5_WdWarning(v50);
        return 3221225473LL;
      }
      v25 = v54[7];
      v26 = *((_QWORD *)NodeInFreeList + 3);
      v27 = v54[7] + v54[4];
      if ( v26 == v54[7] )
      {
        if ( *((_QWORD *)NodeInFreeList + 4) - v26 == v54[4] )
        {
          CVirtualAddressAllocator::RemoveVadFromFreeList(this, NodeInFreeList);
          v31 = a8;
          *a8 = v24;
LABEL_24:
          *((_DWORD *)*v31 + 18) = *((_DWORD *)*v31 + 18) & 0xFFFFEFFF | (v20 << 12);
          return 0LL;
        }
        Vad = CVirtualAddressAllocator::AllocateVad(v54[7], v54[7] + v54[4], v15);
        if ( Vad )
        {
          v31 = a8;
          v32 = (__int64)v24 + 40;
          v33 = (__int64 **)*((_QWORD *)v24 + 6);
          *a8 = Vad;
          v34 = (__int64 *)((char *)Vad + 40);
          if ( *v33 != (__int64 *)((char *)v24 + 40) )
            __fastfail(3u);
          *v34 = v32;
          v34[1] = (__int64)v33;
          *v33 = v34;
          *((_QWORD *)v24 + 6) = v34;
          if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
            McTemplateK0pqxx(
              v32,
              &DestroyGpuVirtualAddressRange,
              v30,
              this,
              *((_DWORD *)v24 + 18),
              *((_QWORD *)v24 + 3),
              *((_QWORD *)v24 + 4));
          RtlAvlRemoveNode((char *)this + 40, v24);
          *((_DWORD *)v24 + 18) &= 0xFFFFFFF0;
          *((_QWORD *)v24 + 3) = v27;
          CVirtualAddressAllocator::InsertVadToFreeList(this, v24);
          goto LABEL_24;
        }
        _InterlockedIncrement(&dword_1C0047688);
        v51 = WdLogNewEntry5_WdLowResource(v29);
        *(_QWORD *)(v51 + 24) = 925LL;
      }
      else
      {
        v37 = CVirtualAddressAllocator::AllocateVad(v54[7], v54[7] + v54[4], v15);
        if ( v37 )
        {
          v38 = *((_QWORD *)v24 + 4);
          v39 = 0LL;
          if ( v27 >= v38 || (v39 = CVirtualAddressAllocator::AllocateVad(v27, v38, v15)) != 0LL )
          {
            CVirtualAddressAllocator::RemoveVadFromFreeList(this, v24);
            *((_QWORD *)v24 + 4) = v25;
            CVirtualAddressAllocator::InsertVadToFreeList(this, v24);
            v31 = a8;
            v41 = (__int64 *)((char *)v24 + 40);
            v42 = *v41;
            *a8 = v37;
            v43 = (_QWORD *)((char *)v37 + 40);
            if ( *(__int64 **)(v42 + 8) != v41 )
              __fastfail(3u);
            *v43 = v42;
            v43[1] = v41;
            *(_QWORD *)(v42 + 8) = v43;
            *v41 = (__int64)v43;
            if ( v39 )
            {
              CVirtualAddressAllocator::InsertVadToFreeList(this, v39);
              v44 = *v43;
              v45 = (_QWORD *)((char *)v39 + 40);
              if ( *(_QWORD **)(*v43 + 8LL) != v43 )
                __fastfail(3u);
              *v45 = v44;
              *((_QWORD *)v39 + 6) = v43;
              *(_QWORD *)(v44 + 8) = v45;
              *v43 = v45;
            }
            goto LABEL_24;
          }
          _InterlockedIncrement(&dword_1C0047688);
          v52 = WdLogNewEntry5_WdLowResource(v40);
          *(_QWORD *)(v52 + 24) = 971LL;
          WdLogEvent5_WdLowResource(v52);
          CVirtualAddressAllocator::FreeVad(v37);
          return 3221225495LL;
        }
        _InterlockedIncrement(&dword_1C0047688);
        v51 = WdLogNewEntry5_WdLowResource(v36);
        *(_QWORD *)(v51 + 24) = 958LL;
      }
      WdLogEvent5_WdLowResource(v51);
      return 3221225495LL;
    }
    return 3221225485LL;
  }
}
