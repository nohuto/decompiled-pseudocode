/*
 * XREFs of ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C00E1CE0
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00E1D98 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??_GCCD_SET_STRING_ID@@QEAAPEAXI@Z @ 0x1C000BD74 (--_GCCD_SET_STRING_ID@@QEAAPEAXI@Z.c)
 *     RtlUnicodeStringCopy @ 0x1C000BE48 (RtlUnicodeStringCopy.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C00D03C8 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00DAC64 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00DAD20 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00DFBEC (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::SortMonitorSetIdAndAppendHash(
        struct _UNICODE_STRING *this,
        struct _UNICODE_STRING *a2)
{
  CCD_SET_STRING_ID *v3; // rax
  CCD_SET_STRING_ID *v4; // rdi
  const struct _STRING *ConnectedSetStr; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v10; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  v3 = (CCD_SET_STRING_ID *)operator new(0x38uLL, 0x63644356u, PagedPool);
  if ( v3 )
    v4 = CCD_SET_STRING_ID::CCD_SET_STRING_ID(v3, this);
  else
    v4 = 0LL;
  ConnectedSetStr = CCD_SET_STRING_ID::GetConnectedSetStr(v4);
  v6 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&SourceString, ConnectedSetStr);
  v8 = v6;
  if ( v6 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = v8;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    memset(this->Buffer, 0, this->MaximumLength);
    this->Length = 0;
    RtlUnicodeStringCopy(this, &SourceString);
    CCD_SET_STRING_ID::_CcdFreeUnicodeString(&SourceString);
    if ( v4 )
      CCD_SET_STRING_ID::`scalar deleting destructor'(v4);
  }
  return (unsigned int)v8;
}
