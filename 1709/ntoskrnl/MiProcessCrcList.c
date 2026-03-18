/*
 * XREFs of MiProcessCrcList @ 0x14053FBA0
 * Callers:
 *     MiCombineWorkingSetTail @ 0x140123C30 (MiCombineWorkingSetTail.c)
 *     MiCombineAllPhysicalMemory @ 0x1406ECD38 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     MiValidCombineProtection @ 0x14005BF8C (MiValidCombineProtection.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     MiAllocatePagesForMdl @ 0x1400CB9E8 (MiAllocatePagesForMdl.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     MiFreeCombineBlock @ 0x1400E55B0 (MiFreeCombineBlock.c)
 *     MiDecrementCombinedPte @ 0x1400E5700 (MiDecrementCombinedPte.c)
 *     MiPushCombineBlock @ 0x1400E5A28 (MiPushCombineBlock.c)
 *     MiCapturePfnVm @ 0x1400E6A5C (MiCapturePfnVm.c)
 *     MiAllocateCombineProto @ 0x1400E6D7C (MiAllocateCombineProto.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiHashIsCommon @ 0x14023192C (MiHashIsCommon.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiDereferenceCombineCrc @ 0x1406ED1A8 (MiDereferenceCombineCrc.c)
 */

__int64 *__fastcall MiProcessCrcList(__int64 a1, __int64 *a2, size_t a3, int a4)
{
  __int64 *result; // rax
  __int64 v7; // rsi
  int v8; // r12d
  __int64 *v9; // r13
  __int64 v10; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v12; // r8
  __int64 *v13; // rdi
  unsigned __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // r14
  unsigned int v18; // r15d
  __int64 v19; // rdx
  __int64 *v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r10
  unsigned int v23; // r13d
  char *v24; // r12
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  unsigned __int64 v27; // rax
  _QWORD *v28; // r15
  __int64 v29; // rdx
  int v30; // r12d
  unsigned int v31; // esi
  __int64 v32; // rdi
  unsigned __int64 v33; // rax
  _QWORD *v34; // rsi
  size_t v35; // r15
  _QWORD *v36; // r13
  __int64 v37; // rax
  _QWORD *v38; // rdx
  size_t v39; // r14
  _QWORD *v40; // rdi
  __int64 v41; // rcx
  void *v42; // rcx
  unsigned int v43; // r14d
  _DWORD **v44; // rsi
  _DWORD *v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD *PoolWithTag; // rax
  char *v49; // rsi
  bool v50; // r8
  PVOID v51; // rax
  unsigned int v52; // edx
  int v53; // eax
  unsigned __int64 v54; // rdi
  int IsCommon; // eax
  _QWORD *v56; // rdx
  _QWORD *v57; // rcx
  _QWORD **v58; // rax
  char *v59; // rax
  __int64 i; // rdi
  int v61; // [rsp+48h] [rbp-C0h]
  char v62; // [rsp+4Ch] [rbp-BCh]
  __int64 *v63; // [rsp+50h] [rbp-B8h]
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *CombineProto; // [rsp+68h] [rbp-A0h]
  __int64 v67[2]; // [rsp+70h] [rbp-98h] BYREF
  int v68; // [rsp+80h] [rbp-88h] BYREF
  int v69; // [rsp+84h] [rbp-84h]
  __int64 *v70; // [rsp+88h] [rbp-80h]
  __int64 v71; // [rsp+90h] [rbp-78h]
  __int64 v72; // [rsp+98h] [rbp-70h]
  __int64 *v73; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v74; // [rsp+A8h] [rbp-60h]
  __int64 v75; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v76; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-48h]
  struct _KTHREAD *v78; // [rsp+C8h] [rbp-40h]
  __int64 *v79; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v80[3]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v81[3]; // [rsp+F0h] [rbp-18h] BYREF

  result = (__int64 *)a1;
  v75 = a1;
  v69 = a4;
  v73 = a2;
  memset(v81, 0, sizeof(v81));
  memset(v80, 0, sizeof(v80));
  if ( a3 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_DWORD *)(a1 + 52);
    v9 = *(__int64 **)a1;
    v62 = v8;
    v63 = v9;
    v10 = **(_QWORD **)a1;
    v72 = v10;
    v77 = v7;
    P = 0LL;
    v79 = v9;
    qsort(a2, a3, 0x20uLL, MiCombinePageSortByHash);
    CurrentThread = KeGetCurrentThread();
    v12 = (unsigned __int64)&a2[4 * a3 - 4];
    v67[1] = (__int64)v67;
    v78 = CurrentThread;
    v67[0] = (__int64)v67;
    v71 = 0LL;
    v13 = a2;
    v70 = 0LL;
    v74 = v12;
    if ( (unsigned __int64)a2 <= v12 )
    {
      v14 = 0x8000000000000000uLL;
      while ( 1 )
      {
        if ( v7 && *(_DWORD *)(v7 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
        {
LABEL_41:
          v10 = v72;
          goto LABEL_42;
        }
        v15 = v13[1];
        CombineProto = 0LL;
        v16 = 48 * v15 - 0x58000000000LL;
        v17 = v14 | *(_QWORD *)(v16 + 8);
        v18 = (*(_DWORD *)(v16 + 16) >> 5) & 0x1F;
        if ( !MiValidCombineProtection(v18) || v17 < v21 || v17 > v22 )
          goto LABEL_35;
        if ( (v8 & 0x10) != 0 )
        {
          v61 = 1;
          goto LABEL_11;
        }
        if ( (v8 & 4) != 0 )
          break;
        if ( v13 != v20 && *v13 == v13[4] || v13 != v73 && *v13 == v19 )
        {
          v61 = 1;
          goto LABEL_11;
        }
        CombineProto = (_QWORD *)MiAllocateCombineProto((__int64)v9, *v13, v18, 0);
        if ( !CombineProto )
          goto LABEL_34;
        v23 = 0;
        v61 = 2;
LABEL_12:
        Object = 0LL;
        v24 = MiCapturePfnVm(v63, v16, v8, (unsigned __int64 *)&Object, &v76, &v68);
        if ( !v24 || v76 != v17 || v68 != v18 )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CombineProto )
            MiDecrementCombinedPte(0LL, (__int64)(CombineProto + 6));
          goto LABEL_114;
        }
        if ( v61 == 1 && (*v13 != v71 || v70 == v13 - 4) )
        {
          v25 = (_QWORD *)MiAllocateCombineProto((__int64)v63, *v13, v18, 1);
          CombineProto = v25;
          if ( !v25 )
          {
            if ( Object )
              ObfDereferenceObject(Object);
LABEL_114:
            v9 = v63;
            *v13 = 0LL;
LABEL_115:
            LOBYTE(v8) = v62;
            goto LABEL_34;
          }
          if ( v25[3] )
          {
            v70 = v13;
            v61 = 2;
          }
        }
        *((_DWORD *)v13 + 6) = v18;
        if ( CombineProto )
        {
          if ( CombineProto[3] )
            v13[3] = (__int64)CombineProto;
          else
            MiPushCombineBlock(v67, CombineProto);
        }
        v26 = P;
        if ( !P )
          goto LABEL_68;
        while ( 1 )
        {
          v27 = v26[4];
          if ( (unsigned __int64)v24 > v27 )
          {
            v26 = (_QWORD *)v26[1];
            goto LABEL_92;
          }
          if ( (unsigned __int64)v24 >= v27 )
            break;
          v26 = (_QWORD *)*v26;
LABEL_92:
          if ( !v26 )
            goto LABEL_68;
        }
        if ( v26 )
        {
          v28 = v26;
          if ( Object )
            ObfDereferenceObject(Object);
          goto LABEL_29;
        }
LABEL_68:
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6D56694Du);
        v28 = PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          v56 = CombineProto;
          if ( CombineProto )
          {
            if ( CombineProto[3] )
            {
              MiDecrementCombinedPte(0LL, (__int64)(CombineProto + 6));
            }
            else
            {
              v57 = (_QWORD *)*CombineProto;
              if ( *(_QWORD **)(*CombineProto + 8LL) != CombineProto
                || (v58 = (_QWORD **)CombineProto[1], *v58 != CombineProto) )
              {
                __fastfail(3u);
              }
              *v58 = v57;
              v57[1] = v58;
              v56[4] = 0LL;
              MiFreeCombineBlock((__int64)v56);
            }
            *v13 = 0LL;
            v13[3] = 0LL;
          }
          v9 = v63;
          v70 = 0LL;
          goto LABEL_115;
        }
        memset(PoolWithTag, 0, 0x38uLL);
        v49 = (char *)P;
        v50 = 0;
        v51 = Object;
        v28[4] = v24;
        v28[5] = v51;
        if ( !v49 )
          goto LABEL_70;
        while ( 2 )
        {
          if ( v24 < v49 + 32 )
          {
            v59 = *(char **)v49;
            if ( !*(_QWORD *)v49 )
            {
              v50 = 0;
              goto LABEL_70;
            }
            goto LABEL_109;
          }
          v59 = (char *)*((_QWORD *)v49 + 1);
          if ( v59 )
          {
LABEL_109:
            v49 = v59;
            continue;
          }
          break;
        }
        v50 = 1;
LABEL_70:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v49, v50, (unsigned __int64)v28);
LABEL_29:
        v13[2] = v28[6];
        ++v28[3];
        v28[6] = v13;
        v13[1] = (__int64)(v17 << 25) >> 16;
        if ( v61 == 1 && (v13 == v73 || *v13 != v71) )
          ++v80[v23];
        LOBYTE(v8) = v62;
        v9 = v63;
LABEL_34:
        v14 = 0x8000000000000000uLL;
LABEL_35:
        v29 = *v13;
        v13 += 4;
        v71 = v29;
        if ( (unsigned __int64)v13 > v74 )
          goto LABEL_41;
        v7 = v77;
        CurrentThread = v78;
      }
      IsCommon = MiHashIsCommon(v75, *v13);
      v61 = IsCommon != 0;
      if ( !IsCommon )
        goto LABEL_35;
LABEL_11:
      v23 = *(unsigned __int8 *)(v16 + 34) >> 6;
      if ( v23 >= 3 )
      {
        v9 = v63;
        *v13 = 0LL;
        goto LABEL_35;
      }
      goto LABEL_12;
    }
LABEL_42:
    v30 = v69;
    v31 = 0;
    v32 = 0LL;
    do
    {
      v33 = v80[v32];
      if ( v33 )
      {
        if ( v33 > 0xFFFFE )
          v33 = 1048574LL;
        v81[v32] = MiAllocatePagesForMdl(v10, 0LL, 0xFFFFFFFFFFFFFFFFuLL, 0LL, v33 << 12, v31, v30, 19);
      }
      ++v31;
      ++v32;
    }
    while ( v31 < 3 );
    while ( P )
    {
      v34 = P;
      RtlAvlRemoveNode((unsigned __int64 *)&P, (__int64)P);
      v35 = v34[3];
      v36 = ExAllocatePoolWithTag(PagedPool, 16 * v35, 0x6D56694Du);
      if ( v36 )
      {
        v37 = v34[6];
        if ( v37 )
        {
          v38 = v36;
          do
          {
            *v38 = *(_QWORD *)(v37 + 8);
            v38[1] = v37;
            v38 += 2;
            v37 = *(_QWORD *)(v37 + 16);
          }
          while ( v37 );
        }
        qsort(v36, v35, 0x10uLL, MiCombinePageSortByVa);
        v34[6] = 0LL;
        v39 = 0LL;
        if ( v35 )
        {
          v40 = v36 - 2;
          do
          {
            v41 = v40[3];
            if ( v39 && v40[2] == *v40 )
            {
              MiDereferenceCombineCrc(v41);
              --v34[3];
            }
            else
            {
              *(_QWORD *)(v41 + 16) = v34[6];
              v34[6] = v41;
            }
            ++v39;
            v40 += 2;
          }
          while ( v39 < v35 );
        }
        ExFreePoolWithTag(v36, 0);
        MiSharePages(v75, (__int64)v34, v67, &v79, v30, (__int64)v81);
      }
      else
      {
        for ( i = v34[6]; i; i = *(_QWORD *)(i + 16) )
          MiDereferenceCombineCrc(i);
      }
      v42 = (void *)v34[5];
      if ( v42 )
        ObfDereferenceObject(v42);
      ExFreePoolWithTag(v34, 0);
    }
    v43 = 0;
    v44 = (_DWORD **)v81;
    do
    {
      v45 = *v44;
      if ( *v44 )
      {
        v52 = v45[11];
        v53 = v45[10];
        if ( v52 != v53 )
        {
          v54 = (unsigned __int64)(v53 - v52) >> 12;
          memmove(v45 + 12, &v45[2 * ((unsigned __int64)v52 >> 12) + 12], 8 * v54);
          *((_QWORD *)v45 + 5) = (unsigned int)((_DWORD)v54 << 12);
          MiFreePagesFromMdl((ULONG_PTR)v45, 0);
        }
        ExFreePoolWithTag(v45, 0);
        *v44 = 0LL;
      }
      ++v43;
      ++v44;
    }
    while ( v43 < 3 );
    while ( 1 )
    {
      v46 = v67[0];
      result = v67;
      if ( (__int64 *)v67[0] == v67 )
        break;
      if ( *(__int64 **)(v67[0] + 8) != v67 || (v47 = *(_QWORD *)v67[0], *(_QWORD *)(*(_QWORD *)v67[0] + 8LL) != v67[0]) )
        __fastfail(3u);
      v67[0] = *(_QWORD *)v67[0];
      *(_QWORD *)(v47 + 8) = v67;
      *(_QWORD *)(v46 + 32) = 0LL;
      MiFreeCombineBlock(v46);
    }
  }
  return result;
}
