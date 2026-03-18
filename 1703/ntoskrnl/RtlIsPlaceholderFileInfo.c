/*
 * XREFs of RtlIsPlaceholderFileInfo @ 0x1406EEC20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsPlaceholder @ 0x1406EEC98 (RtlpIsPlaceholder.c)
 */

__int64 __fastcall RtlIsPlaceholderFileInfo(unsigned int *a1, int a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  char IsPlaceholder; // al
  unsigned int v5; // r9d
  _BYTE *v6; // r8

  if ( a2 < 2 )
    goto LABEL_14;
  if ( a2 <= 3 )
    goto LABEL_10;
  if ( a2 == 35 )
  {
    v2 = *a1;
    v3 = a1[1];
    goto LABEL_13;
  }
  if ( a2 > 36 )
  {
    if ( a2 > 38 )
    {
      if ( a2 == 60 || a2 == 63 )
      {
        v2 = a1[14];
        v3 = a1[17];
LABEL_13:
        IsPlaceholder = RtlpIsPlaceholder(v2, v3);
        *v6 = IsPlaceholder;
        return v5;
      }
      goto LABEL_14;
    }
LABEL_10:
    v2 = a1[14];
    if ( (v2 & 0x400) != 0 )
      v3 = a1[16];
    else
      v3 = 0LL;
    goto LABEL_13;
  }
LABEL_14:
  v5 = -1073741821;
  if ( a2 < 69 )
    return (unsigned int)-1073741637;
  return v5;
}
