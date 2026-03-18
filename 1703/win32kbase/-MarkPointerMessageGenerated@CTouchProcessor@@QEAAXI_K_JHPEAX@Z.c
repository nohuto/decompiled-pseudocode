/*
 * XREFs of ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_K_JHPEAX@Z @ 0x1C0122E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0125BB8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C01276FC (-SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z.c)
 */

void __fastcall CTouchProcessor::MarkPointerMessageGenerated(
        CTouchProcessor *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned int v6; // esi
  int v8; // edx
  PERESOURCE *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]

  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      70,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v10,
    (CTouchProcessor *)((char *)this + 200));
  CTouchProcessor::SetPointerInfoNodeMessagePosted(this, a4, v6, a5);
  CTouchProcessor::ReferenceMsgData(this, a4, 2LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      11,
      71,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  if ( !v11 )
  {
    v9 = (PERESOURCE *)v10;
    *(_QWORD *)(v10 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v9);
  }
}
