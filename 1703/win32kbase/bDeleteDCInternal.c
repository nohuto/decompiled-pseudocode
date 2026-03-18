/*
 * XREFs of bDeleteDCInternal @ 0x1C0042230
 * Callers:
 *     hdcOpenDCW @ 0x1C0022470 (hdcOpenDCW.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0070698 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0078B6C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     GreDeleteDC @ 0x1C008F440 (GreDeleteDC.c)
 * Callees:
 *     UserReleaseDC @ 0x1C0028B90 (UserReleaseDC.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0031EE0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C003F66C (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     HmgQueryLock @ 0x1C00422D8 (HmgQueryLock.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00423D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

__int64 __fastcall bDeleteDCInternal(HDC a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // esi
  unsigned int Lock; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  DC *v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = 0;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( v14[0] && ((Lock = HmgQueryLock(a1), a2) || a3 || a4 || Lock <= 1) )
  {
    v8 = bDeleteDCInternalWorker(v14, a2, a3, a4);
    if ( !v8 && !a2 )
      v9 = 1;
  }
  else
  {
    EngSetLastError(0xAAu);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v14);
  if ( v9 )
    return (unsigned int)UserReleaseDC((__int64)a1, v11, v12);
  return v8;
}
