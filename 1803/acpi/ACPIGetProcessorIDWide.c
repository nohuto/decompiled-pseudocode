/*
 * XREFs of ACPIGetProcessorIDWide @ 0x1C0026634
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C00020B0 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C00259C0 (ACPIGetConvertToDeviceIDWide.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0002234 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C00022AC (ACPIAnsiStringToWideHelper.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     RtlStringCchCopyNA @ 0x1C0027224 (RtlStringCchCopyNA.c)
 *     RtlStringCchPrintfExA @ 0x1C00272B4 (RtlStringCchPrintfExA.c)
 */

__int64 __fastcall ACPIGetProcessorIDWide(__int64 a1, __int64 a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  void *v6; // rdi
  size_t v7; // rbx
  char *v8; // r14
  char *v9; // r13
  size_t v11; // rdx
  char *v12; // rax
  unsigned int v13; // ebx
  char *v14; // rsi
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  PVOID PoolWithTag; // rax
  __int64 i; // rcx
  char v24; // dl
  __int64 v25; // rdx
  size_t v26; // r15
  char *v27; // rax
  char *v28; // rsi
  size_t v29; // rdx
  char *v30; // rcx
  size_t v31; // rdx
  char *v32; // rcx
  char v34[4]; // [rsp+40h] [rbp-40h] BYREF
  ULONG ReturnLength; // [rsp+44h] [rbp-3Ch] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-38h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+50h] [rbp-30h] BYREF
  char *v38; // [rsp+58h] [rbp-28h]
  char **v39; // [rsp+60h] [rbp-20h]
  _DWORD *v40; // [rsp+68h] [rbp-18h]
  char v41[8]; // [rsp+70h] [rbp-10h] BYREF

  v6 = 0LL;
  v7 = (unsigned __int16)AcpiProcessorString;
  v8 = 0LL;
  ReturnLength = 0;
  v9 = 0LL;
  v38 = 0LL;
  v39 = a5;
  v11 = (unsigned __int16)AcpiProcessorString;
  v40 = a6;
  strcpy(v41, "ACPI\\");
  *(_WORD *)v34 = 42;
  pcchRemaining = (unsigned __int16)AcpiProcessorString;
  LODWORD(ppszDestEnd) = a4 & 0x40;
  if ( (a4 & 0x40) == 0 )
  {
    if ( (a4 & 0x20) == 0 )
      goto LABEL_33;
    if ( ZwQuerySystemInformation(
           SystemVerifierFaultsInformation|SystemProcessorPerformanceInformation,
           0LL,
           0,
           &ReturnLength) == -1073741820 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ReturnLength, 0x53706341u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( ZwQuerySystemInformation(
               SystemVerifierFaultsInformation|SystemProcessorPerformanceInformation,
               PoolWithTag,
               ReturnLength,
               &ReturnLength) < 0 )
        {
          ExFreePoolWithTag(v6, 0x53706341u);
          v6 = 0LL;
        }
        else
        {
          for ( i = 0LL; (unsigned int)i < ReturnLength; i = (unsigned int)(i + 1) )
          {
            v24 = *((_BYTE *)v6 + i);
            if ( !v24 )
              break;
            if ( (unsigned __int8)(v24 - 32) > 0x5Fu || v24 == 44 )
              *((_BYTE *)v6 + i) = 32;
          }
        }
      }
    }
    v25 = -1LL;
    do
      ++v25;
    while ( v41[v25] );
    v11 = v7 + (unsigned int)v25;
    pcchRemaining = v11;
    v7 = v11;
    if ( !v6 )
    {
LABEL_33:
      v26 = 2 * v11;
      v27 = (char *)ExAllocatePoolWithTag(
                      (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                      2 * v11,
                      0x53706341u);
      v28 = v27;
      if ( !v27 )
      {
        v13 = -1073741670;
        goto LABEL_44;
      }
      memset(v27, 0, v26);
      if ( (a4 & 0x20) != 0 )
      {
        if ( v6 )
          RtlStringCchPrintfA(v28, v7, "%s%s - %s", v41, (const char *)Src, (const char *)v6);
        else
          RtlStringCchPrintfA(v28, v7, "%s%s", v41, Src);
      }
      else
      {
        if ( !(_DWORD)ppszDestEnd )
          goto LABEL_42;
        ppszDestEnd = v28;
        RtlStringCchPrintfExA(v28, v7, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v41, v8);
        RtlStringCchPrintfExA(ppszDestEnd + 1, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v34, v8);
        v29 = pcchRemaining - 1;
        v30 = ppszDestEnd + 1;
        *(v38 - 1) = 0;
        RtlStringCchPrintfExA(v30, v29, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v41, v8);
        RtlStringCchPrintfExA(ppszDestEnd + 1, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v34, v8);
        v31 = pcchRemaining - 1;
        v32 = ppszDestEnd + 1;
        *(v9 - 1) = 0;
        RtlStringCchPrintfExA(v32, v31, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v41, v8);
        RtlStringCchPrintfA(ppszDestEnd + 1, pcchRemaining - 1, "%s%s", v34, v8);
      }
      ACPIAnsiStringToWideHelper(v28, v26);
LABEL_42:
      v13 = 0;
      *v39 = v28;
      if ( v40 )
        *v40 = v26;
      goto LABEL_44;
    }
    v7 = v11 + ReturnLength + 3;
LABEL_32:
    v11 = v7;
    pcchRemaining = v7;
    goto LABEL_33;
  }
  v12 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)AcpiProcessorString, 0x53706341u);
  v8 = v12;
  if ( !v12 )
    return (unsigned int)-1073741670;
  memset(v12, 0, v7);
  RtlStringCchCopyNA(v8, v7, (STRSAFE_PCNZCH)Src, (unsigned __int16)AcpiProcessorString);
  v14 = strstr(v8, "Model");
  v38 = v14;
  v15 = strstr(v8, "Family");
  v9 = v15;
  if ( v14 && v15 )
  {
    v16 = -1LL;
    v17 = -1LL;
    do
      ++v17;
    while ( v14[v17] );
    v18 = -1LL;
    do
      ++v18;
    while ( v9[v18] );
    v19 = 6 * v7 - (unsigned int)(2 * v17) - (unsigned int)(2 * v18);
    v20 = -1LL;
    do
      ++v20;
    while ( v34[v20] );
    v21 = (unsigned int)(3 * v20) + v19;
    do
      ++v16;
    while ( v41[v16] );
    v7 = v21 + (unsigned int)(3 * v16) + 1LL;
    goto LABEL_32;
  }
  v13 = -1073741823;
LABEL_44:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  return v13;
}
