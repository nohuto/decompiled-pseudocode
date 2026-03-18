/*
 * XREFs of ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C00B0C84
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00B2F88 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00B3D30 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00B409C (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 * Callees:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C00B0D1C (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_QueryStringHash(PCANSI_STRING SourceString, struct D3DKMT_HASH *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 Md5Checksum; // rbx
  __int64 v8; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_OWORD *)a2 = 0u;
  *((_DWORD *)a2 + 4) = 0;
  v4 = RtlAnsiStringToUnicodeString(&UnicodeString, SourceString, 1u);
  Md5Checksum = v4;
  if ( v4 < 0
    || (Md5Checksum = (int)CcdCreateMd5Checksum(
                             (const unsigned __int8 *)UnicodeString.Buffer,
                             UnicodeString.Length,
                             (unsigned __int8 *)a2 + 4),
        RtlFreeUnicodeString(&UnicodeString),
        (int)Md5Checksum < 0) )
  {
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = Md5Checksum;
    *(_QWORD *)(v8 + 32) = SourceString;
    WdLogEvent5_WdError(v8);
  }
  else
  {
    *(_DWORD *)a2 = 1;
  }
  return (unsigned int)Md5Checksum;
}
