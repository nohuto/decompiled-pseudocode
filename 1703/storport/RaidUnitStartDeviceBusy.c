/*
 * XREFs of RaidUnitStartDeviceBusy @ 0x1C0031BF4
 * Callers:
 *     RaidUnitSubmitResetRequest @ 0x1C003F380 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0004738 (RaidUnitPoFxActivateComponent.c)
 */

__int64 __fastcall RaidUnitStartDeviceBusy(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int8 v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  RaidUnitPoFxActivateComponent(a1, 0, a3, &v5);
  result = v5 & 1;
  *(_QWORD *)(v3 + 16) = result | (2 * ((v5 >> 1) & 1u));
  return result;
}
