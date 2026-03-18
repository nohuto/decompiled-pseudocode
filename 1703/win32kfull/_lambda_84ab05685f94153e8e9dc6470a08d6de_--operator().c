/*
 * XREFs of _lambda_84ab05685f94153e8e9dc6470a08d6de_::operator() @ 0x1C00D5864
 * Callers:
 *     ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C00D5684 (-ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall lambda_84ab05685f94153e8e9dc6470a08d6de_::operator()(_QWORD **a1, unsigned int a2)
{
  _DWORD *v2; // r9
  unsigned int v3; // ecx
  _BOOL8 result; // rax

  result = 0;
  if ( a2 >= 0xC )
  {
    v2 = (_DWORD *)**a1;
    v3 = v2[6];
    if ( v3 + a2 >= v3 && v3 + a2 + 20 >= v3 + a2 && v3 + a2 + 20 <= *v2 )
      return 1;
  }
  return result;
}
