/*
 * XREFs of ?CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C000A858
 * Callers:
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C000B9D8 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C000BACC (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 * Callees:
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C0045F60 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CheckForShellResourceAccess(
        DirectComposition::CConnection **this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a2 + 56LL))(a2) )
    return (unsigned int)DirectComposition::CConnection::AcquireShellResourceAccess(this[5]);
  return v3;
}
