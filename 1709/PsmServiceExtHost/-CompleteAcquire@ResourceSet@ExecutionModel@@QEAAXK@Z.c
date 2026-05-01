/*
 * XREFs of ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011CCC
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FAF0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010840 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180011784 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015680 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?OnAcquired@RmpRpsResourceSetCallback@@UEAAJPEAX@Z @ 0x180016900 (-OnAcquired@RmpRpsResourceSetCallback@@UEAAJPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::CompleteAcquire(ExecutionModel::ResourceSet *this, char a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // xmm1_8
  ExecutionModel::BaseResourceSet *v8; // rcx
  UCHAR v9; // dl
  __int64 v10; // rax
  RmpRpsResourceSetCallback *v11; // rcx
  void *v12; // rdx
  __int64 (__fastcall *v13)(RmpRpsResourceSetCallback *__hidden, void *); // rax
  ExecutionModel::ResourceManager *v14; // rcx
  unsigned int v15; // [rsp+20h] [rbp-58h]
  __int128 v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-18h]
  char v18; // [rsp+80h] [rbp+8h] BYREF
  char v19; // [rsp+90h] [rbp+18h] BYREF

  LODWORD(v16) = -1;
  *((_QWORD *)&v16 + 1) = 0LL;
  WORD2(v17) = 0;
  v4 = (_QWORD *)(*((_QWORD *)this + 179) + 128LL);
  LODWORD(v17) = 101;
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v4 = 0LL;
  v4[1] = 0LL;
  v7 = *((_QWORD *)this + 201);
  v8 = (ExecutionModel::BaseResourceSet *)*((_QWORD *)this + 23);
  v15 = *((_DWORD *)this + 2);
  v16 = *(_OWORD *)((char *)this + 1592);
  v17 = v7;
  ExecutionModel::BaseResourceSet::RecursiveVisit(
    v8,
    1,
    1u,
    (unsigned int *)&v16,
    v15,
    1,
    &v19,
    &v18,
    0LL,
    (__int64)this);
  v10 = *((_QWORD *)this + 180);
  *((_DWORD *)this + 350) = 2;
  if ( v10 && (*(_BYTE *)(v10 + 772) & 1) != 0 )
  {
    v14 = (ExecutionModel::ResourceManager *)*((_QWORD *)this + 3);
    *((_DWORD *)this + 363) &= ~4u;
    ExecutionModel::ResourceManager::ApplyResourceSet_Modern(v14, this, 0LL);
    RmpActivityHostCheckQueueWork(*((struct _RM_ACTIVITY_HOST **)this + 180), 0);
  }
  if ( (a2 & 1) != 0 )
  {
    v11 = (RmpRpsResourceSetCallback *)*((_QWORD *)this + 230);
    if ( v11 )
    {
      v12 = (void *)*((_QWORD *)this + 231);
      v13 = *(__int64 (__fastcall **)(RmpRpsResourceSetCallback *__hidden, void *))(*(_QWORD *)v11 + 32LL);
      if ( v13 == RmpRpsResourceSetCallback::OnAcquired )
        RmpRpsResourceSetCallback::OnAcquired(v11, v12);
      else
        v13(v11, v12);
    }
    *((_DWORD *)this + 363) |= 1u;
    ExecutionModel::ResourceSet::LogPendingEnd(this, v9);
  }
}
