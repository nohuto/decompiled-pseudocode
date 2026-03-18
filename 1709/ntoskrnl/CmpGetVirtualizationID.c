/*
 * XREFs of CmpGetVirtualizationID @ 0x1406921DC
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x1406909A4 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x14069216C (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x140489090 (RtlConvertSidToUnicodeString.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     PsReferenceEffectiveToken @ 0x14049D4B0 (PsReferenceEffectiveToken.c)
 *     SeQueryUserSidToken @ 0x1405034B0 (SeQueryUserSidToken.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall CmpGetVirtualizationID(PUNICODE_STRING Destination)
{
  void *v2; // rax
  int v3; // r14d
  PACCESS_TOKEN v4; // rbx
  NTSTATUS v5; // edi
  SIZE_T v6; // rdx
  wchar_t *PoolWithTag; // rax
  bool v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-29h] BYREF
  _BYTE Sid[80]; // [rsp+50h] [rbp-19h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v2 = PsReferenceEffectiveToken((__int64)KeGetCurrentThread(), &v10, &v9, &v11, 0LL);
  v3 = v10;
  v4 = v2;
  if ( v10 == 2 && v11 < 2 )
  {
    if ( v2 )
      ObfDereferenceObject(v2);
    v4 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
    v3 = 1;
  }
  SeQueryUserSidToken((__int64)v4, Sid, 0x44u, 0LL);
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
