/*
 * XREFs of RtlIsValidIndexHandle @ 0x18004D5F0
 * Callers:
 *     sub_18004CF50 @ 0x18004CF50 (sub_18004CF50.c)
 *     sub_18004D5BC @ 0x18004D5BC (sub_18004D5BC.c)
 * Callees:
 *     RtlIsValidHandle @ 0x18004D630 (RtlIsValidHandle.c)
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
