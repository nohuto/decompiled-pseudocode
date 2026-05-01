/*
 * XREFs of ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PEAU_RM_ACTIVITY_HOST@@PEAXPEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180021570
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@8PEAPEAV12@@Z @ 0x18001EF50 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001EDB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180020794 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x18002A31C (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     CempHeapFree @ 0x180033D80 (CempHeapFree.c)
 *     ??2@YAPEAX_K@Z @ 0x18003E450 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ResourceSetFactory(
        __int64 a1,
        struct ExecutionModel::BaseResourceSet *a2,
        struct _RM_PARTITION *a3,
        struct _RM_ACTIVITY_HOST *a4,
        HANDLE SourceHandle,
        struct _RM_ACTIVATOR *a6,
        struct ExecutionModel::ResourceSet **a7)
{
  _QWORD *Heap; // rax
  _QWORD *v12; // rsi
  ExecutionModel::ResourceSet *v13; // rax
  ExecutionModel::ResourceSet *v14; // rax
  ExecutionModel::BaseResourceSet *v15; // rbx
  __int64 (__fastcall *v16)(ExecutionModel::BaseResourceSet *); // rax
  __int64 v17; // rbp
  unsigned int v18; // r8d
  unsigned __int64 v19; // r15
  _QWORD *v20; // rdx
  int v21; // ebx
  char v23; // di
  unsigned __int64 v24; // r13
  struct _PEB *v25; // rcx
  _QWORD **v26; // r9
  char *v27; // r11
  _QWORD *v28; // r8
  unsigned __int64 v29; // rcx
  unsigned int v30; // r10d
  __int64 v31; // r14
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA8uLL);
  v12 = Heap;
  if ( !Heap )
  {
    v21 = -1073741801;
    return v21 | 0x10000000u;
  }
  memset_0(Heap, 0, 0xA8uLL);
  v12[4] = a1;
  v12[2] = 1LL;
  *((_DWORD *)v12 + 10) = 1;
  v12[1] = HIBYTE(a1)
         + 37
         * (BYTE6(a1)
          + 37
          * (BYTE5(a1)
           + 37
           * (BYTE4(a1)
            + 37 * (BYTE3(a1) + 37 * (BYTE2(a1) + 37 * (BYTE1(a1) + 37 * ((unsigned __int8)a1 + 11623883LL)))))));
  v12[7] = a6;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a3) <= 1 )
    __fastfail(0xEu);
  v12[15] = a3;
  if ( SourceHandle )
  {
    v21 = RmpSystemDuplicateHandle(SourceHandle, 1u, (PHANDLE)v12 + 16);
    if ( v21 >= 0 )
      v21 = 0;
    if ( v21 < 0 )
    {
LABEL_44:
      RmpObjectRelease(v12);
      return v21 | 0x10000000u;
    }
  }
  v13 = (ExecutionModel::ResourceSet *)operator new(0x770uLL);
  if ( !v13 || (v14 = ExecutionModel::ResourceSet::ResourceSet(v13), (v15 = v14) == 0LL) )
  {
    v21 = -1073741801;
    goto LABEL_44;
  }
  *((_QWORD *)v14 + 23) = a2;
  *((_DWORD *)v14 + 4) = *((_DWORD *)a2 + 4);
  *((_QWORD *)v14 + 3) = *((_QWORD *)a2 + 3);
  *((_QWORD *)v14 + 174) = *((_QWORD *)a2 + 174);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a4 + 2) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)v14 + 180) = a4;
  if ( _InterlockedIncrement64(v12 + 2) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)v14 + 179) = v12;
  *((_QWORD *)v14 + 235) = v12[4];
  v16 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v14 + 8LL);
  if ( v16 == ExecutionModel::BaseResourceSet::AddRef )
    ExecutionModel::BaseResourceSet::AddRef(v15);
  else
    v16(v15);
  v12[6] = v15;
  v17 = *(_QWORD *)(*((_QWORD *)v15 + 3) + 152LL) + 560LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(*((_QWORD *)v15 + 3) + 152LL) + 576LL);
  if ( *(_DWORD *)v17 >= (unsigned int)(2 * (*(_DWORD *)(v17 + 4) >> 5)) )
  {
    v23 = -1;
    v24 = 2 * ((unsigned __int64)*(unsigned int *)(v17 + 4) >> 5);
    if ( v24 <= 0xFFFFFFFF )
    {
      v25 = NtCurrentPeb();
      if ( (unsigned int)v24 < 4 )
        LODWORD(v24) = 4;
      v27 = (char *)RtlAllocateHeap(v25->ProcessHeap, 0, 8LL * (unsigned int)v24);
      if ( v27 )
      {
        if ( (((_DWORD)v24 - 1) & (unsigned int)v24) != 0 )
        {
          do
          {
            ++v23;
            LODWORD(v24) = (unsigned int)v24 >> 1;
          }
          while ( (_DWORD)v24 );
          LODWORD(v24) = 1 << v23;
        }
        if ( (unsigned int)v24 > 0x4000000 )
          LODWORD(v24) = 0x4000000;
        v28 = 0LL;
        v29 = (unsigned int)v24;
        if ( v27 > &v27[8 * (unsigned int)v24] )
          v29 = 0LL;
        if ( v29 )
          memset64(v27, v17 | 1, v29);
        v30 = 0;
        v31 = -1LL << (*(_BYTE *)(v17 + 4) & 0x1F);
        if ( (*(_DWORD *)(v17 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v26 = (_QWORD **)(*(_QWORD *)(v17 + 8) + 8LL * v30);
            while ( 1 )
            {
              v28 = *v26;
              if ( ((unsigned __int8)*v26 & 1) != 0 )
                break;
              *v26 = (_QWORD *)*v28;
              v32 = ((((unsigned __int64)v31 & v28[1]) >> 56)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v31 & v28[1]) >> 48)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v31 & v28[1]) >> 32) >> 8)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v31 & v28[1]) >> 32)
                      + 37
                      * ((((unsigned int)v31 & (_DWORD)v28[1]) >> 24)
                       + 37
                       * ((unsigned __int8)(((unsigned int)v31 & (_DWORD)v28[1]) >> 16)
                        + 37
                        * ((unsigned __int8)((unsigned __int16)(v31 & v28[1]) >> 8)
                         + 37 * ((unsigned __int8)(v31 & v28[1]) + 11623883)))))))) & (unsigned int)(v24 - 1);
              *v28 = *(_QWORD *)&v27[8 * v32];
              *(_QWORD *)&v27[8 * v32] = v28;
            }
            ++v30;
          }
          while ( v30 < *(_DWORD *)(v17 + 4) >> 5 );
        }
        *(_DWORD *)(v17 + 4) &= 0x1Fu;
        v33 = *(_QWORD *)(v17 + 8);
        *(_DWORD *)(v17 + 4) |= 32 * v24;
        *(_QWORD *)(v17 + 8) = v27;
        if ( v33 )
          CempHeapFree(v33, 0LL, v28, v26);
      }
    }
  }
  v18 = *(_DWORD *)(v17 + 4);
  v19 = v12[1] & (-1LL << (v18 & 0x1F));
  v20 = (_QWORD *)(*(_QWORD *)(v17 + 8)
                 + 8
                 * ((HIBYTE(v19)
                   + 37
                   * (BYTE6(v19)
                    + 37
                    * (BYTE5(v19)
                     + 37
                     * (BYTE4(v19)
                      + 37
                      * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))) & ((v18 >> 5) - 1)));
  *v12 = *v20;
  *v20 = v12;
  ++*(_DWORD *)v17;
  RtlReleaseSRWLockExclusive(v17 + 16);
  *a7 = v15;
  v21 = 0;
  return v21 | 0x10000000u;
}
