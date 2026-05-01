/*
 * XREFs of ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010840
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x1800023F4 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180010290 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180010550 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010840 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011CCC (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010220 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?HasLowerPrecedenceThan@BaseResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x1800107D0 (-HasLowerPrecedenceThan@BaseResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010840 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___ @ 0x180015E20 (utl--list_ATL--CComPtr_ExecutionModel--BaseResourceSet__utl--allocator_ATL--CComPtr_ExecutionMod.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18001F8FC (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800269EC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::RecursiveVisit(
        ExecutionModel::BaseResourceSet *this,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        char a6,
        _BYTE *a7,
        _BYTE *a8,
        __int64 *a9,
        __int64 a10)
{
  bool v10; // zf
  _BYTE *v12; // rbx
  int v13; // r8d
  unsigned int v15; // edx
  struct ExecutionModel::_ResourceInfo *v16; // rbx
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  char *v19; // r11
  bool (__fastcall *v20)(ExecutionModel::BaseResourceSet *, struct ExecutionModel::_ResourceInfo *); // rax
  char HasLowerPrecedenceThan; // al
  __int64 v22; // rax
  char v23; // r9
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // ecx
  _QWORD *v28; // rax
  _BYTE *v29; // rax
  __int64 result; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 *v34; // rdi
  __int64 (__fastcall *v35)(ExecutionModel::BaseResourceSet *); // rax
  __int64 v36; // rdi
  _QWORD *v37; // rax
  ExecutionModel::BaseResourceSet *v38; // rbx
  _QWORD *v39; // rax
  char v40; // di
  __int64 (__fastcall *v41)(ExecutionModel::BaseResourceSet *); // rax
  char *v42; // rax
  char **v43; // rdi
  unsigned int v44; // [rsp+50h] [rbp-28h]
  char *v45; // [rsp+58h] [rbp-20h]
  _QWORD *v46; // [rsp+58h] [rbp-20h]
  ExecutionModel::BaseResourceSet *v47; // [rsp+80h] [rbp+8h] BYREF
  int v48; // [rsp+88h] [rbp+10h]
  unsigned int *v49; // [rsp+98h] [rbp+20h]

  v49 = a4;
  v48 = a2;
  v10 = *((_DWORD *)this + 350) == 2;
  v12 = a8;
  v13 = a2;
  *a8 = 0;
  if ( !v10 )
    return 0LL;
  v15 = 0;
  LOBYTE(v47) = 0;
  v44 = 0;
  if ( !a3 )
  {
    v26 = (__int64)a9;
    goto LABEL_25;
  }
  v16 = (struct ExecutionModel::_ResourceInfo *)a4;
  do
  {
    v17 = *(unsigned int *)v16;
    if ( (unsigned int)v17 > 0x31 )
      goto LABEL_22;
    v18 = 24 * ((int)v17 + 8LL);
    v19 = (char *)this + v18;
    v45 = (char *)this + v18;
    if ( *(_QWORD *)((char *)this + v18 + 8) )
    {
      if ( *((int *)v16 + 4) >= 101 )
        goto LABEL_22;
      if ( a6 )
      {
        v20 = *(bool (__fastcall **)(ExecutionModel::BaseResourceSet *, struct ExecutionModel::_ResourceInfo *))(*(_QWORD *)this + 72LL);
        if ( v20 == ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan )
          HasLowerPrecedenceThan = ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan(this, v16);
        else
          HasLowerPrecedenceThan = ((__int64 (__fastcall *)(ExecutionModel::BaseResourceSet *, struct ExecutionModel::_ResourceInfo *, _QWORD, bool (__fastcall *)(ExecutionModel::BaseResourceSet *, struct ExecutionModel::_ResourceInfo *)))v20)(
                                     this,
                                     v16,
                                     a5,
                                     ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan);
        v15 = v44;
        v13 = v48;
        if ( !HasLowerPrecedenceThan )
          goto LABEL_22;
        v19 = v45;
      }
      v22 = *((_QWORD *)this + 174);
      if ( _bittest64(&v22, v17) )
        v23 = 1;
      else
        v23 = 0;
      v24 = *((_QWORD *)v19 + 1);
      v25 = *((_QWORD *)v16 + 1);
      if ( v24 < v25 )
        v25 = *((_QWORD *)v19 + 1);
      if ( v23 )
        v25 = *((_QWORD *)v16 + 1);
      if ( v13 )
      {
        if ( v13 != 1 )
          __fastfail(0xC0000001);
        if ( !v23 )
          *((_QWORD *)v19 + 1) = v24 - v25;
        v31 = a10;
        v32 = 3 * (*(int *)v16 + 8LL);
        *(_OWORD *)(a10 + 8 * v32) = *(_OWORD *)v16;
        *(_QWORD *)(v31 + 8 * v32 + 16) = *((_QWORD *)v16 + 2);
      }
      else if ( *((_QWORD *)this + 23) )
      {
        LOBYTE(v47) = 1;
      }
      *((_QWORD *)v16 + 1) -= v25;
      v13 = v48;
    }
    else if ( !*((_QWORD *)v16 + 1) && v13 == 1 )
    {
      v33 = a10;
      *(_OWORD *)(v18 + a10) = *(_OWORD *)v16;
      *(_QWORD *)(v18 + v33 + 16) = *((_QWORD *)v16 + 2);
    }
LABEL_22:
    ++v15;
    v16 = (struct ExecutionModel::_ResourceInfo *)((char *)v16 + 24);
    v44 = v15;
  }
  while ( v15 < a3 );
  v26 = (__int64)a9;
  if ( (_BYTE)v47 && a9 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v47, this);
    v34 = a9;
    utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___(
      a9,
      &v47);
    if ( v47 )
    {
      v35 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v47 + 16LL);
      if ( v35 == ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v47);
      }
      else if ( (char *)v35 == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v47);
      }
      else
      {
        ((void (__fastcall *)(ExecutionModel::BaseResourceSet *, unsigned int (__fastcall *)(ExecutionModel::ResourceSet *__hidden), __int64 (__fastcall *)(ExecutionModel::BaseResourceSet *)))v35)(
          v47,
          ExecutionModel::ResourceSet::Release,
          ExecutionModel::BaseResourceSet::Release);
      }
    }
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v47, this);
    v36 = *v34;
    v37 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_180052633);
    v38 = v47;
    v46 = v37;
    if ( v37 )
    {
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(v37 + 2, v47);
      v39 = *(_QWORD **)(v36 + 8);
      v26 = (__int64)a9;
      *v46 = v36;
      v46[1] = v39;
      *v39 = v46;
      *(_QWORD *)(v36 + 8) = v46;
      ++*(_QWORD *)(v26 + 16);
      v40 = 0;
    }
    else
    {
      v26 = (__int64)a9;
      v40 = 1;
    }
    if ( v38 )
    {
      v41 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v38 + 16LL);
      if ( v41 == ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v38);
      }
      else if ( (char *)v41 == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v38);
      }
      else
      {
        ((void (__fastcall *)(ExecutionModel::BaseResourceSet *, __int64))v41)(v38, v26);
      }
      v26 = (__int64)a9;
    }
    if ( v40 )
      return 2147500037LL;
  }
  v12 = a8;
  a4 = v49;
LABEL_25:
  v27 = 0;
  if ( a3 )
  {
    v28 = a4 + 2;
    while ( !*v28 )
    {
      ++v27;
      v28 += 3;
      if ( v27 >= a3 )
        goto LABEL_29;
    }
    *a7 = 1;
    v42 = (char *)this + 160;
    while ( v42 != *((char **)this + 20) )
    {
      v43 = (char **)(v42 + 8);
      result = ExecutionModel::BaseResourceSet::RecursiveVisit(
                 *(ExecutionModel::BaseResourceSet **)(*((_QWORD *)v42 + 1) + 16LL),
                 a5,
                 a6,
                 (__int64)&a8,
                 (__int64)v12,
                 v26,
                 a10);
      if ( (int)result < 0 )
        return result;
      if ( *v12 )
        break;
      v42 = *v43;
      v26 = (__int64)a9;
    }
  }
  else
  {
LABEL_29:
    v29 = a7;
    *v12 = 1;
    *v29 = 0;
  }
  return 0LL;
}
