/*
 * XREFs of sub_14017579C @ 0x14017579C
 * Callers:
 *     sub_140175834 @ 0x140175834 (sub_140175834.c)
 *     sub_14080CF60 @ 0x14080CF60 (sub_14080CF60.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x1402B1470 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_14017579C(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rsi
  unsigned __int8 result; // al
  unsigned __int8 *v7; // r8
  unsigned __int8 *v8; // rcx
  __int64 v9; // r10
  unsigned __int8 i; // cl

  v5 = a3;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 1008))(a2, a3);
  if ( a3 )
  {
    v7 = (unsigned __int8 *)(a2 + 31);
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
      result = *v7;
      for ( i = *v7; ; i ^= result )
      {
        result >>= 7;
        if ( !result )
          break;
      }
      *v7 = i & 0x7F;
      v7 += 48;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
