/*
 * XREFs of ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004E630
 * Callers:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004AAC0 (--1DCOBJ@@QEAA@XZ.c)
 *     EngLockSurface @ 0x1C004C660 (EngLockSurface.c)
 *     INC_SHARE_REF_CNT @ 0x1C004CDC0 (INC_SHARE_REF_CNT.c)
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C004DFDC (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E710 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C004E75C (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 * Callees:
 *     <none>
 */

char __fastcall GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(
        GdiHandleEntryDirectory *this,
        unsigned int a2,
        struct GdiHandleEntryTable **a3,
        unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // r11d
  unsigned int v6; // eax

  v4 = a2;
  v5 = *((_DWORD *)this + 514);
  if ( a2 >= v5 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0;
  if ( a2 >= v5 )
    v6 = ((a2 - v5) >> 16) + 1;
  else
    v6 = 0;
  *a3 = (struct GdiHandleEntryTable *)*((_QWORD *)this + v6 + 1);
  if ( v6 )
    v4 = ((1 - v6) << 16) - v5 + a2;
  *a4 = v4;
  return 1;
}
