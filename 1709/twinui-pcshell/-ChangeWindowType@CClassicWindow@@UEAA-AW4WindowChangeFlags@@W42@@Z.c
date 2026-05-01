/*
 * XREFs of ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x180035490
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x1800353C0 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 */

__int64 __fastcall CClassicWindow::ChangeWindowType(CClassicWindow *a1, __int16 a2)
{
  unsigned int v2; // esi
  unsigned int v5; // edx
  unsigned int v6; // edi
  char v7; // cl
  char v8; // cl
  unsigned __int8 v9; // r8
  char v10; // al
  unsigned __int8 v11; // al

  v2 = *((_DWORD *)a1 + 18);
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
  v5 = *((_DWORD *)a1 + 18);
  v6 = a2 & 0x10;
  v7 = v2 ^ v5;
  if ( (((unsigned __int8)v2 ^ *((_BYTE *)a1 + 72)) & 4) != 0 )
    v6 |= 2 - ((v5 & 4) != 0);
  if ( (v7 & 1) != 0 )
    v6 |= 4 * ((v5 & 1) == 0) + 4;
  if ( (v7 & 2) != 0 )
    v6 |= (v5 & 2) != 0 ? 32 : 64;
  v8 = 0;
  if ( (v5 & 3) != 0 && (~(v5 >> 3) & 1) != 0 || (v9 = 0, (v5 & 5) != 0) )
    v9 = 1;
  if ( (v2 & 3) != 0 && (~(v2 >> 3) & 1) != 0 || (v10 = 0, (v2 & 5) != 0) )
    v10 = 1;
  if ( v10 != v9 )
    v6 |= ((v9 ^ 1) << 7) + 128;
  if ( (v5 & 3) == 0 || (v11 = 1, (~(v5 >> 3) & 1) == 0) )
    v11 = 0;
  if ( (v2 & 3) != 0 && (~(v2 >> 3) & 1) != 0 )
    v8 = 1;
  if ( v8 != v11 )
    v6 |= ((v11 ^ 1) << 11) + 2048;
  return v6;
}
