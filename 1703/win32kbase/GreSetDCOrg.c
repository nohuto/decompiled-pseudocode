/*
 * XREFs of GreSetDCOrg @ 0x1C0028AD0
 * Callers:
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C003152C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0036CB0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0039E3C (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetDCOrg(HDC a1, int a2, int a3, _OWORD *a4)
{
  unsigned int v7; // ebx
  DC *v8; // r10
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // r10
  int v12; // edx
  DC *v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v14, a1);
  v8 = v14[0];
  if ( v14[0] )
  {
    v7 = 1;
    v9 = (char *)v14[0] + 1440;
    if ( (*((_DWORD *)v14[0] + 10) & 1) == 0 )
      v9 = (char *)v14[0] + 1432;
    *(_DWORD *)v9 = a2;
    v10 = (char *)v8 + 1440;
    if ( (*((_DWORD *)v8 + 10) & 1) == 0 )
      v10 = (char *)v8 + 1432;
    *((_DWORD *)v10 + 1) = a3;
    DC::vCalcFillOrigin(v8);
    if ( a4 )
      *(_OWORD *)(v11 + 1448) = *a4;
    v12 = *(_DWORD *)(v11 + 536);
    if ( (v12 & 3) == 1 )
    {
      *(_DWORD *)(v11 + 36) |= 0x10u;
      *(_DWORD *)(v11 + 536) = v12 | 4;
    }
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v14);
  return v7;
}
