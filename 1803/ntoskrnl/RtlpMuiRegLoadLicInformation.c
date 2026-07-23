/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x140179E68
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x140635254 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     wcspbrk @ 0x14018AFB4 (wcspbrk.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlCultureNameToLCID @ 0x140636850 (RtlCultureNameToLCID.c)
 *     RtlpGetWindowsPolicy @ 0x140636914 (RtlpGetWindowsPolicy.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // rdi
  int v4; // r14d
  unsigned __int64 v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // ebx
  PVOID PoolWithTag; // rax
  const WCHAR *v9; // r15
  int v10; // ebx
  wchar_t *v11; // r14
  wchar_t *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // ebx
  PVOID v15; // rax
  int v16; // ebx
  const WCHAR *v17; // r15
  wchar_t *v18; // r14
  wchar_t *v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // ebx
  PVOID v22; // rax
  int v23; // ebx
  const WCHAR *v24; // r15
  wchar_t *v25; // r14
  wchar_t *v26; // rax
  unsigned int v27; // ebx
  __int64 result; // rax
  int v29; // [rsp+20h] [rbp-48h]
  int v30; // [rsp+20h] [rbp-48h]
  int v31; // [rsp+24h] [rbp-44h]
  int v32; // [rsp+24h] [rbp-44h]
  int v33; // [rsp+28h] [rbp-40h]
  int v34; // [rsp+28h] [rbp-40h]
  BOOL v35; // [rsp+2Ch] [rbp-3Ch]
  int v36; // [rsp+30h] [rbp-38h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  size_t Size; // [rsp+B8h] [rbp+50h] BYREF
  DWORD Lcid; // [rsp+C0h] [rbp+58h] BYREF
  ULONG Type; // [rsp+C8h] [rbp+60h] BYREF

  v36 = -1;
  v1 = a1;
  v31 = 0;
  v2 = 0LL;
  v29 = 0;
  v3 = 0LL;
  v33 = 0;
  v4 = 0;
  v35 = 0;
  v5 = 0LL;
  if ( !a1 )
  {
    v27 = -1073741811;
    goto LABEL_49;
  }
  v35 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs", &Type, (PULONG)&Size) >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed", &Type, (PULONG)&Size) >= 0 )
  {
    v36 = MEMORY[0];
    ExFreePoolWithTag(0LL, 0);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed", &Type, (PULONG)&Size) >= 0 )
  {
    v6 = Size;
    v32 = Size + 4;
    if ( (_DWORD)Size != -4 )
    {
      v7 = Size + 4;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 4), 0x72746C6Du);
      v2 = (unsigned __int64)PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, v7);
      v6 = Size;
    }
    if ( !v2 )
    {
      v31 = 0;
      goto LABEL_53;
    }
    memmove((void *)v2, 0LL, v6);
    v9 = (const WCHAR *)v2;
    v10 = 0;
    v11 = wcspbrk((const wchar_t *)v2, L";");
    LOWORD(v12) = 0;
    if ( v11 )
    {
      do
      {
        *v11 = 0;
        RtlInitUnicodeString(&DestinationString, v9);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          ++v10;
        v9 = v11 + 1;
        v12 = wcspbrk(v11 + 1, L";");
        v11 = v12;
      }
      while ( v12 );
      v1 = a1;
    }
    if ( *v9 != (_WORD)v12 )
    {
      RtlInitUnicodeString(&DestinationString, v9);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        ++v10;
    }
    if ( !v10 )
      ExFreePoolWithTag((PVOID)v2, 0);
    v31 = v10 != 0 ? v32 : 0;
    v2 &= -(__int64)(v10 != 0);
    v4 = 0;
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed", &Type, (PULONG)&Size) >= 0 )
  {
    v13 = Size;
    v30 = Size + 4;
    if ( (_DWORD)Size == -4 )
    {
      v3 = 0LL;
    }
    else
    {
      v14 = Size + 4;
      v15 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 4), 0x72746C6Du);
      v3 = (unsigned __int64)v15;
      if ( v15 )
        memset(v15, 0, v14);
      v13 = Size;
    }
    if ( !v3 )
    {
      v4 = 0;
      goto LABEL_53;
    }
    memmove((void *)v3, 0LL, v13);
    v16 = 0;
    v17 = (const WCHAR *)v3;
    v18 = wcspbrk((const wchar_t *)v3, L";");
    LOWORD(v19) = 0;
    if ( v18 )
    {
      do
      {
        *v18 = 0;
        RtlInitUnicodeString(&DestinationString, v17);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          ++v16;
        v17 = v18 + 1;
        v19 = wcspbrk(v18 + 1, L";");
        v18 = v19;
      }
      while ( v19 );
      v1 = a1;
    }
    if ( *v17 != (_WORD)v19 )
    {
      RtlInitUnicodeString(&DestinationString, v17);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        ++v16;
    }
    if ( !v16 )
      ExFreePoolWithTag((PVOID)v3, 0);
    v4 = v16 != 0 ? v30 : 0;
    v29 = v4;
    v3 &= -(__int64)(v16 != 0);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU", &Type, (PULONG)&Size) >= 0 )
  {
    v20 = Size;
    v34 = Size + 4;
    if ( (_DWORD)Size == -4 )
    {
      v5 = 0LL;
    }
    else
    {
      v21 = Size + 4;
      v22 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 4), 0x72746C6Du);
      v5 = (unsigned __int64)v22;
      if ( v22 )
        memset(v22, 0, v21);
      v20 = Size;
    }
    if ( v5 )
    {
      memmove((void *)v5, 0LL, v20);
      v23 = 0;
      v24 = (const WCHAR *)v5;
      v25 = wcspbrk((const wchar_t *)v5, L";");
      LOWORD(v26) = 0;
      if ( v25 )
      {
        do
        {
          *v25 = 0;
          RtlInitUnicodeString(&DestinationString, v24);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
            ++v23;
          v24 = v25 + 1;
          v26 = wcspbrk(v25 + 1, L";");
          v25 = v26;
        }
        while ( v26 );
        v1 = a1;
      }
      if ( *v24 != (_WORD)v26 )
      {
        RtlInitUnicodeString(&DestinationString, v24);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          ++v23;
      }
      if ( !v23 )
        ExFreePoolWithTag((PVOID)v5, 0);
      v33 = v23 != 0 ? v34 : 0;
      v5 &= -(__int64)(v23 != 0);
      v4 = v29;
      goto LABEL_47;
    }
    v33 = 0;
LABEL_53:
    v27 = -1073741801;
    goto LABEL_48;
  }
LABEL_47:
  v27 = 0;
LABEL_48:
  if ( v2 && v3 )
  {
    ExFreePoolWithTag((PVOID)v3, 0);
    v3 = 0LL;
    v4 = 0;
  }
LABEL_49:
  *(_DWORD *)v1 |= 0x800u;
  *(_DWORD *)(v1 + 116) = v35;
  *(_DWORD *)(v1 + 120) = v36;
  *(_DWORD *)(v1 + 148) = v31;
  *(_DWORD *)(v1 + 144) = v33;
  result = v27;
  *(_QWORD *)(v1 + 128) = v2;
  *(_QWORD *)(v1 + 152) = v3;
  *(_DWORD *)(v1 + 160) = v4;
  *(_QWORD *)(v1 + 136) = v5;
  return result;
}
