/*
 * XREFs of eFraction @ 0x1C023A4F0
 * Callers:
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C028C104 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C028C28C (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C028C408 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
double __fastcall eFraction(double result)
{
  __int128 v1; // xmm1
  int v2; // ecx

  v1 = *(_OWORD *)&result;
  v2 = (unsigned __int8)(SLODWORD(result) >> 23) - 127;
  if ( v2 >= 0 )
  {
    if ( v2 < 23 )
    {
      *(float *)&v1 = *(float *)&result - (float)((LODWORD(result) & 0x7FFFFF | 0x800000) >> (23 - v2));
      *(_OWORD *)&result = v1;
    }
    else
    {
      *(_OWORD *)&result = 0LL;
    }
  }
  return result;
}
