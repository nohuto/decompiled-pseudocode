/*
 * XREFs of ACPIBusIrpQueryDeviceId @ 0x1C0077554
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0071520 (ACPIBusIrpQueryId.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1C0001B90 (RtlStringCbPrintfExW.c)
 *     AMLIGetNSObjectType @ 0x1C0001D20 (AMLIGetNSObjectType.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     RtlStringCbPrintfW @ 0x1C00153E0 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C001595C (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1C0071E84 (ACPIValidateStringVendorDeviceIdFormat.c)
 *     ACPIAllocateBuffer @ 0x1C0071F04 (ACPIAllocateBuffer.c)
 */

__int64 __fastcall ACPIBusIrpQueryDeviceId(wchar_t **a1, SIZE_T *a2, _QWORD *a3)
{
  void *v6; // r13
  int v7; // esi
  wchar_t *v8; // rax
  size_t v9; // r8
  NTSTRSAFE_PWSTR v10; // r15
  size_t v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  size_t v17; // rdx
  PVOID PoolWithTag; // rax
  size_t v19; // r8
  char *v20; // rdx
  SIZE_T v21; // rdx
  PVOID v22; // rax
  unsigned __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rax
  PVOID v26; // rax
  int v27; // eax
  const char *v28; // rax
  __int64 v29; // rdx
  const char *v30; // rcx
  int dwFlags; // [rsp+20h] [rbp-58h]
  int pszFormat; // [rsp+28h] [rbp-50h]
  int v34; // [rsp+30h] [rbp-48h]
  size_t pcbRemaining; // [rsp+60h] [rbp-18h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd[2]; // [rsp+68h] [rbp-10h] BYREF
  size_t Size; // [rsp+C0h] [rbp+48h] BYREF
  size_t v38; // [rsp+C8h] [rbp+50h] BYREF
  PVOID P; // [rsp+D0h] [rbp+58h] BYREF
  void *Src; // [rsp+D8h] [rbp+60h] BYREF

  Src = 0LL;
  v6 = 0LL;
  Size = 0LL;
  v7 = 0;
  P = 0LL;
  v38 = 0LL;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, (__int64)a3, 0x294uLL);
  *a1 = v8;
  v10 = v8;
  v11 = *a2;
  v12 = 0LL;
  ppszDestEnd[0] = v8;
  pcbRemaining = v11;
  if ( !v8 )
    goto LABEL_2;
  v13 = a3[89];
  if ( v13 && (unsigned int)AMLIGetNSObjectType(v13) == 12 )
  {
    v7 = ACPIGet((__int64)a3, 0x4449485Fu, 268959798, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
    if ( v7 < 0 )
      goto LABEL_37;
    v9 = Size;
    if ( v11 >= Size )
    {
      memmove(v10, Src, Size);
LABEL_33:
      if ( v11 < Size )
        goto LABEL_36;
      v27 = RtlStringCbPrintfExW(&v10[Size >> 1], v11 - Size, ppszDestEnd, &pcbRemaining, 0, &word_1C005B288);
LABEL_35:
      v7 = v27;
LABEL_36:
      if ( v7 >= 0 )
      {
LABEL_42:
        if ( v6 )
          ExFreePoolWithTag(v6, 0x53706341u);
        goto LABEL_44;
      }
LABEL_37:
      v28 = byte_1C005B1F0;
      v29 = 0LL;
      v30 = byte_1C005B1F0;
      if ( a3 )
      {
        v9 = a3[1];
        v29 = (__int64)a3;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v28 = (const char *)a3[70];
          if ( (v9 & 0x400000000000LL) != 0 )
            v30 = (const char *)a3[71];
        }
      }
      WPP_RECORDER_SF_qdLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v29,
        v9,
        0x27u,
        dwFlags,
        pszFormat,
        v34,
        v7,
        v29,
        v28,
        v30);
      goto LABEL_42;
    }
    goto LABEL_2;
  }
  v14 = a3[119];
  v15 = -1LL;
  if ( (v14 & 8) == 0 || (v14 & 0x10) == 0 )
    goto LABEL_24;
  v16 = a3[70];
  if ( !v16 )
  {
    v27 = ACPIGet((__int64)a3, 0x4449485Fu, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v38);
    goto LABEL_35;
  }
  v17 = -1LL;
  do
    ++v17;
  while ( *(_BYTE *)(v16 + v17) );
  v38 = v17;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x42706341u);
  P = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_46;
  memset(PoolWithTag, 0, v38);
  v19 = v38;
  v20 = (char *)a3[70];
  if ( v38 >= 5 )
  {
    v19 = v38 - 5;
    v38 -= 5LL;
    v20 += 5;
  }
  memmove(P, v20, v19);
  if ( !ACPIValidateStringVendorDeviceIdFormat((__int64)P, v38) )
  {
LABEL_24:
    v24 = ACPIGet((__int64)a3, 0x4449485Fu, 268959798, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
    v7 = v24;
    if ( v24 == -1073741661 )
    {
      v25 = a3[70];
      if ( !v25 )
        goto LABEL_37;
      do
        ++v15;
      while ( *(_BYTE *)(v25 + v15) );
      Size = 2 * v15 + 2;
      v26 = ExAllocatePoolWithTag(PagedPool, Size, 0x53706341u);
      Src = v26;
      if ( !v26 )
        goto LABEL_2;
      memset(v26, 0, Size);
      RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Src, Size, L"%S", a3[70]);
      v7 = 0;
    }
    else if ( v24 < 0 )
    {
      goto LABEL_37;
    }
    v9 = Size;
    if ( v11 >= Size )
    {
      memmove(v10, Src, Size);
      if ( !v10 )
        goto LABEL_36;
      goto LABEL_33;
    }
LABEL_2:
    v7 = -1073741670;
    goto LABEL_37;
  }
  v22 = ExAllocatePoolWithTag(PagedPool, v21, 0x42706341u);
  v6 = v22;
  if ( v22 )
  {
    LOBYTE(v12) = v38 != 7;
    v23 = v12 + 3;
    memset(v22, 0, v38);
    if ( v38 > v23 )
    {
      memmove(v6, (char *)P + v23, v38 - v23);
      *((_BYTE *)P + v23) = 0;
    }
    v34 = (int)P;
    v7 = RtlStringCbPrintfExW(v10, v11, ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S&REV_%04X");
    if ( v7 < 0 )
      goto LABEL_37;
    if ( !ppszDestEnd[0] || pcbRemaining < 2 )
      goto LABEL_36;
    v10 = ppszDestEnd[0] + 1;
    v11 = pcbRemaining - 2;
    goto LABEL_24;
  }
LABEL_44:
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
LABEL_46:
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v7;
}
