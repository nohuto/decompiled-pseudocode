/*
 * XREFs of ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C001987C
 * Callers:
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0015BB0 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0016238 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::NotifyBatchProcessed(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch *a2)
{
  struct _ERESOURCE *v3; // rbx

  if ( *((_DWORD *)a2 + 5) != 6 && *((_QWORD *)this + 47) )
  {
    v3 = (struct _ERESOURCE *)*((_QWORD *)this + 48);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v3, 1u);
    if ( (*((_DWORD *)this + 60))-- == 1 )
      KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 47) + 8LL), 1, 0);
    ExReleaseResourceLite(*((PERESOURCE *)this + 48));
    KeLeaveCriticalRegion();
  }
}
