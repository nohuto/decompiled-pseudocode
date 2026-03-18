/*
 * XREFs of GreGetDCOrgEx @ 0x1C0028640
 * Callers:
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 * Callees:
 *     GreGetDCPoint @ 0x1C00286C0 (GreGetDCPoint.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C003152C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0036CB0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetDCOrgEx(HDC a1, __int64 a2, _OWORD *a3)
{
  unsigned int DCPoint; // ebx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  DCPoint = 0;
  if ( v7[0] )
  {
    *a3 = *(_OWORD *)(v7[0] + 1448LL);
    DCPoint = GreGetDCPoint(a1);
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v7);
  return DCPoint;
}
