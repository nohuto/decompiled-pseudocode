/*
 * XREFs of _dynamic_initializer_for__s_f16One__ @ 0x1800014B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 dynamic_initializer_for__s_f16One__()
{
  unsigned int v0; // edx
  int v1; // r8d
  __int16 result; // ax
  int v3; // ecx
  int v4; // eax

  v0 = LODWORD(FLOAT_1_0) & 0x7FFFFFFF;
  v1 = HIWORD(LODWORD(FLOAT_1_0)) & 0x8000;
  if ( (LODWORD(FLOAT_1_0) & 0x7FFFFFFFu) <= 0x47FFEFFF )
  {
    if ( v0 >= 0x38800000 )
    {
      v4 = ((v0 >> 13) & 1) - 939520001;
    }
    else
    {
      v3 = 113 - (v0 >> 23);
      if ( v3 >= 24 )
        v0 = 0;
      else
        v0 = (LODWORD(FLOAT_1_0) & 0x7FFFFF | 0x800000u) >> v3;
      v4 = ((v0 >> 13) & 1) + 4095;
    }
    result = v1 | ((v0 + v4) >> 13);
    word_1802725A8 = result;
  }
  else
  {
    result = 0x7FFF;
    word_1802725A8 = v1 | 0x7FFF;
  }
  return result;
}
