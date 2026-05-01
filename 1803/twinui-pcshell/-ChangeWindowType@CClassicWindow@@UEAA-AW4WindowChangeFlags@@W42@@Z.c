/*
 * XREFs of ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x180007EA0
 * Callers:
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180006D44 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     ?s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x18000ACC0 (-s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x18000ACE0 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x18011ABB0 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 */

__int64 __fastcall CClassicWindow::ChangeWindowType(CClassicWindow *a1, __int16 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // r8d
  unsigned int v6; // ebx
  char v7; // cl
  char HaveAppView; // al
  unsigned int v9; // r8d
  char v10; // r9
  char ShouldShowInSwitchers; // al
  char v12; // dl

  v2 = *((_DWORD *)a1 + 18);
  v3 = v2;
  if ( (a2 & 1) != 0 )
  {
    v3 = v2 | 4;
    *((_DWORD *)a1 + 18) = v2 | 4;
  }
  else if ( (a2 & 2) != 0 )
  {
    *((_DWORD *)a1 + 18) = v2 & 0xFFFFFFFB;
    CClassicWindow::SetOwner(a1, 0LL);
    v3 = *((_DWORD *)a1 + 18);
  }
  if ( (a2 & 4) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 1u;
    v3 = *((_DWORD *)a1 + 18) & 0xFFFFFFFD;
    *((_DWORD *)a1 + 18) = v3;
  }
  else if ( (a2 & 8) != 0 )
  {
    *((_DWORD *)a1 + 18) &= ~1u;
    v3 = *((_DWORD *)a1 + 18);
  }
  if ( (a2 & 0x20) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 2u;
  }
  else
  {
    if ( (a2 & 0x40) == 0 )
      goto LABEL_9;
    *((_DWORD *)a1 + 18) &= ~2u;
  }
  v3 = *((_DWORD *)a1 + 18);
LABEL_9:
  if ( (a2 & 0x200) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 8u;
  }
  else
  {
    if ( (a2 & 0x400) == 0 )
      goto LABEL_13;
    *((_DWORD *)a1 + 18) &= ~8u;
  }
  v3 = *((_DWORD *)a1 + 18);
LABEL_13:
  v6 = a2 & 0x10;
  v7 = v2 ^ v3;
  if ( (((unsigned __int8)v2 ^ (unsigned __int8)v3) & 4) != 0 )
    v6 |= 2 - ((v3 & 4) != 0);
  if ( (v7 & 1) != 0 )
    v6 |= 4 * ((v3 & 1) == 0) + 4;
  if ( (v7 & 2) != 0 )
    v6 |= (v3 & 2) != 0 ? 32 : 64;
  CClassicWindow::s_ShouldHaveAppView(v3);
  HaveAppView = CClassicWindow::s_ShouldHaveAppView(v2);
  if ( HaveAppView != v10 )
    v6 |= v10 != 0 ? 128 : 256;
  CClassicWindow::s_ShouldShowInSwitchers(v9);
  ShouldShowInSwitchers = CClassicWindow::s_ShouldShowInSwitchers(v2);
  if ( ShouldShowInSwitchers != v12 )
    v6 |= v12 != 0 ? 2048 : 4096;
  return v6;
}
