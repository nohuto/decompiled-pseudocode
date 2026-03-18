/*
 * XREFs of ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C002F888
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C0032AE4 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0033B30 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z @ 0x1C0033DA4 (-PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C0034A94 (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0034B54 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
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
  if ( *((_QWORD *)this + 45) )
  {
    v9 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v9, 1u);
  }
  if ( *((int *)this + 6) <= 0
    && DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
  {
    DirectComposition::CConnection::PostBatch(
      *((DirectComposition::CConnection **)this + 5),
      (struct DirectComposition::CBatch *)v6,
      a3);
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
  if ( *((_QWORD *)this + 45) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 46));
    KeLeaveCriticalRegion();
  }
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
  KeLeaveCriticalRegion();
}
