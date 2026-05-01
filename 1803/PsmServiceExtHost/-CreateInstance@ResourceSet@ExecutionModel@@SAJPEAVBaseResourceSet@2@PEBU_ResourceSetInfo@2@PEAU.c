/*
 * XREFs of ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@8PEAPEAV12@@Z @ 0x18001EF50
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18001DAC0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180014070 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x18001A360 (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001EDB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PEAU_RM_ACTIVITY_HOST@@PEAXPEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180021570 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PE.c)
 *     ?AddRef@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x180022E30 (-AddRef@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18003AA48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18004E8F0 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x18005B774 (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateInstance(
        struct ExecutionModel::BaseResourceSet *a1,
        __int128 *a2,
        struct _RM_PARTITION *a3,
        void *a4,
        HAM_ACTIVITY_RM_CONTEXT *a5,
        __int64 a6,
        struct _RM_ACTIVITY_HOST *a7,
        void *Src,
        _OWORD *a9,
        int a10,
        int a11,
        __int64 a12,
        int a13,
        struct _RM_ACTIVATOR *a14,
        struct IUnknown *a15,
        unsigned __int64 a16,
        ExecutionModel::BaseResourceSet **a17)
{
  __int64 v17; // rax
  struct _RM_PARTITION *v19; // rbp
  __int64 v20; // r12
  int v21; // eax
  ExecutionModel::BaseResourceSet *v22; // rdi
  unsigned int v23; // ebx
  void *v24; // rsi
  unsigned __int64 v25; // rbx
  ExecutionModel::BaseResourceSet *v26; // rcx
  char **v27; // r15
  char *v28; // rax
  char *v29; // rbp
  size_t v30; // rbx
  char *v31; // rbx
  char **v32; // rcx
  void *v33; // rax
  char *v34; // rcx
  _OWORD *v35; // rax
  int v36; // eax
  char *v37; // rcx
  __int64 v38; // rdx
  __int128 *v39; // rax
  __int128 v40; // xmm0
  HAM_ACTIVITY_RM_CONTEXT *v41; // rbx
  int v42; // eax
  unsigned int (__fastcall *v43)(HAM_ACTIVITY_RM_CONTEXT *__hidden); // rax
  __int64 v44; // rcx
  unsigned __int64 *v45; // rsi
  __int64 v46; // rbx
  __int64 (__fastcall *v47)(ExecutionModel::BaseResourceSet *); // rax
  _DWORD *v48; // rbx
  __int64 (__fastcall *v49)(ExecutionModel::BaseResourceSet *); // rax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  _QWORD *v52; // r8
  _QWORD *v53; // r10
  _QWORD *v54; // rcx
  _QWORD *v55; // rax
  struct IUnknown *v56; // rbx
  _WORD *v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // r9
  unsigned __int64 *v61; // r8
  char *v62; // r10
  __int64 v63; // r8
  __int64 v64; // r9
  void *v65[9]; // [rsp+40h] [rbp-48h] BYREF
  ExecutionModel::BaseResourceSet *v66; // [rsp+90h] [rbp+8h] BYREF
  struct _RM_PARTITION *v67; // [rsp+A0h] [rbp+18h]

  v67 = a3;
  v17 = *((_QWORD *)a1 + 3);
  v19 = a3;
  v66 = 0LL;
  v20 = *(_QWORD *)(v17 + 152);
  v21 = ExecutionModel::ResourceSet::ResourceSetFactory(a16, a1, a3, a7, a4, a14, &v66);
  v22 = v66;
  v23 = v21;
  if ( v21 >= 0 )
  {
    v24 = Src;
    if ( !Src )
    {
LABEL_12:
      v35 = a9;
      if ( a9 )
      {
        *((_OWORD *)v22 + 4) = *a9;
        *((_OWORD *)v22 + 5) = v35[1];
        *((_OWORD *)v22 + 6) = v35[2];
        *((_OWORD *)v22 + 7) = v35[3];
        v36 = *((_DWORD *)v35 + 16);
      }
      else
      {
        *((_OWORD *)v22 + 4) = *(_OWORD *)(v20 + 2092);
        *((_OWORD *)v22 + 5) = *(_OWORD *)(v20 + 2108);
        *((_OWORD *)v22 + 6) = *(_OWORD *)(v20 + 2124);
        *((_OWORD *)v22 + 7) = *(_OWORD *)(v20 + 2140);
        v36 = *(_DWORD *)(v20 + 2156);
      }
      *((_DWORD *)v22 + 32) = v36;
      v37 = (char *)v22 + 1456;
      v38 = 2LL;
      *((_DWORD *)v22 + 33) = a10;
      *((_DWORD *)v22 + 34) = a11;
      *((_QWORD *)v22 + 18) = a12;
      v39 = a2;
      do
      {
        v37 += 128;
        v40 = *v39;
        v39 += 8;
        *((_OWORD *)v37 - 8) = v40;
        *((_OWORD *)v37 - 7) = *(v39 - 7);
        *((_OWORD *)v37 - 6) = *(v39 - 6);
        *((_OWORD *)v37 - 5) = *(v39 - 5);
        *((_OWORD *)v37 - 4) = *(v39 - 4);
        *((_OWORD *)v37 - 3) = *(v39 - 3);
        *((_OWORD *)v37 - 2) = *(v39 - 2);
        *((_OWORD *)v37 - 1) = *(v39 - 1);
        --v38;
      }
      while ( v38 );
      v41 = a5;
      *(_OWORD *)v37 = *v39;
      *((_OWORD *)v37 + 1) = v39[1];
      *((_OWORD *)v37 + 2) = v39[2];
      *((_OWORD *)v37 + 3) = v39[3];
      *((_OWORD *)v37 + 4) = v39[4];
      *((_OWORD *)v37 + 5) = v39[5];
      *((_OWORD *)v37 + 6) = v39[6];
      *((_QWORD *)v37 + 14) = *((_QWORD *)v39 + 14);
      *((_DWORD *)v22 + 352) = *((_DWORD *)a2 + 2);
      *((_DWORD *)v22 + 353) = *((_DWORD *)a2 + 8);
      v42 = a13;
      *((_DWORD *)v22 + 2) = 0;
      *((_DWORD *)v22 + 38) = v42;
      *((_DWORD *)v22 + 350) = 1;
      if ( *((HAM_ACTIVITY_RM_CONTEXT **)v22 + 229) != v41 )
      {
        if ( v41 )
        {
          v43 = *(unsigned int (__fastcall **)(HAM_ACTIVITY_RM_CONTEXT *__hidden))(*(_QWORD *)v41 + 8LL);
          if ( v43 == HAM_ACTIVITY_RM_CONTEXT::AddRef )
            HAM_ACTIVITY_RM_CONTEXT::AddRef(v41);
          else
            v43(v41);
        }
        v44 = *((_QWORD *)v22 + 229);
        if ( v44 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
        *((_QWORD *)v22 + 229) = v41;
      }
      v45 = (unsigned __int64 *)a2 + 11;
      *((_QWORD *)v22 + 230) = a6;
      *((_QWORD *)v22 + 231) = *((_QWORD *)a2 + 11);
      *((_QWORD *)v22 + 232) = *((_QWORD *)a2 + 14);
      *((_QWORD *)v22 + 233) = *((_QWORD *)a2 + 17);
      *((_OWORD *)v22 + 12) = a2[5];
      *((_OWORD *)v22 + 13) = a2[6];
      *((_OWORD *)v22 + 14) = a2[7];
      *((_OWORD *)v22 + 15) = a2[8];
      *((_QWORD *)v22 + 32) = *((_QWORD *)a2 + 18);
      v46 = *((_QWORD *)v22 + 180);
      v47 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v22 + 8LL);
      if ( v47 == ExecutionModel::BaseResourceSet::AddRef )
        ExecutionModel::BaseResourceSet::AddRef(v22);
      else
        v47(v22);
      v48 = (_DWORD *)(v46 + 1008);
      v49 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v22 + 8LL);
      if ( v49 == ExecutionModel::BaseResourceSet::AddRef )
        ExecutionModel::BaseResourceSet::AddRef(v22);
      else
        v49(v22);
      v50 = *(_QWORD *)v48;
      v51 = (_QWORD *)((char *)v22 + 1416);
      if ( *(_DWORD **)(*(_QWORD *)v48 + 8LL) != v48 )
        __fastfail(3u);
      *v51 = v50;
      *((_QWORD *)v22 + 178) = v48;
      *(_QWORD *)(v50 + 8) = v51;
      *(_QWORD *)v48 = v51;
      ++v48[4];
      *((_DWORD *)v22 + 362) = 0;
      v52 = (_QWORD *)*((_QWORD *)v19 + 25);
      v53 = (_QWORD *)*((_QWORD *)v22 + 179);
      if ( v52 != (_QWORD *)((char *)v19 + 200) )
      {
        v59 = *(unsigned int *)(v53[6] + 1408LL);
        do
        {
          if ( (int)RmpEmPriorityCompare(v59, *(unsigned int *)(*(v52 - 11) + 1408LL)) > 0 )
            break;
          v52 = (_QWORD *)*v52;
        }
        while ( v52 != v60 );
      }
      v54 = (_QWORD *)v52[1];
      v55 = v53 + 17;
      if ( (_QWORD *)*v54 != v52 )
        __fastfail(3u);
      *v55 = v52;
      v53[18] = v54;
      *v54 = v55;
      v52[1] = v55;
      if ( (*((_BYTE *)a2 + 42) & 0x20) != 0 && (a2[1] & 0x100) == 0 )
        *((_DWORD *)v22 + 363) |= 0x80u;
      v56 = a15;
      if ( a15 )
      {
        v61 = (unsigned __int64 *)((char *)v22 + 1544);
        v62 = (char *)((char *)a15 - (char *)a2);
        do
        {
          RmpCommitValuesSubtract(*v45, *(unsigned __int64 *)((char *)v45 + (_QWORD)v62 + 112), v61);
          v61 = (unsigned __int64 *)(v63 + 24);
          v45 += 3;
        }
        while ( v64 != 1 );
        ExecutionModel::ResourceSet::SetTransitionalPriorities(
          v56,
          *((unsigned int *)a2 + 2),
          *((unsigned int *)a2 + 8));
        if ( SBYTE4(v56[181].lpVtbl) < 0 )
          *((_DWORD *)v22 + 363) |= 0x80u;
        if ( *((struct IUnknown **)v22 + 234) != v56 )
          ATL::AtlComPtrAssign((struct IUnknown **)v22 + 234, v56);
      }
      v23 = 0;
      *a17 = v22;
      return v23;
    }
    v25 = -1LL;
    do
      ++v25;
    while ( *((_WORD *)Src + v25) );
    v26 = (ExecutionModel::BaseResourceSet *)*((_QWORD *)v66 + 4);
    v27 = (char **)((char *)v66 + 48);
    if ( v26 == (ExecutionModel::BaseResourceSet *)((char *)v66 + 48) )
      v28 = (char *)v66 + 62;
    else
      v28 = *v27;
    if ( v25 <= (v28 - (char *)v26) >> 1 )
    {
      if ( v26 != Src )
      {
        memmove(v26, Src, 2 * v25);
        v26 = (ExecutionModel::BaseResourceSet *)*((_QWORD *)v22 + 4);
      }
      v58 = (_WORD *)((char *)v26 + 2 * v25);
      *((_QWORD *)v22 + 5) = v58;
      *v58 = 0;
      goto LABEL_12;
    }
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      (_QWORD *)v66 + 4,
      v65,
      v25);
    v29 = (char *)v65[0];
    if ( v65[0] )
    {
      v30 = 2 * v25;
      memcpy_0(v65[0], v24, v30);
      v31 = &v29[v30];
      *(_WORD *)v31 = 0;
      v32 = (char **)*((_QWORD *)v22 + 4);
      if ( v32 != v27 )
        operator delete(v32);
      v33 = v65[1];
      v34 = v29 - 2;
      *((_QWORD *)v22 + 4) = v29;
      v19 = v67;
      *((_QWORD *)v22 + 5) = v31;
      *v27 = &v34[2 * (_QWORD)v33];
      goto LABEL_12;
    }
    v23 = -2147024882;
  }
  if ( v22 )
  {
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *, _QWORD))(*(_QWORD *)v22 + 32LL))(v22, 0LL);
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v23;
}
