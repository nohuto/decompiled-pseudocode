/*
 * XREFs of AdtpBuildSidListString @ 0x1407E0728
 * Callers:
 *     AdtpPackageParameters @ 0x14017E5D8 (AdtpPackageParameters.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x140517C80 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x140519D3C (RtlLengthSidAsUnicodeString.c)
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
  unsigned int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned __int16 Length; // ax
  unsigned int v19; // r13d
  __int64 v20; // rsi
  PSID *v21; // rsi
  ULONG StringLength; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-DCh]
  UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  void **v27; // [rsp+48h] [rbp-B8h]
  char *v28; // [rsp+50h] [rbp-B0h]
  char v29; // [rsp+60h] [rbp-A0h] BYREF

  *(_QWORD *)&Destination.Length = a4;
  *(_QWORD *)&UnicodeString.Length = a5;
  appended = 0;
  v28 = a6;
  PoolWithTag = 0LL;
  v10 = 0;
  if ( a1 && (v11 = *a1) != 0 )
  {
    v12 = 1;
    v13 = (void **)(*((_QWORD *)a1 + 1) + 8LL);
    v24 = 0;
    v27 = v13;
    while ( 1 )
    {
      v14 = *v13;
      StringLength = 0;
      RtlLengthSidAsUnicodeString(v14, &StringLength);
      v15 = v12;
      v16 = v12 + (StringLength >> 1) + 7;
      v12 = -1;
      if ( v16 >= v15 )
        v12 = v16;
      appended = v16 < v15 ? 0xC0000095 : 0;
      if ( v16 < v15 )
        break;
      v13 = v27 + 2;
      ++v24;
      v27 += 2;
      if ( v24 >= v11 )
      {
        if ( v12 > 0x7FFF )
        {
          appended = -1073741811;
          goto LABEL_27;
        }
        v17 = **(unsigned int **)&UnicodeString.Length;
        if ( (unsigned int)v17 + v12 >= 0x400 )
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
          PoolWithTag = (wchar_t *)(*(_QWORD *)&Destination.Length + 2 * v17);
          **(_DWORD **)&UnicodeString.Length = v17 + v12;
        }
        Destination.Buffer = PoolWithTag;
        Length = 0;
        v19 = 0;
        Destination.MaximumLength = 2 * v12;
        v20 = *((_QWORD *)a1 + 1);
        Destination.Length = 0;
        *(_DWORD *)&UnicodeString.Length = 0x2000000;
        UnicodeString.Buffer = (wchar_t *)&v29;
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
        v21 = (PSID *)(v20 + 8);
        while ( 1 )
        {
          appended = RtlConvertSidToUnicodeString(&UnicodeString, *v21, 0);
          if ( appended < 0 )
            goto LABEL_25;
          RtlAppendUnicodeToString(&Destination, L"\r\n\t\t%{");
          RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
          ++v19;
          v21 += 2;
          appended = RtlAppendUnicodeToString(&Destination, L"}");
          if ( v19 >= *a1 )
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
  *v28 = v10;
  return (unsigned int)appended;
}
