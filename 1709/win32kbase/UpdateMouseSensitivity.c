/*
 * XREFs of UpdateMouseSensitivity @ 0x1C009BFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateMouseSensitivity(unsigned int a1)
{
  CDeviceAcceleration *v1; // rdx
  __int64 result; // rax
  unsigned int v3; // ecx
  unsigned int v4; // ecx

  v1 = qword_1C0188098;
  result = a1 - 1;
  if ( (unsigned int)result > 0x13 )
    a1 = *((_DWORD *)qword_1C0188098 + 24);
  *((_DWORD *)qword_1C0188098 + 26) = a1;
  if ( a1 <= 2 )
  {
    v4 = (8 * a1) & 0x7FFFFFF;
  }
  else
  {
    result = a1 - 3;
    v3 = a1 << 8;
    if ( (unsigned int)result > 7 )
      v4 = (v3 - 1536) >> 2;
    else
      v4 = (v3 - 512) >> 3;
  }
  *((_DWORD *)v1 + 27) = v4;
  return result;
}
