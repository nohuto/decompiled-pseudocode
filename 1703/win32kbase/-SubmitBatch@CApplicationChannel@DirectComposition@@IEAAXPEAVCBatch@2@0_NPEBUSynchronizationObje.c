/*
 * XREFs of ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C001A31C
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001D424 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C001518C (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z @ 0x1C001554C (-PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0016238 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C00D50F4 (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::SubmitBatch(
        DirectComposition::CApplicationChannel *this,
        LARGE_INTEGER *a2,
        struct DirectComposition::CBatch *a3,
        char a4,
        const struct DirectComposition::SynchronizationObject *a5)
{
  LARGE_INTEGER *v6; // rsi
  struct _ERESOURCE *v8; // rbx
  struct _ERESOURCE *v9; // rbx
  LARGE_INTEGER *QuadPart; // rbx

  v6 = a2;
  if ( a4 )
    a2[8] = KeQueryPerformanceCounter(0LL);
  else
    a2[8].QuadPart = 0LL;
  v8 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v8, 1u);
  if ( a5 && !*((_BYTE *)a5 + 33) )
    DirectComposition::CBatch::SetSynchronizationObject((DirectComposition::CBatch *)v6, a5);
  if ( *((_QWORD *)this + 47) )
  {
    v9 = (struct _ERESOURCE *)*((_QWORD *)this + 48);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v9, 1u);
  }
  if ( *((int *)this + 6) <= 0
    && DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
  {
    DirectComposition::CConnection::PostBatch(*((union _SLIST_HEADER **)this + 5), (struct _SLIST_ENTRY *)v6, a3);
  }
  else
  {
    if ( (v6[4].LowPart & 1) != 0 )
      *((_BYTE *)this + 48) &= ~2u;
    do
    {
      QuadPart = (LARGE_INTEGER *)v6->QuadPart;
      v6->QuadPart = 0LL;
      DirectComposition::CBatch::ReturnToApplication((DirectComposition::CBatch *)v6, 0);
      v6 = QuadPart;
    }
    while ( QuadPart );
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 16LL))(this);
  }
  if ( *((_QWORD *)this + 47) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 48));
    KeLeaveCriticalRegion();
  }
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
  KeLeaveCriticalRegion();
}
