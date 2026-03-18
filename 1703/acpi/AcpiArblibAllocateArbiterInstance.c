/*
 * XREFs of AcpiArblibAllocateArbiterInstance @ 0x1C009C5A4
 * Callers:
 *     AcpiArblibInitializeArbiter @ 0x1C009CB1C (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     AMLIGetNSObjectNameSegment @ 0x1C0002120 (AMLIGetNSObjectNameSegment.c)
 *     AMLIGetParent @ 0x1C00127F8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     RtlStringCchPrintfW @ 0x1C0024978 (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x1C00249D0 (RtlStringCchPrintfExW.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     AMLIReferenceHandleEx @ 0x1C005AD60 (AMLIReferenceHandleEx.c)
 */

wchar_t *__fastcall AcpiArblibAllocateArbiterInstance(__int64 a1, unsigned int a2)
{
  int v4; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rbx
  signed __int32 v7; // r14d
  const wchar_t *v8; // rax
  volatile signed __int32 *v10; // rsi
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rax
  __int64 v13; // rdx
  NTSTRSAFE_PWSTR v14; // r13
  size_t v15; // rdi
  unsigned int v16; // r15d
  volatile signed __int32 *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  char v21; // cl
  int v22; // r8d
  int v23; // edx
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rsi
  ULONG dwFlags[2]; // [rsp+20h] [rbp-20h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-18h]
  __int64 v30; // [rsp+30h] [rbp-10h]
  size_t pcchRemaining; // [rsp+90h] [rbp+50h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp+58h] BYREF

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
  v14 = ppszDestEnd;
  if ( v12 )
  {
    AMLIDereferenceHandleEx(v12, v13);
    v15 = pcchRemaining;
    if ( pcchRemaining >= 5 )
    {
      AMLIGetNSObjectNameSegment((__int64)v10);
      RtlStringCchPrintfW(v14, v15, L"%C%C%C%C");
      v16 = 4;
      v15 -= 4LL;
      v17 = (volatile signed __int32 *)AMLIGetParent((__int64)v10);
      AMLIDereferenceHandleEx(v10, v18);
      v19 = (__int64)v17;
      while ( 1 )
      {
        v27 = AMLIGetParent(v19);
        if ( !v27 )
          break;
        if ( v15 < 6 || v16 >= 0x40 )
          goto LABEL_31;
        memmove(v14 + 5, v14, 2LL * v16);
        v16 += 5;
        v15 -= 5LL;
        v20 = AMLIGetNSObjectNameSegment((__int64)v17);
        v21 = v20;
        if ( HIBYTE(v20) )
          v22 = SHIBYTE(v20);
        else
          v22 = 42;
        if ( BYTE2(v20) )
          v23 = SBYTE2(v20);
        else
          v23 = 42;
        if ( BYTE1(v20) )
          v24 = SBYTE1(v20);
        else
          v24 = 42;
        v25 = 42LL;
        if ( v21 )
          v25 = (unsigned int)v21;
        LODWORD(v30) = v22;
        LODWORD(pszFormat) = v23;
        dwFlags[0] = v24;
        RtlStringCchPrintfW(v14, 5uLL, L"%C%C%C%C", v25, *(_QWORD *)dwFlags, pszFormat, v30);
        v14[4] = 46;
        AMLIDereferenceHandleEx(v17, v26);
        v19 = v27;
        v17 = (volatile signed __int32 *)v27;
      }
      v6[63] = 0;
      return v6;
    }
  }
  else
  {
    v15 = pcchRemaining;
  }
LABEL_31:
  RtlStringCchPrintfW(v14, v15, L"%x", (unsigned int)(v7 + 1));
  v6[63] = 0;
  return v6;
}
