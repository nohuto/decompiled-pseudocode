/*
 * XREFs of AdtpBuildSidListString @ 0x14073382C
 * Callers:
 *     AdtpPackageParameters @ 0x140155F00 (AdtpPackageParameters.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x1404C06A0 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x1404C25CC (RtlLengthSidAsUnicodeString.c)
 */

__int64 __fastcall AdtpBuildSidListString(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char *a6)
{
  NTSTATUS appended; // ebx
  wchar_t *PoolWithTag; // r14
  char v10; // r12
  unsigned int v11; // r13d
  unsigned int v12; // esi
  void **v13; // rcx
  void *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned __int16 Length; // ax
  unsigned int v20; // r13d
  __int64 v21; // rsi
  PSID *v22; // rsi
  ULONG StringLength; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v25; // [rsp+24h] [rbp-DCh]
  UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  void **v28; // [rsp+48h] [rbp-B8h]
  char *v29; // [rsp+50h] [rbp-B0h]
  char v30; // [rsp+60h] [rbp-A0h] BYREF

  *(_QWORD *)&Destination.Length = a4;
  *(_QWORD *)&UnicodeString.Length = a5;
  appended = 0;
  v29 = a6;
  PoolWithTag = 0LL;
  v10 = 0;
  if ( a1 && (v11 = *a1) != 0 )
  {
    v12 = 1;
    v13 = (void **)(*((_QWORD *)a1 + 1) + 8LL);
    v25 = 0;
    v28 = v13;
    while ( 1 )
    {
      v14 = *v13;
      StringLength = 0;
      RtlLengthSidAsUnicodeString(v14, &StringLength);
      v15 = -1;
      v16 = v12;
      v17 = v12 + (StringLength >> 1) + 7;
      if ( v17 >= v12 )
        v15 = v12 + (StringLength >> 1) + 7;
      v12 = v15;
      appended = v17 < v16 ? 0xC0000095 : 0;
      if ( v17 < v16 )
        break;
      v13 = v28 + 2;
      ++v25;
      v28 += 2;
      if ( v25 >= v11 )
      {
        if ( v15 > 0x7FFF )
        {
          appended = -1073741811;
          goto LABEL_27;
        }
        v18 = **(unsigned int **)&UnicodeString.Length;
        if ( (unsigned int)v18 + v12 >= 0x400 )
        {
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v12, 0x6B416553u);
          if ( !PoolWithTag )
          {
            appended = -1073741801;
            goto LABEL_27;
          }
          v10 = 1;
        }
        else
        {
          PoolWithTag = (wchar_t *)(*(_QWORD *)&Destination.Length + 2 * v18);
          **(_DWORD **)&UnicodeString.Length = v18 + v12;
        }
        Destination.Buffer = PoolWithTag;
        Length = 0;
        v20 = 0;
        Destination.MaximumLength = 2 * v12;
        v21 = *((_QWORD *)a1 + 1);
        Destination.Length = 0;
        *(_DWORD *)&UnicodeString.Length = 0x2000000;
        UnicodeString.Buffer = (wchar_t *)&v30;
        if ( !*a1 )
        {
LABEL_20:
          if ( a3 )
          {
            *(_QWORD *)a3 = PoolWithTag;
            *(_DWORD *)(a3 + 8) = Length + 2;
            *(_DWORD *)(a3 + 12) = 0;
          }
          break;
        }
        v22 = (PSID *)(v21 + 8);
        while ( 1 )
        {
          appended = RtlConvertSidToUnicodeString(&UnicodeString, *v22, 0);
          if ( appended < 0 )
            goto LABEL_25;
          RtlAppendUnicodeToString(&Destination, L"\r\n\t\t%{");
          RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
          ++v20;
          v22 += 2;
          appended = RtlAppendUnicodeToString(&Destination, L"}");
          if ( v20 >= *a1 )
          {
            Length = Destination.Length;
            goto LABEL_20;
          }
        }
      }
    }
  }
  else if ( a3 )
  {
    *(_QWORD *)(a3 + 8) = 4LL;
    *(_QWORD *)a3 = "-";
  }
  if ( appended < 0 )
  {
LABEL_25:
    if ( v10 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      v10 = 0;
    }
  }
LABEL_27:
  *v29 = v10;
  return (unsigned int)appended;
}
