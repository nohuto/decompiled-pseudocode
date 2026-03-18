/*
 * XREFs of AcpiArblibAllocateArbiterInstance @ 0x1C0074CA0
 * Callers:
 *     AcpiArblibInitializeArbiter @ 0x1C00751FC (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     RtlStringCchPrintfExW @ 0x1C00097B4 (RtlStringCchPrintfExW.c)
 *     RtlStringCchPrintfW @ 0x1C000997C (RtlStringCchPrintfW.c)
 *     AMLIGetNSObjectNameSegment @ 0x1C0043A44 (AMLIGetNSObjectNameSegment.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 *     AMLIReferenceHandleEx @ 0x1C0044014 (AMLIReferenceHandleEx.c)
 */

wchar_t *__fastcall AcpiArblibAllocateArbiterInstance(__int64 a1, unsigned int a2)
{
  int v4; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rbx
  signed __int32 v7; // ebp
  const wchar_t *v8; // rax
  volatile signed __int32 *v10; // rsi
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rax
  NTSTRSAFE_PWSTR v13; // r14
  size_t v14; // rdi
  unsigned int v15; // r15d
  volatile signed __int32 *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rsi
  size_t pcchRemaining; // [rsp+90h] [rbp+18h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp+20h] BYREF

  if ( a2 > 6 )
    return 0LL;
  v4 = 74;
  if ( !_bittest(&v4, a2) )
    return 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)257, 0x1D8uLL, 0x41706341u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x1D8uLL);
  v7 = _InterlockedExchangeAdd(&AcpiArbiterInstanceCount, 1u);
  ppszDestEnd = v6;
  pcchRemaining = 64LL;
  if ( a2 == 1 )
  {
    v8 = L"Port";
  }
  else
  {
    v8 = L"Memory";
    if ( a2 != 3 )
      v8 = L"Bus Number";
  }
  if ( RtlStringCchPrintfExW(v6, 0x40uLL, &ppszDestEnd, &pcchRemaining, 0, L"ACPI %s ", v8) < 0 )
  {
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  v10 = *(volatile signed __int32 **)(a1 + 712);
  AMLIReferenceHandleEx((__int64)v10);
  v12 = (volatile signed __int32 *)AMLIGetParent(v11);
  v13 = ppszDestEnd;
  if ( v12 )
  {
    AMLIDereferenceHandleEx(v12);
    v14 = pcchRemaining;
    if ( pcchRemaining >= 5 )
    {
      AMLIGetNSObjectNameSegment((__int64)v10);
      RtlStringCchPrintfW(v13, v14, L"%C%C%C%C");
      v15 = 4;
      v14 -= 4LL;
      v16 = (volatile signed __int32 *)AMLIGetParent((__int64)v10);
      AMLIDereferenceHandleEx(v10);
      v17 = (__int64)v16;
      while ( 1 )
      {
        v18 = AMLIGetParent(v17);
        if ( !v18 )
          goto LABEL_21;
        if ( v14 < 6 || v15 >= 0x40 )
          break;
        memmove(v13 + 5, v13, 2LL * v15);
        v15 += 5;
        v14 -= 5LL;
        AMLIGetNSObjectNameSegment((__int64)v16);
        RtlStringCchPrintfW(v13, 5uLL, L"%C%C%C%C");
        v13[4] = 46;
        AMLIDereferenceHandleEx(v16);
        v17 = v18;
        v16 = (volatile signed __int32 *)v18;
      }
    }
  }
  else
  {
    v14 = pcchRemaining;
  }
  RtlStringCchPrintfW(v13, v14, L"%x", (unsigned int)(v7 + 1));
LABEL_21:
  v6[63] = 0;
  return v6;
}
