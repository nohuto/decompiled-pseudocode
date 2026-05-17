/*
 * XREFs of RtlGetActiveActivationContext @ 0x180041750
 * Callers:
 *     sub_180040F58 @ 0x180040F58 (sub_180040F58.c)
 * Callees:
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     RtlAddRefActivationContext @ 0x180029120 (RtlAddRefActivationContext.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlGetActiveActivationContext(_QWORD *a1)
{
  struct _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rdx
  ULONG_PTR ActiveFrame; // rbx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-59h] BYREF

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( !ActivationContextStackPointer )
    return 0LL;
  ActiveFrame = (ULONG_PTR)ActivationContextStackPointer->ActiveFrame;
  if ( !ActivationContextStackPointer->ActiveFrame )
    return 0LL;
  if ( (*(_DWORD *)(ActiveFrame + 16) & 0x70) == 0x20
    && ((*(_BYTE *)(ActiveFrame + 16) & 8) != 0
     || *(_QWORD *)(ActiveFrame - 16) < 0x48uLL
     || *(_QWORD *)(ActiveFrame + 24) == ~*(_QWORD *)ActiveFrame
     && *(_QWORD *)(ActiveFrame + 32) == ~*(_QWORD *)(ActiveFrame + 8)) )
  {
    RtlAddRefActivationContext(*(volatile signed __int32 **)(ActiveFrame + 8));
    *a1 = *(_QWORD *)(ActiveFrame + 8);
    return 0LL;
  }
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 4;
  ExceptionRecord.ExceptionInformation[0] = (ULONG_PTR)ActivationContextStackPointer;
  ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
  ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
  ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
  ExceptionRecord.ExceptionCode = -1072365548;
  ExceptionRecord.ExceptionFlags = 1;
  RtlRaiseException(&ExceptionRecord);
  return 3221225701LL;
}
