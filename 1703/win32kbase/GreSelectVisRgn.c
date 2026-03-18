/*
 * XREFs of GreSelectVisRgn @ 0x1C002B720
 * Callers:
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C00373A0 (NtUserGetDC.c)
 * Callees:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002BD78 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0036CB0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSelectVisRgn(HDC a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  v5 = GreSelectVisRgnInternal(v7, a2, a3);
  if ( v7[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v7);
    HmgDecrementShareReferenceCount(v7[0]);
  }
  return v5;
}
