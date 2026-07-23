/*
 * XREFs of SbpRetrieveCompatibilityManifest @ 0x18007FB7C
 * Callers:
 *     SbpDetermineDllContext @ 0x180020CFC (SbpDetermineDllContext.c)
 * Callees:
 *     RtlQueryInformationActivationContext @ 0x180037100 (RtlQueryInformationActivationContext.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 */

__int64 __fastcall SbpRetrieveCompatibilityManifest(PACTIVATION_CONTEXT ActivationContext, void **a2, SIZE_T *a3)
{
  struct _PEB *v3; // rax
  unsigned int v4; // ebx
  PVOID v5; // rbp
  ULONG v9; // r12d
  NTSTATUS v10; // ecx
  SIZE_T ActivationContextInformationLength; // rsi
  PVOID ActivationContextInformation; // rdi
  SIZE_T Size; // [rsp+70h] [rbp+8h] BYREF

  v3 = NtCurrentPeb();
  v4 = 0;
  v5 = *a2;
  *a2 = 0LL;
  v9 = 1073741826;
  if ( ActivationContext == v3->ImageBaseAddress )
    v9 = 2;
  v10 = RtlQueryInformationActivationContext(
          v9,
          ActivationContext,
          0LL,
          CompatibilityInformationInActivationContext,
          0LL,
          0LL,
          &Size);
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741789 )
  {
    ActivationContextInformationLength = Size;
    if ( Size )
    {
      if ( Size > *a3 )
      {
        ActivationContextInformationLength = Size;
        ActivationContextInformation = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size);
        if ( !ActivationContextInformation )
          return v4;
      }
      else
      {
        ActivationContextInformation = v5;
      }
      if ( RtlQueryInformationActivationContext(
             v9,
             ActivationContext,
             0LL,
             CompatibilityInformationInActivationContext,
             ActivationContextInformation,
             ActivationContextInformationLength,
             &Size) < 0 )
      {
        if ( ActivationContextInformation && ActivationContextInformation != v5 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ActivationContextInformation);
        return v4;
      }
      *a3 = Size;
      *a2 = ActivationContextInformation;
    }
    return 1;
  }
  return v4;
}
