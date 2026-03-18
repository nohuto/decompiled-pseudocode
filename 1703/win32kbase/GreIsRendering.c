/*
 * XREFs of GreIsRendering @ 0x1C002A1F0
 * Callers:
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0036CB0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreIsRendering(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(v3[0] + 40LL) & 1;
  else
    v1 = 0;
  if ( v3[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v3);
    HmgDecrementShareReferenceCount(v3[0]);
  }
  return v1;
}
