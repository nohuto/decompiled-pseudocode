/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x140157530
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x1405B7134 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     wcspbrk @ 0x14016C530 (wcspbrk.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCultureNameToLCID @ 0x1405B86E0 (RtlCultureNameToLCID.c)
 *     RtlpGetWindowsPolicy @ 0x1405B87A4 (RtlpGetWindowsPolicy.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  int v1; // r14d
  void *v3; // r13
  void *v4; // r15
  int v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // ebx
  PVOID PoolWithTag; // rax
  int v9; // ebx
  const WCHAR *v10; // r14
  wchar_t *v11; // rsi
  wchar_t *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // ebx
  PVOID v15; // rax
  int v16; // ebx
  const WCHAR *v17; // r14
  wchar_t *v18; // rsi
  wchar_t *v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // ebx
  wchar_t *v22; // rcx
  const WCHAR *v23; // r14
  int v24; // ebx
  wchar_t *v25; // rsi
  wchar_t *v26; // rax
  unsigned int v27; // ebx
  __int64 result; // rax
  int v29; // [rsp+20h] [rbp-38h]
  int v30; // [rsp+24h] [rbp-34h]
  BOOL v31; // [rsp+28h] [rbp-30h]
  __int64 v32; // [rsp+2Ch] [rbp-2Ch]
  wchar_t *Str; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  size_t Size; // [rsp+A0h] [rbp+48h] BYREF
  int v36; // [rsp+A8h] [rbp+50h]
  DWORD Lcid; // [rsp+B0h] [rbp+58h] BYREF
  ULONG Type; // [rsp+B8h] [rbp+60h] BYREF

  LODWORD(v32) = -1;
  v1 = 0;
  v36 = 0;
  v3 = 0LL;
  v29 = 0;
  v4 = 0LL;
  Str = 0LL;
  v5 = 0;
  v30 = 0;
  v31 = 0;
  if ( !a1 )
  {
    v27 = -1073741811;
    v1 = 0;
    goto LABEL_47;
  }
  v31 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs", &Type, (PULONG)&Size) >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed", &Type, (PULONG)&Size) >= 0 )
  {
    v32 = MEMORY[0];
    ExFreePoolWithTag(0LL, 0);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed", &Type, (PULONG)&Size) >= 0 )
  {
    v6 = Size;
    v36 = Size + 4;
    if ( (_DWORD)Size != -4 )
    {
      v7 = Size + 4;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 4), 0x72746C6Du);
      v3 = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, v7);
      v6 = Size;
    }
    if ( !v3 )
    {
      v27 = -1073741801;
      goto LABEL_46;
    }
    memmove(v3, 0LL, v6);
    v9 = 0;
    v10 = (const WCHAR *)v3;
    v11 = wcspbrk((const wchar_t *)v3, L";");
    LOWORD(v12) = 0;
    if ( v11 )
    {
      do
      {
        *v11 = 0;
        RtlInitUnicodeString(&DestinationString, v10);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          ++v9;
        v10 = v11 + 1;
        v12 = wcspbrk(v11 + 1, L";");
        v11 = v12;
      }
      while ( v12 );
    }
    if ( *v10 != (_WORD)v12 )
    {
      RtlInitUnicodeString(&DestinationString, v10);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        ++v9;
    }
    if ( !v9 )
    {
      ExFreePoolWithTag(v3, 0);
      v36 = 0;
      v3 = 0LL;
    }
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed", &Type, (PULONG)&Size) >= 0 )
  {
    v13 = Size;
    v29 = Size + 4;
    if ( (_DWORD)Size == -4 )
    {
      v4 = 0LL;
    }
    else
    {
      v14 = Size + 4;
      v15 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 4), 0x72746C6Du);
      v4 = v15;
      if ( v15 )
        memset(v15, 0, v14);
      v13 = Size;
    }
    if ( !v4 )
    {
      v5 = 0;
      v27 = -1073741801;
      goto LABEL_45;
    }
    memmove(v4, 0LL, v13);
    v16 = 0;
    v17 = (const WCHAR *)v4;
    v18 = wcspbrk((const wchar_t *)v4, L";");
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
    }
    if ( *v17 != (_WORD)v19 )
    {
      RtlInitUnicodeString(&DestinationString, v17);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        ++v16;
    }
    if ( !v16 )
    {
      ExFreePoolWithTag(v4, 0);
      v29 = 0;
      v4 = 0LL;
    }
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU", &Type, (PULONG)&Size) >= 0 )
  {
    v20 = Size;
    v30 = Size + 4;
    if ( (_DWORD)Size == -4 )
    {
      v22 = 0LL;
      Str = 0LL;
    }
    else
    {
      v21 = Size + 4;
      Str = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 4), 0x72746C6Du);
      v22 = Str;
      if ( Str )
      {
        memset(Str, 0, v21);
        v22 = Str;
      }
      v20 = Size;
    }
    if ( !v22 )
    {
      v30 = 0;
      v27 = -1073741801;
      goto LABEL_44;
    }
    memmove(v22, 0LL, v20);
    v23 = Str;
    v24 = 0;
    v25 = wcspbrk(Str, L";");
    LOWORD(v26) = 0;
    if ( v25 )
    {
      do
      {
        *v25 = 0;
        RtlInitUnicodeString(&DestinationString, v23);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          ++v24;
        v23 = v25 + 1;
        v26 = wcspbrk(v25 + 1, L";");
        v25 = v26;
      }
      while ( v26 );
    }
    if ( *v23 != (_WORD)v26 )
    {
      RtlInitUnicodeString(&DestinationString, v23);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        ++v24;
    }
    if ( !v24 )
    {
      ExFreePoolWithTag(Str, 0);
      v30 = 0;
      Str = 0LL;
    }
  }
  v27 = 0;
LABEL_44:
  v5 = v29;
LABEL_45:
  v1 = v36;
LABEL_46:
  if ( v3 && v4 )
  {
    ExFreePoolWithTag(v4, 0);
    v4 = 0LL;
    v5 = 0;
  }
LABEL_47:
  *(_DWORD *)a1 |= 0x800u;
  *(_DWORD *)(a1 + 116) = v31;
  *(_DWORD *)(a1 + 120) = v32;
  *(_QWORD *)(a1 + 136) = Str;
  *(_DWORD *)(a1 + 144) = v30;
  result = v27;
  *(_QWORD *)(a1 + 128) = v3;
  *(_QWORD *)(a1 + 152) = v4;
  *(_DWORD *)(a1 + 148) = v1;
  *(_DWORD *)(a1 + 160) = v5;
  return result;
}
