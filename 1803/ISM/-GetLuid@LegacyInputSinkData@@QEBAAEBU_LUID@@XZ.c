/*
 * XREFs of ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x18000D318
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18000BB40 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x180018AB0 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x18007EC14 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 * Callees:
 *     ??0bad_optional_access@std@@QEAA@XZ @ 0x18000D4C4 (--0bad_optional_access@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

const struct _LUID *__fastcall LegacyInputSinkData::GetLuid(LegacyInputSinkData *this)
{
  bool v2; // zf
  const struct _LUID *result; // rax
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 28) )
  {
    NtQueryCompositionInputSinkLuid(*(_QWORD *)this, &v5);
    v2 = *((_BYTE *)this + 28) == 0;
    *(_QWORD *)((char *)this + 20) = v5;
    if ( v2 )
      *((_BYTE *)this + 28) = 1;
  }
  result = (const struct _LUID *)((char *)this + 20);
  if ( !*((_BYTE *)this + 28) )
  {
    memset(pExceptionObject, 0, 24);
    std::bad_optional_access::bad_optional_access((std::bad_optional_access *)pExceptionObject);
    throw (std::bad_optional_access *)pExceptionObject;
  }
  return result;
}
