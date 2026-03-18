/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C00423CC
 * Callers:
 *     hdcOpenDCW @ 0x1C0022470 (hdcOpenDCW.c)
 *     GreSetupDCAttributes @ 0x1C002BFCC (GreSetupDCAttributes.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00825B0 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
}
