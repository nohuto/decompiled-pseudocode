/*
 * XREFs of ?ReportVidMmState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A32E0
 * Callers:
 *     VidMmReportVidMmState @ 0x1C00234B0 (VidMmReportVidMmState.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0065330 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ReportVidMmState(VIDMM_GLOBAL *this)
{
  _DWORD v2[26]; // [rsp+20h] [rbp-68h] BYREF

  memset(v2, 0, 0x58uLL);
  v2[0] = 106;
  VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v2, 1);
}
