/*
 * XREFs of sub_1800893F0 @ 0x1800893F0
 * Callers:
 *     sub_180038FC4 @ 0x180038FC4 (sub_180038FC4.c)
 * Callees:
 *     sub_1800391F0 @ 0x1800391F0 (sub_1800391F0.c)
 */

__int64 __fastcall sub_1800893F0(_QWORD *a1)
{
  __int64 result; // rax
  _DWORD *v3; // r8
  unsigned int i; // ecx

  result = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v3 = &unk_180158D94;
    for ( i = 0; i < 5; ++i )
    {
      if ( *v3 )
        break;
      v3 += 2;
    }
    if ( i < 5 )
    {
      sub_1800391F0(i, a1);
      return 1LL;
    }
  }
  return result;
}
