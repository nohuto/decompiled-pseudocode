/*
 * XREFs of ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18000D2A8
 * Callers:
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18000C024 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 * Callees:
 *     ??0bad_optional_access@std@@QEAA@XZ @ 0x18000D4C4 (--0bad_optional_access@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

const unsigned int *__fastcall LegacyInputSinkData::GetViewInstanceId(LegacyInputSinkData *this)
{
  const unsigned int *result; // rax
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 12) )
  {
    NtQueryCompositionInputSinkViewId(*(_QWORD *)this, &v4);
    BYTE4(v4) = 1;
    *((_QWORD *)this + 1) = v4;
  }
  result = (const unsigned int *)((char *)this + 8);
  if ( !*((_BYTE *)this + 12) )
  {
    memset(pExceptionObject, 0, 24);
    std::bad_optional_access::bad_optional_access((std::bad_optional_access *)pExceptionObject);
    throw (std::bad_optional_access *)pExceptionObject;
  }
  return result;
}
