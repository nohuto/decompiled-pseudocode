/*
 * XREFs of ACPIBusIrpQueryHardwareId @ 0x1C0071B48
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0071520 (ACPIBusIrpQueryId.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1C0001B90 (RtlStringCbPrintfExW.c)
 *     AMLIGetNSObjectType @ 0x1C0001D20 (AMLIGetNSObjectType.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C001595C (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1C0071E84 (ACPIValidateStringVendorDeviceIdFormat.c)
 *     ACPIAllocateBuffer @ 0x1C0071F04 (ACPIAllocateBuffer.c)
 */

__int64 __fastcall ACPIBusIrpQueryHardwareId(wchar_t **a1, size_t *a2, __int64 a3)
{
  void *v6; // r15
  size_t v7; // r8
  int v8; // r14d
  wchar_t *v9; // rax
  size_t v10; // rbx
  NTSTRSAFE_PWSTR v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  size_t v15; // rdx
  PVOID PoolWithTag; // rax
  size_t v17; // r8
  char *v18; // rdx
  SIZE_T v19; // rdx
  PVOID v20; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rax
  NTSTATUS v23; // eax
  bool v24; // zf
  int v25; // eax
  const char *v27; // rax
  __int64 v28; // rdx
  const char *v29; // rcx
  int dwFlags; // [rsp+20h] [rbp-49h]
  int pszFormat; // [rsp+28h] [rbp-41h]
  int v32; // [rsp+30h] [rbp-39h]
  PVOID P; // [rsp+60h] [rbp-9h] BYREF
  size_t Size; // [rsp+68h] [rbp-1h] BYREF
  size_t v35; // [rsp+70h] [rbp+7h] BYREF
  void *Src; // [rsp+78h] [rbp+Fh] BYREF
  PVOID v37; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v38[7]; // [rsp+88h] [rbp+1Fh] BYREF
  size_t pcbRemaining; // [rsp+E0h] [rbp+77h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+E8h] [rbp+7Fh] BYREF

  Src = 0LL;
  P = 0LL;
  v37 = 0LL;
  v6 = 0LL;
  Size = 0LL;
  v35 = 0LL;
  v38[0] = 0LL;
  v8 = ACPIGet(a3, 0x4449485Fu, 268959830, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&v35);
  if ( v8 < 0 )
    goto LABEL_40;
  v9 = (wchar_t *)ACPIAllocateBuffer(a2, a3, v35 + 660, 0x200000000000LL);
  v10 = *a2;
  v11 = v9;
  pcbRemaining = v10;
  *a1 = v9;
  ppszDestEnd = v9;
  if ( !v9 )
  {
    v8 = -1073741670;
    goto LABEL_40;
  }
  v12 = *(_QWORD *)(a3 + 712);
  if ( v12 && (unsigned int)AMLIGetNSObjectType(v12) == 12 )
  {
    memmove(v11, Src, v35);
LABEL_26:
    if ( v10 < v35 )
      goto LABEL_29;
    v25 = RtlStringCbPrintfExW(&v11[v35 >> 1], v10 - v35, &ppszDestEnd, &pcbRemaining, 0, &word_1C005B288);
    goto LABEL_28;
  }
  v13 = *(_QWORD *)(a3 + 8);
  if ( (v13 & 0x200000000000LL) == 0 || (v13 & 0x800000000000LL) != 0 )
    goto LABEL_24;
  v14 = *(_QWORD *)(a3 + 560);
  if ( !v14 )
  {
    v25 = ACPIGet(a3, 0x4449485Fu, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&Size);
LABEL_28:
    v8 = v25;
    goto LABEL_29;
  }
  v15 = -1LL;
  do
    ++v15;
  while ( *(_BYTE *)(v14 + v15) );
  Size = v15;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x42706341u);
  P = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_29;
  memset(PoolWithTag, 0, Size);
  v17 = Size;
  v18 = *(char **)(a3 + 560);
  if ( Size >= 5 )
  {
    v17 = Size - 5;
    Size -= 5LL;
    v18 += 5;
  }
  memmove(P, v18, v17);
  if ( !(unsigned __int8)ACPIValidateStringVendorDeviceIdFormat(P, Size) && (*(_BYTE *)(a3 + 952) & 0x1C) == 0 )
  {
LABEL_24:
    v7 = v35;
    if ( v10 > v35 )
    {
      memmove(v11, Src, v35);
      if ( !v11 )
        goto LABEL_29;
      goto LABEL_26;
    }
    v8 = -1073741670;
LABEL_29:
    if ( v8 >= 0 )
      goto LABEL_30;
    goto LABEL_40;
  }
  v20 = ExAllocatePoolWithTag(PagedPool, v19, 0x42706341u);
  v6 = v20;
  if ( !v20 )
    goto LABEL_29;
  v21 = (Size != 7) + 3LL;
  memset(v20, 0, Size);
  if ( Size > v21 )
  {
    memmove(v6, (char *)P + v21, Size - v21);
    *((_BYTE *)P + v21) = 0;
  }
  v22 = *(_QWORD *)(a3 + 952);
  if ( (v22 & 0x10) != 0 )
  {
    v8 = ACPIGet(a3, 0x4255535Fu, 268959764, 0LL, 0, 0LL, 0LL, (__int64)&v37, (__int64)v38);
    if ( v8 < 0 )
      goto LABEL_40;
    if ( (*(_BYTE *)(a3 + 952) & 8) != 0 )
    {
      v32 = (int)P;
      v8 = RtlStringCbPrintfExW(v11, v10, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S&REV_%04X");
      if ( v8 < 0 )
        goto LABEL_40;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_29;
      v11 = ppszDestEnd + 1;
      v10 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
    v32 = (int)P;
    v23 = RtlStringCbPrintfExW(v11, v10, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S");
  }
  else
  {
    if ( (v22 & 8) != 0 )
    {
      v32 = (int)P;
      v8 = RtlStringCbPrintfExW(v11, v10, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&REV_%04X");
      if ( v8 < 0 )
        goto LABEL_40;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_29;
      v11 = ppszDestEnd + 1;
      v10 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
    v32 = (int)P;
    v23 = RtlStringCbPrintfExW(v11, v10, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S");
  }
  v8 = v23;
  if ( v23 >= 0 )
  {
    if ( !ppszDestEnd || pcbRemaining < 2 )
      goto LABEL_29;
    v10 = pcbRemaining - 2;
    v11 = ppszDestEnd + 1;
    v24 = (*(_BYTE *)(a3 + 952) & 4) == 0;
    ++ppszDestEnd;
    pcbRemaining -= 2LL;
    if ( v24 )
      goto LABEL_24;
    v32 = (int)P;
    v8 = RtlStringCbPrintfExW(
           v11,
           v10,
           &ppszDestEnd,
           &pcbRemaining,
           0,
           L"ACPI\\VEN_%S&DEV_%S&CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
    if ( v8 >= 0 )
    {
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_29;
      v32 = (int)P;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      v8 = RtlStringCbPrintfExW(
             ppszDestEnd,
             pcbRemaining,
             &ppszDestEnd,
             &pcbRemaining,
             0,
             L"ACPI\\VEN_%S&DEV_%S&CLS_%04I64X&SUBCLS_%04I64X");
      if ( v8 >= 0 )
      {
        if ( !ppszDestEnd || pcbRemaining < 2 )
          goto LABEL_29;
        v11 = ppszDestEnd + 1;
        v10 = pcbRemaining - 2;
        goto LABEL_24;
      }
    }
  }
LABEL_40:
  v27 = byte_1C005B1F0;
  v28 = 0LL;
  v29 = byte_1C005B1F0;
  if ( a3 )
  {
    v7 = *(_QWORD *)(a3 + 8);
    v28 = a3;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v27 = *(const char **)(a3 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v29 = *(const char **)(a3 + 568);
    }
  }
  WPP_RECORDER_SF_qdLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v28,
    v7,
    0x28u,
    dwFlags,
    pszFormat,
    v32,
    v8,
    v28,
    v27,
    v29);
LABEL_30:
  if ( v37 )
    ExFreePoolWithTag(v37, 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v8;
}
