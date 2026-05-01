/*
 * XREFs of ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18001EA30
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180001EF4 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800021B4 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18001E7A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18001EA30 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180020370 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x1800204B0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 * Callees:
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18000320C (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800032E0 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18001EA30 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?HasLowerPrecedenceThan@BaseResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x18001EE00 (-HasLowerPrecedenceThan@BaseResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z.c)
 *     utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___ @ 0x1800234A0 (utl--list_ATL--CComPtr_ExecutionModel--BaseResourceSet__utl--allocator_ATL--CComPtr_ExecutionMod.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F5B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 ExecutionModel::BaseResourceSet::RecursiveVisit(
        ExecutionModel::BaseResourceSet *this,
        int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int a5,
        char a6,
        _BYTE *a7,
        ...)
{
  bool v7; // zf
  _QWORD *v8; // r10
  ExecutionModel::ExternalResourceSet *v9; // rbp
  int v11; // r11d
  ExecutionModel::BaseResourceSet *v12; // r9
  char v13; // cl
  unsigned int v14; // edi
  struct ExecutionModel::_ResourceInfo *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  bool (__fastcall *v18)(ExecutionModel::BaseResourceSet *__hidden, struct ExecutionModel::_ResourceInfo *, unsigned int); // rax
  bool HasLowerPrecedenceThan; // al
  unsigned __int64 v20; // r8
  __int64 v21; // r11
  unsigned __int64 v22; // r10
  __int64 v23; // rdx
  unsigned int v24; // ecx
  _QWORD *v25; // rax
  _BYTE *v26; // rax
  __int64 result; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rdi
  unsigned int (__fastcall *v32)(ExecutionModel::ExternalResourceSet *); // rax
  __int64 v33; // rdi
  void *v34; // rax
  ExecutionModel::ExternalResourceSet *v35; // rbx
  _QWORD *v36; // rax
  char v37; // di
  unsigned int (__fastcall *v38)(ExecutionModel::ExternalResourceSet *); // rax
  char **v39; // rbx
  char *v40; // rax
  char **v41; // rdi
  char v42; // [rsp+50h] [rbp-28h]
  __int64 v43; // [rsp+58h] [rbp-20h]
  _QWORD *v44; // [rsp+58h] [rbp-20h]
  __int64 v45; // [rsp+80h] [rbp+8h] BYREF
  int v46; // [rsp+88h] [rbp+10h]
  _QWORD *v47; // [rsp+98h] [rbp+20h]
  ExecutionModel::ExternalResourceSet *v48; // [rsp+B8h] [rbp+40h] BYREF
  va_list va; // [rsp+B8h] [rbp+40h]
  __int64 *v50; // [rsp+C0h] [rbp+48h]
  __int64 v51; // [rsp+C8h] [rbp+50h]
  va_list va1; // [rsp+D0h] [rbp+58h] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  v48 = va_arg(va1, ExecutionModel::ExternalResourceSet *);
  v50 = va_arg(va1, __int64 *);
  v51 = va_arg(va1, _QWORD);
  v47 = a4;
  v46 = a2;
  v45 = (__int64)this;
  v7 = *((_DWORD *)this + 350) == 2;
  v8 = a4;
  v9 = v48;
  v11 = a2;
  v12 = this;
  *(_BYTE *)v48 = 0;
  if ( !v7 )
    return 0LL;
  v13 = 0;
  v14 = 0;
  LOBYTE(v48) = 0;
  if ( !a3 )
  {
    v23 = (__int64)v50;
    goto LABEL_24;
  }
  v15 = (struct ExecutionModel::_ResourceInfo *)v8;
  do
  {
    v16 = *(int *)v15;
    v42 = *(_DWORD *)v15;
    if ( (unsigned int)v16 > 0x31 )
      goto LABEL_21;
    v17 = 24 * (v16 + 8);
    v43 = v17;
    if ( *(_QWORD *)((char *)v12 + v17 + 8) )
    {
      if ( *((int *)v15 + 4) < 101 )
      {
        if ( a6 )
        {
          v18 = *(bool (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden, struct ExecutionModel::_ResourceInfo *, unsigned int))(*(_QWORD *)v12 + 72LL);
          if ( v18 == ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan )
            HasLowerPrecedenceThan = ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan(v12, v15, a5);
          else
            HasLowerPrecedenceThan = v18(v12, v15, a5);
          v12 = (ExecutionModel::BaseResourceSet *)v45;
          if ( !HasLowerPrecedenceThan )
          {
            v13 = (char)v48;
            goto LABEL_20;
          }
          v17 = v43;
        }
        v20 = *(_QWORD *)((char *)v12 + v17 + 8);
        v21 = (1LL << v42) & *((_QWORD *)v12 + 174);
        v22 = *((_QWORD *)v15 + 1);
        if ( v20 < v22 )
          v22 = *(_QWORD *)((char *)v12 + v17 + 8);
        if ( v21 )
          v22 = *((_QWORD *)v15 + 1);
        if ( v46 )
        {
          if ( v46 != 1 )
            __fastfail(0xC0000001);
          if ( !v21 )
            *(_QWORD *)((char *)v12 + v17 + 8) = v20 - v22;
          v28 = v51;
          v29 = 3 * (*(int *)v15 + 8LL);
          *(_OWORD *)(v51 + 8 * v29) = *(_OWORD *)v15;
          *(_QWORD *)(v28 + 8 * v29 + 16) = *((_QWORD *)v15 + 2);
        }
        else if ( *((_QWORD *)v12 + 23) )
        {
          v13 = 1;
          LOBYTE(v48) = 1;
          goto LABEL_19;
        }
        v13 = (char)v48;
LABEL_19:
        *((_QWORD *)v15 + 1) -= v22;
LABEL_20:
        v11 = v46;
      }
    }
    else if ( !*((_QWORD *)v15 + 1) && v11 == 1 )
    {
      v30 = v51;
      *(_OWORD *)(v17 + v51) = *(_OWORD *)v15;
      *(_QWORD *)(v17 + v30 + 16) = *((_QWORD *)v15 + 2);
    }
LABEL_21:
    ++v14;
    v15 = (struct ExecutionModel::_ResourceInfo *)((char *)v15 + 24);
  }
  while ( v14 < a3 );
  v23 = (__int64)v50;
  if ( v13 && v50 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(
      (ExecutionModel::ExternalResourceSet **)va,
      v12);
    v31 = v50;
    utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___(
      v50,
      (ExecutionModel::ExternalResourceSet **)va);
    if ( v48 )
    {
      v32 = *(unsigned int (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v48 + 16LL);
      if ( v32 == ExecutionModel::ExternalResourceSet::Release )
        ExecutionModel::ExternalResourceSet::Release(v48);
      else
        ((void (__fastcall *)(ExecutionModel::ExternalResourceSet *, unsigned int (__fastcall *)(ExecutionModel::ExternalResourceSet *)))v32)(
          v48,
          ExecutionModel::ExternalResourceSet::Release);
    }
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(
      (ExecutionModel::ExternalResourceSet **)va,
      (ExecutionModel::ExternalResourceSet *)v45);
    v33 = *v31;
    v34 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v35 = v48;
    v44 = v34;
    if ( v34 )
    {
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(
        (ExecutionModel::ExternalResourceSet **)v34 + 2,
        v48);
      v36 = *(_QWORD **)(v33 + 8);
      v23 = (__int64)v50;
      *v44 = v33;
      v44[1] = v36;
      *v36 = v44;
      *(_QWORD *)(v33 + 8) = v44;
      ++*(_QWORD *)(v23 + 16);
      v37 = 0;
    }
    else
    {
      v23 = (__int64)v50;
      v37 = 1;
    }
    if ( v35 )
    {
      v38 = *(unsigned int (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v35 + 16LL);
      if ( v38 == ExecutionModel::ExternalResourceSet::Release )
        ExecutionModel::ExternalResourceSet::Release(v35);
      else
        ((void (__fastcall *)(ExecutionModel::ExternalResourceSet *, __int64))v38)(v35, v23);
      v23 = (__int64)v50;
    }
    if ( v37 )
      return 2147500037LL;
    v12 = (ExecutionModel::BaseResourceSet *)v45;
    v8 = v47;
  }
  else
  {
    v8 = v47;
  }
LABEL_24:
  v24 = 0;
  if ( a3 )
  {
    v25 = v8 + 1;
    while ( !*v25 )
    {
      ++v24;
      v25 += 3;
      if ( v24 >= a3 )
        goto LABEL_28;
    }
    v39 = (char **)((char *)v12 + 160);
    *a7 = 1;
    v40 = (char *)v12 + 160;
    while ( v40 != *v39 )
    {
      v41 = (char **)(v40 + 8);
      result = ExecutionModel::BaseResourceSet::RecursiveVisit(
                 *(ExecutionModel::BaseResourceSet **)(*((_QWORD *)v40 + 1) + 16LL),
                 a5,
                 a6,
                 (__int64)&v45,
                 v9,
                 v23,
                 v51);
      if ( (int)result < 0 )
        return result;
      if ( *(_BYTE *)v9 )
        break;
      v40 = *v41;
      v23 = (__int64)v50;
    }
  }
  else
  {
LABEL_28:
    v26 = a7;
    *(_BYTE *)v9 = 1;
    *v26 = 0;
  }
  return 0LL;
}
