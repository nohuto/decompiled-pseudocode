/*
 * XREFs of DxgkEngGetClientRect @ 0x1C0252570
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00E64BC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall DxgkEngGetClientRect(HDC a1, _OWORD *a2, int a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1, a3);
  v4 = v7[0];
  if ( v7[0] )
  {
    *a2 = *(_OWORD *)(v7[0] + 1448LL);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( v4 )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v7);
  return v5;
}
