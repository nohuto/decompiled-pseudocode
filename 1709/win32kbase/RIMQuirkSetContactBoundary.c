/*
 * XREFs of RIMQuirkSetContactBoundary @ 0x1C0115B8C
 * Callers:
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0106BE0 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMQuirkApplyTransforms @ 0x1C0115AB4 (RIMQuirkApplyTransforms.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMQuirkSetContactBoundary(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 result; // rax
  int v6; // r11d
  int v8; // r9d
  unsigned __int64 v9; // r8
  int v10; // r10d
  int v11; // ecx

  result = a4 >> 1;
  v6 = a3 - result;
  *a2 = a3 - result;
  v8 = a3 + result;
  v9 = HIDWORD(a3);
  a2[2] = v8;
  v10 = v9 - (a5 >> 1);
  v11 = v9 + (a5 >> 1);
  a2[1] = v10;
  a2[3] = v11;
  if ( v6 == v8 && a4 )
  {
    result = (unsigned int)(v6 + 1);
    a2[2] = result;
  }
  if ( v10 == v11 )
  {
    if ( a5 )
    {
      result = (unsigned int)(v10 + 1);
      a2[3] = result;
    }
  }
  return result;
}
