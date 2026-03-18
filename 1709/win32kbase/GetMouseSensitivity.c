/*
 * XREFs of GetMouseSensitivity @ 0x1C012E0E0
 * Callers:
 *     GetNormalizedMouseSensitivityFactor @ 0x1C012E0FC (GetNormalizedMouseSensitivityFactor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMouseSensitivity(_DWORD *a1)
{
  CDeviceAcceleration *v1; // rax

  v1 = qword_1C0188098;
  if ( a1 )
    *a1 = *((_DWORD *)qword_1C0188098 + 27);
  return *((unsigned int *)v1 + 26);
}
