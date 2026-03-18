/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x140077340
 * Callers:
 *     PopPrintEx @ 0x140077270 (PopPrintEx.c)
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     vDbgPrintEx @ 0x140077310 (vDbgPrintEx.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     IopDebugPrint @ 0x14023B4A8 (IopDebugPrint.c)
 *     KsepDebugPrint @ 0x14024D0B4 (KsepDebugPrint.c)
 *     DbgPrintReturnControlC @ 0x140286340 (DbgPrintReturnControlC.c)
 *     vDbgPrintExWithPrefix @ 0x140286620 (vDbgPrintExWithPrefix.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 * Callees:
 *     NtQueryDebugFilterState @ 0x140077480 (NtQueryDebugFilterState.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     RtlStringCbVPrintfA @ 0x140161BE8 (RtlStringCbVPrintfA.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     DbgBreakPointWithStatus @ 0x1401B2B50 (DbgBreakPointWithStatus.c)
 *     DebugPrint @ 0x1401B2B60 (DebugPrint.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall vDbgPrintExWithPrefixInternal(
        _BYTE *Src,
        ULONG ComponentId,
        ULONG Level,
        const char *a4,
        va_list argList,
        char a6)
{
  __int64 result; // rax
  char *v10; // rdi
  NTSTATUS v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rbx
  size_t v14; // r14
  struct _EX_RUNDOWN_REF *v15; // rdi
  const char *CurrentIrql; // rsi
  struct _EX_RUNDOWN_REF *v17; // rbx
  void (__fastcall *Count)(__int16 *, _QWORD, _QWORD); // r15
  char v19[96]; // [rsp+0h] [rbp-80h] BYREF
  NTSTRSAFE_PCSTR pszFormat; // [rsp+80h] [rbp+0h]
  NTSTATUS v21; // [rsp+88h] [rbp+8h]
  __int16 v22; // [rsp+90h] [rbp+10h] BYREF
  char *v23; // [rsp+98h] [rbp+18h]

  pszFormat = a4;
  if ( !NtQueryDebugFilterState(ComponentId, Level) )
    return 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = -1LL;
  do
  {
    if ( v12 >= 0x200 )
      break;
    v10 = v19;
    v12 += 128;
    v14 = -1LL;
    do
      ++v14;
    while ( Src[v14] );
    if ( v14 > v12 - 1 )
      v14 = v12 - 1;
    memmove(v19, Src, v14);
    v11 = RtlStringCbVPrintfA(&v19[v14], v12 - v14, pszFormat, argList);
    v21 = v11;
    if ( v11 >= 0 )
      break;
  }
  while ( v11 == -2147483643 );
  if ( v11 == -2147483643 )
  {
    v10[v12 - 2] = 10;
    LOWORD(v13) = v12 - 1;
    v10[v12 - 1] = 0;
  }
  else
  {
    do
      ++v13;
    while ( v10[v13] );
  }
  v23 = v10;
  v22 = v13;
  if ( (KiBugCheckActive & 3) == 0 && RtlpDebugPrintCallbacksActive == 1 )
  {
    v15 = 0LL;
    CurrentIrql = (const char *)KeGetCurrentIrql();
    pszFormat = CurrentIrql;
    if ( (unsigned __int8)CurrentIrql < 0xCu )
    {
      KeGetCurrentIrql();
      __writecr8(0xCuLL);
    }
    ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
    v17 = (struct _EX_RUNDOWN_REF *)RtlpDebugPrintCallbackList;
    if ( RtlpDebugPrintCallbackList != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
    {
      do
      {
        if ( ExAcquireRundownProtection(v17 - 2) )
        {
          ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
          Count = (void (__fastcall *)(__int16 *, _QWORD, _QWORD))v17[-1].Count;
          if ( v15 )
            ExReleaseRundownProtection(v15 + 1);
          v15 = v17 - 3;
          Count(&v22, ComponentId, Level);
          ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
        }
        v17 = (struct _EX_RUNDOWN_REF *)v17->Count;
      }
      while ( v17 != (struct _EX_RUNDOWN_REF *)&RtlpDebugPrintCallbackList );
      LOBYTE(CurrentIrql) = (_BYTE)pszFormat;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
    if ( v15 )
      ExReleaseRundownProtection(v15 + 1);
    if ( (unsigned __int8)CurrentIrql < 0xCu )
      __writecr8((unsigned __int8)CurrentIrql);
  }
  result = DebugPrint(&v22, ComponentId, Level);
  if ( (_DWORD)result == -2147483645 && a6 == 1 )
  {
    DbgBreakPointWithStatus(1u);
    return 0LL;
  }
  return result;
}
