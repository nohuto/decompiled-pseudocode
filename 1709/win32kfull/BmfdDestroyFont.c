/*
 * XREFs of BmfdDestroyFont @ 0x1C02368F0
 * Callers:
 *     <none>
 * Callees:
 *     BmfdCloseFontContext @ 0x1C0236860 (BmfdCloseFontContext.c)
 */

__int64 __fastcall BmfdDestroyFont(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 56);
  if ( v2 )
  {
    result = BmfdCloseFontContext(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
