/*
 * XREFs of ?WriteDpiToHKLMRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C01BBFE4
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00A70D0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00AD690 (-AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C00AE610 (-WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 */

__int64 __fastcall WriteDpiToHKLMRegistry(const struct _LUID *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbx
  const unsigned __int16 *v5; // r9
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _UNICODE_STRING v11; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v12; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF

  LODWORD(v4) = AllocateMonitorSetIdFromAdapterSource(a1, a2, &v11);
  if ( (int)v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v12, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    v6 = WriteDwordToParticularRegValue(&DestinationString, &v12, &v11, v5, a3);
    v4 = v6;
    if ( v6 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v9 + 24) = v4;
      WdLogEvent5_WdError(v9);
    }
  }
  if ( v11.Buffer )
    ExFreePoolWithTag(v11.Buffer, 0);
  return (unsigned int)v4;
}
