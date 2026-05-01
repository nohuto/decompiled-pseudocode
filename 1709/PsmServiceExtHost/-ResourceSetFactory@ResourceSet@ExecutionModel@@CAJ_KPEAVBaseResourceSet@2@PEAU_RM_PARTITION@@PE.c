/*
 * XREFs of ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PEAXPEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180013B60
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@8PEAPEAV12@@Z @ 0x1800126B0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800107F0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180012124 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     CempHeapFreeForHashTable @ 0x18001FEE0 (CempHeapFreeForHashTable.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180025474 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025A8C (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ResourceSetFactory(
        __int64 a1,
        struct ExecutionModel::BaseResourceSet *a2,
        struct _RM_PARTITION *a3,
        void *a4,
        struct _RM_ACTIVATOR *a5,
        struct ExecutionModel::ResourceSet **a6)
{
  PVOID Heap; // rax
  PVOID v11; // rsi
  ExecutionModel::ResourceSet *v12; // rax
  ExecutionModel::ResourceSet *v13; // rax
  ExecutionModel::ResourceSet *v14; // rbx
  __int64 (__fastcall *v15)(ExecutionModel::BaseResourceSet *); // rax
  __int64 v16; // rbp
  unsigned int v17; // r8d
  _QWORD *v18; // rdx
  int v19; // edi
  char v21; // di
  unsigned __int64 v22; // rax
  char *v23; // r11
  unsigned int v24; // r10d
  unsigned __int64 v25; // rcx
  unsigned int v26; // r9d
  __int64 v27; // r14
  _QWORD **v28; // r8
  _QWORD *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-108h]
  __int64 v33; // [rsp+28h] [rbp-100h]
  unsigned int v34; // [rsp+30h] [rbp-F8h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-E8h] BYREF

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
  v11 = Heap;
  if ( !Heap )
  {
    v19 = -1073741801;
    return v19 | 0x10000000u;
  }
  memset_0(Heap, 0, 0xA0uLL);
  *((_QWORD *)v11 + 3) = a1;
  *((_DWORD *)v11 + 4) = 1;
  *((_DWORD *)v11 + 8) = 1;
  *((_QWORD *)v11 + 1) = HIBYTE(a1)
                       + 37
                       * (BYTE6(a1)
                        + 37
                        * (BYTE5(a1)
                         + 37
                         * (BYTE4(a1)
                          + 37
                          * (BYTE3(a1) + 37 * (BYTE2(a1) + 37 * (BYTE1(a1) + 37 * ((unsigned __int8)a1 + 11623883LL)))))));
  *((_QWORD *)v11 + 6) = a5;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)v11 + 14) = a3;
  if ( a4 )
  {
    v19 = RmpSystemDuplicateHandle(a4, 1u, (PHANDLE)v11 + 15);
    if ( v19 >= 0 )
      v19 = 0;
    if ( v19 < 0 )
    {
LABEL_41:
      RmpObjectRelease((char *)v11);
      return v19 | 0x10000000u;
    }
  }
  v12 = (ExecutionModel::ResourceSet *)operator new(0x780uLL);
  if ( !v12 || (v13 = ExecutionModel::ResourceSet::ResourceSet(v12), (v14 = v13) == 0LL) )
  {
    v19 = -1073741801;
    goto LABEL_41;
  }
  *((_QWORD *)v13 + 23) = a2;
  *((_DWORD *)v13 + 4) = *((_DWORD *)a2 + 4);
  *((_QWORD *)v13 + 3) = *((_QWORD *)a2 + 3);
  *((_QWORD *)v13 + 174) = *((_QWORD *)a2 + 174);
  if ( _InterlockedIncrement((volatile signed __int32 *)v11 + 4) < 1 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  *((_QWORD *)v14 + 179) = v11;
  *((_QWORD *)v14 + 237) = *((_QWORD *)v11 + 3);
  v15 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v14 + 8LL);
  if ( v15 == ExecutionModel::BaseResourceSet::AddRef )
    ExecutionModel::BaseResourceSet::AddRef(v14);
  else
    v15(v14);
  *((_QWORD *)v11 + 5) = v14;
  v16 = *(_QWORD *)(*((_QWORD *)v14 + 3) + 208LL) + 536LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(*((_QWORD *)v14 + 3) + 208LL) + 552LL);
  if ( *(_DWORD *)v16 >= (unsigned int)(2 * (*(_DWORD *)(v16 + 4) >> 5)) )
  {
    v21 = -1;
    v22 = 2 * ((unsigned __int64)*(unsigned int *)(v16 + 4) >> 5);
    if ( v22 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v22 < 4 )
        LODWORD(v22) = 4;
      v34 = v22;
      v23 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)v22);
      if ( v23 )
      {
        v24 = v34;
        if ( ((v34 - 1) & v34) != 0 )
        {
          do
          {
            ++v21;
            v24 >>= 1;
          }
          while ( v24 );
          v24 = 1 << v21;
        }
        if ( v24 > 0x4000000 )
          v24 = 0x4000000;
        v25 = v24;
        if ( v23 > &v23[8 * v24] )
          v25 = 0LL;
        if ( v25 )
          memset64(v23, v16 | 1, v25);
        v26 = 0;
        v27 = -1LL << (*(_BYTE *)(v16 + 4) & 0x1F);
        if ( (*(_DWORD *)(v16 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v28 = (_QWORD **)(*(_QWORD *)(v16 + 8) + 8LL * v26);
            while ( 1 )
            {
              v29 = *v28;
              if ( ((unsigned __int8)*v28 & 1) != 0 )
                break;
              *v28 = (_QWORD *)*v29;
              v32 = v27 & v29[1];
              v30 = (37
                   * (BYTE6(v32)
                    + 37
                    * (BYTE5(v32)
                     + 37
                     * (BYTE4(v32)
                      + 37
                      * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
                   + HIBYTE(v32)) & (v24 - 1);
              *v29 = *(_QWORD *)&v23[8 * v30];
              *(_QWORD *)&v23[8 * v30] = v29;
            }
            ++v26;
          }
          while ( v26 < *(_DWORD *)(v16 + 4) >> 5 );
        }
        *(_DWORD *)(v16 + 4) &= 0x1Fu;
        v31 = *(_QWORD *)(v16 + 8);
        *(_DWORD *)(v16 + 4) |= 32 * v24;
        *(_QWORD *)(v16 + 8) = v23;
        if ( v31 )
          CempHeapFreeForHashTable(v31, 0LL);
      }
    }
  }
  v17 = *(_DWORD *)(v16 + 4);
  v33 = *((_QWORD *)v11 + 1) & (-1LL << (v17 & 0x1F));
  v18 = (_QWORD *)(*(_QWORD *)(v16 + 8)
                 + 8LL
                 * ((37
                   * (BYTE6(v33)
                    + 37
                    * (BYTE5(v33)
                     + 37
                     * (BYTE4(v33)
                      + 37
                      * (BYTE3(v33) + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
                   + HIBYTE(v33)) & ((v17 >> 5) - 1)));
  *(_QWORD *)v11 = *v18;
  *v18 = v11;
  ++*(_DWORD *)v16;
  RtlReleaseSRWLockExclusive(v16 + 16);
  v19 = 0;
  *a6 = v14;
  return v19 | 0x10000000u;
}
