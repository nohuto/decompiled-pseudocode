/*
 * XREFs of MakeMenuRtoL @ 0x1C02178C4
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0041F78 (xxxInsertMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x1C00C3360 (xxxSetMenuItemInfo.c)
 *     MakeMenuRtoL @ 0x1C02178C4 (MakeMenuRtoL.c)
 * Callees:
 *     MakeMenuRtoL @ 0x1C02178C4 (MakeMenuRtoL.c)
 */

__int64 __fastcall MakeMenuRtoL(__int64 a1, unsigned int a2)
{
  int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( a2 )
    *(_DWORD *)(a1 + 56) |= 0x20u;
  else
    *(_DWORD *)(a1 + 56) &= ~0x20u;
  v4 = 0;
  if ( *(int *)(a1 + 68) > 0 )
  {
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD *)(a1 + 96);
      if ( a2 )
        *(_DWORD *)(v5 + v6) |= 0x6000u;
      else
        *(_DWORD *)(v5 + v6) &= 0xFFFF9FFF;
      v7 = *(_QWORD *)(v5 + v6 + 16);
      if ( v7 )
        MakeMenuRtoL(v7, a2);
      ++v4;
      v5 += 152LL;
    }
    while ( v4 < *(_DWORD *)(a1 + 68) );
  }
  return a1;
}
