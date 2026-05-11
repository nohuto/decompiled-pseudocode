/*
 * XREFs of USBCntrlGetFilterPropertySet @ 0x1C0024CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBCntrlGetFilterPropertySet(__int64 a1, _DWORD *a2, __int64 a3)
{
  *a2 = 1;
  if ( a3 )
  {
    *(_OWORD *)a3 = *(_OWORD *)&USBAudioFilterPropertySet;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)&off_1C000C7E8;
    *(_QWORD *)(a3 + 32) = 0LL;
  }
  return 0LL;
}
