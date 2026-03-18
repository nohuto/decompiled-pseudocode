/*
 * XREFs of MiProcessCrcList @ 0x1405B6E90
 * Callers:
 *     MiCombineWorkingSetTail @ 0x1400B5CC0 (MiCombineWorkingSetTail.c)
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiDecrementCombinedPte @ 0x1400AD0F8 (MiDecrementCombinedPte.c)
 *     MiFreeCombineBlock @ 0x1400AD658 (MiFreeCombineBlock.c)
 *     MiPushCombineBlock @ 0x1400ADA38 (MiPushCombineBlock.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MiAllocateCombineProto @ 0x140122E30 (MiAllocateCombineProto.c)
 *     MiValidCombineProtection @ 0x14012357C (MiValidCombineProtection.c)
 *     MiCapturePfnVm @ 0x140124730 (MiCapturePfnVm.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiHashIsCommon @ 0x14026BD98 (MiHashIsCommon.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiFreeCombineMdls @ 0x14048CA2C (MiFreeCombineMdls.c)
 *     MiPopulateCombineMdls @ 0x140558A04 (MiPopulateCombineMdls.c)
 *     MiDereferenceCombineCrc @ 0x1407565F0 (MiDereferenceCombineCrc.c)
 */

__int64 *__fastcall MiProcessCrcList(__int64 a1, __int64 *a2, size_t a3, int a4)
{
  __int64 v4; // r12
  __int64 *result; // rax
  __int64 v7; // rsi
  unsigned int v8; // r13d
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rdi
  _QWORD *CombineProto; // r12
  __int64 v12; // rbx
  unsigned __int64 v13; // r15
  int v14; // r14d
  __int64 *v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // r9
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  __int64 v20; // r8
  int v21; // r13d
  ULONG_PTR v22; // rdx
  __int64 *v23; // rbx
  char *v24; // rsi
  _QWORD *v25; // rbx
  unsigned __int64 v26; // rax
  _QWORD *PoolWithTag; // rax
  char *v28; // rdx
  bool v29; // r8
  PVOID v30; // rax
  char *v31; // rax
  __int64 v32; // rax
  int v33; // r13d
  _QWORD *v34; // rsi
  size_t v35; // r14
  char *v36; // rax
  __int64 v37; // rbx
  char *v38; // r15
  char *v39; // rcx
  size_t v40; // rdi
  char *v41; // rbx
  __int64 v42; // rcx
  void *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  int IsCommon; // eax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  unsigned int v49; // [rsp+38h] [rbp-89h]
  PVOID P; // [rsp+48h] [rbp-79h] BYREF
  PVOID Object; // [rsp+50h] [rbp-71h] BYREF
  __int64 v53; // [rsp+58h] [rbp-69h]
  unsigned int v54; // [rsp+60h] [rbp-61h]
  __int64 v55[2]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v56; // [rsp+78h] [rbp-49h]
  int v57; // [rsp+80h] [rbp-41h] BYREF
  int v58; // [rsp+84h] [rbp-3Dh]
  __int64 *v59; // [rsp+88h] [rbp-39h]
  __int64 v60; // [rsp+90h] [rbp-31h]
  __int64 *v61; // [rsp+98h] [rbp-29h]
  unsigned __int64 v62; // [rsp+A0h] [rbp-21h]
  unsigned __int64 v63; // [rsp+A8h] [rbp-19h] BYREF
  struct _KTHREAD *v64; // [rsp+B0h] [rbp-11h]
  __int64 *v65; // [rsp+B8h] [rbp-9h] BYREF
  _QWORD v66[3]; // [rsp+C0h] [rbp-1h] BYREF

  v4 = a1;
  v56 = a1;
  v58 = a4;
  memset(v66, 0, sizeof(v66));
  result = a2;
  if ( a3 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_DWORD *)(a1 + 52);
    v61 = *(__int64 **)a1;
    v65 = v61;
    v49 = v8;
    v53 = v7;
    P = 0LL;
    qsort(a2, a3, 0x20uLL, (int (__cdecl *)(const void *, const void *))MiCombinePageSortByHash);
    CurrentThread = KeGetCurrentThread();
    v10 = a2;
    v55[1] = (__int64)v55;
    v64 = CurrentThread;
    v60 = 0LL;
    v59 = 0LL;
    v55[0] = (__int64)v55;
    v62 = (unsigned __int64)&a2[4 * a3 - 4];
    if ( (unsigned __int64)a2 > v62 )
      goto LABEL_57;
LABEL_3:
    if ( (!v7 || !*(_DWORD *)(v7 + 4)) && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
    {
      CombineProto = 0LL;
      v12 = 48 * v10[1] - 0x58000000000LL;
      v13 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
      v14 = (*(_DWORD *)(v12 + 16) >> 5) & 0x1F;
      if ( !MiValidCombineProtection(v14) || v13 < v18 || v13 > v19 )
        goto LABEL_16;
      if ( (v8 & 0x10) == 0 )
      {
        if ( (v8 & 4) != 0 )
        {
          IsCommon = MiHashIsCommon(v56, *v10);
          v21 = IsCommon != 0;
          if ( !IsCommon )
            goto LABEL_90;
LABEL_19:
          v54 = *(unsigned __int8 *)(v12 + 34) >> 6;
          if ( v54 >= 3 )
          {
            *v10 = 0LL;
LABEL_90:
            LOBYTE(v8) = v49;
            goto LABEL_16;
          }
          goto LABEL_20;
        }
        if ( (v10 == v15 || *v10 != v10[4]) && (v10 == v17 || *v10 != v16) )
        {
          CombineProto = (_QWORD *)MiAllocateCombineProto((__int64)v61, *v10, v14, 0);
          if ( !CombineProto )
            goto LABEL_16;
          v21 = 2;
          v54 = 0;
LABEL_20:
          v22 = v12;
          Object = 0LL;
          v23 = v61;
          v24 = MiCapturePfnVm(v61, v22, v49, &Object, &v63, &v57);
          if ( !v24 || v63 != v13 || v57 != v14 )
          {
            if ( Object )
              ObfDereferenceObject(Object);
            if ( CombineProto )
              MiDecrementCombinedPte(0LL, (__int64)(CombineProto + 6));
            goto LABEL_84;
          }
          if ( v21 == 1 && (*v10 != v60 || v59 == v10 - 4) )
          {
            v32 = MiAllocateCombineProto((__int64)v23, *v10, v14, 1);
            CombineProto = (_QWORD *)v32;
            if ( !v32 )
            {
              if ( Object )
                ObfDereferenceObject(Object);
LABEL_84:
              *v10 = 0LL;
LABEL_85:
              LOBYTE(v8) = v49;
              v7 = v53;
              goto LABEL_16;
            }
            if ( *(_QWORD *)(v32 + 24) )
            {
              v59 = v10;
              v21 = 2;
            }
          }
          *((_DWORD *)v10 + 6) = v14;
          if ( CombineProto )
          {
            if ( CombineProto[3] )
              v10[3] = (__int64)CombineProto;
            else
              MiPushCombineBlock(v55, CombineProto);
          }
          v25 = P;
          if ( !P )
            goto LABEL_33;
          while ( 1 )
          {
            v26 = v25[4];
            if ( (unsigned __int64)v24 > v26 )
            {
              v25 = (_QWORD *)v25[1];
            }
            else
            {
              if ( (unsigned __int64)v24 >= v26 )
              {
                if ( v25 )
                {
                  if ( Object )
                    ObfDereferenceObject(Object);
                  goto LABEL_43;
                }
LABEL_33:
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6D56694Du);
                v25 = PoolWithTag;
                if ( !PoolWithTag )
                {
                  if ( Object )
                    ObfDereferenceObject(Object);
                  if ( CombineProto )
                  {
                    if ( CombineProto[3] )
                    {
                      MiDecrementCombinedPte(0LL, (__int64)(CombineProto + 6));
                    }
                    else
                    {
                      v47 = *CombineProto;
                      if ( *(_QWORD **)(*CombineProto + 8LL) != CombineProto
                        || (v48 = (_QWORD *)CombineProto[1], (_QWORD *)*v48 != CombineProto) )
                      {
                        __fastfail(3u);
                      }
                      *v48 = v47;
                      *(_QWORD *)(v47 + 8) = v48;
                      CombineProto[4] = 0LL;
                      MiFreeCombineBlock((__int64)CombineProto);
                    }
                    *v10 = 0LL;
                    v10[3] = 0LL;
                  }
                  v59 = 0LL;
                  goto LABEL_85;
                }
                memset(PoolWithTag, 0, 0x38uLL);
                v28 = (char *)P;
                v29 = 0;
                v30 = Object;
                v25[4] = v24;
                v25[5] = v30;
                if ( !v28 )
                  goto LABEL_48;
                while ( 2 )
                {
                  if ( v24 < v28 + 32 )
                  {
                    v31 = *(char **)v28;
                    if ( !*(_QWORD *)v28 )
                    {
                      RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v28, 0, v25);
                      goto LABEL_43;
                    }
                    goto LABEL_37;
                  }
                  v31 = (char *)*((_QWORD *)v28 + 1);
                  if ( v31 )
                  {
LABEL_37:
                    v28 = v31;
                    continue;
                  }
                  break;
                }
                v29 = 1;
LABEL_48:
                RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v28, v29, v25);
LABEL_43:
                v10[2] = v25[6];
                ++v25[3];
                v25[6] = v10;
                v10[1] = (__int64)(v13 << 25) >> 16;
                if ( v21 == 1 && (v10 == a2 || *v10 != v60) )
                  ++v66[v54];
                v7 = v53;
                LOBYTE(v8) = v49;
LABEL_16:
                v20 = *v10;
                v10 += 4;
                v60 = v20;
                if ( (unsigned __int64)v10 > v62 )
                  goto LABEL_56;
                CurrentThread = v64;
                goto LABEL_3;
              }
              v25 = (_QWORD *)*v25;
            }
            if ( !v25 )
              goto LABEL_33;
          }
        }
      }
      v21 = 1;
      goto LABEL_19;
    }
LABEL_56:
    v4 = v56;
LABEL_57:
    v33 = v58;
    MiPopulateCombineMdls(v4, v58, (__int64)v66);
    while ( P )
    {
      v34 = P;
      RtlAvlRemoveNode((unsigned __int64 *)&P, (__int64)P);
      v35 = v34[3];
      v36 = (char *)ExAllocatePoolWithTag(PagedPool, 16 * v35, 0x6D56694Du);
      v37 = v34[6];
      v38 = v36;
      if ( v36 )
      {
        if ( v37 )
        {
          v39 = v36;
          do
          {
            *(_QWORD *)v39 = *(_QWORD *)(v37 + 8);
            *((_QWORD *)v39 + 1) = v37;
            v39 += 16;
            v37 = *(_QWORD *)(v37 + 16);
          }
          while ( v37 );
        }
        qsort(v36, v35, 0x10uLL, (int (__cdecl *)(const void *, const void *))MiCombinePageSortByVa);
        v40 = 0LL;
        v34[6] = 0LL;
        if ( v35 )
        {
          v41 = v38 - 16;
          do
          {
            v42 = *((_QWORD *)v41 + 3);
            if ( v40 && *((_QWORD *)v41 + 2) == *(_QWORD *)v41 )
            {
              MiDereferenceCombineCrc(v42);
              --v34[3];
            }
            else
            {
              *(_QWORD *)(v42 + 16) = v34[6];
              v34[6] = v42;
            }
            ++v40;
            v41 += 16;
          }
          while ( v40 < v35 );
        }
        ExFreePoolWithTag(v38, 0);
        MiSharePages(v4, v34, v55, (__int64 *)&v65, v33);
      }
      else
      {
        for ( ; v37; v37 = *(_QWORD *)(v37 + 16) )
          MiDereferenceCombineCrc(v37);
      }
      v43 = (void *)v34[5];
      if ( v43 )
        ObfDereferenceObject(v43);
      ExFreePoolWithTag(v34, 0);
    }
    if ( (*(_DWORD *)(v4 + 52) & 2) == 0 )
      MiFreeCombineMdls(v4);
    while ( 1 )
    {
      v44 = v55[0];
      result = v55;
      if ( (__int64 *)v55[0] == v55 )
        break;
      if ( *(__int64 **)(v55[0] + 8) != v55 || (v45 = *(_QWORD *)v55[0], *(_QWORD *)(*(_QWORD *)v55[0] + 8LL) != v55[0]) )
        __fastfail(3u);
      v55[0] = *(_QWORD *)v55[0];
      *(_QWORD *)(v45 + 8) = v55;
      *(_QWORD *)(v44 + 32) = 0LL;
      MiFreeCombineBlock(v44);
    }
  }
  return result;
}
