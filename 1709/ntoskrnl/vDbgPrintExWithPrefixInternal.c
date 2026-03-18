/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x140132910
 * Callers:
 *     PopPrintEx @ 0x14013284C (PopPrintEx.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     vDbgPrintEx @ 0x1401328E0 (vDbgPrintEx.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     vDbgPrintExWithPrefix @ 0x14015C6C0 (vDbgPrintExWithPrefix.c)
 *     IopDebugPrint @ 0x1401FEADC (IopDebugPrint.c)
 *     KsepDebugPrint @ 0x14020EE64 (KsepDebugPrint.c)
 *     DbgPrintReturnControlC @ 0x1402508E0 (DbgPrintReturnControlC.c)
 *     VfUtilDbgPrint @ 0x140276714 (VfUtilDbgPrint.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     RtlStringCbVPrintfA @ 0x1400FA180 (RtlStringCbVPrintfA.c)
 *     NtQueryDebugFilterState @ 0x140132A50 (NtQueryDebugFilterState.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     DbgBreakPointWithStatus @ 0x140188EF0 (DbgBreakPointWithStatus.c)
 *     DebugPrint @ 0x140188F00 (DebugPrint.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
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
  struct _EX_RUNDOWN_REF *v18; // r14
  void (__fastcall *Count)(__int16 *, _QWORD, _QWORD); // rbx
  char v20[96]; // [rsp+0h] [rbp-80h] BYREF
  NTSTRSAFE_PCSTR pszFormat; // [rsp+80h] [rbp+0h]
  NTSTATUS v22; // [rsp+88h] [rbp+8h]
  __int16 v23; // [rsp+90h] [rbp+10h] BYREF
  char *v24; // [rsp+98h] [rbp+18h]

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
    v10 = v20;
    v12 += 128;
    v14 = -1LL;
    do
      ++v14;
    while ( Src[v14] );
    if ( v14 > v12 - 1 )
      v14 = v12 - 1;
    memmove(v20, Src, v14);
    v11 = RtlStringCbVPrintfA(&v20[v14], v12 - v14, pszFormat, argList);
    v22 = v11;
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
  v24 = v10;
  v23 = v13;
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
        v18 = v17 - 3;
        if ( ExAcquireRundownProtection_0(v17 - 2) )
        {
          ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
          Count = (void (__fastcall *)(__int16 *, _QWORD, _QWORD))v18[2].Count;
          if ( v15 )
            ExReleaseRundownProtection_0(v15 + 1);
          v15 = v18;
          Count(&v23, ComponentId, Level);
          ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
          v17 = (struct _EX_RUNDOWN_REF *)v18[3].Count;
        }
        else
        {
          v17 = (struct _EX_RUNDOWN_REF *)v17->Count;
        }
      }
      while ( v17 != (struct _EX_RUNDOWN_REF *)&RtlpDebugPrintCallbackList );
      LOBYTE(CurrentIrql) = (_BYTE)pszFormat;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
    if ( v15 )
      ExReleaseRundownProtection_0(v15 + 1);
    if ( (unsigned __int8)CurrentIrql < 0xCu )
      __writecr8((unsigned __int8)CurrentIrql);
  }
  result = DebugPrint(&v23, ComponentId, Level);
  if ( (_DWORD)result == -2147483645 && a6 == 1 )
  {
    DbgBreakPointWithStatus(1u);
    return 0LL;
  }
  return result;
}
