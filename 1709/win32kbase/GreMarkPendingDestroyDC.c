/*
 * XREFs of GreMarkPendingDestroyDC @ 0x1C00FDC74
 * Callers:
 *     DestroyCacheDC @ 0x1C0057280 (DestroyCacheDC.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C498 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C00A9B2C (-vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z.c)
 */

void __fastcall GreMarkPendingDestroyDC(HDC a1)
{
  __int64 v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  int v3; // [rsp+2Ch] [rbp-Ch]

  v1 = 0LL;
  v2 = 0;
  v3 = 0;
  XDCOBJ::vAltLock((XDCOBJ *)&v1, a1, 0LL);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 36) |= 0x80000u;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v1);
  }
}
