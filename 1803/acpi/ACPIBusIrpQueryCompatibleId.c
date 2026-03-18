/*
 * XREFs of ACPIBusIrpQueryCompatibleId @ 0x1C0076E60
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

__int64 __fastcall ACPIBusIrpQueryCompatibleId(wchar_t **a1, SIZE_T *a2, __int64 a3)
{
  void *v6; // r15
  __int64 v7; // rdi
  wchar_t *v8; // rax
  size_t v9; // r8
  NTSTRSAFE_PWSTR v10; // rsi
  size_t v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rcx
  size_t v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // rdx
  PVOID PoolWithTag; // rax
  size_t v19; // r8
  char *v20; // rdx
  SIZE_T v21; // rdx
  PVOID v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // eax
  const char *v26; // rax
  __int64 v27; // rdx
  const char *v28; // rcx
  int dwFlags; // [rsp+20h] [rbp-58h]
  int pszFormat; // [rsp+28h] [rbp-50h]
  int v32; // [rsp+30h] [rbp-48h]
  size_t Size; // [rsp+60h] [rbp-18h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-10h] BYREF
  size_t pcbRemaining; // [rsp+C0h] [rbp+48h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+C8h] [rbp+50h] BYREF
  void *v37; // [rsp+D0h] [rbp+58h] BYREF
  size_t v38; // [rsp+D8h] [rbp+60h] BYREF

  v37 = 0LL;
  Src[0] = 0LL;
  Size = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3, 0x294uLL);
  *a1 = v8;
  v10 = v8;
  v11 = *a2;
  v12 = 0x200000000000LL;
  pcbRemaining = *a2;
  ppszDestEnd = v8;
  if ( !v8 )
  {
    LODWORD(v7) = -1073741670;
    goto LABEL_59;
  }
  v13 = *(_QWORD *)(a3 + 712);
  if ( v13 && (unsigned int)AMLIGetNSObjectType(v13) == 12 )
  {
    LODWORD(v7) = ACPIGet(a3, 0x4449435Fu, 268960023, 0LL, 0, 0LL, 0LL, (__int64)Src, (__int64)&Size);
    if ( (int)v7 >= 0 )
    {
      v9 = Size;
      if ( v11 < Size )
      {
LABEL_7:
        LODWORD(v7) = -1073741670;
        goto LABEL_59;
      }
      memmove(v10, Src[0], Size);
      v14 = Size;
      if ( v11 >= Size )
      {
LABEL_55:
        v25 = RtlStringCbPrintfExW(&v10[v14 >> 1], v11 - v14, &ppszDestEnd, &pcbRemaining, 0, &word_1C005B288);
LABEL_56:
        LODWORD(v7) = v25;
        goto LABEL_57;
      }
      goto LABEL_57;
    }
    goto LABEL_58;
  }
  v15 = *(_QWORD *)(a3 + 8);
  if ( (v15 & v12) == 0 || (v15 & 0x800000000000LL) != 0 )
    goto LABEL_33;
  v16 = *(_QWORD *)(a3 + 560);
  if ( !v16 )
  {
    v25 = ACPIGet(a3, 0x4449485Fu, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&v37, (__int64)&v38);
    goto LABEL_56;
  }
  v17 = -1LL;
  do
    ++v17;
  while ( *(_BYTE *)(v16 + v17) );
  v38 = v17;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x42706341u);
  v37 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v38);
    v19 = v38;
    v20 = *(char **)(a3 + 560);
    if ( v38 >= 5 )
    {
      v19 = v38 - 5;
      v38 -= 5LL;
      v20 += 5;
    }
    memmove(v37, v20, v19);
    if ( !ACPIValidateStringVendorDeviceIdFormat((__int64)v37, v38) && (*(_BYTE *)(a3 + 952) & 0x1C) == 0 )
      goto LABEL_50;
    v22 = ExAllocatePoolWithTag(PagedPool, v21, 0x42706341u);
    v6 = v22;
    if ( !v22 )
      goto LABEL_64;
    memset(v22, 0, v38);
    LOBYTE(v7) = v38 != 7;
    v23 = v7 + 3;
    memset(v6, 0, v38);
    if ( v38 > v23 )
    {
      memmove(v6, (char *)v37 + v23, v38 - v23);
      *((_BYTE *)v37 + v23) = 0;
    }
    v24 = *(_QWORD *)(a3 + 952);
    if ( (v24 & 0x10) != 0 )
    {
      if ( (v24 & 8) != 0 )
      {
        v32 = (int)v37;
        LODWORD(v7) = RtlStringCbPrintfExW(v10, v11, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&REV_%04X");
        if ( (int)v7 < 0 )
          goto LABEL_58;
        if ( !ppszDestEnd || pcbRemaining < 2 )
          goto LABEL_57;
        v10 = ppszDestEnd + 1;
        v11 = pcbRemaining - 2;
        ++ppszDestEnd;
        pcbRemaining -= 2LL;
      }
      v32 = (int)v37;
      LODWORD(v7) = RtlStringCbPrintfExW(v10, v11, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S");
      if ( (int)v7 < 0 )
      {
LABEL_58:
        if ( (_DWORD)v7 != -1073741772 )
        {
LABEL_59:
          v26 = byte_1C005B1F0;
          v27 = 0LL;
          v28 = byte_1C005B1F0;
          if ( a3 )
          {
            v9 = *(_QWORD *)(a3 + 8);
            v27 = a3;
            if ( (v9 & 0x200000000000LL) != 0 )
            {
              v26 = *(const char **)(a3 + 560);
              if ( (v9 & 0x400000000000LL) != 0 )
                v28 = *(const char **)(a3 + 568);
            }
          }
          WPP_RECORDER_SF_qdLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v27,
            v9,
            0x25u,
            dwFlags,
            pszFormat,
            v32,
            v7,
            v27,
            v26,
            v28);
          goto LABEL_64;
        }
        goto LABEL_64;
      }
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_57;
      v10 = ppszDestEnd + 1;
      v11 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
LABEL_33:
    if ( (*(_BYTE *)(a3 + 952) & 4) != 0 )
    {
      v32 = (int)v37;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      v10,
                      v11,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
      if ( (int)v7 < 0 )
        goto LABEL_58;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_57;
      v32 = (int)v37;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X");
      if ( (int)v7 < 0 )
        goto LABEL_58;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_57;
      v32 = (int)v37;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(ppszDestEnd, pcbRemaining, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S");
      if ( (int)v7 < 0 )
        goto LABEL_58;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_57;
      v32 = *(unsigned __int16 *)(a3 + 598);
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
      if ( (int)v7 < 0 )
        goto LABEL_58;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_57;
      v32 = *(unsigned __int16 *)(a3 + 598);
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X");
      if ( (int)v7 < 0 )
        goto LABEL_58;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_57;
      v10 = ppszDestEnd + 1;
      v11 = pcbRemaining - 2;
    }
LABEL_50:
    LODWORD(v7) = ACPIGet(a3, 0x4449435Fu, 268960023, 0LL, 0, 0LL, 0LL, (__int64)Src, (__int64)&Size);
    if ( (int)v7 >= 0 || v11 != *a2 )
    {
      v9 = Size;
      LODWORD(v7) = 0;
      if ( v11 < Size )
        goto LABEL_7;
      memmove(v10, Src[0], Size);
      if ( !v10 || (v14 = Size, v11 < Size) )
      {
LABEL_64:
        PoolWithTag = v37;
        goto LABEL_65;
      }
      goto LABEL_55;
    }
LABEL_57:
    if ( (int)v7 >= 0 )
      goto LABEL_64;
    goto LABEL_58;
  }
LABEL_65:
  if ( Src[0] )
  {
    ExFreePoolWithTag(Src[0], 0x53706341u);
    PoolWithTag = v37;
  }
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x53706341u);
    PoolWithTag = v37;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x53706341u);
  return (unsigned int)v7;
}
