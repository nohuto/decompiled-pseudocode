/*
 * XREFs of bDeleteDCInternal @ 0x1C0061E40
 * Callers:
 *     hdcOpenDCW @ 0x1C005A170 (hdcOpenDCW.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0061814 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     GreDeleteDC @ 0x1C0061AC0 (GreDeleteDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0061AE0 (-vCleanupDCs@@YAXK@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0063CE0 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 */

__int64 __fastcall bDeleteDCInternal(struct HOBJ__ *a1, int a2, int a3, int a4)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = (a2 != 0 ? 0x400000 : 0) | (a3 != 0 ? 0x800000 : 0) | (a4 != 0 ? 0x1000000 : 0);
  return bDeleteDCInternalEx(a1, &v5);
}
