/*
 * XREFs of ?MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z @ 0x1C007AB6C
 * Callers:
 *     xxxEnableMenuItem @ 0x1C007ABB8 (xxxEnableMenuItem.c)
 *     NtUserCheckMenuItem @ 0x1C013D510 (NtUserCheckMenuItem.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0077DF8 (MNLookUpItem.c)
 */

__int64 __fastcall MenuItemState(struct tagMENU *a1, unsigned int a2, int a3, __int64 a4, struct tagMENU **a5)
{
  __int64 v6; // rax
  int v7; // r11d
  __int64 v8; // r10
  unsigned int v9; // edx
  __int64 result; // rax

  v6 = MNLookUpItem((__int64)a1, a2, a3 & 0x400, a5);
  v8 = v6;
  if ( !v6 )
    return 0xFFFFFFFFLL;
  v9 = *(_DWORD *)(v6 + 4);
  result = v7 & v9;
  *(_DWORD *)(v8 + 4) = v9 ^ v7 & (a3 ^ result);
  return result;
}
