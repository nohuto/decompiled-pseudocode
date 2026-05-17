/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800184E0
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800180C0 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x1800179D0 (RtlGetNtSystemRoot.c)
 *     RtlDoesFileExists_UEx @ 0x18001BE04 (RtlDoesFileExists_UEx.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x18006C580 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A0700 (NtEnumerateKey.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DF454 (RtlpGetAssemblyStorageMapRootLocation.c)
 */

int __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  __int64 v6; // rcx
  const WCHAR *NtSystemRoot; // rax
  int Length; // r14d
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  size_t v11; // r15
  wchar_t *Buffer; // rdx
  char *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // r14d
  HANDLE v18; // r12
  int v19; // r15d
  __int64 v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v24[4]; // [rsp+40h] [rbp-C0h] BYREF
  char *v25; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  void *v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h]
  __int128 v31; // [rsp+80h] [rbp-80h]
  _BYTE v32[12]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v33; // [rsp+9Ch] [rbp-64h]
  char v34; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    v27 = 48;
    v23 = 0LL;
    v28 = 0LL;
    v30 = 64;
    v29 = &unk_180113430;
    v31 = 0LL;
    v16 = NtOpenKey(&v23, 8LL, &v27);
    v17 = v16;
    if ( v16 >= 0 || v16 == -1073741772 || v16 == -1073741431 )
    {
      v10 = v23;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v10;
      return v10;
    }
    LODWORD(v10) = DbgPrintEx(51LL, 0LL, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180113430, v16);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_41;
  }
  v6 = (unsigned int)(v5 - 1);
  if ( (_DWORD)v6 )
  {
    LODWORD(v10) = 2;
    if ( (_DWORD)v6 == 2 && *(_QWORD *)a2 )
      LODWORD(v10) = NtClose(*(HANDLE *)a2);
  }
  else if ( *(_QWORD *)(a2 + 8) )
  {
    if ( *(_QWORD *)(a2 + 8) == 1LL )
    {
      NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot(v6, a2);
      RtlInitUnicodeString(&DestinationString, NtSystemRoot);
      Length = DestinationString.Length;
      v9 = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 24) = 0;
      LODWORD(v10) = Length + 16;
      if ( Length + 16 > v9 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        memmove(*(void **)(a2 + 32), DestinationString.Buffer, (unsigned __int16)Length);
        v10 = *(_QWORD *)(a2 + 32);
        *(_OWORD *)((unsigned __int16)Length + v10) = *(_OWORD *)L"\\WinSxS\\";
        *(_WORD *)(a2 + 24) = Length + 16;
      }
      return v10;
    }
    LODWORD(v10) = -1;
    if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL || (v18 = *(HANDLE *)a2, v19 = *(_DWORD *)(a2 + 8), v22 = 0, !v18) )
    {
      *(_BYTE *)(a2 + 17) = 1;
      return v10;
    }
    LODWORD(v10) = ((__int64 (__fastcall *)(HANDLE, _QWORD, _QWORD, _BYTE *, int, int *))NtEnumerateKey)(
                     v18,
                     (unsigned int)(v19 - 2),
                     0LL,
                     v32,
                     544,
                     &v22);
    v17 = v10;
    if ( (v10 & 0x80000000) != 0LL )
    {
      if ( (_DWORD)v10 == -2147483622 )
      {
        *(_BYTE *)(a2 + 17) = 1;
        return v10;
      }
      LODWORD(v10) = DbgPrintEx(
                       51LL,
                       0LL,
                       "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                       v19 - 2,
                       v10);
      goto LABEL_33;
    }
    LODWORD(v10) = v33;
    if ( v33 <= 0xFFFE )
    {
      v24[0] = v33;
      v24[1] = v33;
      v25 = &v34;
      LODWORD(v10) = RtlpGetAssemblyStorageMapRootLocation(v18, v24, a2 + 24);
      v17 = v10;
      if ( (v10 & 0x80000000) == 0LL )
        return v10;
      LODWORD(v21) = v10;
      LODWORD(v10) = DbgPrintEx(
                       51LL,
                       0LL,
                       "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                       v24,
                       v21);
LABEL_33:
      *(_BYTE *)(a2 + 16) = 1;
LABEL_41:
      if ( a3 )
        *a3 = v17;
      return v10;
    }
    *(_BYTE *)(a2 + 16) = 1;
    if ( a3 )
      *a3 = -1073741562;
  }
  else
  {
    v10 = (unsigned __int64)NtCurrentPeb();
    v11 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 32) + 96LL);
    if ( v11 + 16 > 0xFFFE )
    {
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741562;
    }
    else
    {
      v10 = *(unsigned __int16 *)(a2 + 26);
      if ( v11 + 16 > v10 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
        if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
          Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
        v13 = *(char **)(a2 + 32);
        memmove(v13, Buffer, v11);
        LOBYTE(v14) = 1;
        *(_OWORD *)&v13[v11] = xmmword_18011C4F8;
        v15 = *(_QWORD *)(a2 + 32);
        *(_WORD *)(a2 + 24) = v11 + 14;
        LODWORD(v10) = RtlDoesFileExists_UEx(v15, v14);
        if ( !(_BYTE)v10 )
          *(_WORD *)(a2 + 24) = 0;
      }
    }
  }
  return v10;
}
