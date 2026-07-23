/*
 * XREFs of RtlDeactivateActivationContext @ 0x180072C10
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 *     sub_180072D14 @ 0x180072D14 (sub_180072D14.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 */

void __cdecl RtlDeactivateActivationContext(ULONG Flags, ULONG_PTR Cookie)
{
  struct _TEB *v3; // r9
  ULONG_PTR *ActivationContextStackPointer; // r14
  ULONG_PTR v5; // rdi
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rbx
  int v8; // eax
  ULONG_PTR v9; // rsi
  unsigned int v10; // edx
  __int64 v11; // rcx
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
        v10 = 0;
        if ( *(_QWORD *)v5 )
          v11 = v6 & -(__int64)((*(_DWORD *)(v6 + 16) & 8) != 0);
        else
          v11 = 0LL;
        if ( !v6 )
          goto LABEL_32;
        do
        {
          if ( v11 && *(_QWORD *)(v11 + 24) == Cookie )
            break;
          v6 = *(_QWORD *)v6;
          ++v10;
          v11 = v6 ? v6 & -(__int64)((*(_DWORD *)(v6 + 16) & 8) != 0) : 0LL;
        }
        while ( v6 );
        if ( !v6 )
LABEL_32:
          RtlRaiseStatus(-1072365552);
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionRecord.ExceptionFlags = 0;
        ExceptionRecord.ExceptionInformation[0] = v10;
        ExceptionRecord.NumberParameters = 3;
        ExceptionRecord.ExceptionInformation[1] = v6;
        ExceptionRecord.ExceptionInformation[2] = v5;
        ExceptionRecord.ExceptionCode = -1072365553;
        RtlRaiseException(&ExceptionRecord);
      }
      v7 = *(_QWORD *)v6;
      do
      {
        v8 = *(_DWORD *)(v5 + 16);
        v9 = *(_QWORD *)v5;
        if ( (v8 & 1) != 0 )
        {
          RtlReleaseActivationContext(*(PACTIVATION_CONTEXT *)(v5 + 8));
          v8 = *(_DWORD *)(v5 + 16);
        }
        if ( (v8 & 8) != 0 )
          sub_180072D14(ActivationContextStackPointer, v5);
        v5 = v9;
      }
      while ( v9 != v7 );
      *ActivationContextStackPointer = v7;
    }
  }
}
