/*
 * XREFs of _CcdRetrieveSetIdFromRegistry @ 0x1C00D0CB0
 * Callers:
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00D0C8C (_CcdLazyRetrieveSetIdFromRegistry.c)
 * Callees:
 *     _CcdRetrieveValueFromRegistry @ 0x1C00D0D9C (_CcdRetrieveValueFromRegistry.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DAB54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00DAC64 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall CcdRetrieveSetIdFromRegistry(HANDLE KeyHandle, const WCHAR *a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-50h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  v6 = CcdRetrieveValueFromRegistry(KeyHandle, &DestinationString);
  v8 = v6;
  if ( v6 < 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v10[3] = v8;
    v10[4] = KeyHandle;
    v10[5] = a2;
    v10[6] = a3;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v11[3] = MEMORY[4];
    v11[4] = KeyHandle;
    v11[5] = a2;
    v11[6] = a3;
    WdLogEvent5_WdError(v11);
    LODWORD(v8) = -1073741788;
  }
  return (unsigned int)v8;
}
