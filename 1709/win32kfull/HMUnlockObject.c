/*
 * XREFs of HMUnlockObject @ 0x1C00CF2F0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 *     HMUnlockDestroyObject @ 0x1C00C5804 (HMUnlockDestroyObject.c)
 *     ThreadLockExchangeAlways @ 0x1C00CF31C (ThreadLockExchangeAlways.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01AB190 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01ABBC0 (Win32kRIMDevChangeCallback.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F07D8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMUnlockObject(__int64 a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
    return HMUnlockObjectInternal(a1);
  return a1;
}
