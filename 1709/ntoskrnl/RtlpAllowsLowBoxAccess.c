/*
 * XREFs of RtlpAllowsLowBoxAccess @ 0x14012B1B8
 * Callers:
 *     RtlpLookupLowBox @ 0x1400A6468 (RtlpLookupLowBox.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SeSetLearningModeObjectInformation @ 0x140081830 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x140081860 (SeClearLearningModeObjectInformation.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x1400DF4A4 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PsReferenceEffectiveToken @ 0x14049D4B0 (PsReferenceEffectiveToken.c)
 */

char __fastcall RtlpAllowsLowBoxAccess(__int64 a1)
{
  char v3; // bl
  unsigned int v4; // r14d
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rdi
  const WCHAR *v7; // rdx
  bool v8; // si
  char v9; // [rsp+60h] [rbp-A0h] BYREF
  int v10; // [rsp+64h] [rbp-9Ch] BYREF
  _DWORD v11[4]; // [rsp+68h] [rbp-98h] BYREF
  char v12; // [rsp+78h] [rbp-88h] BYREF
  char v13; // [rsp+7Ch] [rbp-84h] BYREF
  int v14; // [rsp+80h] [rbp-80h] BYREF
  char *v15; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v16; // [rsp+90h] [rbp-70h] BYREF
  PVOID v17[4]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v19[7]; // [rsp+D0h] [rbp-30h] BYREF
  char v20; // [rsp+108h] [rbp+8h] BYREF

  memset(v17, 0, sizeof(v17));
  v11[0] = 0x20000;
  v11[1] = 196608;
  v11[2] = 0x20000;
  v11[3] = 2031616;
  memset(v19, 0, sizeof(v19));
  if ( (*(_BYTE *)(a1 + 38) & 2) != 0 )
    return 1;
  if ( !byte_14038D5C4 )
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
  RtlInitUnicodeString(&v16, v7);
  v19[2] = &DestinationString;
  v19[3] = &v16;
  SeSetLearningModeObjectInformation((__int64)v19);
  v15 = &v20;
  v17[2] = (PVOID)PsReferenceEffectiveToken(
                    (unsigned int)KeGetCurrentThread(),
                    (unsigned int)&v13,
                    (unsigned int)&v9,
                    (unsigned int)&v12,
                    0LL);
  v17[3] = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v8 = SeAccessCheckWithHint(
         SeAtomSd,
         0,
         (int *)v17,
         0,
         0x20000u,
         0,
         &v15,
         (__int64)v11,
         KeGetCurrentThread()->PreviousMode,
         &v10,
         &v14);
  ObfDereferenceObjectWithTag(v17[2], 0x746C6644u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E7441u);
  SeClearLearningModeObjectInformation();
  if ( !v8 || !v10 )
    return 0;
  return v3;
}
