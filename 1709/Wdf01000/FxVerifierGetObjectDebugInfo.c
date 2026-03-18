/*
 * XREFs of FxVerifierGetObjectDebugInfo @ 0x1C0080808
 * Callers:
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C0080644 (FxDriverGlobalsInitializeDebugExtension.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00371A0 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     FxVerifierReadObjectDebugInfo @ 0x1C0080A88 (FxVerifierReadObjectDebugInfo.c)
 */

FxObjectDebugInfo *__fastcall FxVerifierGetObjectDebugInfo(void *Key, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  int v4; // eax
  int v5; // r14d
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rcx
  FxObjectDebugInfo *pInfo; // [rsp+30h] [rbp-19h] BYREF
  unsigned int Limit; // [rsp+38h] [rbp-11h] BYREF
  _UNICODE_STRING valueName; // [rsp+40h] [rbp-9h] BYREF
  wchar_t valueName_buffer[28]; // [rsp+50h] [rbp+7h] BYREF

  pInfo = 0LL;
  FxVerifierReadObjectDebugInfo(Key, FxDriverGlobals, &pInfo, L"TrackHandles", FxObjectDebugTrackReferences, 0LL);
  if ( pInfo )
    FxDriverGlobals->FxVerifyTagTrackingEnabled = 1;
  wcscpy(valueName_buffer, L"ObjectLeakDetectionLimit");
  *(_DWORD *)&valueName.Length = 3276848;
  valueName.Buffer = valueName_buffer;
  v4 = FxRegKey::_QueryULong(Key, &valueName, &Limit);
  v5 = Limit;
  if ( v4 < 0 )
    v5 = -1;
  Limit = v5;
  if ( v5 != -1 )
    FxDriverGlobals->FxVerifyLeakDetection = (FxObjectDebugLeakDetection *)ExAllocatePoolWithTag(
                                                                             ExDefaultNonPagedPoolType,
                                                                             0x14uLL,
                                                                             FxDriverGlobals->Tag);
  FxVerifyLeakDetection = FxDriverGlobals->FxVerifyLeakDetection;
  if ( FxVerifyLeakDetection )
  {
    *(_QWORD *)&FxVerifyLeakDetection->Enabled = 0LL;
    *(_QWORD *)&FxVerifyLeakDetection->LimitScaled = 0LL;
    FxVerifyLeakDetection->DeviceCnt = 0;
    FxDriverGlobals->FxVerifyLeakDetection->Limit = v5;
    FxDriverGlobals->FxVerifyLeakDetection->LimitScaled = v5;
    FxDriverGlobals->FxVerifyLeakDetection->ObjectCnt = 0;
    FxDriverGlobals->FxVerifyLeakDetection->DeviceCnt = 0;
    FxDriverGlobals->FxVerifyLeakDetection->Enabled = 1;
    if ( FxVerifierReadObjectDebugInfo(
           Key,
           FxDriverGlobals,
           &pInfo,
           L"ObjectsForLeakDetection",
           FxObjectDebugTrackObjectCount,
           FX_OBJECT_LEAK_DETECTION_DEFAULT_TYPES) < 0
      || !pInfo )
    {
      ExFreePoolWithTag(FxDriverGlobals->FxVerifyLeakDetection, 0);
      FxDriverGlobals->FxVerifyLeakDetection = 0LL;
    }
  }
  return pInfo;
}
