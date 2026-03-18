/*
 * XREFs of ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C01A3B24
 * Callers:
 *     DxgkGetScanLine @ 0x1C017BCF0 (DxgkGetScanLine.c)
 * Callees:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0103AC0 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C01B47CC (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 */

__int64 __fastcall REMOTE_VSYNC::GetScanLine(
        struct _KTHREAD **this,
        struct _DXGKARG_GETSCANLINE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  result = REMOTE_VSYNC::EnsureEmulationRunning(this, (__int64)a2, a3, a4);
  if ( (int)result >= 0 )
  {
    BLTQUEUE::GetScanLineEmulation(*this, &a2->ScanLine, &a2->InVerticalBlank);
    return 0LL;
  }
  return result;
}
