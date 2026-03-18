/*
 * XREFs of HUBID_BuildContainerID @ 0x1C001883C
 * Callers:
 *     HUBPDO_AssignPDOIds @ 0x1C006B4FC (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0010A34 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringCbCatStringN @ 0x1C001794C (RtlUnicodeStringCbCatStringN.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBID_BuildContainerID(__int64 a1, __int64 a2)
{
  NTSTATUS Property; // ebx
  UCHAR *v5; // r14
  int v6; // eax
  UCHAR *v7; // rsi
  unsigned int v8; // ebx
  unsigned __int16 v9; // ax
  __int64 v10; // r9
  unsigned __int16 v11; // cx
  char v12; // al
  NTSTATUS v13; // eax
  const wchar_t *v14; // rdx
  size_t v15; // r8
  UCHAR *PoolWithTag; // rax
  UCHAR *v17; // rax
  __int64 dwFlags; // [rsp+28h] [rbp-41h]
  UCHAR pbOutput[4]; // [rsp+40h] [rbp-29h] BYREF
  ULONG pcbResult; // [rsp+44h] [rbp-25h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+48h] [rbp-21h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v25[8]; // [rsp+78h] [rbp+Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  Property = 0;
  GuidString.Buffer = 0LL;
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 1632);
  v7 = 0LL;
  phHash = 0LL;
  *(_DWORD *)pbOutput = 0;
  pcbResult = 0;
  phAlgorithm = 0LL;
  if ( (v6 & 0x20) != 0 )
    goto LABEL_40;
  if ( (v6 & 0x10) != 0 || (v6 & 8) != 0 || (v6 & 0x40) == 0 )
    goto LABEL_31;
  v8 = *(_DWORD *)(a1 + 2148) + 28;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v8, 0x64334855u);
  if ( DestinationString.Buffer )
  {
    v9 = *(_WORD *)(a1 + 1990);
    v10 = *(unsigned __int16 *)(a1 + 1998);
    DestinationString.MaximumLength = v8;
    DestinationString.Length = 0;
    if ( v9 > 0x200u )
    {
      v13 = RtlUnicodeStringPrintf(&DestinationString, L"%.4X%.4X.%4X", *(unsigned __int16 *)(a1 + 1996), v10, v9);
    }
    else
    {
      v11 = *(_WORD *)(a1 + 2000);
      v25[4] = 0;
      v25[0] = (v11 >> 12) + 48;
      v25[1] = (HIBYTE(v11) & 0xF) + 48;
      v12 = *(_BYTE *)(a1 + 2000) & 0xF;
      v25[2] = ((unsigned __int8)v11 >> 4) + 48;
      v25[3] = v12 + 48;
      v13 = RtlUnicodeStringPrintf(&DestinationString, L"%.4X%.4X%S", *(unsigned __int16 *)(a1 + 1996), v10, v25);
    }
    Property = v13;
    if ( v13 < 0 )
      goto LABEL_34;
    v14 = *(const wchar_t **)(a1 + 2152);
    if ( v14 )
    {
      v15 = *(unsigned int *)(a1 + 2148);
      if ( (*(_DWORD *)(a1 + 1636) & 0x800) != 0 )
      {
        v15 -= 14LL;
        v14 += 6;
      }
      Property = RtlUnicodeStringCbCatStringN(&DestinationString, v14, v15);
      if ( Property < 0 )
        goto LABEL_34;
    }
    Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA1", L"Microsoft Primitive Provider", 1u);
    if ( Property < 0 )
    {
      phAlgorithm = 0LL;
      goto LABEL_34;
    }
    Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", pbOutput, 4u, &pcbResult, 0);
    if ( Property < 0 )
      goto LABEL_34;
    if ( pcbResult != 4 )
    {
      Property = -1073741306;
      goto LABEL_34;
    }
    PoolWithTag = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)pbOutput, 0x64334855u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      Property = BCryptCreateHash(phAlgorithm, &phHash, PoolWithTag, *(ULONG *)pbOutput, 0LL, 0, 0);
      if ( Property < 0 )
        goto LABEL_34;
      Property = BCryptHashData(phHash, (PUCHAR)&pbInput, 0x10u, 0);
      if ( Property < 0 )
        goto LABEL_34;
      Property = BCryptHashData(phHash, (PUCHAR)DestinationString.Buffer, DestinationString.Length, 0);
      if ( Property < 0 )
        goto LABEL_34;
      Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", pbOutput, 4u, &pcbResult, 0);
      if ( Property < 0 )
        goto LABEL_34;
      if ( pcbResult != 4 || *(_DWORD *)pbOutput < 0x10u )
      {
        Property = -1073741811;
        goto LABEL_34;
      }
      v17 = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)pbOutput, 0x64334855u);
      v7 = v17;
      if ( v17 )
      {
        Property = BCryptFinishHash(phHash, v17, *(ULONG *)pbOutput, 0);
        if ( Property < 0 )
          goto LABEL_34;
        *(_OWORD *)(a1 + 2064) = *(_OWORD *)v7;
        *(_WORD *)(a1 + 2070) = *(_WORD *)(a1 + 2070) & 0xFFF | 0x5000;
        *(_BYTE *)(a1 + 2072) = *(_BYTE *)(a1 + 2072) & 0x3F | 0x80;
        _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 8u);
LABEL_31:
        if ( (*(_DWORD *)(a1 + 1632) & 0x18) != 0 )
        {
          Property = RtlStringFromGUID((const GUID *const)(a1 + 2064), &GuidString);
          if ( Property >= 0 )
            Property = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 3128))(
                         WdfDriverGlobals,
                         a2,
                         &GuidString);
        }
        goto LABEL_34;
      }
    }
  }
  Property = -1073741670;
LABEL_34:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x64334855u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x64334855u);
LABEL_40:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x64334855u);
  if ( GuidString.Buffer )
    RtlFreeUnicodeString(&GuidString);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( Property < 0 )
  {
    LODWORD(dwFlags) = Property;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0xCu,
      (__int64)&WPP_59b4be90cdb33e2ca4dfcc1816108035_Traceguids,
      dwFlags);
  }
}
