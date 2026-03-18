/*
 * XREFs of GetRemoteHDEV @ 0x1C01F8780
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C01F86FC (CtxDisplayIOCtl.c)
 *     RemotePassthruDisable @ 0x1C01F8820 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C01F88E0 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01F8A50 (RemoteShadowStart.c)
 * Callees:
 *     DrvFindRemoteDriverhdevInMDEV @ 0x1C024C1A4 (DrvFindRemoteDriverhdevInMDEV.c)
 */

__int64 __fastcall GetRemoteHDEV(__int16 a1, __int64 a2)
{
  if ( (unsigned __int16)(a1 - 1) > 0xFFFDu || *(_DWORD *)(*(_QWORD *)(gpDispInfo + 8LL) + 20LL) == 1 )
    return *(_QWORD *)(gpDispInfo + 32LL);
  else
    return DrvFindRemoteDriverhdevInMDEV(*(_QWORD *)(gpDispInfo + 8LL), a2, a2);
}
