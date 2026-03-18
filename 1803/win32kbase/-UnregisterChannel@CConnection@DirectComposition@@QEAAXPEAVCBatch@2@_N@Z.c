/*
 * XREFs of ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C000221C
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C000C130 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0046680 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0046C6C (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0_N@Z @ 0x1C0046CBC (-PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0_N@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C009F19C (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 */

void __fastcall DirectComposition::CConnection::UnregisterChannel(
        DirectComposition::CConnection *this,
        struct DirectComposition::CBatch *a2,
        char a3)
{
  struct _ERESOURCE *v6; // rbx

  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)this);
  v6 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v6, 1u);
  *((_DWORD *)a2 + 5) = 6;
  if ( DirectComposition::CConnection::IsConnected(this) )
    DirectComposition::CConnection::PostBatch(this, a2, a2, 0);
  else
    DirectComposition::CBatch::ReturnToApplication(a2, 1);
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  if ( a3 )
    DirectComposition::CConnection::Release(this);
}
