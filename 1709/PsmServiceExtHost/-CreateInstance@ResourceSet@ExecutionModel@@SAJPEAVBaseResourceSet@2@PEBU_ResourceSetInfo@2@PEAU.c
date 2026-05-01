/*
 * XREFs of ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@8PEAPEAV12@@Z @ 0x1800126B0
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18000F210 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180008D7C (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800107F0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x180011AA8 (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PEAXPEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180013B60 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PE.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18001EE28 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18001F8EC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateInstance(
        struct ExecutionModel::BaseResourceSet *a1,
        __int64 a2,
        struct _RM_PARTITION *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        ExecutionModel::BaseResourceSet *Src,
        __int64 a9,
        int a10,
        int a11,
        __int64 a12,
        int a13,
        struct _RM_ACTIVATOR *a14,
        struct IUnknown *a15,
        unsigned __int64 a16,
        ExecutionModel::BaseResourceSet **a17)
{
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r14
  int v21; // eax
  ExecutionModel::BaseResourceSet *v22; // rdi
  unsigned int v23; // ebx
  unsigned __int64 v24; // rbx
  ExecutionModel::BaseResourceSet *v25; // rcx
  char **v26; // r15
  char *v27; // rax
  char *v28; // rbp
  size_t v29; // rbx
  char *v30; // rbx
  char **v31; // rcx
  void *v32; // rax
  char *v33; // rcx
  int v34; // eax
  __int64 v35; // rsi
  __int128 *v36; // rcx
  __int64 v37; // rdx
  char *v38; // rax
  __int128 v39; // xmm0
  unsigned int *v40; // r14
  unsigned int *v41; // r15
  __int64 v42; // rcx
  __int64 (__fastcall *v43)(ExecutionModel::BaseResourceSet *); // rax
  __int64 *v44; // rbx
  __int64 (__fastcall *v45)(ExecutionModel::BaseResourceSet *); // rax
  __int64 v46; // rdx
  _QWORD *v47; // rax
  _QWORD *v48; // r10
  _QWORD *v49; // r8
  _QWORD *v50; // rcx
  _QWORD *v51; // rax
  struct IUnknown *v52; // rbx
  _QWORD *v54; // rcx
  __int64 v55; // r13
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // r9
  _WORD *v60; // rcx
  ExecutionModel::BaseResourceSet *v61; // [rsp+30h] [rbp-128h] BYREF
  __int64 v62; // [rsp+40h] [rbp-118h]
  struct _RM_PARTITION *v63; // [rsp+48h] [rbp-110h]
  struct IUnknown *v64; // [rsp+50h] [rbp-108h]
  ExecutionModel::BaseResourceSet **v65; // [rsp+58h] [rbp-100h]
  void *v66[2]; // [rsp+60h] [rbp-F8h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+70h] [rbp-E8h] BYREF

  v18 = a7;
  v64 = a15;
  v65 = a17;
  v61 = 0LL;
  v19 = *((_QWORD *)a1 + 3);
  v63 = a3;
  v62 = a7;
  v20 = *(_QWORD *)(v19 + 208);
  v21 = ExecutionModel::ResourceSet::ResourceSetFactory(a16, a1, a3, a4, a14, &v61);
  v22 = v61;
  v23 = v21;
  if ( v21 >= 0 )
  {
    if ( !Src )
    {
LABEL_12:
      if ( a9 )
      {
        *((_OWORD *)v22 + 4) = *(_OWORD *)a9;
        *((_OWORD *)v22 + 5) = *(_OWORD *)(a9 + 16);
        *((_OWORD *)v22 + 6) = *(_OWORD *)(a9 + 32);
        *((_OWORD *)v22 + 7) = *(_OWORD *)(a9 + 48);
        v34 = *(_DWORD *)(a9 + 64);
      }
      else
      {
        *((_OWORD *)v22 + 4) = *(_OWORD *)(v20 + 1756);
        *((_OWORD *)v22 + 5) = *(_OWORD *)(v20 + 1772);
        *((_OWORD *)v22 + 6) = *(_OWORD *)(v20 + 1788);
        *((_OWORD *)v22 + 7) = *(_OWORD *)(v20 + 1804);
        v34 = *(_DWORD *)(v20 + 1820);
      }
      *((_DWORD *)v22 + 32) = v34;
      v35 = 3LL;
      v36 = (__int128 *)a2;
      *((_DWORD *)v22 + 33) = a10;
      v37 = 3LL;
      *((_DWORD *)v22 + 34) = a11;
      *((_QWORD *)v22 + 18) = a12;
      v38 = (char *)v22 + 1456;
      do
      {
        v38 += 128;
        v39 = *v36;
        v36 += 8;
        *((_OWORD *)v38 - 8) = v39;
        *((_OWORD *)v38 - 7) = *(v36 - 7);
        *((_OWORD *)v38 - 6) = *(v36 - 6);
        *((_OWORD *)v38 - 5) = *(v36 - 5);
        *((_OWORD *)v38 - 4) = *(v36 - 4);
        *((_OWORD *)v38 - 3) = *(v36 - 3);
        *((_OWORD *)v38 - 2) = *(v36 - 2);
        *((_OWORD *)v38 - 1) = *(v36 - 1);
        --v37;
      }
      while ( v37 );
      v40 = (unsigned int *)(a2 + 8);
      *((_DWORD *)v22 + 352) = *(_DWORD *)(a2 + 8);
      v41 = (unsigned int *)(a2 + 32);
      *((_DWORD *)v22 + 353) = *(_DWORD *)(a2 + 32);
      *((_DWORD *)v22 + 2) = 0;
      *((_DWORD *)v22 + 38) = a13;
      *((_DWORD *)v22 + 350) = 1;
      if ( *((_QWORD *)v22 + 230) != a5 )
      {
        if ( a5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
        v42 = *((_QWORD *)v22 + 230);
        if ( v42 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
        *((_QWORD *)v22 + 230) = a5;
      }
      *((_QWORD *)v22 + 231) = a6;
      *((_QWORD *)v22 + 232) = *(_QWORD *)(a2 + 96);
      *((_QWORD *)v22 + 233) = *(_QWORD *)(a2 + 120);
      *((_QWORD *)v22 + 234) = *(_QWORD *)(a2 + 144);
      *((_OWORD *)v22 + 12) = *(_OWORD *)(a2 + 88);
      *((_OWORD *)v22 + 13) = *(_OWORD *)(a2 + 104);
      *((_OWORD *)v22 + 14) = *(_OWORD *)(a2 + 120);
      *((_OWORD *)v22 + 15) = *(_OWORD *)(a2 + 136);
      *((_QWORD *)v22 + 32) = *(_QWORD *)(a2 + 152);
      if ( v18 )
      {
        if ( !*((_QWORD *)v22 + 180) )
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(v18 + 16)) < 1 )
          {
            memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
            pExceptionRecord.ExceptionCode = -1073741675;
            pExceptionRecord.ExceptionFlags = 1;
            RaiseFailFastException(&pExceptionRecord, 0LL, 0);
          }
          *((_QWORD *)v22 + 180) = v18;
          v22 = v61;
        }
        v43 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v22 + 8LL);
        if ( v43 == ExecutionModel::BaseResourceSet::AddRef )
          ExecutionModel::BaseResourceSet::AddRef(v22);
        else
          v43(v22);
        v44 = (__int64 *)(v18 + 816);
        v45 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v22 + 8LL);
        if ( v45 == ExecutionModel::BaseResourceSet::AddRef )
          ExecutionModel::BaseResourceSet::AddRef(v22);
        else
          v45(v22);
        v46 = *v44;
        v47 = (_QWORD *)((char *)v22 + 1416);
        if ( *(__int64 **)(*v44 + 8) != v44 )
          __fastfail(3u);
        *v47 = v46;
        *((_QWORD *)v22 + 178) = v44;
        *(_QWORD *)(v46 + 8) = v47;
        *v44 = (__int64)v47;
        ++*(_DWORD *)(v18 + 832);
        v18 = 0LL;
        *((_DWORD *)v22 + 362) = 0;
      }
      v48 = (_QWORD *)*((_QWORD *)v22 + 179);
      v49 = (_QWORD *)*((_QWORD *)v63 + 25);
      if ( v49 != (_QWORD *)((char *)v63 + 200) )
      {
        v58 = *(unsigned int *)(v48[5] + 1408LL);
        do
        {
          if ( (int)RmpEmPriorityCompare(v58, *(unsigned int *)(*(v49 - 11) + 1408LL)) > 0 )
            break;
          v49 = (_QWORD *)*v49;
        }
        while ( v49 != v59 );
      }
      v50 = (_QWORD *)v49[1];
      v51 = v48 + 16;
      if ( (_QWORD *)*v50 != v49 )
        __fastfail(3u);
      *v51 = v49;
      v48[17] = v50;
      *v50 = v51;
      v49[1] = v51;
      if ( (*(_BYTE *)(a2 + 42) & 0x20) != 0 && (*(_WORD *)(a2 + 16) & 0x100) == 0 )
        *((_DWORD *)v22 + 363) |= 0x80u;
      v52 = v64;
      if ( v64 )
      {
        v54 = (_QWORD *)((char *)v22 + 1552);
        v55 = a2 - (_QWORD)v22;
        do
        {
          v56 = *(_QWORD *)((char *)v54 + v55 - 1456);
          v57 = *(_QWORD *)((char *)v54 + (char *)v52 - (char *)v22 - 1352);
          if ( v56 == -1LL )
          {
            *v54 = -1LL;
          }
          else if ( v56 < v57 )
          {
            *v54 = v18;
          }
          else
          {
            *v54 = v56 - v57;
          }
          v54 += 3;
          --v35;
        }
        while ( v35 );
        ExecutionModel::ResourceSet::SetTransitionalPriorities((__int64)v52, *v40, *v41);
        if ( SBYTE4(v52[181].lpVtbl) < 0 )
          *((_DWORD *)v22 + 363) |= 0x80u;
        if ( *((struct IUnknown **)v22 + 235) != v52 )
          ATL::AtlComPtrAssign((struct IUnknown **)v22 + 235, v52);
      }
      v23 = v18;
      *v65 = v22;
      return v23;
    }
    v24 = -1LL;
    do
      ++v24;
    while ( *((_WORD *)Src + v24) );
    v25 = (ExecutionModel::BaseResourceSet *)*((_QWORD *)v61 + 4);
    v26 = (char **)((char *)v61 + 48);
    if ( v25 == (ExecutionModel::BaseResourceSet *)((char *)v61 + 48) )
      v27 = (char *)v61 + 62;
    else
      v27 = *v26;
    if ( v24 <= (v27 - (char *)v25) >> 1 )
    {
      if ( v25 != Src )
        memmove(v25, Src, 2 * v24);
      v60 = (_WORD *)(*((_QWORD *)v22 + 4) + 2 * v24);
      *((_QWORD *)v22 + 5) = v60;
      *v60 = 0;
      goto LABEL_12;
    }
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      (_QWORD *)v61 + 4,
      v66,
      v24);
    v28 = (char *)v66[0];
    if ( v66[0] )
    {
      v29 = 2 * v24;
      memcpy_0(v66[0], Src, v29);
      v30 = &v28[v29];
      *(_WORD *)v30 = 0;
      v31 = (char **)*((_QWORD *)v22 + 4);
      if ( v31 != v26 )
        operator delete(v31);
      v32 = v66[1];
      v33 = v28 - 2;
      *((_QWORD *)v22 + 4) = v28;
      v18 = v62;
      *((_QWORD *)v22 + 5) = v30;
      *v26 = &v33[2 * (_QWORD)v32];
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
