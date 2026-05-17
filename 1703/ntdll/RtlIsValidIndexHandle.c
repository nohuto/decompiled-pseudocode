/*
 * XREFs of RtlIsValidIndexHandle @ 0x180072A10
 * Callers:
 *     sub_18007210C @ 0x18007210C (sub_18007210C.c)
 *     sub_1800729D8 @ 0x1800729D8 (sub_1800729D8.c)
 * Callees:
 *     RtlIsValidHandle @ 0x180072A50 (RtlIsValidHandle.c)
 */

char __fastcall RtlIsValidIndexHandle(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rbx

  v4 = *(_QWORD *)(a1 + 24) + (unsigned int)(a2 * *(_DWORD *)(a1 + 4));
  if ( !(unsigned __int8)RtlIsValidHandle(a1, v4) )
    return 0;
  *a3 = v4;
  return 1;
}
