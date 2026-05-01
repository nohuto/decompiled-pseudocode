/*
 * XREFs of ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18001E7A0
 * Callers:
 *     ?CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E4A0 (-CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INST.c)
 * Callees:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180001E14 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180003178 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18000320C (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800032E0 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18001E210 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18001EA30 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18002346C (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x18005C4B0 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18005C920 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::CheckAllPendingRequests(ExecutionModel::BaseResourceSet *this)
{
  char *v2; // rax
  __int64 v3; // rdx
  void **v4; // rbx
  char *v5; // r14
  char *i; // rbx
  ExecutionModel::ExternalResourceSet *v7; // rdi
  unsigned int (__fastcall *v8)(ExecutionModel::ExternalResourceSet *); // rax
  unsigned int (__fastcall *v9)(ExecutionModel::ExternalResourceSet *); // rax
  __int64 v10; // rdi
  unsigned int *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // rcx
  bool v16; // zf
  void **v17; // rcx
  _QWORD *v18; // rax
  ExecutionModel::ExternalResourceSet *v19; // rcx
  void (*v20)(void); // rax
  char v21; // [rsp+58h] [rbp-B0h] BYREF
  char v22; // [rsp+59h] [rbp-AFh] BYREF
  __int64 v23; // [rsp+5Ah] [rbp-AEh] BYREF
  void *Block[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25[3]; // [rsp+78h] [rbp-90h] BYREF
  ExecutionModel::ExternalResourceSet *v26; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v27[4]; // [rsp+98h] [rbp-70h] BYREF
  char v28; // [rsp+A8h] [rbp-60h] BYREF

  Block[0] = Block;
  Block[1] = Block;
  Block[2] = 0LL;
  v2 = &v28;
  v3 = 47LL;
  do
  {
    *((_DWORD *)v2 - 4) = -1;
    *((_QWORD *)v2 - 1) = 0LL;
    *(_DWORD *)v2 = 101;
    *((_WORD *)v2 + 2) = 0;
    v2 += 24;
    --v3;
  }
  while ( v3 );
  if ( *((_DWORD *)this + 4) == 1 )
  {
    RmpPartitionTableActOnActivePartitions(
      (struct _RM_PARTITION_TABLE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 152LL) + 336LL),
      0LL,
      ExecutionModel::ResourceSet::ProcessPendingRequestList,
      0LL);
    v4 = (void **)Block[0];
  }
  else
  {
    v5 = (char *)this + 160;
    for ( i = (char *)*((_QWORD *)this + 20); i != v5; i = *(char **)i )
    {
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(
        &v26,
        *((ExecutionModel::ExternalResourceSet **)i + 2));
      v7 = v26;
      if ( *((_DWORD *)v26 + 350) == 1
        && (int)ExecutionModel::BaseResourceSet::AddToListPrioritized(Block, (__int64)v26) < 0 )
      {
        v9 = *(unsigned int (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v7 + 16LL);
        if ( v9 == ExecutionModel::ExternalResourceSet::Release )
          ExecutionModel::ExternalResourceSet::Release(v7);
        else
          v9(v7);
        goto LABEL_31;
      }
      v8 = *(unsigned int (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v7 + 16LL);
      if ( v8 == ExecutionModel::ExternalResourceSet::Release )
        ExecutionModel::ExternalResourceSet::Release(v7);
      else
        v8(v7);
    }
    v4 = (void **)Block[0];
    if ( Block[0] == Block )
      goto LABEL_5;
    while ( v4 != Block )
    {
      v10 = (__int64)v4[2];
      v25[0] = (__int64)v25;
      v11 = v27;
      v25[2] = 0LL;
      v25[1] = (__int64)v25;
      v12 = 8LL;
      v13 = v10 + 264;
      do
      {
        v11 += 32;
        v14 = *(_OWORD *)v13;
        v13 += 128LL;
        *((_OWORD *)v11 - 8) = v14;
        *((_OWORD *)v11 - 7) = *(_OWORD *)(v13 - 112);
        *((_OWORD *)v11 - 6) = *(_OWORD *)(v13 - 96);
        *((_OWORD *)v11 - 5) = *(_OWORD *)(v13 - 80);
        *((_OWORD *)v11 - 4) = *(_OWORD *)(v13 - 64);
        *((_OWORD *)v11 - 3) = *(_OWORD *)(v13 - 48);
        *((_OWORD *)v11 - 2) = *(_OWORD *)(v13 - 32);
        *((_OWORD *)v11 - 1) = *(_OWORD *)(v13 - 16);
        --v12;
      }
      while ( v12 );
      *(_OWORD *)v11 = *(_OWORD *)v13;
      *((_OWORD *)v11 + 1) = *(_OWORD *)(v13 + 16);
      *((_OWORD *)v11 + 2) = *(_OWORD *)(v13 + 32);
      *((_OWORD *)v11 + 3) = *(_OWORD *)(v13 + 48);
      *((_OWORD *)v11 + 4) = *(_OWORD *)(v13 + 64);
      *((_OWORD *)v11 + 5) = *(_OWORD *)(v13 + 80);
      *((_QWORD *)v11 + 12) = *(_QWORD *)(v13 + 96);
      if ( (int)ExecutionModel::BaseResourceSet::CheckResourceAvailability(
                  this,
                  0x2FuLL,
                  v27,
                  *(unsigned int *)(v10 + 8),
                  *(_DWORD *)(v10 + 1408),
                  1,
                  &v22,
                  &v21,
                  (__int64)v25) < 0 )
      {
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v25);
        break;
      }
      if ( v21 )
      {
        if ( v22 )
        {
          ExecutionModel::BaseResourceSet::RevokeResourceList(v15, v25);
        }
        else
        {
          ExecutionModel::BaseResourceSet::RecursiveVisit(
            this,
            *(_DWORD *)(v10 + 8),
            1,
            (__int64)&v23 + 1,
            (ExecutionModel::ExternalResourceSet *)&v23,
            0LL,
            v10);
          v16 = (*(_BYTE *)(v10 + 1472) & 2) == 0;
          *(_DWORD *)(v10 + 1400) = 2;
          if ( v16 )
            ExecutionModel::ExternalResourceSet::QueueMessage(v10, 0LL);
        }
      }
      utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v25);
      v4 = (void **)*v4;
    }
LABEL_31:
    v4 = (void **)Block[0];
  }
LABEL_5:
  while ( v4 != Block )
  {
    v17 = (void **)v4[1];
    v18 = *v4;
    *v17 = *v4;
    v18[1] = v17;
    v19 = (ExecutionModel::ExternalResourceSet *)v4[2];
    if ( v19 )
    {
      v20 = *(void (**)(void))(*(_QWORD *)v19 + 16LL);
      if ( (char *)v20 == (char *)ExecutionModel::ExternalResourceSet::Release )
        ExecutionModel::ExternalResourceSet::Release(v19);
      else
        v20();
    }
    operator delete(v4);
    v4 = (void **)Block[0];
  }
}
