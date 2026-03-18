/*
 * XREFs of ?InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A0ED0
 * Callers:
 *     VidMmInvalidateAllVirtualAddresses @ 0x1C0023300 (VidMmInvalidateAllVirtualAddresses.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0065330 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::InvalidateAllVirtualAddresses(VIDMM_GLOBAL *this)
{
  _DWORD v2[26]; // [rsp+20h] [rbp-68h] BYREF

  memset(v2, 0, 0x58uLL);
  v2[0] = 127;
  VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v2, 1);
}
