/*
 * XREFs of ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18000D388
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800187C0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180018BC8 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x18007EC14 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 * Callees:
 *     ??0bad_optional_access@std@@QEAA@XZ @ 0x18000D4C4 (--0bad_optional_access@std@@QEAA@XZ.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18000D670 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

_QWORD *__fastcall LegacyInputSinkData::GetCompositionInputQueue(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  char v4; // r9
  bool v5; // r8
  char v6; // r9
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  const char *pExceptionObject[3]; // [rsp+20h] [rbp-49h] BYREF
  _OWORD v11[3]; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+68h] [rbp-1h]
  char v13[64]; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  switch ( (_DWORD)a2 )
  {
    case 1:
      v2 = 4LL;
      break;
    case 2:
      v2 = 12LL;
      break;
    case 3:
      v2 = 20LL;
      break;
    case 4:
      v2 = 28LL;
      break;
    case 5:
      v2 = 36LL;
      break;
    default:
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x4B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
        "Invalid input type provided.",
        pExceptionObject[0]);
      __debugbreak();
  }
  v3 = &a1[v2];
  v4 = a1[v2 + 7];
  v5 = v4 == 0;
  if ( (_DWORD)a2 == 5 )
    v5 = 1;
  if ( v5 )
  {
    NtQueryCompositionInputQueueAndTransform(*a1, a2, v11, v13);
    v6 = *((_BYTE *)v3 + 56);
    v7 = v11[1];
    *(_OWORD *)v3 = v11[0];
    v8 = v11[2];
    *((_OWORD *)v3 + 1) = v7;
    *(_QWORD *)&v7 = v12;
    *((_OWORD *)v3 + 2) = v8;
    v3[6] = v7;
    if ( v6 )
      return v3;
    *((_BYTE *)v3 + 56) = 1;
    v4 = 1;
  }
  if ( !v4 )
  {
    memset(pExceptionObject, 0, sizeof(pExceptionObject));
    std::bad_optional_access::bad_optional_access((std::bad_optional_access *)pExceptionObject);
    throw (std::bad_optional_access *)pExceptionObject;
  }
  return v3;
}
