/*
 * XREFs of DxgkEngIsRedirectionDC @ 0x1C0252740
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00E64BC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall DxgkEngIsRedirectionDC(HDC a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v5, a1, a3);
  if ( v5[0] )
    v3 = *(_DWORD *)(v5[0] + 36LL) & 0x4000;
  else
    v3 = 1;
  if ( v5[0] )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v5);
  return v3;
}
