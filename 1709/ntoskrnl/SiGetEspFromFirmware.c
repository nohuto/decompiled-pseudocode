/*
 * XREFs of SiGetEspFromFirmware @ 0x14077DC34
 * Callers:
 *     SiGetEfiSystemDevice @ 0x14077D8D0 (SiGetEfiSystemDevice.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     ZwEnumerateBootEntries @ 0x14017F380 (ZwEnumerateBootEntries.c)
 *     ZwQueryBootEntryOrder @ 0x14017FF60 (ZwQueryBootEntryOrder.c)
 *     ZwQueryBootOptions @ 0x14017FF80 (ZwQueryBootOptions.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     BiReleasePrivilege @ 0x1405B16E8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1405B1738 (BiAcquirePrivilege.c)
 *     SiBootEntryGetNtFilePath @ 0x14077D748 (SiBootEntryGetNtFilePath.c)
 *     SiGetEfiBootEntryById @ 0x14077D8B0 (SiGetEfiBootEntryById.c)
 *     SiIsValidWindowsBootEntry @ 0x14077E030 (SiIsValidWindowsBootEntry.c)
 */

NTSTATUS __fastcall SiGetEspFromFirmware(void *a1, int a2)
{
  wchar_t *v2; // rdi
  wchar_t *v3; // rsi
  void *v4; // r15
  ULONG *v5; // r12
  int *v6; // r13
  NTSTATUS result; // eax
  unsigned int v8; // r14d
  void *i; // rcx
  PVOID PoolWithTag; // rax
  NTSTATUS v11; // ebx
  unsigned int v12; // eax
  _BOOT_OPTIONS *v13; // rax
  unsigned int v14; // r14d
  NTSTATUS BootOptions; // eax
  unsigned int *EfiBootEntryById; // rax
  unsigned int *v17; // r14
  int NtFilePath; // eax
  char IsValidWindowsBootEntry; // al
  ULONG v20; // r14d
  ULONG *j; // rcx
  ULONG *v22; // rax
  ULONG v23; // ebx
  unsigned int *v24; // rax
  unsigned int *v25; // r14
  int v26; // eax
  _WORD *v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // ecx
  PVOID P; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v31[4]; // [rsp+28h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+50h] BYREF
  ULONG Count; // [rsp+90h] [rbp+58h] BYREF
  PVOID v35; // [rsp+98h] [rbp+60h] BYREF

  LODWORD(NumberOfBytes) = a2;
  v2 = 0LL;
  v3 = 0LL;
  P = 0LL;
  v4 = 0LL;
  v35 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  result = BiAcquirePrivilege(0x16u, (__int64)v31);
  if ( result >= 0 )
  {
    LODWORD(NumberOfBytes) = 0;
    v8 = 0;
    for ( i = 0LL; ; i = PoolWithTag )
    {
      v11 = ZwEnumerateBootEntries(i, (PULONG)&NumberOfBytes);
      if ( v11 != -1073741789 || v8 >= (unsigned int)NumberOfBytes )
        break;
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B505953u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_12;
      v8 = NumberOfBytes;
    }
    if ( v11 < 0 )
      goto LABEL_47;
    if ( !(_DWORD)NumberOfBytes )
    {
LABEL_11:
      v11 = -1073741275;
      goto LABEL_47;
    }
    v12 = 24;
    LODWORD(NumberOfBytes) = 24;
    while ( 1 )
    {
      if ( v6 )
      {
        ExFreePoolWithTag(v6, 0);
        v12 = NumberOfBytes;
      }
      v13 = (_BOOT_OPTIONS *)ExAllocatePoolWithTag(PagedPool, v12, 0x4B505953u);
      v6 = (int *)v13;
      if ( !v13 )
        break;
      v14 = NumberOfBytes;
      BootOptions = ZwQueryBootOptions(v13, (PULONG)&NumberOfBytes);
      v11 = BootOptions;
      if ( BootOptions != -1073741789 )
      {
        if ( BootOptions < 0 )
          goto LABEL_47;
        EfiBootEntryById = SiGetEfiBootEntryById((unsigned int *)v4, v6[3]);
        v17 = EfiBootEntryById;
        if ( EfiBootEntryById
          && (NtFilePath = SiBootEntryGetNtFilePath((__int64)EfiBootEntryById, (_FILE_PATH **)&P),
              v2 = (wchar_t *)P,
              v11 = NtFilePath,
              NtFilePath >= 0) )
        {
          IsValidWindowsBootEntry = SiIsValidWindowsBootEntry(v17, P);
          v20 = 0;
          if ( IsValidWindowsBootEntry )
            goto LABEL_47;
          ExFreePoolWithTag(v2, 0);
          v2 = 0LL;
        }
        else
        {
          v20 = 0;
        }
        Count = 0;
        for ( j = 0LL; ; j = v22 )
        {
          v11 = ZwQueryBootEntryOrder(j, &Count);
          if ( v11 != -1073741789 || v20 >= Count )
            break;
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
          v22 = (ULONG *)ExAllocatePoolWithTag(PagedPool, 4LL * Count, 0x4B505953u);
          v5 = v22;
          if ( !v22 )
            goto LABEL_12;
          v20 = Count;
        }
        if ( !v11 )
        {
          if ( !Count )
            goto LABEL_11;
          v23 = 0;
          do
          {
            v24 = SiGetEfiBootEntryById((unsigned int *)v4, v5[v23]);
            v25 = v24;
            if ( v24 )
            {
              v26 = SiBootEntryGetNtFilePath((__int64)v24, (_FILE_PATH **)&v35);
              v3 = (wchar_t *)v35;
              if ( v26 >= 0 && (unsigned __int8)SiIsValidWindowsBootEntry(v25, v35) )
              {
                if ( v2 )
                {
                  if ( wcsicmp(v2 + 6, v3 + 6) )
                  {
                    v11 = -1073740719;
                    goto LABEL_47;
                  }
                }
                else
                {
                  v2 = v3;
                  v35 = 0LL;
                  v3 = 0LL;
                }
              }
              if ( v3 )
              {
                ExFreePoolWithTag(v3, 0);
                v3 = 0LL;
                v35 = 0LL;
              }
            }
            ++v23;
          }
          while ( v23 < Count );
          v11 = v2 == 0LL ? 0xC0000225 : 0;
        }
        goto LABEL_47;
      }
      v12 = NumberOfBytes;
      if ( v14 >= (unsigned int)NumberOfBytes )
        goto LABEL_47;
    }
LABEL_12:
    v11 = -1073741801;
LABEL_47:
    BiReleasePrivilege(v31);
    if ( v11 >= 0 )
    {
      if ( v2 )
      {
        v27 = v2 + 6;
        v28 = -1LL;
        do
          ++v28;
        while ( v27[v28] );
        v29 = 2 * v28 + 2;
        LODWORD(NumberOfBytes) = v29;
        if ( v29 <= 0x6A )
          memmove(a1, v27, v29);
        else
          v11 = -1073741789;
      }
      else
      {
        v11 = -1073741823;
      }
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    return v11;
  }
  return result;
}
