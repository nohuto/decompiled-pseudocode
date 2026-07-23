/*
 * XREFs of sub_180055C50 @ 0x180055C50
 * Callers:
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x18003BA70 (RtlGetNtSystemRoot.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180058280 @ 0x180058280 (sub_180058280.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1800A5940 (ZwEnumerateKey.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800E0AE0 @ 0x1800E0AE0 (sub_1800E0AE0.c)
 */

int __fastcall sub_180055C50(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  unsigned __int64 v7; // rax
  size_t v8; // r15
  PWCH Buffer; // rdx
  char *v10; // rbx
  const WCHAR *v11; // rcx
  NTSTATUS v12; // eax
  int v13; // r14d
  const WCHAR *NtSystemRoot; // rax
  int v15; // r14d
  unsigned int v16; // ecx
  HANDLE v17; // r12
  int v18; // r15d
  __int64 Length; // [rsp+20h] [rbp-E0h]
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v23[4]; // [rsp+40h] [rbp-C0h] BYREF
  char *v24; // [rsp+48h] [rbp-B8h]
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v28; // [rsp+9Ch] [rbp-64h]
  char v29; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    ObjectAttributes.Length = 48;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180110610;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    v13 = v12;
    if ( v12 >= 0 || v12 == -1073741772 || v12 == -1073741431 )
    {
      v7 = (unsigned __int64)KeyHandle;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v7;
      return v7;
    }
    LODWORD(v7) = DbgPrintEx(0x33u, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180110610, v12);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_41;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    LODWORD(v7) = 2;
    if ( v6 == 2 && *(_QWORD *)a2 )
      LODWORD(v7) = ZwClose(*(HANDLE *)a2);
  }
  else
  {
    if ( !*(_QWORD *)(a2 + 8) )
    {
      v7 = (unsigned __int64)NtCurrentPeb();
      v8 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 32) + 96LL);
      if ( v8 + 16 > 0xFFFE )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741562;
      }
      else
      {
        v7 = *(unsigned __int16 *)(a2 + 26);
        if ( v8 + 16 > v7 )
        {
          *(_BYTE *)(a2 + 16) = 1;
          if ( a3 )
            *a3 = -1073741789;
        }
        else
        {
          Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
          if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
            Buffer = (PWCH)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
          v10 = *(char **)(a2 + 32);
          memmove(v10, Buffer, v8);
          *(_OWORD *)&v10[v8] = xmmword_180119D40;
          v11 = *(const WCHAR **)(a2 + 32);
          *(_WORD *)(a2 + 24) = v8 + 14;
          LODWORD(v7) = sub_180058280(v11);
          if ( !(_BYTE)v7 )
            *(_WORD *)(a2 + 24) = 0;
        }
      }
      return v7;
    }
    if ( *(_QWORD *)(a2 + 8) == 1LL )
    {
      NtSystemRoot = RtlGetNtSystemRoot();
      RtlInitUnicodeString(&DestinationString, NtSystemRoot);
      v15 = DestinationString.Length;
      v16 = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 24) = 0;
      LODWORD(v7) = v15 + 16;
      if ( v15 + 16 > v16 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        memmove(*(void **)(a2 + 32), DestinationString.Buffer, (unsigned __int16)v15);
        v7 = *(_QWORD *)(a2 + 32);
        *(_OWORD *)((unsigned __int16)v15 + v7) = xmmword_180114AC8;
        *(_WORD *)(a2 + 24) = v15 + 16;
      }
      return v7;
    }
    LODWORD(v7) = -1;
    if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL || (v17 = *(HANDLE *)a2, v18 = *(_DWORD *)(a2 + 8), ResultLength = 0, !v17) )
    {
      *(_BYTE *)(a2 + 17) = 1;
      return v7;
    }
    LODWORD(v7) = ZwEnumerateKey(v17, v18 - 2, KeyBasicInformation, KeyInformation, 0x220u, &ResultLength);
    v13 = v7;
    if ( (v7 & 0x80000000) != 0LL )
    {
      if ( (_DWORD)v7 == -2147483622 )
      {
        *(_BYTE *)(a2 + 17) = 1;
        return v7;
      }
      LODWORD(v7) = DbgPrintEx(
                      0x33u,
                      0,
                      "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                      v18 - 2,
                      v7);
      goto LABEL_33;
    }
    LODWORD(v7) = v28;
    if ( v28 <= 0xFFFE )
    {
      v23[0] = v28;
      v23[1] = v28;
      v24 = &v29;
      LODWORD(v7) = sub_1800E0AE0(v17, v23, a2 + 24);
      v13 = v7;
      if ( (v7 & 0x80000000) == 0LL )
        return v7;
      LODWORD(Length) = v7;
      LODWORD(v7) = DbgPrintEx(
                      0x33u,
                      0,
                      "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                      v23,
                      Length);
LABEL_33:
      *(_BYTE *)(a2 + 16) = 1;
LABEL_41:
      if ( a3 )
        *a3 = v13;
      return v7;
    }
    *(_BYTE *)(a2 + 16) = 1;
    if ( a3 )
      *a3 = -1073741562;
  }
  return v7;
}
