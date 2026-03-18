/*
 * XREFs of ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C01DD18C
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00C7850 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C009D66C (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C009E5F8 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDpiToHKLMRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v5; // rbx
  const struct _UNICODE_STRING *v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int16 *v11; // [rsp+20h] [rbp-48h]
  struct _UNICODE_STRING v12; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v13; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF

  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v12, a4);
  if ( (int)v5 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v13, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v11) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v13, &v12, v6, v11);
    v5 = v7;
    if ( v7 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v9 + 24) = v5;
      WdLogEvent5_WdError(v9);
    }
  }
  operator delete[](v12.Buffer);
  return (unsigned int)v5;
}
