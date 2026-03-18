/*
 * XREFs of EnableMouseAcceleration @ 0x1C009C130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CDeviceAcceleration *__fastcall EnableMouseAcceleration(char a1)
{
  CDeviceAcceleration *result; // rax

  result = qword_1C0188098;
  *((_BYTE *)qword_1C0188098 + 112) = a1;
  return result;
}
