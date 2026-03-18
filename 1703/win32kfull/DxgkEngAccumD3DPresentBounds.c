/*
 * XREFs of DxgkEngAccumD3DPresentBounds @ 0x1C024FDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0071AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750FC (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

void __fastcall DxgkEngAccumD3DPresentBounds(HDC a1, int *a2)
{
  int v3; // r9d
  int v4; // r10d
  int v5; // r11d
  int v6; // edx
  __int64 v7; // r8
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  __int64 v11; // rcx
  int v12; // r10d
  int v13; // r9d
  int v14; // r11d
  int v15; // [rsp+20h] [rbp-20h] BYREF
  int v16; // [rsp+24h] [rbp-1Ch]
  int v17; // [rsp+28h] [rbp-18h]
  int v18; // [rsp+2Ch] [rbp-14h]
  _QWORD v19[2]; // [rsp+30h] [rbp-10h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v19, a1);
  if ( v19[0] )
  {
    v3 = a2[1];
    v4 = a2[2];
    v5 = a2[3];
    v15 = *a2;
    v16 = v3;
    v17 = v4;
    v18 = v5;
    if ( !ERECTL::bEmpty((ERECTL *)&v15) && (*(_DWORD *)(v7 + 36) & 0xE0) != 0 )
    {
      v11 = (*(_BYTE *)(v7 + 40) & 1) != 0 ? 8 : 0;
      v12 = v9 - *(_DWORD *)(v11 + v7 + 1432);
      v13 = v8 - *(_DWORD *)(v11 + v7 + 1436);
      v14 = v10 - *(_DWORD *)(v11 + v7 + 1436);
      v15 = v6 - *(_DWORD *)(v11 + v7 + 1432);
      v17 = v12;
      v16 = v13;
      v18 = v14;
      XDCOBJ::vAccumulate((XDCOBJ *)v19, (struct ERECTL *)&v15);
    }
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v19);
}
