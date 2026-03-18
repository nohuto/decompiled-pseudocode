/*
 * XREFs of ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C0033138
 * Callers:
 *     ?CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C002E1F4 (-CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0030918 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CConnection::AcquireShellResourceAccess(DirectComposition::CConnection *this)
{
  unsigned int v2; // esi
  __int64 CurrentProcess; // rax
  struct _ERESOURCE *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rax

  v2 = -1073741790;
  CurrentProcess = PsGetCurrentProcess();
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 33);
  v5 = CurrentProcess;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  v6 = *((_QWORD *)this + 32);
  if ( v6 == v5 || !v6 )
  {
    ++*((_DWORD *)this + 63);
    v2 = 0;
    *((_QWORD *)this + 32) = v5;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 33));
  KeLeaveCriticalRegion();
  return v2;
}
