/*
 * XREFs of ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00466A4
 * Callers:
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C000A828 (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0017660 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0046310 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0046E58 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C009F19C (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CConnection::ReleaseShellResourceAccess(
        DirectComposition::CConnection *this,
        int a2)
{
  struct _ERESOURCE *v2; // rbx
  bool v5; // zf

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 30);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v2, 1u);
  v5 = *((_DWORD *)this + 57) == a2;
  *((_DWORD *)this + 57) -= a2;
  if ( v5 )
    *((_QWORD *)this + 29) = 0LL;
  ExReleaseResourceLite(*((PERESOURCE *)this + 30));
  KeLeaveCriticalRegion();
}
