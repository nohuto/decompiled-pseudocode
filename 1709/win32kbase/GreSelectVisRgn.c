/*
 * XREFs of GreSelectVisRgn @ 0x1C0059C20
 * Callers:
 *     NtUserGetDC @ 0x1C0048830 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C498 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0059C88 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C00A9B2C (-vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z.c)
 */

__int64 __fastcall GreSelectVisRgn(HDC a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]

  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  XDCOBJ::vAltLock((XDCOBJ *)&v7, a1, 0);
  v5 = GreSelectVisRgnInternal(&v7, a2, a3);
  if ( v7 )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v7);
  return v5;
}
