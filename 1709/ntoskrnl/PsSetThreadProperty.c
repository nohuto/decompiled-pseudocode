/*
 * XREFs of PsSetThreadProperty @ 0x140107A30
 * Callers:
 *     <none>
 * Callees:
 *     PspValidateThread @ 0x140107A74 (PspValidateThread.c)
 *     PspInsertProperty @ 0x140107AF0 (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x140107BCC (PspRemoveProperty.c)
 */

__int64 __fastcall PsSetThreadProperty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rcx

  result = PspValidateThread(a1, a2, a3, a3);
  if ( (int)result >= 0 )
  {
    v7 = v5 + 1928;
    if ( v4 )
      return PspInsertProperty(v7, v6, v4);
    else
      return PspRemoveProperty(v7, v6, 0LL);
  }
  return result;
}
