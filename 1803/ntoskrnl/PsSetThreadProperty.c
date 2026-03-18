/*
 * XREFs of PsSetThreadProperty @ 0x1400CE300
 * Callers:
 *     <none>
 * Callees:
 *     PspValidateThread @ 0x140038928 (PspValidateThread.c)
 *     PspInsertProperty @ 0x1400CE344 (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x1400CE420 (PspRemoveProperty.c)
 */

__int64 __fastcall PsSetThreadProperty(_KTHREAD *a1)
{
  __int64 result; // rax
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // rcx

  result = PspValidateThread(a1);
  if ( (int)result >= 0 )
  {
    v5 = v3 + 1928;
    if ( v2 )
      return PspInsertProperty(v5, v4, v2);
    else
      return PspRemoveProperty(v5, v4, 0LL);
  }
  return result;
}
