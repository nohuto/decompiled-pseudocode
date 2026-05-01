/*
 * XREFs of ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x180033E00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x180033D30 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 *     ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x180033F70 (-ShouldHaveAppView@CClassicWindow@@UEBA_NXZ.c)
 */

__int64 __fastcall CClassicWindow::ChangeWindowType(CClassicWindow *a1, __int16 a2)
{
  unsigned int v2; // r14d
  char v3; // si
  unsigned int v6; // ebp
  unsigned int v7; // edi
  char v8; // dl
  char HaveAppView; // cl
  char v10; // al
  char v11; // al

  v2 = *((_DWORD *)a1 + 18);
  v3 = 1;
  if ( (a2 & 1) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 4u;
  }
  else if ( (a2 & 2) != 0 )
  {
    *((_DWORD *)a1 + 18) &= ~4u;
    CClassicWindow::SetOwner(a1, 0LL);
  }
  if ( (a2 & 4) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 1u;
    *((_DWORD *)a1 + 18) &= ~2u;
  }
  else if ( (a2 & 8) != 0 )
  {
    *((_DWORD *)a1 + 18) &= ~1u;
  }
  if ( (a2 & 0x20) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 2u;
  }
  else if ( (a2 & 0x40) != 0 )
  {
    *((_DWORD *)a1 + 18) &= ~2u;
  }
  if ( (a2 & 0x200) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 8u;
  }
  else if ( (a2 & 0x400) != 0 )
  {
    *((_DWORD *)a1 + 18) &= ~8u;
  }
  v6 = *((_DWORD *)a1 + 18);
  v7 = a2 & 0x10;
  v8 = v2 ^ v6;
  if ( (((unsigned __int8)v2 ^ *((_BYTE *)a1 + 72)) & 4) != 0 )
    v7 |= 2 - ((v6 & 4) != 0);
  if ( (v8 & 1) != 0 )
    v7 |= (v6 & 1) != 0 ? 4 : 8;
  if ( (v8 & 2) != 0 )
    v7 |= (v6 & 2) != 0 ? 32 : 64;
  HaveAppView = CClassicWindow::ShouldHaveAppView(a1);
  v10 = (v2 & 3) != 0 && (~(v2 >> 3) & 1) != 0 || (v2 & 5) != 0;
  if ( v10 != HaveAppView )
    v7 |= HaveAppView != 0 ? 128 : 256;
  v11 = (v6 & 3) != 0 && (~(v6 >> 3) & 1) != 0;
  if ( (v2 & 3) == 0 || (~(v2 >> 3) & 1) == 0 )
    v3 = 0;
  if ( v3 != v11 )
    v7 |= v11 != 0 ? 2048 : 4096;
  return v7;
}
