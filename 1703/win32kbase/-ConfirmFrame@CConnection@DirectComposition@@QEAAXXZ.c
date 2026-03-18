/*
 * XREFs of ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0015BB0
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C00140C0 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C00144B4 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C001987C (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C00198B0 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::ConfirmFrame(DirectComposition::CConnection *this)
{
  struct _ERESOURCE *v1; // rbx
  __int64 *v3; // rbx
  struct _ERESOURCE *v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rax
  _DWORD *v9; // rcx
  void (*v10)(void); // rax
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  __int64 *v12; // rsi

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
      v12 = (__int64 *)*v3;
      if ( (v3[4] & 4) == 0 )
        DirectComposition::CApplicationChannel::NotifyBatchProcessed(
          (DirectComposition::CApplicationChannel *)v3[1],
          (struct DirectComposition::CBatch *)v3);
      DirectComposition::CApplicationChannel::ReturnProcessedBatch(
        (DirectComposition::CApplicationChannel *)v3[1],
        (struct DirectComposition::CBatch *)v3);
      v3 = v12;
    }
    while ( v12 );
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
  v5 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  while ( 1 )
  {
    v6 = *((_QWORD *)this + 7);
    v7 = v5;
    if ( v5 < v6 )
    {
      v8 = (_QWORD *)(*((_QWORD *)this + 4) + v5 * *((_QWORD *)this + 8));
      do
      {
        if ( *v8 )
          break;
        ++v7;
        v8 = (_QWORD *)((char *)v8 + *((_QWORD *)this + 8));
      }
      while ( v7 < v6 );
    }
    if ( v7 >= v6 )
      break;
    _mm_lfence();
    v5 = v7 + 1;
    v9 = *(_DWORD **)(v7 * *((_QWORD *)this + 8) + *((_QWORD *)this + 4));
    if ( !v9 )
      break;
    v10 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
    if ( (char *)v10 == (char *)DirectComposition::CApplicationChannel::ConfirmFrame )
    {
      v9[100] = v9[99];
      v9[170] = 0;
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
    if ( *((_QWORD *)i + 6) )
    {
      if ( *(_QWORD *)(*((_QWORD *)i + 2) + 16LL) )
        MmUnmapViewOfSection();
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
