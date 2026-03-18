/*
 * XREFs of MiWriteValidPteNewPage @ 0x14002820C
 * Callers:
 *     MiCopyKstack @ 0x140027EA0 (MiCopyKstack.c)
 *     MiTradeActivePage @ 0x140027F94 (MiTradeActivePage.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiMapMdlCommon @ 0x14020F120 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x14020F570 (MiUnmapMdlCommon.c)
 *     MxSwapPages @ 0x140802304 (MxSwapPages.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiWriteValidPteNewPage(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r9
  unsigned __int64 *v3; // r10
  __int64 result; // rax
  __int64 v5; // rcx

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  *v3 = v2 & 0x80FFFFFFFFFFFFFFuLL | ((HIBYTE(v1) & 0xF | (16 * ((v1 >> 60) & 7))) << 56);
  result = MiPteInShadowRange(v3);
  if ( (_DWORD)result )
    return MiWritePteShadow(v5);
  return result;
}
