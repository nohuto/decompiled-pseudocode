/*
 * XREFs of DxgkEngAccumD3DPresentBounds @ 0x1C0251830
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00E64BC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

void __fastcall DxgkEngAccumD3DPresentBounds(HDC a1, int *a2, int a3)
{
  int v4; // r9d
  int v5; // r10d
  int v6; // r11d
  int v7; // edx
  __int64 v8; // r8
  int v9; // r9d
  int v10; // r10d
  int v11; // r11d
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r10d
  int v15; // eax
  int v16; // [rsp+20h] [rbp-20h] BYREF
  int v17; // [rsp+24h] [rbp-1Ch]
  int v18; // [rsp+28h] [rbp-18h]
  int v19; // [rsp+2Ch] [rbp-14h]
  _QWORD v20[2]; // [rsp+30h] [rbp-10h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v20, a1, a3);
  if ( v20[0] )
  {
    v4 = a2[1];
    v5 = a2[2];
    v6 = a2[3];
    v16 = *a2;
    v17 = v4;
    v18 = v5;
    v19 = v6;
    if ( !ERECTL::bEmpty((ERECTL *)&v16) && (*(_DWORD *)(v8 + 36) & 0xE0) != 0 )
    {
      v12 = *(_DWORD *)(v8 + 40) & 1;
      v13 = *(_DWORD *)(v8 + 8 * v12 + 1432);
      v14 = v10 - v13;
      v16 = v7 - v13;
      v15 = *(_DWORD *)(v8 + 8 * v12 + 1436);
      v18 = v14;
      v17 = v9 - v15;
      v19 = v11 - v15;
      XDCOBJ::vAccumulate((XDCOBJ *)v20, (struct ERECTL *)&v16);
    }
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v20);
  }
}
