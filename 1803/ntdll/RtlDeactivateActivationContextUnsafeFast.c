/*
 * XREFs of RtlDeactivateActivationContextUnsafeFast @ 0x18003B310
 * Callers:
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 *     sub_180038ED4 @ 0x180038ED4 (sub_180038ED4.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_180041914 @ 0x180041914 (sub_180041914.c)
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 *     sub_1800473FC @ 0x1800473FC (sub_1800473FC.c)
 *     LdrShutdownProcess @ 0x180047E60 (LdrShutdownProcess.c)
 *     sub_180054DE8 @ 0x180054DE8 (sub_180054DE8.c)
 *     sub_1800770AC @ 0x1800770AC (sub_1800770AC.c)
 *     ntdll_8 @ 0x18007DD10 (ntdll_8.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

void __fastcall RtlDeactivateActivationContextUnsafeFast(__int64 a1)
{
  PACTIVATION_CONTEXT_STACK ActivationContextStackPointer; // rdi
  ULONG_PTR ActiveFrame; // rdx
  ULONG_PTR v4; // rcx
  PRTL_ACTIVATION_CONTEXT_STACK_FRAME *v5; // r14
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rsi
  PRTL_ACTIVATION_CONTEXT_STACK_FRAME v8; // r12
  unsigned int v9; // r15d
  EXCEPTION_RECORD ExceptionRecord; // [rsp+38h] [rbp-79h] BYREF
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh]

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (ULONG_PTR)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  v4 = *(unsigned int *)(a1 + 32);
  if ( (v4 & 0x40) != 0 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionInformation[1] = a1 + 16;
    ExceptionRecord.NumberParameters = 3;
    ExceptionRecord.ExceptionInformation[0] = 0LL;
    ExceptionRecord.ExceptionInformation[2] = (ULONG_PTR)ActivationContextStackPointer->ActiveFrame;
    ExceptionRecord.ExceptionCode = -1072365551;
    ExceptionRecord.ExceptionFlags = 0;
LABEL_26:
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  if ( (v4 & 0x20) == 0 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionInformation[1] = a1 + 16;
    ExceptionRecord.NumberParameters = 3;
    ExceptionRecord.ExceptionInformation[0] = 0LL;
    ExceptionRecord.ExceptionInformation[2] = (ULONG_PTR)ActivationContextStackPointer->ActiveFrame;
    ExceptionRecord.ExceptionCode = -1072365552;
LABEL_25:
    ExceptionRecord.ExceptionFlags = 1;
    goto LABEL_26;
  }
  if ( (v4 & 0x60) != 0x20 )
  {
    ExceptionRecord.ExceptionInformation[2] = a1 + 16;
LABEL_29:
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[0] = (ULONG_PTR)ActivationContextStackPointer;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionInformation[3] = v4;
LABEL_32:
    ExceptionRecord.ExceptionCode = -1072365548;
    goto LABEL_25;
  }
  if ( *(_QWORD *)a1 >= 0x48uLL
    && (*(_QWORD *)(a1 + 40) != ~*(_QWORD *)(a1 + 16) || *(_QWORD *)(a1 + 48) != ~*(_QWORD *)(a1 + 24)) )
  {
    ExceptionRecord.ExceptionInformation[2] = a1 + 16;
    goto LABEL_29;
  }
  if ( ActiveFrame
    && ((*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20
     || (*(_BYTE *)(ActiveFrame + 16) & 8) == 0
     && *(_QWORD *)(ActiveFrame - 16) >= 0x48uLL
     && (*(_QWORD *)(ActiveFrame + 24) != ~*(_QWORD *)ActiveFrame
      || *(_QWORD *)(ActiveFrame + 32) != ~*(_QWORD *)(ActiveFrame + 8))) )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (ULONG_PTR)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    v6 = *(unsigned int *)(ActiveFrame + 16);
LABEL_31:
    ExceptionRecord.ExceptionInformation[3] = v6;
    goto LABEL_32;
  }
  if ( (v4 & 0x10) == 0 )
  {
    v5 = (PRTL_ACTIVATION_CONTEXT_STACK_FRAME *)(a1 + 16);
    if ( ActiveFrame != a1 + 16 )
    {
      v7 = (ULONG_PTR)ActivationContextStackPointer->ActiveFrame;
      v8 = *v5;
      v9 = 0;
      DbgPrintEx(
        0x33u,
        2u,
        "SXS: %s() Active frame is not the frame being deactivated %p != %p\n",
        "RtlDeactivateActivationContextUnsafeFast",
        ActivationContextStackPointer->ActiveFrame,
        (const void *)(a1 + 16));
      while ( v7 && (PRTL_ACTIVATION_CONTEXT_STACK_FRAME)v7 != v8 )
      {
        if ( (*(_DWORD *)(v7 + 16) & 0x70) != 0x20
          || (*(_BYTE *)(v7 + 16) & 8) == 0
          && (*(_QWORD *)(v7 + 24) != ~*(_QWORD *)v7 || *(_QWORD *)(v7 + 32) != ~*(_QWORD *)(v7 + 8)) )
        {
          ExceptionRecord.ExceptionRecord = 0LL;
          ExceptionRecord.NumberParameters = 4;
          ExceptionRecord.ExceptionInformation[0] = (ULONG_PTR)ActivationContextStackPointer;
          ExceptionRecord.ExceptionInformation[1] = v7;
          ExceptionRecord.ExceptionInformation[2] = a1 + 16;
          v6 = *(unsigned int *)(v7 + 16);
          goto LABEL_31;
        }
        v7 = *(_QWORD *)v7;
        ++v9;
      }
      ExceptionRecord.ExceptionInformation[0] = v9;
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 3;
      ExceptionRecord.ExceptionInformation[1] = a1 + 16;
      ExceptionRecord.ExceptionInformation[2] = (ULONG_PTR)ActivationContextStackPointer->ActiveFrame;
      if ( v7 )
      {
        ExceptionRecord.ExceptionFlags = 0;
        ExceptionRecord.ExceptionCode = v9 != 0 ? -1072365553 : -1072365551;
      }
      else
      {
        ExceptionRecord.ExceptionCode = -1072365552;
        ExceptionRecord.ExceptionFlags = 1;
      }
      RtlRaiseException(&ExceptionRecord);
    }
    ActivationContextStackPointer->ActiveFrame = *v5;
  }
  *(_DWORD *)(a1 + 32) |= 0x40u;
  if ( *(_QWORD *)a1 >= 0x48uLL )
    *(_QWORD *)(a1 + 64) = retaddr;
}
