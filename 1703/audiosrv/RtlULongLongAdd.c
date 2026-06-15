/*
 * XREFs of RtlULongLongAdd @ 0x180045318
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongAdd(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax

  v3 = -1LL;
  if ( a1 + a2 >= a1 )
    v3 = a1 + a2;
  *a3 = v3;
  return a1 + a2 < a1 ? 0xC0000095 : 0;
}
