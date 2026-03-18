/*
 * XREFs of rimGetNextFreeCursor @ 0x1C0115828
 * Callers:
 *     RIMCmActivateContact @ 0x1C01154D4 (RIMCmActivateContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimGetNextFreeCursor(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  unsigned int v5; // r11d
  __int64 v6; // rbx
  unsigned int v7; // r9d

  v1 = *(_DWORD *)(a1 + 936);
  v3 = 0;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 940);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 928);
    while ( 1 )
    {
      v7 = v1 % v5;
      if ( !*(_DWORD *)(v6 + 12LL * v7 + 8) )
        break;
      ++v4;
      v1 = v7 + 1;
      if ( v4 >= v5 )
        return v3;
    }
    v3 = *(_DWORD *)(v6 + 12LL * v7 + 4);
    *(_DWORD *)(a1 + 936) = (v7 + 1) % v5;
    *(_DWORD *)(v6 + 12LL * v7 + 8) = 1;
  }
  return v3;
}
