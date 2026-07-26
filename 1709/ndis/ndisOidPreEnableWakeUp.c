/*
 * XREFs of ndisOidPreEnableWakeUp @ 0x1C00DF980
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueryEnableWakeUp @ 0x1C00E0B00 (ndisQueryEnableWakeUp.c)
 *     ndisSetEnableWakeUp @ 0x1C00E174C (ndisSetEnableWakeUp.c)
 */

__int64 __fastcall ndisOidPreEnableWakeUp(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL);
  if ( (v1 & 0xFFFFFFFD) == 0 )
    return ndisQueryEnableWakeUp();
  result = 1LL;
  if ( v1 == 1 )
    return ndisSetEnableWakeUp();
  *(_DWORD *)(a1 + 40) = -1073676267;
  return result;
}
