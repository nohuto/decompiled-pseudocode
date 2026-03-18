/*
 * XREFs of MiProcessCrcList @ 0x1404C89E0
 * Callers:
 *     MiCombineWorkingSetTail @ 0x140078A40 (MiCombineWorkingSetTail.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiDecrementCombinedPte @ 0x140078BE8 (MiDecrementCombinedPte.c)
 *     MiValidCombineProtection @ 0x140078C70 (MiValidCombineProtection.c)
 *     MiAllocateCombineProto @ 0x140078CA0 (MiAllocateCombineProto.c)
 *     MiCapturePfnVm @ 0x140078F10 (MiCapturePfnVm.c)
 *     MiPushCombineBlock @ 0x1400791EC (MiPushCombineBlock.c)
 *     MiFreeCombineBlock @ 0x140079210 (MiFreeCombineBlock.c)
 *     MiAllocatePagesForMdl @ 0x14007A5D8 (MiAllocatePagesForMdl.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiHashIsCommon @ 0x140223CB0 (MiHashIsCommon.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiDereferenceCombineCrc @ 0x1406BF700 (MiDereferenceCombineCrc.c)
 */

__int64 *__fastcall MiProcessCrcList(__int64 a1, __int64 *a2, size_t a3, int a4)
{
  __int64 v4; // r12
  __int64 *result; // rax
  int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // r12
  unsigned int v15; // r15d
  __int64 *v16; // rdx
  __int64 v17; // r8
  __int64 *v18; // r9
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r11
  __int64 v21; // r8
  int v22; // r13d
  __int64 v23; // rdx
  __int64 *v24; // rdi
  unsigned __int64 v25; // r14
  _QWORD *v26; // rdi
  unsigned __int64 v27; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v29; // r15
  _QWORD *v30; // rdi
  bool v31; // r8
  PVOID v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int16 v35; // r14
  unsigned int v36; // esi
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  _QWORD *v39; // rdi
  size_t v40; // r15
  char *v41; // rax
  char *v42; // r13
  __int64 v43; // rcx
  char *v44; // rdx
  size_t v45; // r14
  char *v46; // rsi
  __int64 v47; // rcx
  void *v48; // rcx
  unsigned int v49; // r15d
  _DWORD **v50; // rsi
  _DWORD *v51; // r14
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  int v55; // eax
  unsigned __int64 v56; // rdi
  int IsCommon; // eax
  _QWORD *v58; // rdx
  _QWORD *v59; // rcx
  _QWORD **v60; // rax
  __int64 i; // rsi
  char v62; // [rsp+48h] [rbp-C0h]
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+68h] [rbp-A0h]
  unsigned int v67; // [rsp+70h] [rbp-98h]
  int v68; // [rsp+74h] [rbp-94h]
  _QWORD *CombineProto; // [rsp+78h] [rbp-90h]
  __int64 v70[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v71; // [rsp+90h] [rbp-78h]
  int v72; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v73; // [rsp+A0h] [rbp-68h]
  __int64 v74; // [rsp+A8h] [rbp-60h]
  __int64 v75; // [rsp+B0h] [rbp-58h]
  __int64 *v76; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v77; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v78; // [rsp+C8h] [rbp-40h] BYREF
  struct _KTHREAD *v79; // [rsp+D0h] [rbp-38h]
  __int64 *v80; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v81[3]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v82[3]; // [rsp+F8h] [rbp-10h] BYREF

  v4 = a1;
  v71 = a1;
  v68 = a4;
  memset(v82, 0, sizeof(v82));
  result = a2;
  memset(v81, 0, sizeof(v81));
  if ( a3 )
  {
    v7 = *(_DWORD *)(a1 + 52);
    v8 = *(_QWORD *)(a1 + 8);
    v9 = **(_QWORD **)a1;
    v76 = *(__int64 **)a1;
    v80 = v76;
    v75 = v9;
    v62 = v7;
    v66 = v8;
    P = 0LL;
    qsort(a2, a3, 0x20uLL, (int (__cdecl *)(const void *, const void *))MiCombinePageSortByHash);
    CurrentThread = KeGetCurrentThread();
    v11 = a2;
    v70[1] = (__int64)v70;
    v79 = CurrentThread;
    v74 = 0LL;
    v73 = 0LL;
    v70[0] = (__int64)v70;
    v77 = (unsigned __int64)&a2[4 * a3 - 4];
    if ( (unsigned __int64)a2 <= v77 )
    {
      while ( 1 )
      {
        if ( v8 && *(_DWORD *)(v8 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
        {
LABEL_56:
          v9 = v75;
          v4 = v71;
          goto LABEL_57;
        }
        v12 = v11[1];
        CombineProto = 0LL;
        v13 = 48 * v12 - 0x58000000000LL;
        v14 = *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL;
        v15 = (*(_DWORD *)(v13 + 16) >> 5) & 0x1F;
        if ( !MiValidCombineProtection(v15) || v14 < v19 || v14 > v20 )
          goto LABEL_16;
        if ( (v7 & 0x10) != 0 )
          break;
        if ( (v7 & 4) != 0 )
        {
          IsCommon = MiHashIsCommon(v71, *v11);
          v22 = IsCommon != 0;
          if ( !IsCommon )
          {
            LOBYTE(v7) = v62;
            goto LABEL_16;
          }
          if ( v22 == 1 )
            goto LABEL_19;
        }
        else
        {
          if ( v11 != v16 && *v11 == v11[4] || v11 != v18 && *v11 == v17 )
            break;
          CombineProto = (_QWORD *)MiAllocateCombineProto(v76, *v11, v15, 0);
          if ( !CombineProto )
            goto LABEL_16;
          v22 = 2;
        }
        v67 = 0;
LABEL_20:
        v23 = v13;
        Object = 0LL;
        v24 = v76;
        v25 = MiCapturePfnVm((__int64)v76, v23, (ULONG_PTR *)&Object, &v78, &v72);
        if ( !v25 || v78 != v14 || v72 != v15 )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CombineProto )
            MiDecrementCombinedPte((__int64)(CombineProto + 6));
          goto LABEL_95;
        }
        if ( v22 == 1 && (*v11 != v74 || v73 == v11 - 4) )
        {
          v34 = (_QWORD *)MiAllocateCombineProto(v24, *v11, v15, 1);
          CombineProto = v34;
          if ( !v34 )
          {
            if ( Object )
              ObfDereferenceObject(Object);
LABEL_95:
            *v11 = 0LL;
LABEL_96:
            LOBYTE(v7) = v62;
            v8 = v66;
            goto LABEL_16;
          }
          if ( v34[3] )
          {
            v73 = v11;
            v22 = 2;
          }
        }
        *((_DWORD *)v11 + 6) = v15;
        if ( CombineProto )
        {
          if ( CombineProto[3] )
            v11[3] = (__int64)CombineProto;
          else
            MiPushCombineBlock(v70, CombineProto);
        }
        v26 = P;
        if ( !P )
          goto LABEL_31;
        while ( 1 )
        {
          v27 = v26[4];
          if ( v25 <= v27 )
            break;
          v26 = (_QWORD *)v26[1];
LABEL_30:
          if ( !v26 )
            goto LABEL_31;
        }
        if ( v25 < v27 )
        {
          v26 = (_QWORD *)*v26;
          goto LABEL_30;
        }
        if ( v26 )
        {
          v29 = v26;
          if ( Object )
            ObfDereferenceObject(Object);
          goto LABEL_43;
        }
LABEL_31:
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6D56694Du);
        v29 = PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          v58 = CombineProto;
          if ( CombineProto )
          {
            if ( CombineProto[3] )
            {
              MiDecrementCombinedPte((__int64)(CombineProto + 6));
            }
            else
            {
              v59 = (_QWORD *)*CombineProto;
              v60 = (_QWORD **)CombineProto[1];
              if ( *(_QWORD **)(*CombineProto + 8LL) != CombineProto || *v60 != CombineProto )
                __fastfail(3u);
              *v60 = v59;
              v59[1] = v60;
              v58[4] = 0LL;
              MiFreeCombineBlock((__int64)v58);
            }
            *v11 = 0LL;
            v11[3] = 0LL;
          }
          v73 = 0LL;
          goto LABEL_96;
        }
        memset(PoolWithTag, 0, 0x38uLL);
        v30 = P;
        v31 = 0;
        v32 = Object;
        v29[4] = v25;
        v29[5] = v32;
        if ( !v30 )
          goto LABEL_53;
        while ( 2 )
        {
          if ( v25 < (unsigned __int64)(v30 + 4) )
          {
            v33 = (_QWORD *)*v30;
            if ( !*v30 )
            {
              RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v30, 0, (unsigned __int64)v29);
              goto LABEL_43;
            }
            goto LABEL_35;
          }
          v33 = (_QWORD *)v30[1];
          if ( v33 )
          {
LABEL_35:
            v30 = v33;
            continue;
          }
          break;
        }
        v31 = 1;
LABEL_53:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v30, v31, (unsigned __int64)v29);
LABEL_43:
        v11[2] = v29[6];
        ++v29[3];
        v29[6] = v11;
        v11[1] = (__int64)(v14 << 25) >> 16;
        if ( v22 == 1 && (v11 == a2 || *v11 != v74) )
          ++v81[v67];
        v8 = v66;
        LOBYTE(v7) = v62;
LABEL_16:
        v21 = *v11;
        v11 += 4;
        v74 = v21;
        if ( (unsigned __int64)v11 > v77 )
          goto LABEL_56;
        CurrentThread = v79;
      }
      v22 = 1;
LABEL_19:
      v67 = *(unsigned __int8 *)(v13 + 34) >> 6;
      if ( v67 >= 3 )
      {
        LOBYTE(v7) = v62;
        *v11 = 0LL;
        goto LABEL_16;
      }
      goto LABEL_20;
    }
LABEL_57:
    v35 = v68;
    v36 = 0;
    v37 = 0LL;
    do
    {
      v38 = v81[v37];
      if ( v38 )
      {
        if ( v38 > 0xFFFFE )
          v38 = 1048574LL;
        v82[v37] = MiAllocatePagesForMdl(v9, 0LL, 0xFFFFFFFFFFFFFFFFuLL, 0LL, v38 << 12, v36, v35, 19);
      }
      ++v36;
      ++v37;
    }
    while ( v36 < 3 );
    while ( P )
    {
      v39 = P;
      RtlAvlRemoveNode((unsigned __int64 *)&P, (__int64)P);
      v40 = v39[3];
      v41 = (char *)ExAllocatePoolWithTag(PagedPool, 16 * v40, 0x6D56694Du);
      v42 = v41;
      if ( v41 )
      {
        v43 = v39[6];
        if ( v43 )
        {
          v44 = v41;
          do
          {
            *(_QWORD *)v44 = *(_QWORD *)(v43 + 8);
            *((_QWORD *)v44 + 1) = v43;
            v44 += 16;
            v43 = *(_QWORD *)(v43 + 16);
          }
          while ( v43 );
        }
        qsort(v41, v40, 0x10uLL, (int (__cdecl *)(const void *, const void *))MiCombinePageSortByVa);
        v39[6] = 0LL;
        v45 = 0LL;
        if ( v40 )
        {
          v46 = v42 - 16;
          do
          {
            v47 = *((_QWORD *)v46 + 3);
            if ( v45 && *((_QWORD *)v46 + 2) == *(_QWORD *)v46 )
            {
              MiDereferenceCombineCrc(v47);
              --v39[3];
            }
            else
            {
              *(_QWORD *)(v47 + 16) = v39[6];
              v39[6] = v47;
            }
            ++v45;
            v46 += 16;
          }
          while ( v45 < v40 );
        }
        ExFreePoolWithTag(v42, 0);
        MiSharePages(v4, (__int64)v39, v70, &v80, v68, (__int64)v82);
      }
      else
      {
        for ( i = v39[6]; i; i = *(_QWORD *)(i + 16) )
          MiDereferenceCombineCrc(i);
      }
      v48 = (void *)v39[5];
      if ( v48 )
        ObfDereferenceObject(v48);
      ExFreePoolWithTag(v39, 0);
    }
    v49 = 0;
    v50 = (_DWORD **)v82;
    do
    {
      v51 = *v50;
      if ( *v50 )
      {
        v54 = (unsigned int)v51[11];
        v55 = v51[10];
        if ( (_DWORD)v54 != v55 )
        {
          v56 = (unsigned __int64)(unsigned int)(v55 - v54) >> 12;
          memmove(v51 + 12, &v51[2 * (v54 >> 12) + 12], 8 * v56);
          *((_QWORD *)v51 + 5) = (unsigned int)((_DWORD)v56 << 12);
          MiFreePagesFromMdl((ULONG_PTR)v51, 0);
        }
        ExFreePoolWithTag(v51, 0);
        *v50 = 0LL;
      }
      ++v49;
      ++v50;
    }
    while ( v49 < 3 );
    while ( 1 )
    {
      v52 = v70[0];
      result = v70;
      if ( (__int64 *)v70[0] == v70 )
        break;
      v53 = *(_QWORD *)v70[0];
      if ( *(__int64 **)(v70[0] + 8) != v70 || *(_QWORD *)(v53 + 8) != v70[0] )
        __fastfail(3u);
      v70[0] = *(_QWORD *)v70[0];
      *(_QWORD *)(v53 + 8) = v70;
      *(_QWORD *)(v52 + 32) = 0LL;
      MiFreeCombineBlock(v52);
    }
  }
  return result;
}
