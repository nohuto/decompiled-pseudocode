/*
 * XREFs of GetClassIcoCur @ 0x1C00F6490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetClassIcoCur(__int64 a1, int a2)
{
  _QWORD *v2; // rax

  v2 = *(_QWORD **)(a1 + 168);
  switch ( a2 )
  {
    case -14:
      return v2[15];
    case -34:
      return v2[20];
    case -12:
      return v2[16];
  }
  return 0LL;
}
