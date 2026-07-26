/*
 * XREFs of SepSddlParseWideStringUlong @ 0x1C00FCBE8
 * Callers:
 *     SepSddlGetAclForString @ 0x1C00FC720 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlParseWideStringUlong(unsigned __int16 *a1, unsigned __int16 **a2, unsigned int *a3)
{
  unsigned __int16 v3; // ax
  int v6; // r9d
  unsigned __int16 v7; // dx
  unsigned int v8; // r10d
  unsigned __int16 *v9; // r8
  int v10; // eax
  __int64 result; // rax

  v3 = *a1;
  *a3 = 0;
  *a2 = a1;
  if ( v3 != 48 )
  {
    if ( (unsigned __int16)(v3 - 48) > 9u )
      goto LABEL_4;
LABEL_9:
    v6 = 10;
    goto LABEL_5;
  }
  if ( ((a1[1] - 88) & 0xFFDF) != 0 )
    goto LABEL_9;
  a1 += 2;
LABEL_4:
  v6 = 16;
LABEL_5:
  v7 = *a1;
  v8 = 0;
  v9 = a1;
  if ( !*a1 )
    return 0LL;
  do
  {
    if ( (unsigned __int16)(v7 - 48) > 9u )
    {
      if ( v6 != 16 )
        break;
      if ( (unsigned __int16)(v7 - 65) > 5u )
      {
        if ( (unsigned __int16)(v7 - 97) > 5u )
          break;
        v10 = v7 - 87;
      }
      else
      {
        v10 = v7 - 55;
      }
    }
    else
    {
      v10 = v7 - 48;
    }
    if ( v10 + v6 * v8 < v8 )
      return 0LL;
    ++v9;
    v8 = v10 + v6 * v8;
    v7 = *v9;
  }
  while ( *v9 );
  if ( v9 == a1 )
    return 0LL;
  *a2 = v9;
  result = 1LL;
  *a3 = v8;
  return result;
}
