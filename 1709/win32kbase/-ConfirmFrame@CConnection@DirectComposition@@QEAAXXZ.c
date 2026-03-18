/*
 * XREFs of ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0034640
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C0036EF0 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C0027138 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C002EDF4 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00331C8 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C0037830 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::ConfirmFrame(DirectComposition::CConnection *this)
{
  struct _ERESOURCE *v1; // rbx
  __int64 *v3; // r14
  struct _ERESOURCE *v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rax
  _DWORD *v9; // rcx
  void (*v10)(void); // rax
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  __int64 v12; // rdx
  int v13; // edx
  __int64 *v14; // r12
  void *v15; // rcx
  __int64 v16; // r15
  bool v17; // zf
  __int64 v18; // rsi
  int v19; // edi
  struct _ERESOURCE *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx

  v1 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v1, 1u);
  v3 = (__int64 *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  if ( v3 )
  {
    do
    {
      *((_BYTE *)v3 + 32) &= ~2u;
      v13 = *((_DWORD *)v3 + 28);
      v14 = (__int64 *)*v3;
      if ( v13 )
      {
        DirectComposition::CConnection::ReleaseShellResourceAccess(
          *(DirectComposition::CConnection **)(v3[1] + 40),
          v13);
        *((_DWORD *)v3 + 28) = 0;
      }
      if ( (v3[4] & 4) == 0 )
        DirectComposition::CApplicationChannel::NotifyBatchProcessed(
          (DirectComposition::CApplicationChannel *)v3[1],
          (struct DirectComposition::CBatch *)v3);
      v15 = (void *)v3[12];
      v16 = v3[1];
      if ( v15 )
        ObfDereferenceObject(v15);
      *((_BYTE *)v3 + 32) &= ~0x10u;
      v17 = *((_DWORD *)v3 + 5) == 6;
      v3[12] = 0LL;
      if ( v17 )
      {
        v18 = *(_QWORD *)(v16 + 40);
        v19 = *(_DWORD *)(v16 + 28);
        v20 = *(struct _ERESOURCE **)(v18 + 16);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v20, 1u);
        DirectComposition::CLinearObjectTableBase::ReleaseHandle(
          (DirectComposition::CLinearObjectTableBase *)(v18 + 24),
          v19);
        ExReleaseResourceLite(*(PERESOURCE *)(v18 + 16));
        KeLeaveCriticalRegion();
        Win32FreePool(v3, v21, v22);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, 1LL);
      }
      else
      {
        *(_DWORD *)(v16 + 380) = *((_DWORD *)v3 + 4);
        if ( (v3[4] & 8) != 0 )
          *(_BYTE *)(v16 + 241) = 0;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v16 + 192), (PSLIST_ENTRY)v3);
        KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v16 + 216) + 8LL), 1, 0);
      }
      v3 = v14;
    }
    while ( v14 );
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
  v5 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  while ( 1 )
  {
    v6 = *((_QWORD *)this + 6);
    v7 = v5;
    if ( v5 < v6 )
    {
      v8 = (_QWORD *)(*((_QWORD *)this + 3) + v5 * *((_QWORD *)this + 7));
      do
      {
        if ( *v8 )
          break;
        ++v7;
        v8 = (_QWORD *)((char *)v8 + *((_QWORD *)this + 7));
      }
      while ( v7 < v6 );
    }
    if ( v7 >= v6 )
      break;
    _mm_lfence();
    v5 = v7 + 1;
    v9 = *(_DWORD **)(v7 * *((_QWORD *)this + 7) + *((_QWORD *)this + 3));
    if ( !v9 )
      break;
    v10 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
    if ( (char *)v10 == (char *)DirectComposition::CApplicationChannel::ConfirmFrame )
    {
      v9[96] = v9[95];
      v9[164] = 0;
    }
    else
    {
      v10();
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  for ( i = (DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)this + 27);
        i != (DirectComposition::CConnection *)((char *)this + 216);
        i = *(DirectComposition::CBatchSharedMemoryPool **)i )
  {
    v12 = *((_QWORD *)i + 6);
    if ( v12 )
    {
      v23 = *(_QWORD *)(*((_QWORD *)i + 2) + 16LL);
      if ( v23 )
        MmUnmapViewOfSection(v23, v12);
      *((_QWORD *)i + 6) = 0LL;
    }
    *((_QWORD *)i + 4) = 0LL;
    *((_QWORD *)i + 5) = 0LL;
    if ( *((_QWORD *)i + 6) )
      DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(i);
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
}
