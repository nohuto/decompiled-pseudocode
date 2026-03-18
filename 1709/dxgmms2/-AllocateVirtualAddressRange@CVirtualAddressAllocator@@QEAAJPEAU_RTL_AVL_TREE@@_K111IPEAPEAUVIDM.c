/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00537D0
 * Callers:
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00541C4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0054380 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0055314 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AE0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pqxx @ 0x1C0023024 (McTemplateK0pqxx.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C0050900 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0050998 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0053C44 (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0053C88 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C0053D2C (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0055770 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
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
  unsigned __int8 v9; // bp
  unsigned __int64 v11; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r14d
  unsigned __int64 v16; // r13
  unsigned int v17; // edi
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  unsigned __int8 v21; // r12
  struct VIDMM_VAD *NodeInFreeList; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  struct VIDMM_VAD *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned __int64 v28; // r15
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // ecx
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  struct VIDMM_VAD **v36; // r14
  __int64 v37; // rcx
  __int64 **v38; // rdx
  __int64 *v39; // rax
  __int64 v40; // r8
  struct _RTL_AVL_TREE *v41; // rax
  struct _RTL_BALANCED_NODE *v42; // rdi
  struct _RTL_BALANCED_NODE *v43; // rax
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct VIDMM_VAD *Vad; // r13
  unsigned __int64 v50; // rdx
  struct VIDMM_VAD *v51; // rbp
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  char *v55; // rdi
  char **v56; // rbx
  __int64 v57; // rax
  _QWORD *v58; // rbp
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // [rsp+20h] [rbp-98h]
  _QWORD v68[15]; // [rsp+40h] [rbp-78h] BYREF
  struct _RTL_AVL_TREE *v69; // [rsp+C8h] [rbp+10h] BYREF

  v69 = a2;
  v9 = a9;
  v11 = a3;
  if ( a9 )
  {
    v13 = *((_QWORD *)this + 11);
    if ( !v13 || (*(_DWORD *)(v13 + 48) & 2) != 0 && !*(_BYTE *)(*((_QWORD *)this + 10) + 40097LL) )
      v9 = 0;
  }
  v14 = *((_QWORD *)this + 10);
  if ( v14 )
    v15 = *(_DWORD *)(v14 + 6416);
  else
    v15 = 1;
  v16 = a3 + a4;
  if ( a3 + a4 <= a4 )
  {
    v59 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v59 + 24) = 827LL;
    WdLogEvent5_WdAssertion(v59);
    return 3221225485LL;
  }
  if ( !a7 || (v17 = a7 - 1, ((a7 - 1) & a7) != 0) )
  {
    v66 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v66 + 24) = 833LL;
    WdLogEvent5_WdAssertion(v66);
    return 3221225485LL;
  }
  else
  {
    memset(v68, 0, 0x48uLL);
    v68[5] = v17;
    v68[6] = ~(unsigned __int64)v17;
    if ( ((a7 - 1) & (unsigned int)a4) != 0 )
    {
      v60 = WdLogNewEntry5_WdAssertion(v17, v18);
      *(_QWORD *)(v60 + 24) = 843LL;
      WdLogEvent5_WdAssertion(v60);
      return 3221225485LL;
    }
    v19 = a5;
    v68[0] = a4;
    v20 = a6;
    v68[1] = v16;
    v68[2] = a5;
    if ( !a6 )
      v20 = *((_QWORD *)this + 2);
    v21 = 0;
    v68[3] = v20;
    v68[4] = v11;
    if ( v9 && dword_1C0040408 && v16 != *((_QWORD *)this + 2) )
    {
      v61 = v11 + 4096;
      if ( v11 + 4096 < v11 || v16 + 4096 < v16 )
      {
        v62 = WdLogNewEntry5_WdAssertion(v61, v18);
        *(_QWORD *)(v62 + 24) = 865LL;
        WdLogEvent5_WdAssertion(v62);
      }
      else
      {
        v11 += 4096LL;
        v68[4] = v61;
        v68[1] = v16 + 4096;
        v21 = 1;
      }
    }
    if ( v19 < v20 && v20 - v19 >= v11 )
    {
      NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(this, v68);
      v25 = NodeInFreeList;
      if ( !NodeInFreeList )
      {
        v63 = WdLogNewEntry5_WdWarning(v23);
        WdLogEvent5_WdWarning(v63);
        return 3221225473LL;
      }
      v26 = v68[7];
      v27 = *((_QWORD *)NodeInFreeList + 3);
      v28 = v68[7] + v68[4];
      if ( v27 == v68[7] )
      {
        if ( *((_QWORD *)NodeInFreeList + 4) - v27 != v68[4] )
        {
          v29 = operator new(24 * (v15 + 4), 0x39346956u, v24, PagedPool);
          if ( v29 )
          {
            v29[3] = v26;
            v33 = (*((_DWORD *)v29 + 18) ^ (16 * v15)) & 0x7F0;
            v29[4] = v28;
            *((_DWORD *)v29 + 18) ^= v33;
            if ( v15 )
            {
              v34 = v29 + 12;
              v35 = v15;
              do
              {
                v34[1] = v34;
                *v34 = v34;
                v34[2] = 0LL;
                v34 += 3;
                --v35;
              }
              while ( v35 );
            }
            v36 = a8;
            v29[11] = v29 + 10;
            v29[10] = v29 + 10;
            v37 = (__int64)v25 + 40;
            v38 = (__int64 **)*((_QWORD *)v25 + 6);
            *v36 = (struct VIDMM_VAD *)v29;
            v39 = v29 + 5;
            if ( *v38 != (__int64 *)((char *)v25 + 40) )
              __fastfail(3u);
            *v39 = v37;
            v39[1] = (__int64)v38;
            *v38 = v39;
            *((_QWORD *)v25 + 6) = v39;
            if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
              McTemplateK0pqxx(
                v37,
                &DestroyGpuVirtualAddressRange,
                v32,
                this,
                *((_DWORD *)v25 + 18),
                *((_QWORD *)v25 + 3),
                *((_QWORD *)v25 + 4));
            RtlAvlRemoveNode((char *)this + 40, v25);
            *((_DWORD *)v25 + 18) &= 0xFFFFFFF0;
            LOBYTE(v40) = 0;
            v41 = (struct _RTL_AVL_TREE *)(*((_QWORD *)v25 + 4) - v28);
            *((_QWORD *)v25 + 3) = v28;
            v42 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
            v69 = v41;
            if ( v42 )
            {
              while ( 1 )
              {
                if ( (int)CompareVadSizeAvl(&v69, v42) < 0 )
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
            RtlAvlInsertNodeEx((char *)this + 40, v42, v40, v25);
            v45 = *((_DWORD *)v25 + 18) & 0xFFFFE7F0 | 1;
            *((_DWORD *)v25 + 18) = v45;
            if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
            {
              LODWORD(v67) = v45;
              McTemplateK0pqxx(
                v45,
                &CreateGpuVirtualAddressRange,
                v44,
                this,
                v67,
                *((_QWORD *)v25 + 3),
                *((_QWORD *)v25 + 4));
            }
            goto LABEL_33;
          }
          _InterlockedIncrement(&dword_1C0040688);
          v64 = WdLogNewEntry5_WdLowResource(v31, v30);
          *(_QWORD *)(v64 + 24) = 925LL;
          goto LABEL_57;
        }
        CVirtualAddressAllocator::RemoveVadFromFreeList(this, NodeInFreeList);
        v36 = a8;
        *a8 = v25;
      }
      else
      {
        Vad = CVirtualAddressAllocator::AllocateVad(v68[7], v68[7] + v68[4], v15);
        if ( !Vad )
        {
          _InterlockedIncrement(&dword_1C0040688);
          v64 = WdLogNewEntry5_WdLowResource(v48, v47);
          *(_QWORD *)(v64 + 24) = 958LL;
LABEL_57:
          WdLogEvent5_WdLowResource(v64);
          return 3221225495LL;
        }
        v50 = *((_QWORD *)v25 + 4);
        v51 = 0LL;
        if ( v28 < v50 )
        {
          v51 = CVirtualAddressAllocator::AllocateVad(v28, v50, v15);
          if ( !v51 )
          {
            _InterlockedIncrement(&dword_1C0040688);
            v65 = WdLogNewEntry5_WdLowResource(v53, v52);
            *(_QWORD *)(v65 + 24) = 971LL;
            WdLogEvent5_WdLowResource(v65);
            CVirtualAddressAllocator::FreeVad(Vad);
            return 3221225495LL;
          }
        }
        CVirtualAddressAllocator::RemoveVadFromFreeList(this, v25);
        *((_QWORD *)v25 + 4) = v26;
        CVirtualAddressAllocator::InsertVadToFreeList(this, v25);
        v54 = *((_QWORD *)v25 + 5);
        v55 = (char *)Vad + 40;
        v36 = a8;
        v56 = (char **)((char *)v25 + 40);
        *a8 = Vad;
        if ( *(char ***)(v54 + 8) != v56 )
          __fastfail(3u);
        *(_QWORD *)v55 = v54;
        *((_QWORD *)Vad + 6) = v56;
        *(_QWORD *)(v54 + 8) = v55;
        *v56 = v55;
        if ( v51 )
        {
          CVirtualAddressAllocator::InsertVadToFreeList(this, v51);
          v57 = *(_QWORD *)v55;
          v58 = (_QWORD *)((char *)v51 + 40);
          if ( *(char **)(*(_QWORD *)v55 + 8LL) != v55 )
            __fastfail(3u);
          *v58 = v57;
          v58[1] = v55;
          *(_QWORD *)(v57 + 8) = v58;
          *(_QWORD *)v55 = v58;
        }
      }
LABEL_33:
      *((_DWORD *)*v36 + 18) = *((_DWORD *)*v36 + 18) & 0xFFFFEFFF | (v21 << 12);
      return 0LL;
    }
    return 3221225485LL;
  }
}
