/*
 * XREFs of MiWriteValidPteNewPage @ 0x140002750
 * Callers:
 *     MiUnmapMdlCommon @ 0x140001568 (MiUnmapMdlCommon.c)
 *     MiCopyKstack @ 0x14000265C (MiCopyKstack.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiMapMdlCommon @ 0x14013B6DC (MiMapMdlCommon.c)
 *     MiTradeActivePage @ 0x140162634 (MiTradeActivePage.c)
 *     MxSwapPages @ 0x14089B798 (MxSwapPages.c)
 *     MiTradeBootImagePage @ 0x1408AE0E0 (MiTradeBootImagePage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 */

__int64 __fastcall MiWriteValidPteNewPage(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r9
  unsigned __int64 *v3; // r10
  __int64 result; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  *v3 = v2 & 0x80FFFFFFFFFFFFFFuLL | ((HIBYTE(v1) & 0xF | (16 * ((v1 >> 60) & 7))) << 56);
  result = MiPteInShadowRange(v3);
  if ( (_DWORD)result )
    return MiWritePteShadow();
  return result;
}
