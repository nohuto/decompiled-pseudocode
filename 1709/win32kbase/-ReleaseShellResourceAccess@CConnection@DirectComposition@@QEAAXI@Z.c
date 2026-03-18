/*
 * XREFs of ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00331C8
 * Callers:
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002E1B8 (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0034640 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0034B54 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0034CD8 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CConnection::ReleaseShellResourceAccess(
        DirectComposition::CConnection *this,
        int a2)
{
  struct _ERESOURCE *v2; // rbx
  bool v5; // zf

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 33);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v2, 1u);
  v5 = *((_DWORD *)this + 63) == a2;
  *((_DWORD *)this + 63) -= a2;
  if ( v5 )
    *((_QWORD *)this + 32) = 0LL;
  ExReleaseResourceLite(*((PERESOURCE *)this + 33));
  KeLeaveCriticalRegion();
}
