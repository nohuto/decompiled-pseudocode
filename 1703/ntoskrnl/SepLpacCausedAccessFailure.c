/*
 * XREFs of SepLpacCausedAccessFailure @ 0x14003E110
 * Callers:
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepLpacCausedAccessFailure(__int64 a1, __int64 a2)
{
  bool result; // al
  int v3; // edx

  result = *(_BYTE *)(a1 + 20)
        && !*(_DWORD *)(a1 + 12)
        && (*(_DWORD *)(a2 + 200) & 0x4000) != 0
        && (v3 = *(_DWORD *)(a1 + 24), (v3 & (*(_DWORD *)(a1 + 4) | *(_DWORD *)(a1 + 8))) != v3)
        && (~v3 & *(_DWORD *)a1) == 0;
  return result;
}
