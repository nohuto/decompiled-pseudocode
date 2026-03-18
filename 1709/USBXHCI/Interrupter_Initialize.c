/*
 * XREFs of Interrupter_Initialize @ 0x1C001E9B0
 * Callers:
 *     Interrupter_ControllerResetPostReset @ 0x1C001DD2C (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_D0Entry @ 0x1C001DDA0 (Interrupter_D0Entry.c)
 * Callees:
 *     memset @ 0x1C0008A40 (memset.c)
 */

_UNKNOWN **__fastcall Interrupter_Initialize(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 i; // rsi
  __int64 v4; // rbx
  __int64 *v5; // r14
  __int64 *j; // rdi
  __int64 v7; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); *(_DWORD *)(v4 + 120) = 1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i);
    v5 = (__int64 *)(v4 + 160);
    for ( j = *(__int64 **)(v4 + 160); j != v5; j = (__int64 *)*j )
      memset((void *)j[2], 0, *((unsigned int *)j + 10));
    v7 = *v5;
    i = (unsigned int)(i + 1);
    *(_QWORD *)(v4 + 144) = *v5;
    result = *(_UNKNOWN ***)(v7 + 16);
    *(_DWORD *)(v4 + 124) = 0;
    *(_DWORD *)(v4 + 128) = 0;
    *(_QWORD *)(v4 + 136) = result;
  }
  return result;
}
