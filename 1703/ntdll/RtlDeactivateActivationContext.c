/*
 * XREFs of RtlDeactivateActivationContext @ 0x1800783E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlReleaseActivationContext @ 0x1800188A0 (RtlReleaseActivationContext.c)
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_1800784E4 @ 0x1800784E4 (sub_1800784E4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

void __cdecl RtlDeactivateActivationContext(ULONG Flags, ULONG_PTR Cookie)
{
  struct _TEB *v3; // rax
  ULONG_PTR *ActivationContextStackPointer; // r14
  ULONG_PTR v5; // rdi
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rbx
  ULONG_PTR v8; // rsi
  unsigned int v9; // edx
  __int64 v10; // rcx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-C8h] BYREF

  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() called with invalid flags 0x%08lx\n", "RtlDeactivateActivationContext", Flags);
    RtlRaiseStatus(-1073741811);
  }
  if ( Cookie )
  {
    if ( Cookie >> 60 != 1 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() called with invalid cookie type 0x%08Ix\n",
        "RtlDeactivateActivationContext",
        Cookie);
      RtlRaiseStatus(-1073741811);
    }
    v3 = NtCurrentTeb();
    if ( ((HIDWORD(Cookie) ^ v3->ActivationContextStackPointer->StackId) & 0xFFFFFFF) != 0 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() called with invalid cookie tid 0x%08Ix - should be %08Ix\n",
        "RtlDeactivateActivationContext",
        Cookie,
        v3->ActivationContextStackPointer->StackId & 0xFFFFFFF);
      RtlRaiseStatus(-1073741811);
    }
    ActivationContextStackPointer = (ULONG_PTR *)v3->ActivationContextStackPointer;
    v5 = *ActivationContextStackPointer;
    if ( *ActivationContextStackPointer )
    {
      if ( (*(_DWORD *)(v5 + 16) & 8) != 0
        && *(_QWORD *)((v5 & -(__int64)((*(_DWORD *)(v5 + 16) & 8) != 0)) + 0x18) == Cookie )
      {
        v6 = *ActivationContextStackPointer;
      }
      else
      {
        v6 = *(_QWORD *)v5;
        v9 = 0;
        if ( *(_QWORD *)v5 )
          v10 = v6 & -(__int64)((*(_BYTE *)(v6 + 16) & 8) != 0);
        else
          v10 = 0LL;
        if ( !v6 )
          goto LABEL_32;
        do
        {
          if ( v10 && *(_QWORD *)(v10 + 24) == Cookie )
            break;
          v6 = *(_QWORD *)v6;
          ++v9;
          v10 = v6 ? v6 & -(__int64)((*(_BYTE *)(v6 + 16) & 8) != 0) : 0LL;
        }
        while ( v6 );
        if ( !v6 )
LABEL_32:
          RtlRaiseStatus(-1072365552);
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionRecord.ExceptionFlags = 0;
        ExceptionRecord.ExceptionInformation[0] = v9;
        ExceptionRecord.NumberParameters = 3;
        ExceptionRecord.ExceptionInformation[1] = v6;
        ExceptionRecord.ExceptionInformation[2] = v5;
        ExceptionRecord.ExceptionCode = -1072365553;
        RtlRaiseException(&ExceptionRecord);
      }
      v7 = *(_QWORD *)v6;
      do
      {
        v8 = *(_QWORD *)v5;
        if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
          RtlReleaseActivationContext(*(PACTIVATION_CONTEXT *)(v5 + 8));
        if ( (*(_BYTE *)(v5 + 16) & 8) != 0 )
          sub_1800784E4(ActivationContextStackPointer, v5);
        v5 = v8;
      }
      while ( v8 != v7 );
      *ActivationContextStackPointer = v7;
    }
  }
}
