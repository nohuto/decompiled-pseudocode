/*
 * XREFs of ?ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0125C40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0125BB8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CTouchProcessor::ReferenceMsgDataExternal(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  int v6; // edx
  PERESOURCE *v7; // rcx
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+38h] [rbp-10h]

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      282,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v8,
    (struct CInpLockGuard *)(a1 + 200));
  CTouchProcessor::ReferenceMsgData(a1, v4, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      11,
      283,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  if ( !v9 )
  {
    v7 = (PERESOURCE *)v8;
    *(_QWORD *)(v8 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v7);
  }
}
