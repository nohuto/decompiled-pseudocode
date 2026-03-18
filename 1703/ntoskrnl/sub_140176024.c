/*
 * XREFs of sub_140176024 @ 0x140176024
 * Callers:
 *     sub_1401760BC @ 0x1401760BC (sub_1401760BC.c)
 *     sub_1407DCDE8 @ 0x1407DCDE8 (sub_1407DCDE8.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140284420 (KeGuardDispatchICall.c)
 */

char __fastcall sub_140176024(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rsi
  char result; // al
  char *v7; // r8
  char *v8; // rcx
  __int64 v9; // r9
  char v10; // cl

  v5 = a3;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 1016))(a2, a3);
  if ( a3 )
  {
    v7 = (char *)(a2 + 31);
    do
    {
      v8 = v7 - 15;
      v9 = 4LL;
      do
      {
        *(_DWORD *)v8 ^= *((_DWORD *)v8 + 4);
        v8 += 4;
        --v9;
      }
      while ( v9 );
      v10 = *v7;
      result = (unsigned __int8)*v7 >> 7;
      if ( *v7 < 0 )
        v10 ^= result;
      *v7 = v10 & 0x7F;
      v7 += 48;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
