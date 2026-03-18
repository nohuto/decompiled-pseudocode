/*
 * XREFs of VidSchReportHwQueue @ 0x1C00BE9E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppp @ 0x1C00247E4 (McTemplateK0ppp.c)
 */

NTSTATUS __fastcall VidSchReportHwQueue(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  NTSTATUS result; // eax

  if ( !*(_QWORD *)(a1 + 32) && bTracingEnabled )
  {
    v1 = *(_QWORD *)(a1 + 24);
    v2 = *(_QWORD *)(v1 + 24);
    if ( !v2 || (result = *(_DWORD *)(v1 + 48), (result & 0x40) != 0) )
      v2 = *(_QWORD *)(a1 + 24);
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      return McTemplateK0ppp(a1, &EventReportHwQueue, 0LL, v2, 0LL, a1);
  }
  return result;
}
