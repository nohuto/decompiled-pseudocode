/*
 * XREFs of DxgkEngLockVisRgn @ 0x1C0252790
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C01446E0 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

__int64 __fastcall DxgkEngLockVisRgn(HDC a1)
{
  __int64 v1; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  MDCOBJA::MDCOBJA((MDCOBJA *)v3, a1);
  if ( v3[0] )
  {
    v1 = *(_QWORD *)(v3[0] + 48LL);
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}
