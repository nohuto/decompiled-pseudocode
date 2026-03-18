/*
 * XREFs of RIMCmActivateContact @ 0x1C0116964
 * Callers:
 *     rimFindOrCreateActiveContact @ 0x1C01132D4 (rimFindOrCreateActiveContact.c)
 * Callees:
 *     rimGetNextFreeCursor @ 0x1C0116CAC (rimGetNextFreeCursor.c)
 */

__int64 *__fastcall RIMCmActivateContact(__int64 a1, unsigned int a2)
{
  __int64 **v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 **v7; // rcx
  __int64 *result; // rax

  v3 = (__int64 **)(a1 + 1544);
  v4 = *v3;
  if ( *v3 == (__int64 *)v3 )
    return 0LL;
  v5 = *v4;
  v6 = *(_QWORD *)(a1 + 1560) + 16LL * (a2 % *(_DWORD *)(a1 + 1568));
  if ( (__int64 **)v4[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
    __fastfail(3u);
  *v3 = (__int64 *)v5;
  *(_QWORD *)(v5 + 8) = v3;
  *((_DWORD *)v4 + 4) |= 2u;
  *((_DWORD *)v4 - 4) = a2;
  if ( *(_DWORD *)(a1 + 696) == 1 && (*(_DWORD *)(a1 + 260) & 0x80u) == 0 )
    *((_DWORD *)v4 - 3) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1592) + 4LL);
  else
    *((_DWORD *)v4 - 3) = rimGetNextFreeCursor(a1);
  v4[1] = 0LL;
  *v4 = 0LL;
  v7 = *(__int64 ***)(v6 + 8);
  if ( *v7 != (__int64 *)v6 )
    __fastfail(3u);
  *v4 = v6;
  v4[1] = (__int64)v7;
  *v7 = v4;
  *(_QWORD *)(v6 + 8) = v4;
  result = v4 - 2;
  ++*(_DWORD *)(a1 + 1576);
  ++*(_DWORD *)(a1 + 1580);
  return result;
}
