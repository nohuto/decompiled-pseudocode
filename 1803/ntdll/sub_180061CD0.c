/*
 * XREFs of sub_180061CD0 @ 0x180061CD0
 * Callers:
 *     sub_180061B10 @ 0x180061B10 (sub_180061B10.c)
 * Callees:
 *     <none>
 */

__int64 sub_180061CD0()
{
  unsigned __int16 v0; // dx
  __int16 v1; // r8
  unsigned __int16 v2; // ax

  v0 = 0;
  if ( word_18015AA42 != 1024 )
  {
    v1 = word_18015AA40;
    do
    {
      v2 = 0;
      if ( v1 != 1024 )
        v2 = v1;
      v1 = v2 + 1;
    }
    while ( *(_QWORD *)(qword_18015AA38 + 8LL * v2) );
    return (unsigned __int16)(v2 + 1);
  }
  return v0;
}
