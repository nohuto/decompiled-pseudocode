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

__int64 __fastcall PspSetContextState(__int64 a1, CONTEXT *a2)
{
  CONTEXT *v3; // rsi
  int v5; // ebx
  __int64 result; // rax
  ULONG ContextLength; // [rsp+40h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(CONTEXT **)(a1 + 2016);
  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
  {
    v5 = MEMORY[0xFFFFF780000003D8] != 0LL ? 0x40 : 0;
    RtlGetExtendedContextLength(v5 + 0x100000, &ContextLength);
    memset(v3, 0, ContextLength);
    RtlInitializeExtendedContext(v3, v5 + 0x100000, &ContextEx);
    v3->ContextFlags = 0x100000;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Bu);
  }
  if ( (a2->ContextFlags & 0x100040) == 0x100040 )
    v3->ContextFlags |= 0x100040u;
  RtlCopyContext(v3, a2->ContextFlags, a2);
  result = a2->ContextFlags & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    ContextLength = _mm_getcsr();
    a2->FltSave.MxCsr = ContextLength;
    result = 7999LL;
    a2->FltSave.ControlWord &= 0x1F3Fu;
  }
  return result;
}
