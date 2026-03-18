/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0051C60
 * Callers:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C00512C8 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00526A4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0052860 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0002624 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pqxx @ 0x1C0021118 (Template_pqxx.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C00505F8 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0050690 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005210C (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0052150 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C00521F4 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0053814 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
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
  unsigned __int64 v10; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // r13d
  unsigned __int64 v15; // r12
  unsigned int v16; // edi
  __int64 v17; // rdx
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rbx
  struct VIDMM_VAD *v20; // rdi
  int v21; // esi
  struct VIDMM_VAD *NodeInFreeList; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct VIDMM_VAD *v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rdx
  unsigned __int64 v29; // rbp
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rdx
  int v34; // ecx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  struct VIDMM_VAD **v37; // r12
  struct VIDMM_VAD **v38; // rcx
  struct VIDMM_VAD *v39; // rdx
  __int64 v40; // r8
  struct _RTL_AVL_TREE *v41; // rax
  struct _RTL_BALANCED_NODE *v42; // rdi
  struct _RTL_BALANCED_NODE *v43; // rax
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v47; // rcx
  struct VIDMM_VAD *v48; // r12
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  struct _RTL_AVL_TREE *v51; // r15
  __int64 *v52; // rbx
  __int64 v53; // rax
  _QWORD *v54; // r15
  __int64 v55; // rax
  _QWORD *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // [rsp+20h] [rbp-98h]
  _QWORD v66[10]; // [rsp+40h] [rbp-78h] BYREF
  struct _RTL_AVL_TREE *Vad; // [rsp+C8h] [rbp+10h] BYREF

  Vad = a2;
  v10 = a3;
  if ( a9 )
  {
    v12 = *((_QWORD *)this + 11);
    if ( !v12 || (*(_DWORD *)(v12 + 48) & 2) != 0 && !*(_BYTE *)(*((_QWORD *)this + 10) + 40097LL) )
      a9 = 0;
  }
  v13 = *((_QWORD *)this + 10);
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 6416);
  else
    v14 = 1;
  v15 = a3 + a4;
  if ( a3 + a4 <= a4 )
  {
    v57 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v57 + 24) = 827LL;
    WdLogEvent5_WdAssertion(v57);
    return 3221225485LL;
  }
  if ( !a7 || (v16 = a7 - 1, ((a7 - 1) & a7) != 0) )
  {
    v64 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v64 + 24) = 833LL;
    WdLogEvent5_WdAssertion(v64);
    return 3221225485LL;
  }
  else
  {
    memset(v66, 0, 0x48uLL);
    v66[5] = v16;
    v66[6] = ~(unsigned __int64)v16;
    if ( ((a7 - 1) & (unsigned int)a4) != 0 )
    {
      v58 = WdLogNewEntry5_WdAssertion(v16, v17);
      *(_QWORD *)(v58 + 24) = 843LL;
      WdLogEvent5_WdAssertion(v58);
      return 3221225485LL;
    }
    v18 = a5;
    v66[0] = a4;
    v19 = a6;
    v66[1] = v15;
    v66[2] = a5;
    if ( !a6 )
      v19 = *((_QWORD *)this + 2);
    v20 = 0LL;
    v66[3] = v19;
    v21 = 0;
    v66[4] = v10;
    if ( dword_1C003C3D0 && a9 && v15 != *((_QWORD *)this + 2) )
    {
      v59 = v10 + 4096;
      if ( v10 + 4096 < v10 || v15 + 4096 < v15 )
      {
        v60 = WdLogNewEntry5_WdAssertion(v59, v17);
        *(_QWORD *)(v60 + 24) = 865LL;
        WdLogEvent5_WdAssertion(v60);
      }
      else
      {
        v10 += 4096LL;
        v66[4] = v59;
        v66[1] = v15 + 4096;
        v21 = 1;
      }
    }
    if ( v18 < v19 && v19 - v18 >= v10 )
    {
      NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(this, v66);
      v26 = NodeInFreeList;
      if ( !NodeInFreeList )
      {
        v61 = WdLogNewEntry5_WdWarning(v24, v23);
        WdLogEvent5_WdWarning(v61);
        return 3221225473LL;
      }
      v27 = v66[7];
      v28 = *((_QWORD *)NodeInFreeList + 3);
      v29 = v66[7] + v66[4];
      if ( v28 == v66[7] )
      {
        if ( *((_QWORD *)NodeInFreeList + 4) - v28 != v66[4] )
        {
          v30 = operator new(24 * (v14 + 4), 0x39346956u, v25, PagedPool);
          v33 = v30;
          if ( v30 )
          {
            v30[3] = v27;
            v34 = (*((_DWORD *)v30 + 18) ^ (16 * v14)) & 0x7F0;
            v30[4] = v29;
            *((_DWORD *)v30 + 18) ^= v34;
            if ( v14 )
            {
              v35 = v30 + 12;
              v36 = v14;
              do
              {
                v35[1] = v35;
                *v35 = v35;
                v35[2] = 0LL;
                v35 += 3;
                --v36;
              }
              while ( v36 );
            }
            v37 = a8;
            v33[11] = v33 + 10;
            v33[10] = v33 + 10;
            v38 = (struct VIDMM_VAD **)*((_QWORD *)v26 + 6);
            *v37 = (struct VIDMM_VAD *)v33;
            v39 = (struct VIDMM_VAD *)(v33 + 5);
            if ( *v38 != (struct VIDMM_VAD *)((char *)v26 + 40) )
              __fastfail(3u);
            *(_QWORD *)v39 = (char *)v26 + 40;
            *((_QWORD *)v39 + 1) = v38;
            *v38 = v39;
            *((_QWORD *)v26 + 6) = v39;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
              Template_pqxx(
                (__int64)v38,
                &DestroyGpuVirtualAddressRange,
                v32,
                this,
                *((_DWORD *)v26 + 18),
                *((_QWORD *)v26 + 3),
                *((_QWORD *)v26 + 4));
            RtlAvlRemoveNode((char *)this + 40, v26);
            *((_DWORD *)v26 + 18) &= 0xFFFFFFF0;
            LOBYTE(v40) = 0;
            v41 = (struct _RTL_AVL_TREE *)(*((_QWORD *)v26 + 4) - v29);
            *((_QWORD *)v26 + 3) = v29;
            v42 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
            Vad = v41;
            if ( v42 )
            {
              while ( 1 )
              {
                if ( (int)CompareVadSizeAvl(&Vad, v42) < 0 )
                {
                  v43 = v42->Children[0];
                  if ( !v42->Children[0] )
                  {
                    LOBYTE(v40) = 0;
                    break;
                  }
                }
                else
                {
                  v43 = v42->Children[1];
                  if ( !v43 )
                  {
                    LOBYTE(v40) = 1;
                    break;
                  }
                }
                v42 = v43;
              }
            }
            RtlAvlInsertNodeEx((char *)this + 40, v42, v40, v26);
            v45 = *((_DWORD *)v26 + 18) & 0xFFFFE7F0 | 1;
            *((_DWORD *)v26 + 18) = v45;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
            {
              LODWORD(v65) = v45;
              Template_pqxx(
                v45,
                &CreateGpuVirtualAddressRange,
                v44,
                this,
                v65,
                *((_QWORD *)v26 + 3),
                *((_QWORD *)v26 + 4));
            }
            goto LABEL_32;
          }
          _InterlockedIncrement(&dword_1C003C678);
          v62 = WdLogNewEntry5_WdLowResource(v31);
          *(_QWORD *)(v62 + 24) = 925LL;
          goto LABEL_58;
        }
        CVirtualAddressAllocator::RemoveVadFromFreeList(this, NodeInFreeList);
        v37 = a8;
        *a8 = v26;
      }
      else
      {
        Vad = CVirtualAddressAllocator::AllocateVad(v66[7], v66[7] + v66[4], v14);
        v48 = Vad;
        if ( !Vad )
        {
          _InterlockedIncrement(&dword_1C003C678);
          v62 = WdLogNewEntry5_WdLowResource(v47);
          *(_QWORD *)(v62 + 24) = 958LL;
LABEL_58:
          WdLogEvent5_WdLowResource(v62);
          return 3221225495LL;
        }
        v49 = *((_QWORD *)v26 + 4);
        if ( v29 < v49 )
        {
          v20 = CVirtualAddressAllocator::AllocateVad(v29, v49, v14);
          if ( !v20 )
          {
            _InterlockedIncrement(&dword_1C003C678);
            v63 = WdLogNewEntry5_WdLowResource(v50);
            *(_QWORD *)(v63 + 24) = 971LL;
            WdLogEvent5_WdLowResource(v63);
            CVirtualAddressAllocator::FreeVad(v48);
            return 3221225495LL;
          }
        }
        CVirtualAddressAllocator::RemoveVadFromFreeList(this, v26);
        *((_QWORD *)v26 + 4) = v27;
        CVirtualAddressAllocator::InsertVadToFreeList(this, v26);
        v51 = Vad;
        v52 = (__int64 *)((char *)v26 + 40);
        v37 = a8;
        v53 = *v52;
        *a8 = Vad;
        v54 = (_QWORD *)((char *)v51 + 40);
        if ( *(__int64 **)(v53 + 8) != v52 )
          __fastfail(3u);
        *v54 = v53;
        v54[1] = v52;
        *(_QWORD *)(v53 + 8) = v54;
        *v52 = (__int64)v54;
        if ( v20 )
        {
          CVirtualAddressAllocator::InsertVadToFreeList(this, v20);
          v55 = *v54;
          v56 = (_QWORD *)((char *)v20 + 40);
          if ( *(_QWORD **)(*v54 + 8LL) != v54 )
            __fastfail(3u);
          *v56 = v55;
          v56[1] = v54;
          *(_QWORD *)(v55 + 8) = v56;
          *v54 = v56;
        }
      }
LABEL_32:
      *((_DWORD *)*v37 + 18) = *((_DWORD *)*v37 + 18) & 0xFFFFEFFF | (v21 << 12);
      return 0LL;
    }
    return 3221225485LL;
  }
}
