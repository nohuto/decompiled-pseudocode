/*
 * XREFs of GetNormalizedMouseSensitivityFactor @ 0x1C012E0FC
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C0015EDC (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     GetMouseSensitivity @ 0x1C012E0E0 (GetMouseSensitivity.c)
 */

__int64 __fastcall GetNormalizedMouseSensitivityFactor(__int64 a1)
{
  unsigned __int16 v2; // cx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  GetMouseSensitivity(&v5);
  if ( a1 && (v2 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 64LL), v2 > 0x60u) )
    return v5 * v2 / 0x60;
  else
    return v5;
}
