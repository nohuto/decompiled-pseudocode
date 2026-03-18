/*
 * XREFs of _lambda_84ab05685f94153e8e9dc6470a08d6de_::operator() @ 0x1C0040058
 * Callers:
 *     ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C003FE34 (-ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_84ab05685f94153e8e9dc6470a08d6de_::operator()(unsigned int ***a1, unsigned int a2)
{
  unsigned int *v2; // r9
  unsigned int v3; // ecx
  unsigned int v4; // eax
  bool result; // al

  result = 0;
  if ( a2 >= 0xC )
  {
    v2 = **a1;
    v3 = v2[6];
    if ( v3 + a2 >= v3 )
    {
      v4 = v3 + a2 + 20;
      if ( v4 >= v3 + a2 && v4 <= *v2 )
        return 1;
    }
  }
  return result;
}
