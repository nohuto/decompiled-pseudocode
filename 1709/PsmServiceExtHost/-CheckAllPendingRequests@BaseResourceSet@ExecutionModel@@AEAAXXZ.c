/*
 * XREFs of ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180010290
 * Callers:
 *     ?CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000FF80 (-CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INST.c)
 * Callees:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180002320 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18000F9E0 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010220 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010840 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180015DEC (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18001E938 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18001F8FC (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@W43ResourceType@2@K@Z @ 0x18003D280 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18003D8C0 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::CheckAllPendingRequests(ExecutionModel::BaseResourceSet *this)
{
  char *v2; // rax
  __int64 v3; // rdx
  void **v4; // rbx
  char *v5; // r14
  char *v6; // rbx
  ExecutionModel::BaseResourceSet *v7; // rdi
  __int64 (__fastcall *v8)(ExecutionModel::BaseResourceSet *); // rax
  __int64 (__fastcall *v9)(ExecutionModel::BaseResourceSet *); // rax
  __int64 v10; // rdi
  unsigned int *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r8
  bool v18; // zf
  void **v19; // rcx
  _QWORD *v20; // rax
  ExecutionModel::BaseResourceSet *v21; // rcx
  void (*v22)(void); // rax
  char v23; // [rsp+58h] [rbp-B0h] BYREF
  char v24; // [rsp+59h] [rbp-AFh] BYREF
  __int64 v25; // [rsp+5Ah] [rbp-AEh] BYREF
  void *Block[3]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v27[3]; // [rsp+78h] [rbp-90h] BYREF
  ExecutionModel::BaseResourceSet *v28; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v29[4]; // [rsp+98h] [rbp-70h] BYREF
  char v30; // [rsp+A8h] [rbp-60h] BYREF

  Block[0] = Block;
  Block[1] = Block;
  Block[2] = 0LL;
  v2 = &v30;
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
      (struct _RM_PARTITION_TABLE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 208LL) + 312LL),
      0LL,
      ExecutionModel::ResourceSet::ProcessPendingRequestList,
      0LL);
    v4 = (void **)Block[0];
    goto LABEL_5;
  }
  v5 = (char *)this + 160;
  v6 = (char *)*((_QWORD *)this + 20);
  while ( v6 != v5 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(
      &v28,
      *((_QWORD *)v6 + 2));
    v7 = v28;
    if ( *((_DWORD *)v28 + 350) == 1 && (int)ExecutionModel::BaseResourceSet::AddToListPrioritized(Block, v28) < 0 )
    {
      v9 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v7 + 16LL);
      if ( v9 == ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v7);
      }
      else if ( (char *)v9 == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v7);
      }
      else
      {
        v9(v7);
      }
      goto LABEL_35;
    }
    v8 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v7 + 16LL);
    if ( v8 == ExecutionModel::BaseResourceSet::Release )
    {
      ExecutionModel::BaseResourceSet::Release(v7);
      goto LABEL_14;
    }
    if ( (char *)v8 == (char *)ExecutionModel::ResourceSet::Release )
    {
      ExecutionModel::ResourceSet::Release(v7);
      v6 = *(char **)v6;
    }
    else
    {
      v8(v7);
LABEL_14:
      v6 = *(char **)v6;
    }
  }
  v4 = (void **)Block[0];
  if ( Block[0] == Block )
    goto LABEL_5;
  while ( v4 != Block )
  {
    v10 = (__int64)v4[2];
    v27[0] = v27;
    v11 = v29;
    v27[2] = 0LL;
    v27[1] = v27;
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
                0x2Fu,
                v29,
                *(unsigned int *)(v10 + 8),
                *(_DWORD *)(v10 + 1408),
                1,
                &v24,
                &v23,
                (__int64)v27) < 0 )
    {
      utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v27);
      break;
    }
    if ( v23 )
    {
      if ( v24 )
      {
        ExecutionModel::BaseResourceSet::RevokeResourceList(v15, v27, v16, *(unsigned int *)(v10 + 152));
      }
      else
      {
        ExecutionModel::BaseResourceSet::RecursiveVisit(
          this,
          *(_DWORD *)(v10 + 8),
          1,
          (__int64)&v25 + 1,
          (__int64)&v25,
          0LL,
          v10);
        v18 = (*(_BYTE *)(v10 + 1472) & 2) == 0;
        *(_DWORD *)(v10 + 1400) = 2;
        if ( v18 )
          ExecutionModel::ExternalResourceSet::QueueMessage(v10, 0LL, v17, 0LL);
      }
    }
    utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v27);
    v4 = (void **)*v4;
  }
LABEL_35:
  v4 = (void **)Block[0];
LABEL_5:
  while ( v4 != Block )
  {
    v19 = (void **)v4[1];
    v20 = *v4;
    *v19 = *v4;
    v20[1] = v19;
    v21 = (ExecutionModel::BaseResourceSet *)v4[2];
    if ( v21 )
    {
      v22 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
      if ( (char *)v22 == (char *)ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v21);
      }
      else if ( (char *)v22 == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v21);
      }
      else
      {
        v22();
      }
    }
    operator delete(v4);
    v4 = (void **)Block[0];
  }
}
