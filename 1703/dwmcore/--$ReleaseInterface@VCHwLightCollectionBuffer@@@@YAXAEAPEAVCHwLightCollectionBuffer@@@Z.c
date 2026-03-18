/*
 * XREFs of ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800BD7E0
 * Callers:
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x1800217DC (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x1800BD568 (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x1800C5360 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800C539C (--1CLightStack@@QEAA@XZ.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18015610C (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@@Z @ 0x180156158 (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@@Z.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180156240 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@IPEAPEAV1@@Z @ 0x1801999D4 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@IPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CHwLightCollectionBuffer>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
