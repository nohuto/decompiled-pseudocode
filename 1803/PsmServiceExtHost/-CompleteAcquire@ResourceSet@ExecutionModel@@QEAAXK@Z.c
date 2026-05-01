/*
 * XREFs of ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180020370
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18001E320 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x18001F7C0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18001EA30 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180020010 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x180022E50 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::CompleteAcquire(ExecutionModel::ResourceSet *this, char a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // xmm1_8
  ExecutionModel::BaseResourceSet *v8; // rcx
  __int64 v9; // rax
  HAM_ACTIVITY_RM_CONTEXT *v10; // rcx
  void *v11; // rdx
  __int64 (__fastcall *v12)(HAM_ACTIVITY_RM_CONTEXT *__hidden, void *); // rax
  unsigned int v13; // [rsp+20h] [rbp-58h]
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h]
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  char v17; // [rsp+90h] [rbp+18h] BYREF

  LODWORD(v14) = -1;
  *((_QWORD *)&v14 + 1) = 0LL;
  WORD2(v15) = 0;
  v4 = (_QWORD *)(*((_QWORD *)this + 179) + 136LL);
  LODWORD(v15) = 101;
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v4 = 0LL;
  v4[1] = 0LL;
  v7 = *((_QWORD *)this + 200);
  v8 = (ExecutionModel::BaseResourceSet *)*((_QWORD *)this + 23);
  v13 = *((_DWORD *)this + 2);
  v14 = *((_OWORD *)this + 99);
  v15 = v7;
  ExecutionModel::BaseResourceSet::RecursiveVisit(v8, 1, 1u, &v14, v13, 1, &v17, &v16, 0LL, this);
  v9 = *((_QWORD *)this + 180);
  *((_DWORD *)this + 350) = 2;
  if ( (*(_BYTE *)(v9 + 804) & 1) != 0 )
  {
    *((_DWORD *)this + 363) &= ~4u;
    ExecutionModel::ResourceManager::ApplyResourceSet_Modern(*((ExecutionModel::ResourceManager **)this + 3), this);
  }
  if ( (a2 & 1) != 0 )
  {
    v10 = (HAM_ACTIVITY_RM_CONTEXT *)*((_QWORD *)this + 229);
    if ( v10 )
    {
      v11 = (void *)*((_QWORD *)this + 230);
      v12 = *(__int64 (__fastcall **)(HAM_ACTIVITY_RM_CONTEXT *__hidden, void *))(*(_QWORD *)v10 + 32LL);
      if ( v12 == HAM_ACTIVITY_RM_CONTEXT::OnAcquired )
        HAM_ACTIVITY_RM_CONTEXT::OnAcquired(v10, v11);
      else
        v12(v10, v11);
    }
    *((_DWORD *)this + 363) |= 1u;
    ExecutionModel::ResourceSet::LogPendingEnd(this);
  }
}
