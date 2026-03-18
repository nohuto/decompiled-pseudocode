/*
 * XREFs of RtlpAllowsLowBoxAccess @ 0x1400A14E0
 * Callers:
 *     RtlpLookupLowBox @ 0x1400A1320 (RtlpLookupLowBox.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14006D198 (RtlStringCbCopyW.c)
 *     SeAccessCheckWithHint @ 0x1400D47B0 (SeAccessCheckWithHint.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     SeClearLearningModeObjectInformation @ 0x140104B40 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x140105410 (SeSetLearningModeObjectInformation.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PsReferenceEffectiveToken @ 0x1404D42B0 (PsReferenceEffectiveToken.c)
 */

char __fastcall RtlpAllowsLowBoxAccess(__int64 a1)
{
  char v3; // bl
  unsigned int v4; // r14d
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rdi
  const WCHAR *v7; // rdx
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+64h] [rbp-9Ch]
  int v15; // [rsp+68h] [rbp-98h]
  int v16; // [rsp+6Ch] [rbp-94h]
  int v17; // [rsp+70h] [rbp-90h]
  int v18; // [rsp+74h] [rbp-8Ch]
  char v19; // [rsp+78h] [rbp-88h] BYREF
  char v20; // [rsp+7Ch] [rbp-84h] BYREF
  char *v21; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v22; // [rsp+90h] [rbp-70h] BYREF
  PVOID v23[4]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v25[7]; // [rsp+D0h] [rbp-30h] BYREF
  char v26; // [rsp+108h] [rbp+8h] BYREF

  memset(v23, 0, sizeof(v23));
  v15 = 0x20000;
  v16 = 196608;
  v17 = 0x20000;
  v18 = 2031616;
  memset(v25, 0, sizeof(v25));
  if ( (*(_BYTE *)(a1 + 38) & 2) != 0 )
    return 1;
  if ( !byte_1403D154C )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Global Atom Table Entry");
  v3 = 1;
  v4 = 2 * *(unsigned __int8 *)(a1 + 40) + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v4, 0x6D4E7441u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v4);
    if ( RtlStringCbCopyW(v6, v4, (NTSTRSAFE_PCWSTR)(a1 + 42)) < 0 )
      v7 = L"Unable to capture ATOM name.";
    else
      v7 = v6;
  }
  else
  {
    v7 = L"Unable to Allocate space for ATOM name.";
  }
  RtlInitUnicodeString(&v22, v7);
  v25[2] = &DestinationString;
  v25[3] = &v22;
  SeSetLearningModeObjectInformation(v25);
  v21 = &v26;
  v23[2] = (PVOID)PsReferenceEffectiveToken(
                    (unsigned int)KeGetCurrentThread(),
                    (unsigned int)&v20,
                    (unsigned int)&v13,
                    (unsigned int)&v19,
                    0LL);
  v23[3] = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v8 = SeAccessCheckWithHint(SeAtomSd, 0LL, v23);
  ObfDereferenceObjectWithTag(v23[2], 0x746C6644u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E7441u);
  SeClearLearningModeObjectInformation(v10, v9, v11, v12, 0x20000, 0, &v21);
  if ( v8 != 1 || !v14 )
    return 0;
  return v3;
}
