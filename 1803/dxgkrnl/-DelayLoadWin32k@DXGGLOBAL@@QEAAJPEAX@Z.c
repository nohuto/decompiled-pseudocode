/*
 * XREFs of ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x1C0030624
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C00DB490 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z @ 0x1C0047520 (-CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::DelayLoadWin32k(struct DXGKW32KIMPORTS **this, void *a2)
{
  unsigned int Win32kImportTable; // edi
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  Win32kImportTable = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct DXGFASTMUTEX *const)(this + 220), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  if ( !this[219] )
    Win32kImportTable = CreateWin32kImportTable(a2, this + 219);
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return Win32kImportTable;
}
