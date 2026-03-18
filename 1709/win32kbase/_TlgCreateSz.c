/*
 * XREFs of _TlgCreateSz @ 0x1C00EBC08
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C00EB9F0 (NtUserWin32kSysCallFilterStub.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C0116044 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C0116408 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0155048 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax
  LPCSTR v3; // r8

  LODWORD(v2) = 0;
  v3 = (LPCSTR)&unk_1C0163108;
  if ( psz )
  {
    v3 = psz;
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  pDesc->Reserved = 0;
  pDesc->Size = v2 + 1;
  pDesc->Ptr = (ULONGLONG)v3;
}
