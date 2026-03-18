/*
 * XREFs of GetRemoteHDEV @ 0x1C01EE2D8
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C01EE254 (CtxDisplayIOCtl.c)
 *     RemotePassthruDisable @ 0x1C01EE370 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C01EE430 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01EE5A0 (RemoteShadowStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRemoteHDEV(__int16 a1, __int64 a2)
{
  if ( (unsigned __int16)(a1 - 1) > 0xFFFDu || *(_DWORD *)(*(_QWORD *)(gpDispInfo + 8LL) + 20LL) == 1 )
    return *(_QWORD *)(gpDispInfo + 32LL);
  else
    return DrvFindRemoteDriverhdevInMDEV(*(_QWORD *)(gpDispInfo + 8LL), a2, a2);
}
