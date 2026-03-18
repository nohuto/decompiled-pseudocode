/*
 * XREFs of SepSddlParseWideStringUlong @ 0x1C00DB438
 * Callers:
 *     SepSddlGetAclForString @ 0x1C00DAF70 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlParseWideStringUlong(wchar_t *Buffer, const wchar_t **FinalPosition, unsigned int *Value)
{
  wchar_t v3; // ax
  int v6; // r9d
  wchar_t v7; // dx
  unsigned int v8; // r10d
  const wchar_t *v9; // r8
  int v10; // eax
  __int64 result; // rax

  v3 = *Buffer;
  *Value = 0;
  *FinalPosition = Buffer;
  if ( v3 != 48 )
  {
    if ( (unsigned __int16)(v3 - 48) > 9u )
      goto LABEL_4;
LABEL_9:
    v6 = 10;
    goto LABEL_5;
  }
  if ( ((Buffer[1] - 88) & 0xFFDF) != 0 )
    goto LABEL_9;
  Buffer += 2;
LABEL_4:
  v6 = 16;
LABEL_5:
  v7 = *Buffer;
  v8 = 0;
  v9 = Buffer;
  if ( !*Buffer )
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
  if ( v9 == Buffer )
    return 0LL;
  *FinalPosition = v9;
  result = 1LL;
  *Value = v8;
  return result;
}
