/*
 * XREFs of DxgkEngGetClientRect @ 0x1C0250B30
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0071AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750FC (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkEngGetClientRect(HDC a1, _OWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    v3 = 1;
    *a2 = *(_OWORD *)(v5[0] + 1448LL);
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v5);
  return v3;
}
