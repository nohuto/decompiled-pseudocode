/*
 * XREFs of rimGetNextFreeCursor @ 0x1C0116CAC
 * Callers:
 *     RIMCmActivateContact @ 0x1C0116964 (RIMCmActivateContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimGetNextFreeCursor(__int64 a1)
{
  unsigned int v1; // r11d
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  unsigned int v4; // ebx
  __int64 v5; // rdi
  unsigned int v6; // r9d

  v1 = *(_DWORD *)(a1 + 1604);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 1600);
  v4 = 0;
  if ( v1 )
  {
    v5 = *(_QWORD *)(a1 + 1592);
    while ( 1 )
    {
      v6 = v3 % v1;
      if ( !*(_DWORD *)(v5 + 12LL * v6 + 8) )
        break;
      ++v4;
      v3 = v6 + 1;
      if ( v4 >= v1 )
        return v2;
    }
    v2 = *(_DWORD *)(v5 + 12LL * v6 + 4);
    *(_DWORD *)(a1 + 1600) = (v6 + 1) % v1;
    *(_DWORD *)(v5 + 12LL * v6 + 8) = 1;
  }
  return v2;
}
