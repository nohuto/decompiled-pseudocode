/*
 * XREFs of ObpCaptureBoundaryDescriptor @ 0x1404699E4
 * Callers:
 *     NtCreatePrivateNamespace @ 0x1404692F4 (NtCreatePrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x140469798 (NtOpenPrivateNamespace.c)
 * Callees:
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObpCheckDuplicateEntries @ 0x140469C4C (ObpCheckDuplicateEntries.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140469CA4 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpCaptureBoundaryDescriptor(__m128i *Src, char **a2)
{
  __m128i *v4; // rax
  unsigned int v5; // edi
  char *v6; // rcx
  char *PoolWithTag; // rsi
  char v9; // r13
  __int64 v10; // r15
  struct _KTHREAD *CurrentThread; // rcx
  PACCESS_TOKEN PrimaryToken; // rdi
  unsigned __int64 v13; // r15
  char *v14; // r15
  NTSTATUS v15; // edi
  int v16; // edx
  char *v17; // rcx
  unsigned int v18; // eax
  ULONG v19; // [rsp+20h] [rbp-88h]
  PVOID P; // [rsp+28h] [rbp-80h] BYREF
  size_t Size; // [rsp+30h] [rbp-78h]
  __m128i v22; // [rsp+38h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-60h] BYREF
  PVOID TokenInformation; // [rsp+C8h] [rbp+20h] BYREF

  *a2 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v4 = Src;
    if ( (unsigned __int64)Src >= 0x7FFFFFFF0000LL )
      v4 = (__m128i *)0x7FFFFFFF0000LL;
    v22 = *v4;
    v5 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
    v22.m128i_i32[2] = v5;
    if ( v5 - 16 > 0x7FEF )
      return 3221225485LL;
    if ( v5 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = &Src->m128i_i8[v5];
      if ( (unsigned __int64)v6 > 0x7FFFFFFF0000LL || v6 < (char *)Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v22 = *Src;
    v5 = v22.m128i_u32[2];
  }
  PoolWithTag = 0LL;
  LODWORD(TokenInformation) = 0;
  v9 = 0;
  Size = v5;
  v10 = v5;
  P = 0LL;
  v19 = 0;
  if ( (v22.m128i_i8[12] & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 1;
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenIsAppContainer, &TokenInformation);
    if ( (_DWORD)TokenInformation )
    {
      v15 = SeQueryInformationToken(PrimaryToken, TokenAppContainerSid, &P);
      if ( v15 < 0 )
        goto LABEL_24;
      v19 = RtlLengthSid(*(PSID *)P);
      v10 += ((v19 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8;
    }
    v5 = v22.m128i_u32[2];
  }
  v13 = v10 + 48;
  if ( v13 > 0xFFFFFFFF )
  {
    v15 = -1073741675;
    goto LABEL_24;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x534E624Fu);
  TokenInformation = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = -1073741670;
    goto LABEL_24;
  }
  *((_QWORD *)PoolWithTag + 3) = (unsigned int)v13 - 48LL;
  v14 = PoolWithTag + 48;
  memmove(PoolWithTag + 48, Src, Size);
  if ( P )
  {
    v17 = &v14[Size];
    if ( &v14[Size] != (char *)((unsigned __int64)&v14[Size + 7] & 0xFFFFFFFFFFFFFFF8uLL) )
    {
LABEL_31:
      v15 = -1073741811;
      goto LABEL_24;
    }
    *(_DWORD *)v17 = 2;
    v18 = ((v19 + 7) & 0xFFFFFFF8) + 8;
    *((_DWORD *)v17 + 1) = v18;
    v5 += v18;
    ++v22.m128i_i32[1];
    memmove(v17 + 8, *(const void **)P, v19);
  }
  *((_DWORD *)PoolWithTag + 14) = v5;
  *((_DWORD *)PoolWithTag + 13) = v22.m128i_i32[1];
  v15 = RtlEnumerateBoundaryDescriptorEntries(PoolWithTag + 48, 0LL, 0LL);
  if ( v15 >= 0 && !(unsigned int)ObpCheckDuplicateEntries(PoolWithTag) )
    goto LABEL_31;
  PoolWithTag[40] = 0;
  RtlEnumerateBoundaryDescriptorEntries(PoolWithTag + 48, ObpHashBoundaryFunction, PoolWithTag);
  v16 = (3134165325u * (unsigned __int64)(unsigned __int8)PoolWithTag[40]) >> 32;
  PoolWithTag[40] -= 37 * ((v16 + (((unsigned int)(unsigned __int8)PoolWithTag[40] - v16) >> 1)) >> 5);
LABEL_24:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v15 < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x534E624Fu);
  }
  else
  {
    *a2 = PoolWithTag;
  }
  return (unsigned int)v15;
}
