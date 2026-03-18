/*
 * XREFs of ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C009D70C
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C009D66C (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0001518 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ??_GCCD_SET_STRING_ID@@QEAAPEAXI@Z @ 0x1C0003260 (--_GCCD_SET_STRING_ID@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C009DF84 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00B0054 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00B23F8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00B24B4 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
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
  ULONG v9; // r8d
  __int64 v11; // rax
  struct _UNICODE_STRING v12; // [rsp+20h] [rbp-18h] BYREF

  v3 = (CCD_SET_STRING_ID *)operator new[](0x38uLL, 0x63644356u, PagedPool);
  if ( v3 )
    v4 = CCD_SET_STRING_ID::CCD_SET_STRING_ID(v3, this);
  else
    v4 = 0LL;
  ConnectedSetStr = CCD_SET_STRING_ID::GetConnectedSetStr(v4);
  v6 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v12, ConnectedSetStr);
  v8 = v6;
  if ( v6 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = v8;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    memset(this->Buffer, 0, this->MaximumLength);
    this->Length = 0;
    RtlUnicodeStringCopy(this, &v12, v9);
    CCD_SET_STRING_ID::_CcdFreeUnicodeString(&v12);
    if ( v4 )
      CCD_SET_STRING_ID::`scalar deleting destructor'(v4);
  }
  return (unsigned int)v8;
}
