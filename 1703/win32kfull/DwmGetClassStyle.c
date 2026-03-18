/*
 * XREFs of DwmGetClassStyle @ 0x1C0016430
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0016158 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0042360 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxGetSystemMenu @ 0x1C00C1EA0 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C00C2158 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C00F1334 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     xxxSetClassData @ 0x1C0116768 (xxxSetClassData.c)
 * Callees:
 *     MNLookUpItem @ 0x1C004192C (MNLookUpItem.c)
 */

__int64 __fastcall DwmGetClassStyle(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  unsigned int v4; // r11d
  __int64 v6; // rax
  int v7; // r10d
  unsigned int v8; // r11d

  v1 = *(_QWORD *)(a1 + 168);
  v3 = *(_QWORD *)(a1 + 200);
  v4 = *(_DWORD *)(v1 + 92);
  if ( v3 )
  {
    v6 = MNLookUpItem(v3, 61536LL, 0LL, 0LL);
    if ( !v6
      && (v6 = MNLookUpItem(*(_QWORD *)(a1 + 200), 32864LL, 0LL, 0LL)) == 0
      && (v6 = MNLookUpItem(*(_QWORD *)(a1 + 200), 49264LL, 0LL, 0LL)) == 0
      || (*(_DWORD *)(v6 + 4) & 3) != 0 )
    {
      v7 = 512;
    }
    return v7 | v8;
  }
  return v4;
}
