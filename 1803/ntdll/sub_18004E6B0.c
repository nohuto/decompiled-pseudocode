/*
 * XREFs of sub_18004E6B0 @ 0x18004E6B0
 * Callers:
 *     sub_18004E290 @ 0x18004E290 (sub_18004E290.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlGetNtSystemRoot @ 0x18003FAD0 (RtlGetNtSystemRoot.c)
 *     sub_18004F794 @ 0x18004F794 (sub_18004F794.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x18009B100 (ZwEnumerateKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800DA360 @ 0x1800DA360 (sub_1800DA360.c)
 */

int __fastcall sub_18004E6B0(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  unsigned __int64 v7; // rax
  const WCHAR *NtSystemRoot; // rax
  int v9; // r14d
  unsigned int v10; // ecx
  size_t v11; // r15
  PWCH Buffer; // rdx
  char *v13; // rbx
  const WCHAR *v14; // rcx
  NTSTATUS v15; // eax
  int v16; // r14d
  HANDLE v17; // r15
  ULONG v18; // r12d
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
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180110620;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v15 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    v16 = v15;
    if ( v15 >= 0 || v15 == -1073741772 || v15 == -1073741431 )
    {
      v7 = (unsigned __int64)KeyHandle;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v7;
      return v7;
    }
    LODWORD(v7) = DbgPrintEx(0x33u, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180110620, v15);
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
    v7 = *(_QWORD *)(a2 + 8);
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        NtSystemRoot = RtlGetNtSystemRoot();
        RtlInitUnicodeString(&DestinationString, NtSystemRoot);
        v9 = DestinationString.Length;
        v10 = *(unsigned __int16 *)(a2 + 26);
        *(_WORD *)(a2 + 24) = 0;
        LODWORD(v7) = v9 + 16;
        if ( v9 + 16 > v10 )
        {
          *(_BYTE *)(a2 + 16) = 1;
          if ( a3 )
            *a3 = -1073741789;
        }
        else
        {
          memmove(*(void **)(a2 + 32), DestinationString.Buffer, (unsigned __int16)v9);
          v7 = *(_QWORD *)(a2 + 32);
          *(_OWORD *)((unsigned __int16)v9 + v7) = xmmword_1801148A8;
          *(_WORD *)(a2 + 24) = v9 + 16;
        }
        return v7;
      }
      if ( v7 > 0xFFFFFFFF || (v17 = *(HANDLE *)a2, v18 = v7 - 2, ResultLength = 0, !v17) )
      {
        *(_BYTE *)(a2 + 17) = 1;
        return v7;
      }
      LODWORD(v7) = ZwEnumerateKey(v17, v18, KeyBasicInformation, KeyInformation, 0x220u, &ResultLength);
      v16 = v7;
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
                        v18,
                        v7);
        goto LABEL_33;
      }
      LODWORD(v7) = v28;
      if ( v28 <= 0xFFFE )
      {
        v23[0] = v28;
        v23[1] = v28;
        v24 = &v29;
        LODWORD(v7) = sub_1800DA360(v17, v23, a2 + 24);
        v16 = v7;
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
          *a3 = v16;
        return v7;
      }
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741562;
    }
    else
    {
      v7 = (unsigned __int64)NtCurrentPeb();
      v11 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 32) + 96LL);
      if ( v11 + 16 > 0xFFFE )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741562;
      }
      else
      {
        v7 = *(unsigned __int16 *)(a2 + 26);
        if ( v11 + 16 > v7 )
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
          v13 = *(char **)(a2 + 32);
          memmove(v13, Buffer, v11);
          *(_OWORD *)&v13[v11] = xmmword_1801198C8;
          v14 = *(const WCHAR **)(a2 + 32);
          *(_WORD *)(a2 + 24) = v11 + 14;
          LODWORD(v7) = sub_18004F794(v14);
          if ( !(_BYTE)v7 )
            *(_WORD *)(a2 + 24) = 0;
        }
      }
    }
  }
  return v7;
}
