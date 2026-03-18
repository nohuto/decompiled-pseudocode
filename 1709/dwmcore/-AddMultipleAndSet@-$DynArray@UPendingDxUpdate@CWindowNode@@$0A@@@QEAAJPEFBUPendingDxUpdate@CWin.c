/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWindowNode@@I@Z @ 0x1801787F0
 * Callers:
 *     ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180164F84 (-CacheSharedHandlesForRect@CFlipChain@@AEAAXU-$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@.c)
 *     ?CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x180165228 (-CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180179234 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CWindowNode::PendingDxUpdate,0>::AddMultipleAndSet(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  DWORD v6; // ebx
  __int64 v7; // rcx
  signed int v8; // eax

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( a3 > *(_DWORD *)(a1 + 20) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x58u, 1, a2);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    v7 = *(_QWORD *)a1 + 88 * v4;
    *(_OWORD *)v7 = *(_OWORD *)a2;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v7 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(v7 + 64) = *(_OWORD *)(a2 + 64);
    *(_QWORD *)(v7 + 80) = *(_QWORD *)(a2 + 80);
    *(_DWORD *)(a1 + 24) = a3;
  }
  return v6;
}
