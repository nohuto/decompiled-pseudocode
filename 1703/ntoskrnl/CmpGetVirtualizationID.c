/*
 * XREFs of CmpGetVirtualizationID @ 0x140452200
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x1404D8D90 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x1406678D4 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x1404C06A0 (RtlConvertSidToUnicodeString.c)
 *     SeQueryUserSidToken @ 0x1404F1B24 (SeQueryUserSidToken.c)
 *     PsReferenceEffectiveToken @ 0x14050B1D0 (PsReferenceEffectiveToken.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall CmpGetVirtualizationID(PUNICODE_STRING Destination)
{
  void *v2; // rax
  int v3; // r14d
  PACCESS_TOKEN v4; // rbx
  NTSTATUS v5; // edi
  SIZE_T v6; // rdx
  wchar_t *PoolWithTag; // rax
  char v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-29h] BYREF
  _BYTE Sid[80]; // [rsp+50h] [rbp-19h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v2 = (void *)PsReferenceEffectiveToken(
                 (unsigned int)KeGetCurrentThread(),
                 (unsigned int)&v10,
                 (unsigned int)&v9,
                 (unsigned int)&v11,
                 0LL);
  v3 = v10;
  v4 = v2;
  if ( v10 == 2 && v11 < 2 )
  {
    if ( v2 )
      ObfDereferenceObject(v2);
    v4 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
    v3 = 1;
  }
  SeQueryUserSidToken(v4, Sid, 68LL);
  v5 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( v5 >= 0 )
  {
    v6 = (unsigned __int16)(UnicodeString.Length + 20);
    Destination->MaximumLength = v6;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x65564D43u);
    Destination->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlCopyUnicodeString(Destination, &UnicodeString);
      RtlAppendUnicodeToString(Destination, L"_Classes");
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( v3 == 1 )
  {
    ObFastDereferenceObject(
      (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
      (unsigned __int64)v4);
  }
  else if ( v4 )
  {
    ObfDereferenceObject(v4);
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v5;
}
