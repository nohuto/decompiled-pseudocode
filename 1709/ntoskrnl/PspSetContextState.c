/*
 * XREFs of PspSetContextState @ 0x14071D310
 * Callers:
 *     PspGetSetContextInternal @ 0x140514300 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x1400DAE88 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1400DAFAC (RtlGetExtendedContextLength.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlCopyContext @ 0x140727268 (RtlCopyContext.c)
 */

__int64 __fastcall PspSetContextState(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rsi
  int v5; // ebx
  __int64 result; // rax
  unsigned int Size; // [rsp+40h] [rbp+8h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_DWORD **)(a1 + 2016);
  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
  {
    v5 = MEMORY[0xFFFFF780000003D8] != 0LL ? 0x40 : 0;
    RtlGetExtendedContextLength(v5 + 0x100000);
    memset(v3, 0, Size);
    RtlInitializeExtendedContext((__int64)v3, v5 + 0x100000, &v8);
    v3[12] = 0x100000;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Bu);
  }
  if ( (*(_DWORD *)(a2 + 48) & 0x100040) == 0x100040 )
    v3[12] |= 0x100040u;
  RtlCopyContext(v3, *(unsigned int *)(a2 + 48), a2);
  result = *(_DWORD *)(a2 + 48) & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    *(_DWORD *)(a2 + 280) = _mm_getcsr();
    result = 7999LL;
    *(_WORD *)(a2 + 256) &= 0x1F3Fu;
  }
  return result;
}
